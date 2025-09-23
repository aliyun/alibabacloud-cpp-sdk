// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEPACKAGESRESPONSEBODYRESOURCEPACKAGELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEPACKAGESRESPONSEBODYRESOURCEPACKAGELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList.hpp>
#include <alibabacloud/models/DescribeResourcePackagesResponseBodyResourcePackageListTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeResourcePackagesResponseBodyResourcePackageList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourcePackagesResponseBodyResourcePackageList& obj) { 
      DARABONBA_PTR_TO_JSON(AutoQuota, autoQuota_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ResourcePackageId, resourcePackageId_);
      DARABONBA_PTR_TO_JSON(ResourcePackageQuotaList, resourcePackageQuotaList_);
      DARABONBA_PTR_TO_JSON(ResourcePackageType, resourcePackageType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TotalCapacity, totalCapacity_);
      DARABONBA_PTR_TO_JSON(UsedCapacity, usedCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourcePackagesResponseBodyResourcePackageList& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoQuota, autoQuota_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ResourcePackageId, resourcePackageId_);
      DARABONBA_PTR_FROM_JSON(ResourcePackageQuotaList, resourcePackageQuotaList_);
      DARABONBA_PTR_FROM_JSON(ResourcePackageType, resourcePackageType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TotalCapacity, totalCapacity_);
      DARABONBA_PTR_FROM_JSON(UsedCapacity, usedCapacity_);
    };
    DescribeResourcePackagesResponseBodyResourcePackageList() = default ;
    DescribeResourcePackagesResponseBodyResourcePackageList(const DescribeResourcePackagesResponseBodyResourcePackageList &) = default ;
    DescribeResourcePackagesResponseBodyResourcePackageList(DescribeResourcePackagesResponseBodyResourcePackageList &&) = default ;
    DescribeResourcePackagesResponseBodyResourcePackageList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourcePackagesResponseBodyResourcePackageList() = default ;
    DescribeResourcePackagesResponseBodyResourcePackageList& operator=(const DescribeResourcePackagesResponseBodyResourcePackageList &) = default ;
    DescribeResourcePackagesResponseBodyResourcePackageList& operator=(DescribeResourcePackagesResponseBodyResourcePackageList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoQuota_ != nullptr
        && this->createTime_ != nullptr && this->expireTime_ != nullptr && this->resourcePackageId_ != nullptr && this->resourcePackageQuotaList_ != nullptr && this->resourcePackageType_ != nullptr
        && this->status_ != nullptr && this->tags_ != nullptr && this->totalCapacity_ != nullptr && this->usedCapacity_ != nullptr; };
    // autoQuota Field Functions 
    bool hasAutoQuota() const { return this->autoQuota_ != nullptr;};
    void deleteAutoQuota() { this->autoQuota_ = nullptr;};
    inline bool autoQuota() const { DARABONBA_PTR_GET_DEFAULT(autoQuota_, false) };
    inline DescribeResourcePackagesResponseBodyResourcePackageList& setAutoQuota(bool autoQuota) { DARABONBA_PTR_SET_VALUE(autoQuota_, autoQuota) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeResourcePackagesResponseBodyResourcePackageList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline DescribeResourcePackagesResponseBodyResourcePackageList& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // resourcePackageId Field Functions 
    bool hasResourcePackageId() const { return this->resourcePackageId_ != nullptr;};
    void deleteResourcePackageId() { this->resourcePackageId_ = nullptr;};
    inline string resourcePackageId() const { DARABONBA_PTR_GET_DEFAULT(resourcePackageId_, "") };
    inline DescribeResourcePackagesResponseBodyResourcePackageList& setResourcePackageId(string resourcePackageId) { DARABONBA_PTR_SET_VALUE(resourcePackageId_, resourcePackageId) };


    // resourcePackageQuotaList Field Functions 
    bool hasResourcePackageQuotaList() const { return this->resourcePackageQuotaList_ != nullptr;};
    void deleteResourcePackageQuotaList() { this->resourcePackageQuotaList_ = nullptr;};
    inline const vector<Models::DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList> & resourcePackageQuotaList() const { DARABONBA_PTR_GET_CONST(resourcePackageQuotaList_, vector<Models::DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList>) };
    inline vector<Models::DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList> resourcePackageQuotaList() { DARABONBA_PTR_GET(resourcePackageQuotaList_, vector<Models::DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList>) };
    inline DescribeResourcePackagesResponseBodyResourcePackageList& setResourcePackageQuotaList(const vector<Models::DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList> & resourcePackageQuotaList) { DARABONBA_PTR_SET_VALUE(resourcePackageQuotaList_, resourcePackageQuotaList) };
    inline DescribeResourcePackagesResponseBodyResourcePackageList& setResourcePackageQuotaList(vector<Models::DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList> && resourcePackageQuotaList) { DARABONBA_PTR_SET_RVALUE(resourcePackageQuotaList_, resourcePackageQuotaList) };


    // resourcePackageType Field Functions 
    bool hasResourcePackageType() const { return this->resourcePackageType_ != nullptr;};
    void deleteResourcePackageType() { this->resourcePackageType_ = nullptr;};
    inline string resourcePackageType() const { DARABONBA_PTR_GET_DEFAULT(resourcePackageType_, "") };
    inline DescribeResourcePackagesResponseBodyResourcePackageList& setResourcePackageType(string resourcePackageType) { DARABONBA_PTR_SET_VALUE(resourcePackageType_, resourcePackageType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeResourcePackagesResponseBodyResourcePackageList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeResourcePackagesResponseBodyResourcePackageListTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeResourcePackagesResponseBodyResourcePackageListTags>) };
    inline vector<Models::DescribeResourcePackagesResponseBodyResourcePackageListTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeResourcePackagesResponseBodyResourcePackageListTags>) };
    inline DescribeResourcePackagesResponseBodyResourcePackageList& setTags(const vector<Models::DescribeResourcePackagesResponseBodyResourcePackageListTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeResourcePackagesResponseBodyResourcePackageList& setTags(vector<Models::DescribeResourcePackagesResponseBodyResourcePackageListTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // totalCapacity Field Functions 
    bool hasTotalCapacity() const { return this->totalCapacity_ != nullptr;};
    void deleteTotalCapacity() { this->totalCapacity_ = nullptr;};
    inline int64_t totalCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalCapacity_, 0L) };
    inline DescribeResourcePackagesResponseBodyResourcePackageList& setTotalCapacity(int64_t totalCapacity) { DARABONBA_PTR_SET_VALUE(totalCapacity_, totalCapacity) };


    // usedCapacity Field Functions 
    bool hasUsedCapacity() const { return this->usedCapacity_ != nullptr;};
    void deleteUsedCapacity() { this->usedCapacity_ = nullptr;};
    inline int64_t usedCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedCapacity_, 0L) };
    inline DescribeResourcePackagesResponseBodyResourcePackageList& setUsedCapacity(int64_t usedCapacity) { DARABONBA_PTR_SET_VALUE(usedCapacity_, usedCapacity) };


  protected:
    std::shared_ptr<bool> autoQuota_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    std::shared_ptr<string> resourcePackageId_ = nullptr;
    std::shared_ptr<vector<Models::DescribeResourcePackagesResponseBodyResourcePackageListResourcePackageQuotaList>> resourcePackageQuotaList_ = nullptr;
    std::shared_ptr<string> resourcePackageType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::DescribeResourcePackagesResponseBodyResourcePackageListTags>> tags_ = nullptr;
    std::shared_ptr<int64_t> totalCapacity_ = nullptr;
    std::shared_ptr<int64_t> usedCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
