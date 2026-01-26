// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListAlertEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertName, alertName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MatchingConditions, matchingConditions_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(ShowNotificationPolicies, showNotificationPolicies_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MatchingConditions, matchingConditions_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(ShowNotificationPolicies, showNotificationPolicies_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListAlertEventsRequest() = default ;
    ListAlertEventsRequest(const ListAlertEventsRequest &) = default ;
    ListAlertEventsRequest(ListAlertEventsRequest &&) = default ;
    ListAlertEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertEventsRequest() = default ;
    ListAlertEventsRequest& operator=(const ListAlertEventsRequest &) = default ;
    ListAlertEventsRequest& operator=(ListAlertEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertName_ == nullptr
        && this->endTime_ == nullptr && this->matchingConditions_ == nullptr && this->page_ == nullptr && this->showNotificationPolicies_ == nullptr && this->size_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr; };
    // alertName Field Functions 
    bool hasAlertName() const { return this->alertName_ != nullptr;};
    void deleteAlertName() { this->alertName_ = nullptr;};
    inline string getAlertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
    inline ListAlertEventsRequest& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListAlertEventsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // matchingConditions Field Functions 
    bool hasMatchingConditions() const { return this->matchingConditions_ != nullptr;};
    void deleteMatchingConditions() { this->matchingConditions_ = nullptr;};
    inline string getMatchingConditions() const { DARABONBA_PTR_GET_DEFAULT(matchingConditions_, "") };
    inline ListAlertEventsRequest& setMatchingConditions(string matchingConditions) { DARABONBA_PTR_SET_VALUE(matchingConditions_, matchingConditions) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListAlertEventsRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // showNotificationPolicies Field Functions 
    bool hasShowNotificationPolicies() const { return this->showNotificationPolicies_ != nullptr;};
    void deleteShowNotificationPolicies() { this->showNotificationPolicies_ = nullptr;};
    inline bool getShowNotificationPolicies() const { DARABONBA_PTR_GET_DEFAULT(showNotificationPolicies_, false) };
    inline ListAlertEventsRequest& setShowNotificationPolicies(bool showNotificationPolicies) { DARABONBA_PTR_SET_VALUE(showNotificationPolicies_, showNotificationPolicies) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListAlertEventsRequest& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListAlertEventsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAlertEventsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The name of the alert.
    shared_ptr<string> alertName_ {};
    // The end time of the alert events that you want to query. Specify the time in the YYYY-MM-DD HH:mm:ss format.
    shared_ptr<string> endTime_ {};
    // The list of matching conditions.
    shared_ptr<string> matchingConditions_ {};
    // The number of the page to return.
    // 
    // This parameter is required.
    shared_ptr<int64_t> page_ {};
    // Specifies whether to show the associated notification policy.
    shared_ptr<bool> showNotificationPolicies_ {};
    // The number of entries to return on each page.
    // 
    // This parameter is required.
    shared_ptr<int64_t> size_ {};
    // The start time of the alert events that you want to query. Specify the time in the YYYY-MM-DD HH:mm:ss format.
    shared_ptr<string> startTime_ {};
    // The status of the alert events. Valid values:
    // 
    // *   Active
    // *   Silenced
    // *   Resolved
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
