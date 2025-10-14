// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISPFLUSHCACHEINSTANCESRESPONSEBODYISPFLUSHCACHEINSTANCESQUOTAINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISPFLUSHCACHEINSTANCESRESPONSEBODYISPFLUSHCACHEINSTANCESQUOTAINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceQuota, instanceQuota_);
      DARABONBA_PTR_TO_JSON(InstanceQuotaUsed, instanceQuotaUsed_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceQuota, instanceQuota_);
      DARABONBA_PTR_FROM_JSON(InstanceQuotaUsed, instanceQuotaUsed_);
    };
    DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo() = default ;
    DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo(const DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo &) = default ;
    DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo(DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo &&) = default ;
    DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo() = default ;
    DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo& operator=(const DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo &) = default ;
    DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo& operator=(DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceQuota_ == nullptr
        && return this->instanceQuotaUsed_ == nullptr; };
    // instanceQuota Field Functions 
    bool hasInstanceQuota() const { return this->instanceQuota_ != nullptr;};
    void deleteInstanceQuota() { this->instanceQuota_ = nullptr;};
    inline int32_t instanceQuota() const { DARABONBA_PTR_GET_DEFAULT(instanceQuota_, 0) };
    inline DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo& setInstanceQuota(int32_t instanceQuota) { DARABONBA_PTR_SET_VALUE(instanceQuota_, instanceQuota) };


    // instanceQuotaUsed Field Functions 
    bool hasInstanceQuotaUsed() const { return this->instanceQuotaUsed_ != nullptr;};
    void deleteInstanceQuotaUsed() { this->instanceQuotaUsed_ = nullptr;};
    inline int32_t instanceQuotaUsed() const { DARABONBA_PTR_GET_DEFAULT(instanceQuotaUsed_, 0) };
    inline DescribeIspFlushCacheInstancesResponseBodyIspFlushCacheInstancesQuotaInfo& setInstanceQuotaUsed(int32_t instanceQuotaUsed) { DARABONBA_PTR_SET_VALUE(instanceQuotaUsed_, instanceQuotaUsed) };


  protected:
    std::shared_ptr<int32_t> instanceQuota_ = nullptr;
    std::shared_ptr<int32_t> instanceQuotaUsed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
