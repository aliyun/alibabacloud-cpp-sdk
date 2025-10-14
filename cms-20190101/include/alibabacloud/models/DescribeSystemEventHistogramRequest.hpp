// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTHISTOGRAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTHISTOGRAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSystemEventHistogramRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemEventHistogramRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SearchKeywords, searchKeywords_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemEventHistogramRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SearchKeywords, searchKeywords_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeSystemEventHistogramRequest() = default ;
    DescribeSystemEventHistogramRequest(const DescribeSystemEventHistogramRequest &) = default ;
    DescribeSystemEventHistogramRequest(DescribeSystemEventHistogramRequest &&) = default ;
    DescribeSystemEventHistogramRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemEventHistogramRequest() = default ;
    DescribeSystemEventHistogramRequest& operator=(const DescribeSystemEventHistogramRequest &) = default ;
    DescribeSystemEventHistogramRequest& operator=(DescribeSystemEventHistogramRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->eventType_ == nullptr && return this->groupId_ == nullptr && return this->level_ == nullptr && return this->name_ == nullptr && return this->product_ == nullptr
        && return this->regionId_ == nullptr && return this->searchKeywords_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSystemEventHistogramRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeSystemEventHistogramRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeSystemEventHistogramRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeSystemEventHistogramRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSystemEventHistogramRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeSystemEventHistogramRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSystemEventHistogramRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // searchKeywords Field Functions 
    bool hasSearchKeywords() const { return this->searchKeywords_ != nullptr;};
    void deleteSearchKeywords() { this->searchKeywords_ = nullptr;};
    inline string searchKeywords() const { DARABONBA_PTR_GET_DEFAULT(searchKeywords_, "") };
    inline DescribeSystemEventHistogramRequest& setSearchKeywords(string searchKeywords) { DARABONBA_PTR_SET_VALUE(searchKeywords_, searchKeywords) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSystemEventHistogramRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSystemEventHistogramRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The end time.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The event type.
    // 
    // >  You can call the [DescribeSystemEventMetaList](https://help.aliyun.com/document_detail/114972.html) operation to query the types of system events.
    std::shared_ptr<string> eventType_ = nullptr;
    // The ID of the application group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The level of the event. Valid values:
    // 
    // *   CRITICAL
    // *   WARN
    // *   INFO
    std::shared_ptr<string> level_ = nullptr;
    // The event name.
    // 
    // >  You can call the [DescribeSystemEventMetaList](https://help.aliyun.com/document_detail/114972.html) operation to query the names of system events.
    std::shared_ptr<string> name_ = nullptr;
    // The abbreviation of the service name.
    // 
    // >  You can call the [DescribeSystemEventMetaList](https://help.aliyun.com/document_detail/114972.html) operation to query the abbreviations of service names.
    std::shared_ptr<string> product_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The keywords that are used to search for the system event. Valid values:
    // 
    // *   If you want to search for the system event whose content contains a and b, set the value to `a and b`.
    // *   If you want to search for the system event whose content contains a or b, set the value to `a or b`.
    std::shared_ptr<string> searchKeywords_ = nullptr;
    // The start time.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The event status.
    // 
    // >  You can call the [DescribeSystemEventMetaList](https://help.aliyun.com/document_detail/114972.html) operation to query the status of system events.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
