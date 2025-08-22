// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHEVENTSRESPONSEBODYPAGEBEANEVENT_HPP_
#define ALIBABACLOUD_MODELS_SEARCHEVENTSRESPONSEBODYPAGEBEANEVENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchEventsResponseBodyPageBeanEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchEventsResponseBodyPageBeanEvent& obj) { 
      DARABONBA_PTR_TO_JSON(AlertId, alertId_);
      DARABONBA_PTR_TO_JSON(AlertName, alertName_);
      DARABONBA_PTR_TO_JSON(AlertRule, alertRule_);
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Links, links_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, SearchEventsResponseBodyPageBeanEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
      DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
      DARABONBA_PTR_FROM_JSON(AlertRule, alertRule_);
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Links, links_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    SearchEventsResponseBodyPageBeanEvent() = default ;
    SearchEventsResponseBodyPageBeanEvent(const SearchEventsResponseBodyPageBeanEvent &) = default ;
    SearchEventsResponseBodyPageBeanEvent(SearchEventsResponseBodyPageBeanEvent &&) = default ;
    SearchEventsResponseBodyPageBeanEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchEventsResponseBodyPageBeanEvent() = default ;
    SearchEventsResponseBodyPageBeanEvent& operator=(const SearchEventsResponseBodyPageBeanEvent &) = default ;
    SearchEventsResponseBodyPageBeanEvent& operator=(SearchEventsResponseBodyPageBeanEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertId_ != nullptr
        && this->alertName_ != nullptr && this->alertRule_ != nullptr && this->alertType_ != nullptr && this->eventLevel_ != nullptr && this->eventTime_ != nullptr
        && this->id_ != nullptr && this->links_ != nullptr && this->message_ != nullptr; };
    // alertId Field Functions 
    bool hasAlertId() const { return this->alertId_ != nullptr;};
    void deleteAlertId() { this->alertId_ = nullptr;};
    inline int64_t alertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, 0L) };
    inline SearchEventsResponseBodyPageBeanEvent& setAlertId(int64_t alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


    // alertName Field Functions 
    bool hasAlertName() const { return this->alertName_ != nullptr;};
    void deleteAlertName() { this->alertName_ = nullptr;};
    inline string alertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
    inline SearchEventsResponseBodyPageBeanEvent& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


    // alertRule Field Functions 
    bool hasAlertRule() const { return this->alertRule_ != nullptr;};
    void deleteAlertRule() { this->alertRule_ = nullptr;};
    inline string alertRule() const { DARABONBA_PTR_GET_DEFAULT(alertRule_, "") };
    inline SearchEventsResponseBodyPageBeanEvent& setAlertRule(string alertRule) { DARABONBA_PTR_SET_VALUE(alertRule_, alertRule) };


    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline int32_t alertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, 0) };
    inline SearchEventsResponseBodyPageBeanEvent& setAlertType(int32_t alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // eventLevel Field Functions 
    bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
    void deleteEventLevel() { this->eventLevel_ = nullptr;};
    inline string eventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
    inline SearchEventsResponseBodyPageBeanEvent& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


    // eventTime Field Functions 
    bool hasEventTime() const { return this->eventTime_ != nullptr;};
    void deleteEventTime() { this->eventTime_ = nullptr;};
    inline int64_t eventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0L) };
    inline SearchEventsResponseBodyPageBeanEvent& setEventTime(int64_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline SearchEventsResponseBodyPageBeanEvent& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // links Field Functions 
    bool hasLinks() const { return this->links_ != nullptr;};
    void deleteLinks() { this->links_ = nullptr;};
    inline const vector<string> & links() const { DARABONBA_PTR_GET_CONST(links_, vector<string>) };
    inline vector<string> links() { DARABONBA_PTR_GET(links_, vector<string>) };
    inline SearchEventsResponseBodyPageBeanEvent& setLinks(const vector<string> & links) { DARABONBA_PTR_SET_VALUE(links_, links) };
    inline SearchEventsResponseBodyPageBeanEvent& setLinks(vector<string> && links) { DARABONBA_PTR_SET_RVALUE(links_, links) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SearchEventsResponseBodyPageBeanEvent& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The ID of the alert rule that is associated with the event.
    std::shared_ptr<int64_t> alertId_ = nullptr;
    // The name of the alert rule that is associated with the event.
    std::shared_ptr<string> alertName_ = nullptr;
    // The condition of the alert rule.
    std::shared_ptr<string> alertRule_ = nullptr;
    // The type of the alert rule. This parameter is not returned. Valid values:
    // 
    // *   `1`: custom alert rules to monitor drill-down data sets
    // *   `3`: custom alert rules to monitor tiled data sets
    // *   `4`: alert rules to monitor the frontend, including the default frontend alert rules
    // *   `5`: alert rules to monitor applications, including the default application alert rules
    // *   `6`: the default frontend alert rules
    // *   `7`: the default application alert rules
    // *   `8`: Tracing Analysis alert rules
    // *   `101`: Prometheus alert rules
    std::shared_ptr<int32_t> alertType_ = nullptr;
    // The severity of the event.
    std::shared_ptr<string> eventLevel_ = nullptr;
    // The timestamp when the event occurred.
    std::shared_ptr<int64_t> eventTime_ = nullptr;
    // The ID of the event record.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The list of event URLs.
    std::shared_ptr<vector<string>> links_ = nullptr;
    // The event content. The parameter value is a JSON string. Each key indicates a dimension and each value indicates the alert content in the dimension.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
