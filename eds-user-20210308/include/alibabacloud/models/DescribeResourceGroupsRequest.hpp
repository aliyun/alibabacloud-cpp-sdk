// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeResourceGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NeedContainResourceGroupWithOfficeSite, needContainResourceGroupWithOfficeSite_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIds, resourceGroupIds_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NeedContainResourceGroupWithOfficeSite, needContainResourceGroupWithOfficeSite_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIds, resourceGroupIds_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
    };
    DescribeResourceGroupsRequest() = default ;
    DescribeResourceGroupsRequest(const DescribeResourceGroupsRequest &) = default ;
    DescribeResourceGroupsRequest(DescribeResourceGroupsRequest &&) = default ;
    DescribeResourceGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceGroupsRequest() = default ;
    DescribeResourceGroupsRequest& operator=(const DescribeResourceGroupsRequest &) = default ;
    DescribeResourceGroupsRequest& operator=(DescribeResourceGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->needContainResourceGroupWithOfficeSite_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->platform_ != nullptr && this->resourceGroupIds_ != nullptr && this->resourceGroupName_ != nullptr; };
    // needContainResourceGroupWithOfficeSite Field Functions 
    bool hasNeedContainResourceGroupWithOfficeSite() const { return this->needContainResourceGroupWithOfficeSite_ != nullptr;};
    void deleteNeedContainResourceGroupWithOfficeSite() { this->needContainResourceGroupWithOfficeSite_ = nullptr;};
    inline int64_t needContainResourceGroupWithOfficeSite() const { DARABONBA_PTR_GET_DEFAULT(needContainResourceGroupWithOfficeSite_, 0L) };
    inline DescribeResourceGroupsRequest& setNeedContainResourceGroupWithOfficeSite(int64_t needContainResourceGroupWithOfficeSite) { DARABONBA_PTR_SET_VALUE(needContainResourceGroupWithOfficeSite_, needContainResourceGroupWithOfficeSite) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeResourceGroupsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeResourceGroupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline DescribeResourceGroupsRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // resourceGroupIds Field Functions 
    bool hasResourceGroupIds() const { return this->resourceGroupIds_ != nullptr;};
    void deleteResourceGroupIds() { this->resourceGroupIds_ = nullptr;};
    inline const vector<string> & resourceGroupIds() const { DARABONBA_PTR_GET_CONST(resourceGroupIds_, vector<string>) };
    inline vector<string> resourceGroupIds() { DARABONBA_PTR_GET(resourceGroupIds_, vector<string>) };
    inline DescribeResourceGroupsRequest& setResourceGroupIds(const vector<string> & resourceGroupIds) { DARABONBA_PTR_SET_VALUE(resourceGroupIds_, resourceGroupIds) };
    inline DescribeResourceGroupsRequest& setResourceGroupIds(vector<string> && resourceGroupIds) { DARABONBA_PTR_SET_RVALUE(resourceGroupIds_, resourceGroupIds) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline DescribeResourceGroupsRequest& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


  protected:
    std::shared_ptr<int64_t> needContainResourceGroupWithOfficeSite_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<vector<string>> resourceGroupIds_ = nullptr;
    std::shared_ptr<string> resourceGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
