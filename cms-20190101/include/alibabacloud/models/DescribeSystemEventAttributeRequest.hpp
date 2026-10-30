// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSystemEventAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemEventAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SearchKeywords, searchKeywords_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemEventAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SearchKeywords, searchKeywords_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeSystemEventAttributeRequest() = default ;
    DescribeSystemEventAttributeRequest(const DescribeSystemEventAttributeRequest &) = default ;
    DescribeSystemEventAttributeRequest(DescribeSystemEventAttributeRequest &&) = default ;
    DescribeSystemEventAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemEventAttributeRequest() = default ;
    DescribeSystemEventAttributeRequest& operator=(const DescribeSystemEventAttributeRequest &) = default ;
    DescribeSystemEventAttributeRequest& operator=(DescribeSystemEventAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->eventType_ == nullptr && this->groupId_ == nullptr && this->level_ == nullptr && this->name_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->product_ == nullptr && this->regionId_ == nullptr && this->searchKeywords_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSystemEventAttributeRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeSystemEventAttributeRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeSystemEventAttributeRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeSystemEventAttributeRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSystemEventAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSystemEventAttributeRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSystemEventAttributeRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeSystemEventAttributeRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSystemEventAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // searchKeywords Field Functions 
    bool hasSearchKeywords() const { return this->searchKeywords_ != nullptr;};
    void deleteSearchKeywords() { this->searchKeywords_ = nullptr;};
    inline string getSearchKeywords() const { DARABONBA_PTR_GET_DEFAULT(searchKeywords_, "") };
    inline DescribeSystemEventAttributeRequest& setSearchKeywords(string searchKeywords) { DARABONBA_PTR_SET_VALUE(searchKeywords_, searchKeywords) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSystemEventAttributeRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSystemEventAttributeRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The end time.
    // 
    // The value is a UNIX timestamp that represents the number of milliseconds that have elapsed since January 1, 1970.
    shared_ptr<string> endTime_ {};
    // The event type.
    // 
    // >For more information about valid values for the event type, see [DescribeSystemEventMetaList](https://help.aliyun.com/document_detail/114972.html).
    shared_ptr<string> eventType_ {};
    // The ID of the application group.
    shared_ptr<string> groupId_ {};
    // The event level. Valid values:
    // 
    // - CRITICAL: critical.
    // - WARN: warning.
    // - INFO: information.
    shared_ptr<string> level_ {};
    // The event name.
    // 
    // >For more information about valid values for the event name, see [DescribeSystemEventMetaList](https://help.aliyun.com/document_detail/114972.html).
    shared_ptr<string> name_ {};
    // The page number.
    // 
    // Valid values: 1 to 100000000.
    // 
    // Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The abbreviation of the product name.
    // 
    // >For more information about valid values for the product name abbreviation, see [DescribeSystemEventMetaList](https://help.aliyun.com/document_detail/114972.html).
    shared_ptr<string> product_ {};
    shared_ptr<string> regionId_ {};
    // The keywords used to search event content. Valid values:
    // 
    // - If the event content you want to search for includes both a and b, you can search for `a and b`.
    // 
    // - If the event content you want to search for includes either a or b, you can search for `a or b`.
    shared_ptr<string> searchKeywords_ {};
    // The start time.
    // 
    // The value is a UNIX timestamp that represents the number of milliseconds that have elapsed since January 1, 1970.
    shared_ptr<string> startTime_ {};
    // The event status.
    // 
    // >For more information about valid values for the event status, see [DescribeSystemEventMetaList](https://help.aliyun.com/document_detail/114972.html).
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
