// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISPFLUSHCACHEINSTANCESRESPONSEBODYISPFLUSHCACHEINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISPFLUSHCACHEINSTANCESRESPONSEBODYISPFLUSHCACHEINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ExpireTimestamp, expireTimestamp_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(QuotaInfo, quotaInfo_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTimestamp, expireTimestamp_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(QuotaInfo, quotaInfo_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
    };
    DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances() = default ;
    DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances(const DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances &) = default ;
    DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances(DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances &&) = default ;
    DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances() = default ;
    DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances& operator=(const DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances &) = default ;
    DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances& operator=(DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireTime_ == nullptr
        && return this->expireTimestamp_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->isp_ == nullptr && return this->quotaInfo_ == nullptr
        && return this->status_ == nullptr && return this->versionCode_ == nullptr; };
    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expireTimestamp Field Functions 
    bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
    void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
    inline int64_t expireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
    inline DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // quotaInfo Field Functions 
    bool hasQuotaInfo() const { return this->quotaInfo_ != nullptr;};
    void deleteQuotaInfo() { this->quotaInfo_ = nullptr;};
    inline const Models::DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo & quotaInfo() const { DARABONBA_PTR_GET_CONST(quotaInfo_, Models::DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo) };
    inline Models::DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo quotaInfo() { DARABONBA_PTR_GET(quotaInfo_, Models::DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo) };
    inline DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances& setQuotaInfo(const Models::DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo & quotaInfo) { DARABONBA_PTR_SET_VALUE(quotaInfo_, quotaInfo) };
    inline DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances& setQuotaInfo(Models::DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo && quotaInfo) { DARABONBA_PTR_SET_RVALUE(quotaInfo_, quotaInfo) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string versionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstances& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


  protected:
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<int64_t> expireTimestamp_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> isp_ = nullptr;
    std::shared_ptr<Models::DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo> quotaInfo_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> versionCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
