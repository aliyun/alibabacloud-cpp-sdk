// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEDICATEDIPLISTRESPONSEBODYIPS_HPP_
#define ALIBABACLOUD_MODELS_DEDICATEDIPLISTRESPONSEBODYIPS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DedicatedIpListResponseBodyIpsIpExt.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class DedicatedIpListResponseBodyIps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DedicatedIpListResponseBodyIps& obj) { 
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(IpExt, ipExt_);
      DARABONBA_PTR_TO_JSON(IpPoolName, ipPoolName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WarmupStatus, warmupStatus_);
      DARABONBA_PTR_TO_JSON(WarmupType, warmupType_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DedicatedIpListResponseBodyIps& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(IpExt, ipExt_);
      DARABONBA_PTR_FROM_JSON(IpPoolName, ipPoolName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WarmupStatus, warmupStatus_);
      DARABONBA_PTR_FROM_JSON(WarmupType, warmupType_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DedicatedIpListResponseBodyIps() = default ;
    DedicatedIpListResponseBodyIps(const DedicatedIpListResponseBodyIps &) = default ;
    DedicatedIpListResponseBodyIps(DedicatedIpListResponseBodyIps &&) = default ;
    DedicatedIpListResponseBodyIps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DedicatedIpListResponseBodyIps() = default ;
    DedicatedIpListResponseBodyIps& operator=(const DedicatedIpListResponseBodyIps &) = default ;
    DedicatedIpListResponseBodyIps& operator=(DedicatedIpListResponseBodyIps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expiredTime_ == nullptr
        && return this->id_ == nullptr && return this->instanceId_ == nullptr && return this->ip_ == nullptr && return this->ipExt_ == nullptr && return this->ipPoolName_ == nullptr
        && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->warmupStatus_ == nullptr && return this->warmupType_ == nullptr && return this->zoneId_ == nullptr; };
    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DedicatedIpListResponseBodyIps& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DedicatedIpListResponseBodyIps& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DedicatedIpListResponseBodyIps& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DedicatedIpListResponseBodyIps& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // ipExt Field Functions 
    bool hasIpExt() const { return this->ipExt_ != nullptr;};
    void deleteIpExt() { this->ipExt_ = nullptr;};
    inline const Models::DedicatedIpListResponseBodyIpsIpExt & ipExt() const { DARABONBA_PTR_GET_CONST(ipExt_, Models::DedicatedIpListResponseBodyIpsIpExt) };
    inline Models::DedicatedIpListResponseBodyIpsIpExt ipExt() { DARABONBA_PTR_GET(ipExt_, Models::DedicatedIpListResponseBodyIpsIpExt) };
    inline DedicatedIpListResponseBodyIps& setIpExt(const Models::DedicatedIpListResponseBodyIpsIpExt & ipExt) { DARABONBA_PTR_SET_VALUE(ipExt_, ipExt) };
    inline DedicatedIpListResponseBodyIps& setIpExt(Models::DedicatedIpListResponseBodyIpsIpExt && ipExt) { DARABONBA_PTR_SET_RVALUE(ipExt_, ipExt) };


    // ipPoolName Field Functions 
    bool hasIpPoolName() const { return this->ipPoolName_ != nullptr;};
    void deleteIpPoolName() { this->ipPoolName_ = nullptr;};
    inline string ipPoolName() const { DARABONBA_PTR_GET_DEFAULT(ipPoolName_, "") };
    inline DedicatedIpListResponseBodyIps& setIpPoolName(string ipPoolName) { DARABONBA_PTR_SET_VALUE(ipPoolName_, ipPoolName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DedicatedIpListResponseBodyIps& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DedicatedIpListResponseBodyIps& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // warmupStatus Field Functions 
    bool hasWarmupStatus() const { return this->warmupStatus_ != nullptr;};
    void deleteWarmupStatus() { this->warmupStatus_ = nullptr;};
    inline string warmupStatus() const { DARABONBA_PTR_GET_DEFAULT(warmupStatus_, "") };
    inline DedicatedIpListResponseBodyIps& setWarmupStatus(string warmupStatus) { DARABONBA_PTR_SET_VALUE(warmupStatus_, warmupStatus) };


    // warmupType Field Functions 
    bool hasWarmupType() const { return this->warmupType_ != nullptr;};
    void deleteWarmupType() { this->warmupType_ = nullptr;};
    inline string warmupType() const { DARABONBA_PTR_GET_DEFAULT(warmupType_, "") };
    inline DedicatedIpListResponseBodyIps& setWarmupType(string warmupType) { DARABONBA_PTR_SET_VALUE(warmupType_, warmupType) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DedicatedIpListResponseBodyIps& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Expiration time
    std::shared_ptr<string> expiredTime_ = nullptr;
    // IP ID, consistent with the purchased instance ID
    std::shared_ptr<string> id_ = nullptr;
    // Purchased instance ID
    std::shared_ptr<string> instanceId_ = nullptr;
    // IP address
    std::shared_ptr<string> ip_ = nullptr;
    // Extended information
    std::shared_ptr<Models::DedicatedIpListResponseBodyIpsIpExt> ipExt_ = nullptr;
    // Name of the IP pool
    std::shared_ptr<string> ipPoolName_ = nullptr;
    // Purchase time
    std::shared_ptr<string> startTime_ = nullptr;
    // IP status
    std::shared_ptr<string> status_ = nullptr;
    // Warm-up status
    std::shared_ptr<string> warmupStatus_ = nullptr;
    // Warm-up method
    std::shared_ptr<string> warmupType_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
