// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_TO_JSON(StackInstanceAccountId, stackInstanceAccountId_);
      DARABONBA_PTR_TO_JSON(StackInstanceRegionId, stackInstanceRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_FROM_JSON(StackInstanceAccountId, stackInstanceAccountId_);
      DARABONBA_PTR_FROM_JSON(StackInstanceRegionId, stackInstanceRegionId_);
    };
    ListStackInstancesRequest() = default ;
    ListStackInstancesRequest(const ListStackInstancesRequest &) = default ;
    ListStackInstancesRequest(ListStackInstancesRequest &&) = default ;
    ListStackInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackInstancesRequest() = default ;
    ListStackInstancesRequest& operator=(const ListStackInstancesRequest &) = default ;
    ListStackInstancesRequest& operator=(ListStackInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->regionId_ != nullptr && this->stackGroupName_ != nullptr && this->stackInstanceAccountId_ != nullptr && this->stackInstanceRegionId_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListStackInstancesRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListStackInstancesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListStackInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string stackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline ListStackInstancesRequest& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


    // stackInstanceAccountId Field Functions 
    bool hasStackInstanceAccountId() const { return this->stackInstanceAccountId_ != nullptr;};
    void deleteStackInstanceAccountId() { this->stackInstanceAccountId_ = nullptr;};
    inline string stackInstanceAccountId() const { DARABONBA_PTR_GET_DEFAULT(stackInstanceAccountId_, "") };
    inline ListStackInstancesRequest& setStackInstanceAccountId(string stackInstanceAccountId) { DARABONBA_PTR_SET_VALUE(stackInstanceAccountId_, stackInstanceAccountId) };


    // stackInstanceRegionId Field Functions 
    bool hasStackInstanceRegionId() const { return this->stackInstanceRegionId_ != nullptr;};
    void deleteStackInstanceRegionId() { this->stackInstanceRegionId_ = nullptr;};
    inline string stackInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(stackInstanceRegionId_, "") };
    inline ListStackInstancesRequest& setStackInstanceRegionId(string stackInstanceRegionId) { DARABONBA_PTR_SET_VALUE(stackInstanceRegionId_, stackInstanceRegionId) };


  protected:
    // The number of the page to return.
    // 
    // *   Pages start from page 1.
    // *   Default value: 1.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries to return on each page.
    // 
    // *   Valid values: 1 to 50.
    // *   Default value: 10.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The region ID of the stack group. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the stack group. The name must be unique within a region.\\
    // The name can be up to 255 characters in length, and can contain digits, letters, hyphens (-), and underscores (_). It must start with a digit or letter.
    // 
    // This parameter is required.
    std::shared_ptr<string> stackGroupName_ = nullptr;
    // The ID of the destination account to which the stack belongs.
    // 
    // *   If the stack group is granted self-managed permissions, the stack belongs to an Alibaba Cloud account.
    // *   If the stack group is granted service-managed permissions, the stack belongs to a member in a resource directory.
    // 
    // > For more information about the destination account, see [Overview](https://help.aliyun.com/document_detail/154578.html).
    std::shared_ptr<string> stackInstanceAccountId_ = nullptr;
    // The region ID of the stack.
    std::shared_ptr<string> stackInstanceRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
