// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeCustomEventCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomEventCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SearchKeywords, searchKeywords_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomEventCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SearchKeywords, searchKeywords_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeCustomEventCountRequest() = default ;
    DescribeCustomEventCountRequest(const DescribeCustomEventCountRequest &) = default ;
    DescribeCustomEventCountRequest(DescribeCustomEventCountRequest &&) = default ;
    DescribeCustomEventCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomEventCountRequest() = default ;
    DescribeCustomEventCountRequest& operator=(const DescribeCustomEventCountRequest &) = default ;
    DescribeCustomEventCountRequest& operator=(DescribeCustomEventCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->eventId_ == nullptr && return this->groupId_ == nullptr && return this->name_ == nullptr && return this->regionId_ == nullptr && return this->searchKeywords_ == nullptr
        && return this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeCustomEventCountRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DescribeCustomEventCountRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeCustomEventCountRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCustomEventCountRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCustomEventCountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // searchKeywords Field Functions 
    bool hasSearchKeywords() const { return this->searchKeywords_ != nullptr;};
    void deleteSearchKeywords() { this->searchKeywords_ = nullptr;};
    inline string searchKeywords() const { DARABONBA_PTR_GET_DEFAULT(searchKeywords_, "") };
    inline DescribeCustomEventCountRequest& setSearchKeywords(string searchKeywords) { DARABONBA_PTR_SET_VALUE(searchKeywords_, searchKeywords) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeCustomEventCountRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The event ID.
    std::shared_ptr<string> eventId_ = nullptr;
    // The ID of the application group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The event name.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The keywords that are used to search for the event.
    // 
    // *   If you need to query the custom event whose content contains a and b, set the value to a and b.
    // *   If you need to query the custom event whose content contains a or b, set the value to a or b.
    std::shared_ptr<string> searchKeywords_ = nullptr;
    // The beginning of the time range to query.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
