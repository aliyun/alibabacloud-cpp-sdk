// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKVCACHEINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKVCACHEINSTANCEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeKVCacheInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKVCacheInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(KVCacheInstanceId, KVCacheInstanceId_);
      DARABONBA_PTR_TO_JSON(KVCacheInstanceStatus, KVCacheInstanceStatus_);
      DARABONBA_PTR_TO_JSON(KVCacheSpace, KVCacheSpace_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKVCacheInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(KVCacheInstanceId, KVCacheInstanceId_);
      DARABONBA_PTR_FROM_JSON(KVCacheInstanceStatus, KVCacheInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(KVCacheSpace, KVCacheSpace_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeKVCacheInstanceAttributeResponseBody() = default ;
    DescribeKVCacheInstanceAttributeResponseBody(const DescribeKVCacheInstanceAttributeResponseBody &) = default ;
    DescribeKVCacheInstanceAttributeResponseBody(DescribeKVCacheInstanceAttributeResponseBody &&) = default ;
    DescribeKVCacheInstanceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKVCacheInstanceAttributeResponseBody() = default ;
    DescribeKVCacheInstanceAttributeResponseBody& operator=(const DescribeKVCacheInstanceAttributeResponseBody &) = default ;
    DescribeKVCacheInstanceAttributeResponseBody& operator=(DescribeKVCacheInstanceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->creationTime_ == nullptr && this->expireTime_ == nullptr && this->expired_ == nullptr && this->KVCacheInstanceId_ == nullptr && this->KVCacheInstanceStatus_ == nullptr
        && this->KVCacheSpace_ == nullptr && this->payType_ == nullptr && this->port_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr
        && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeKVCacheInstanceAttributeResponseBody& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeKVCacheInstanceAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeKVCacheInstanceAttributeResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline string getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, "") };
    inline DescribeKVCacheInstanceAttributeResponseBody& setExpired(string expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // KVCacheInstanceId Field Functions 
    bool hasKVCacheInstanceId() const { return this->KVCacheInstanceId_ != nullptr;};
    void deleteKVCacheInstanceId() { this->KVCacheInstanceId_ = nullptr;};
    inline string getKVCacheInstanceId() const { DARABONBA_PTR_GET_DEFAULT(KVCacheInstanceId_, "") };
    inline DescribeKVCacheInstanceAttributeResponseBody& setKVCacheInstanceId(string KVCacheInstanceId) { DARABONBA_PTR_SET_VALUE(KVCacheInstanceId_, KVCacheInstanceId) };


    // KVCacheInstanceStatus Field Functions 
    bool hasKVCacheInstanceStatus() const { return this->KVCacheInstanceStatus_ != nullptr;};
    void deleteKVCacheInstanceStatus() { this->KVCacheInstanceStatus_ = nullptr;};
    inline string getKVCacheInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(KVCacheInstanceStatus_, "") };
    inline DescribeKVCacheInstanceAttributeResponseBody& setKVCacheInstanceStatus(string KVCacheInstanceStatus) { DARABONBA_PTR_SET_VALUE(KVCacheInstanceStatus_, KVCacheInstanceStatus) };


    // KVCacheSpace Field Functions 
    bool hasKVCacheSpace() const { return this->KVCacheSpace_ != nullptr;};
    void deleteKVCacheSpace() { this->KVCacheSpace_ = nullptr;};
    inline string getKVCacheSpace() const { DARABONBA_PTR_GET_DEFAULT(KVCacheSpace_, "") };
    inline DescribeKVCacheInstanceAttributeResponseBody& setKVCacheSpace(string KVCacheSpace) { DARABONBA_PTR_SET_VALUE(KVCacheSpace_, KVCacheSpace) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeKVCacheInstanceAttributeResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeKVCacheInstanceAttributeResponseBody& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeKVCacheInstanceAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKVCacheInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeKVCacheInstanceAttributeResponseBody& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeKVCacheInstanceAttributeResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeKVCacheInstanceAttributeResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The endpoint of the instance.
    shared_ptr<string> connectionString_ {};
    // The time when the instance was created, in ISO 8601 format.
    shared_ptr<string> creationTime_ {};
    // The time when the instance expires, in ISO 8601 format. An empty character string is returned for pay-as-you-go instances.
    shared_ptr<string> expireTime_ {};
    // Indicates whether the instance has expired.
    shared_ptr<string> expired_ {};
    // The KVCache instance ID.
    shared_ptr<string> KVCacheInstanceId_ {};
    // The KVCache instance status.
    shared_ptr<string> KVCacheInstanceStatus_ {};
    // The storage capacity of the KVCache instance.
    shared_ptr<string> KVCacheSpace_ {};
    // The billing method.
    shared_ptr<string> payType_ {};
    // The port.
    shared_ptr<string> port_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The VPC ID.
    shared_ptr<string> VPCId_ {};
    // The vSwitch ID.
    shared_ptr<string> vSwitchId_ {};
    // The zone ID.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
