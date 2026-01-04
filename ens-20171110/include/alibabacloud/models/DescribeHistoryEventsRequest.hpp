// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHISTORYEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHISTORYEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeHistoryEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHistoryEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventLevels, eventLevels_);
      DARABONBA_PTR_TO_JSON(EventStatus, eventStatus_);
      DARABONBA_PTR_TO_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHistoryEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventLevels, eventLevels_);
      DARABONBA_PTR_FROM_JSON(EventStatus, eventStatus_);
      DARABONBA_PTR_FROM_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
    };
    DescribeHistoryEventsRequest() = default ;
    DescribeHistoryEventsRequest(const DescribeHistoryEventsRequest &) = default ;
    DescribeHistoryEventsRequest(DescribeHistoryEventsRequest &&) = default ;
    DescribeHistoryEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHistoryEventsRequest() = default ;
    DescribeHistoryEventsRequest& operator=(const DescribeHistoryEventsRequest &) = default ;
    DescribeHistoryEventsRequest& operator=(DescribeHistoryEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventLevels_ == nullptr
        && this->eventStatus_ == nullptr && this->eventTypes_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->resourceIds_ == nullptr; };
    // eventLevels Field Functions 
    bool hasEventLevels() const { return this->eventLevels_ != nullptr;};
    void deleteEventLevels() { this->eventLevels_ = nullptr;};
    inline const vector<string> & getEventLevels() const { DARABONBA_PTR_GET_CONST(eventLevels_, vector<string>) };
    inline vector<string> getEventLevels() { DARABONBA_PTR_GET(eventLevels_, vector<string>) };
    inline DescribeHistoryEventsRequest& setEventLevels(const vector<string> & eventLevels) { DARABONBA_PTR_SET_VALUE(eventLevels_, eventLevels) };
    inline DescribeHistoryEventsRequest& setEventLevels(vector<string> && eventLevels) { DARABONBA_PTR_SET_RVALUE(eventLevels_, eventLevels) };


    // eventStatus Field Functions 
    bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
    void deleteEventStatus() { this->eventStatus_ = nullptr;};
    inline const vector<string> & getEventStatus() const { DARABONBA_PTR_GET_CONST(eventStatus_, vector<string>) };
    inline vector<string> getEventStatus() { DARABONBA_PTR_GET(eventStatus_, vector<string>) };
    inline DescribeHistoryEventsRequest& setEventStatus(const vector<string> & eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };
    inline DescribeHistoryEventsRequest& setEventStatus(vector<string> && eventStatus) { DARABONBA_PTR_SET_RVALUE(eventStatus_, eventStatus) };


    // eventTypes Field Functions 
    bool hasEventTypes() const { return this->eventTypes_ != nullptr;};
    void deleteEventTypes() { this->eventTypes_ = nullptr;};
    inline const vector<string> & getEventTypes() const { DARABONBA_PTR_GET_CONST(eventTypes_, vector<string>) };
    inline vector<string> getEventTypes() { DARABONBA_PTR_GET(eventTypes_, vector<string>) };
    inline DescribeHistoryEventsRequest& setEventTypes(const vector<string> & eventTypes) { DARABONBA_PTR_SET_VALUE(eventTypes_, eventTypes) };
    inline DescribeHistoryEventsRequest& setEventTypes(vector<string> && eventTypes) { DARABONBA_PTR_SET_RVALUE(eventTypes_, eventTypes) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHistoryEventsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHistoryEventsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<string> & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
    inline vector<string> getResourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
    inline DescribeHistoryEventsRequest& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline DescribeHistoryEventsRequest& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


  protected:
    // The levels of the event-triggered alerts.
    shared_ptr<vector<string>> eventLevels_ {};
    // Event status list.
    shared_ptr<vector<string>> eventStatus_ {};
    // The list of event types.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> eventTypes_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The IDs of resources.
    shared_ptr<vector<string>> resourceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
