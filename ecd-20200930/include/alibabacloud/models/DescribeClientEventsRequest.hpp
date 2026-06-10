// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeClientEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopIp, desktopIp_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_TO_JSON(FillHardwareInfo, fillHardwareInfo_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopIp, desktopIp_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_FROM_JSON(FillHardwareInfo, fillHardwareInfo_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeClientEventsRequest() = default ;
    DescribeClientEventsRequest(const DescribeClientEventsRequest &) = default ;
    DescribeClientEventsRequest(DescribeClientEventsRequest &&) = default ;
    DescribeClientEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientEventsRequest() = default ;
    DescribeClientEventsRequest& operator=(const DescribeClientEventsRequest &) = default ;
    DescribeClientEventsRequest& operator=(DescribeClientEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopId_ == nullptr
        && this->desktopIp_ == nullptr && this->desktopName_ == nullptr && this->directoryId_ == nullptr && this->endTime_ == nullptr && this->endUserId_ == nullptr
        && this->eventType_ == nullptr && this->eventTypes_ == nullptr && this->fillHardwareInfo_ == nullptr && this->language_ == nullptr && this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->officeSiteId_ == nullptr && this->officeSiteName_ == nullptr && this->regionId_ == nullptr && this->startTime_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeClientEventsRequest& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopIp Field Functions 
    bool hasDesktopIp() const { return this->desktopIp_ != nullptr;};
    void deleteDesktopIp() { this->desktopIp_ = nullptr;};
    inline string getDesktopIp() const { DARABONBA_PTR_GET_DEFAULT(desktopIp_, "") };
    inline DescribeClientEventsRequest& setDesktopIp(string desktopIp) { DARABONBA_PTR_SET_VALUE(desktopIp_, desktopIp) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeClientEventsRequest& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline DescribeClientEventsRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeClientEventsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeClientEventsRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeClientEventsRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // eventTypes Field Functions 
    bool hasEventTypes() const { return this->eventTypes_ != nullptr;};
    void deleteEventTypes() { this->eventTypes_ = nullptr;};
    inline const vector<string> & getEventTypes() const { DARABONBA_PTR_GET_CONST(eventTypes_, vector<string>) };
    inline vector<string> getEventTypes() { DARABONBA_PTR_GET(eventTypes_, vector<string>) };
    inline DescribeClientEventsRequest& setEventTypes(const vector<string> & eventTypes) { DARABONBA_PTR_SET_VALUE(eventTypes_, eventTypes) };
    inline DescribeClientEventsRequest& setEventTypes(vector<string> && eventTypes) { DARABONBA_PTR_SET_RVALUE(eventTypes_, eventTypes) };


    // fillHardwareInfo Field Functions 
    bool hasFillHardwareInfo() const { return this->fillHardwareInfo_ != nullptr;};
    void deleteFillHardwareInfo() { this->fillHardwareInfo_ = nullptr;};
    inline bool getFillHardwareInfo() const { DARABONBA_PTR_GET_DEFAULT(fillHardwareInfo_, false) };
    inline DescribeClientEventsRequest& setFillHardwareInfo(bool fillHardwareInfo) { DARABONBA_PTR_SET_VALUE(fillHardwareInfo_, fillHardwareInfo) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeClientEventsRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeClientEventsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeClientEventsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeClientEventsRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // officeSiteName Field Functions 
    bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
    void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
    inline string getOfficeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
    inline DescribeClientEventsRequest& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeClientEventsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeClientEventsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the cloud desktop. If you omit this parameter, the operation returns events for all cloud desktops in the region.
    shared_ptr<string> desktopId_ {};
    // The IP address of the cloud desktop. If you omit this parameter, the operation returns events for all cloud desktops in the region.
    shared_ptr<string> desktopIp_ {};
    // The name of the cloud desktop.
    shared_ptr<string> desktopName_ {};
    // > This parameter is not in use.
    shared_ptr<string> directoryId_ {};
    // The end of the time range to query. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC.<br>
    // If you omit this parameter, the operation uses the current time.<br>
    shared_ptr<string> endTime_ {};
    // The ID of the end user, which can be a RAM user ID or an AD username. If you omit this parameter, the operation returns events for all users in the region.
    shared_ptr<string> endUserId_ {};
    // The event type to query. If EventTypes is specified, this parameter is ignored. If you omit both this parameter and EventTypes, the operation returns all events.
    shared_ptr<string> eventType_ {};
    // An array of event types to query. The operation returns events that match any of the specified types.
    shared_ptr<vector<string>> eventTypes_ {};
    shared_ptr<bool> fillHardwareInfo_ {};
    shared_ptr<string> language_ {};
    // The maximum number of entries to return on each page.<br>
    // Default value: 100.<br>
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Set this parameter to the NextToken value returned in the previous response to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the office network to which the cloud desktop belongs. If you omit this parameter, the operation returns events for users in all office networks in the region.
    shared_ptr<string> officeSiteId_ {};
    // The name of the office network.
    shared_ptr<string> officeSiteName_ {};
    // The ID of the region. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The start of the time range to query. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the YYYY-MM-DDThh:mm:ssZ format. The time must be in UTC.<br>
    // If you omit this parameter, the query returns events that occurred before the time specified by `EndTime`.<br>
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
