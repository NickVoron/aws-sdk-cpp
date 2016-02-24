/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/ConnectionState.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DirectConnect
{
namespace Model
{
  /**
   * <p>A connection represents the physical network connection between the AWS
   * Direct Connect location and the customer.</p>
   */
  class AWS_DIRECTCONNECT_API AllocateConnectionOnInterconnectResult
  {
  public:
    AllocateConnectionOnInterconnectResult();
    AllocateConnectionOnInterconnectResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AllocateConnectionOnInterconnectResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccount = value; }

    
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccount = value; }

    
    inline void SetOwnerAccount(const char* value) { m_ownerAccount.assign(value); }

    
    inline AllocateConnectionOnInterconnectResult& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    
    inline AllocateConnectionOnInterconnectResult& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(value); return *this;}

    
    inline AllocateConnectionOnInterconnectResult& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}

    
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    
    inline void SetConnectionId(const Aws::String& value) { m_connectionId = value; }

    
    inline void SetConnectionId(Aws::String&& value) { m_connectionId = value; }

    
    inline void SetConnectionId(const char* value) { m_connectionId.assign(value); }

    
    inline AllocateConnectionOnInterconnectResult& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    
    inline AllocateConnectionOnInterconnectResult& WithConnectionId(Aws::String&& value) { SetConnectionId(value); return *this;}

    
    inline AllocateConnectionOnInterconnectResult& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}

    
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }

    
    inline void SetConnectionName(const Aws::String& value) { m_connectionName = value; }

    
    inline void SetConnectionName(Aws::String&& value) { m_connectionName = value; }

    
    inline void SetConnectionName(const char* value) { m_connectionName.assign(value); }

    
    inline AllocateConnectionOnInterconnectResult& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}

    
    inline AllocateConnectionOnInterconnectResult& WithConnectionName(Aws::String&& value) { SetConnectionName(value); return *this;}

    
    inline AllocateConnectionOnInterconnectResult& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}

    
    inline const ConnectionState& GetConnectionState() const{ return m_connectionState; }

    
    inline void SetConnectionState(const ConnectionState& value) { m_connectionState = value; }

    
    inline void SetConnectionState(ConnectionState&& value) { m_connectionState = value; }

    
    inline AllocateConnectionOnInterconnectResult& WithConnectionState(const ConnectionState& value) { SetConnectionState(value); return *this;}

    
    inline AllocateConnectionOnInterconnectResult& WithConnectionState(ConnectionState&& value) { SetConnectionState(value); return *this;}

    
    inline const Aws::String& GetRegion() const{ return m_region; }

    
    inline void SetRegion(const Aws::String& value) { m_region = value; }

    
    inline void SetRegion(Aws::String&& value) { m_region = value; }

    
    inline void SetRegion(const char* value) { m_region.assign(value); }

    
    inline AllocateConnectionOnInterconnectResult& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    
    inline AllocateConnectionOnInterconnectResult& WithRegion(Aws::String&& value) { SetRegion(value); return *this;}

    
    inline AllocateConnectionOnInterconnectResult& WithRegion(const char* value) { SetRegion(value); return *this;}

    
    inline const Aws::String& GetLocation() const{ return m_location; }

    
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    
    inline void SetLocation(Aws::String&& value) { m_location = value; }

    
    inline void SetLocation(const char* value) { m_location.assign(value); }

    
    inline AllocateConnectionOnInterconnectResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    
    inline AllocateConnectionOnInterconnectResult& WithLocation(Aws::String&& value) { SetLocation(value); return *this;}

    
    inline AllocateConnectionOnInterconnectResult& WithLocation(const char* value) { SetLocation(value); return *this;}

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: 1Gbps (for regular connections),
     * or 500Mbps (for hosted connections)</p> <p>Default: None</p>
     */
    inline const Aws::String& GetBandwidth() const{ return m_bandwidth; }

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: 1Gbps (for regular connections),
     * or 500Mbps (for hosted connections)</p> <p>Default: None</p>
     */
    inline void SetBandwidth(const Aws::String& value) { m_bandwidth = value; }

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: 1Gbps (for regular connections),
     * or 500Mbps (for hosted connections)</p> <p>Default: None</p>
     */
    inline void SetBandwidth(Aws::String&& value) { m_bandwidth = value; }

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: 1Gbps (for regular connections),
     * or 500Mbps (for hosted connections)</p> <p>Default: None</p>
     */
    inline void SetBandwidth(const char* value) { m_bandwidth.assign(value); }

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: 1Gbps (for regular connections),
     * or 500Mbps (for hosted connections)</p> <p>Default: None</p>
     */
    inline AllocateConnectionOnInterconnectResult& WithBandwidth(const Aws::String& value) { SetBandwidth(value); return *this;}

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: 1Gbps (for regular connections),
     * or 500Mbps (for hosted connections)</p> <p>Default: None</p>
     */
    inline AllocateConnectionOnInterconnectResult& WithBandwidth(Aws::String&& value) { SetBandwidth(value); return *this;}

    /**
     * <p>Bandwidth of the connection.</p> <p>Example: 1Gbps (for regular connections),
     * or 500Mbps (for hosted connections)</p> <p>Default: None</p>
     */
    inline AllocateConnectionOnInterconnectResult& WithBandwidth(const char* value) { SetBandwidth(value); return *this;}

    
    inline long GetVlan() const{ return m_vlan; }

    
    inline void SetVlan(long value) { m_vlan = value; }

    
    inline AllocateConnectionOnInterconnectResult& WithVlan(long value) { SetVlan(value); return *this;}

    
    inline const Aws::String& GetPartnerName() const{ return m_partnerName; }

    
    inline void SetPartnerName(const Aws::String& value) { m_partnerName = value; }

    
    inline void SetPartnerName(Aws::String&& value) { m_partnerName = value; }

    
    inline void SetPartnerName(const char* value) { m_partnerName.assign(value); }

    
    inline AllocateConnectionOnInterconnectResult& WithPartnerName(const Aws::String& value) { SetPartnerName(value); return *this;}

    
    inline AllocateConnectionOnInterconnectResult& WithPartnerName(Aws::String&& value) { SetPartnerName(value); return *this;}

    
    inline AllocateConnectionOnInterconnectResult& WithPartnerName(const char* value) { SetPartnerName(value); return *this;}

  private:
    Aws::String m_ownerAccount;
    Aws::String m_connectionId;
    Aws::String m_connectionName;
    ConnectionState m_connectionState;
    Aws::String m_region;
    Aws::String m_location;
    Aws::String m_bandwidth;
    long m_vlan;
    Aws::String m_partnerName;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws