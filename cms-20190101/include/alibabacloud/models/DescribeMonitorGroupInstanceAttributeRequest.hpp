// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPINSTANCEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPINSTANCEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupInstanceAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeMonitorGroupInstanceAttributeRequest() = default ;
    DescribeMonitorGroupInstanceAttributeRequest(const DescribeMonitorGroupInstanceAttributeRequest &) = default ;
    DescribeMonitorGroupInstanceAttributeRequest(DescribeMonitorGroupInstanceAttributeRequest &&) = default ;
    DescribeMonitorGroupInstanceAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupInstanceAttributeRequest() = default ;
    DescribeMonitorGroupInstanceAttributeRequest& operator=(const DescribeMonitorGroupInstanceAttributeRequest &) = default ;
    DescribeMonitorGroupInstanceAttributeRequest& operator=(DescribeMonitorGroupInstanceAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->groupId_ == nullptr && return this->instanceIds_ == nullptr && return this->keyword_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->regionId_ == nullptr && return this->total_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeMonitorGroupInstanceAttributeRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeMonitorGroupInstanceAttributeRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string instanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline DescribeMonitorGroupInstanceAttributeRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DescribeMonitorGroupInstanceAttributeRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeMonitorGroupInstanceAttributeRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMonitorGroupInstanceAttributeRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMonitorGroupInstanceAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline bool total() const { DARABONBA_PTR_GET_DEFAULT(total_, false) };
    inline DescribeMonitorGroupInstanceAttributeRequest& setTotal(bool total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The abbreviation of the cloud service name.
    // 
    // For more information about how to obtain the abbreviation of a cloud service name, see `metricCategory` in the response parameter `Labels` of the [DescribeProjectMeta](https://help.aliyun.com/document_detail/2513265.html) operation.
    std::shared_ptr<string> category_ = nullptr;
    // The ID of the application group.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The resource ID. Separate multiple resource IDs with commas (,). You can query the details about a maximum of 20 resources at a time.
    std::shared_ptr<string> instanceIds_ = nullptr;
    // The keyword that is used to search for resources.
    std::shared_ptr<string> keyword_ = nullptr;
    // The page number.
    // 
    // Valid values: 1 to 1000000000.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    // 
    // Valid values: 1 to 1000000000.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to return the total number of resources in the specified application group. Valid values:
    // 
    // *   true (default)
    // *   false
    std::shared_ptr<bool> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
