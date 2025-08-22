// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTACTGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTACTGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeContactGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContactGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_TO_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_TO_JSON(IsDetail, isDetail_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContactGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroupName, contactGroupName_);
      DARABONBA_PTR_FROM_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_FROM_JSON(IsDetail, isDetail_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DescribeContactGroupsRequest() = default ;
    DescribeContactGroupsRequest(const DescribeContactGroupsRequest &) = default ;
    DescribeContactGroupsRequest(DescribeContactGroupsRequest &&) = default ;
    DescribeContactGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContactGroupsRequest() = default ;
    DescribeContactGroupsRequest& operator=(const DescribeContactGroupsRequest &) = default ;
    DescribeContactGroupsRequest& operator=(DescribeContactGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactGroupName_ != nullptr
        && this->groupIds_ != nullptr && this->isDetail_ != nullptr && this->page_ != nullptr && this->regionId_ != nullptr && this->size_ != nullptr; };
    // contactGroupName Field Functions 
    bool hasContactGroupName() const { return this->contactGroupName_ != nullptr;};
    void deleteContactGroupName() { this->contactGroupName_ = nullptr;};
    inline string contactGroupName() const { DARABONBA_PTR_GET_DEFAULT(contactGroupName_, "") };
    inline DescribeContactGroupsRequest& setContactGroupName(string contactGroupName) { DARABONBA_PTR_SET_VALUE(contactGroupName_, contactGroupName) };


    // groupIds Field Functions 
    bool hasGroupIds() const { return this->groupIds_ != nullptr;};
    void deleteGroupIds() { this->groupIds_ = nullptr;};
    inline string groupIds() const { DARABONBA_PTR_GET_DEFAULT(groupIds_, "") };
    inline DescribeContactGroupsRequest& setGroupIds(string groupIds) { DARABONBA_PTR_SET_VALUE(groupIds_, groupIds) };


    // isDetail Field Functions 
    bool hasIsDetail() const { return this->isDetail_ != nullptr;};
    void deleteIsDetail() { this->isDetail_ = nullptr;};
    inline bool isDetail() const { DARABONBA_PTR_GET_DEFAULT(isDetail_, false) };
    inline DescribeContactGroupsRequest& setIsDetail(bool isDetail) { DARABONBA_PTR_SET_VALUE(isDetail_, isDetail) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline DescribeContactGroupsRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeContactGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribeContactGroupsRequest& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The name of the alert contact group.
    std::shared_ptr<string> contactGroupName_ = nullptr;
    // The ID of the alert contact group.
    std::shared_ptr<string> groupIds_ = nullptr;
    // Specifies whether to return all the alert contacts in the queried alert contact group. Valid values:
    // 
    // *   `false`
    // *   `true`
    std::shared_ptr<bool> isDetail_ = nullptr;
    // The number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> page_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of alert contact groups displayed on each page.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
