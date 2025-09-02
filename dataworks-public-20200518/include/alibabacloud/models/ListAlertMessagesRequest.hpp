// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTMESSAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTMESSAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListAlertMessagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertMessagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertMethods, alertMethods_);
      DARABONBA_PTR_TO_JSON(AlertRuleTypes, alertRuleTypes_);
      DARABONBA_PTR_TO_JSON(AlertUser, alertUser_);
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RemindId, remindId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertMessagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertMethods, alertMethods_);
      DARABONBA_PTR_FROM_JSON(AlertRuleTypes, alertRuleTypes_);
      DARABONBA_PTR_FROM_JSON(AlertUser, alertUser_);
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RemindId, remindId_);
    };
    ListAlertMessagesRequest() = default ;
    ListAlertMessagesRequest(const ListAlertMessagesRequest &) = default ;
    ListAlertMessagesRequest(ListAlertMessagesRequest &&) = default ;
    ListAlertMessagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertMessagesRequest() = default ;
    ListAlertMessagesRequest& operator=(const ListAlertMessagesRequest &) = default ;
    ListAlertMessagesRequest& operator=(ListAlertMessagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertMethods_ != nullptr
        && this->alertRuleTypes_ != nullptr && this->alertUser_ != nullptr && this->baselineId_ != nullptr && this->beginTime_ != nullptr && this->endTime_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->remindId_ != nullptr; };
    // alertMethods Field Functions 
    bool hasAlertMethods() const { return this->alertMethods_ != nullptr;};
    void deleteAlertMethods() { this->alertMethods_ = nullptr;};
    inline string alertMethods() const { DARABONBA_PTR_GET_DEFAULT(alertMethods_, "") };
    inline ListAlertMessagesRequest& setAlertMethods(string alertMethods) { DARABONBA_PTR_SET_VALUE(alertMethods_, alertMethods) };


    // alertRuleTypes Field Functions 
    bool hasAlertRuleTypes() const { return this->alertRuleTypes_ != nullptr;};
    void deleteAlertRuleTypes() { this->alertRuleTypes_ = nullptr;};
    inline string alertRuleTypes() const { DARABONBA_PTR_GET_DEFAULT(alertRuleTypes_, "") };
    inline ListAlertMessagesRequest& setAlertRuleTypes(string alertRuleTypes) { DARABONBA_PTR_SET_VALUE(alertRuleTypes_, alertRuleTypes) };


    // alertUser Field Functions 
    bool hasAlertUser() const { return this->alertUser_ != nullptr;};
    void deleteAlertUser() { this->alertUser_ = nullptr;};
    inline string alertUser() const { DARABONBA_PTR_GET_DEFAULT(alertUser_, "") };
    inline ListAlertMessagesRequest& setAlertUser(string alertUser) { DARABONBA_PTR_SET_VALUE(alertUser_, alertUser) };


    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline ListAlertMessagesRequest& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline ListAlertMessagesRequest& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListAlertMessagesRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAlertMessagesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAlertMessagesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remindId Field Functions 
    bool hasRemindId() const { return this->remindId_ != nullptr;};
    void deleteRemindId() { this->remindId_ = nullptr;};
    inline int64_t remindId() const { DARABONBA_PTR_GET_DEFAULT(remindId_, 0L) };
    inline ListAlertMessagesRequest& setRemindId(int64_t remindId) { DARABONBA_PTR_SET_VALUE(remindId_, remindId) };


  protected:
    // The notification method. Valid values:
    // 
    // *   MAIL
    // *   SMS Alert notifications can be sent by text message only in the Singapore, Malaysia (Kuala Lumpur), and Germany (Frankfurt) regions.
    // 
    // You can specify multiple notification methods. Separate them with commas (,).
    std::shared_ptr<string> alertMethods_ = nullptr;
    // The type of the alert rule. Valid values: GLOBAL, USER_DEFINE, and OTHER. The value GLOBAL indicates that the alert rule is a global alert rule. The value USER_DEFINE indicates that the alert rule is customized by a user. The value OTHER indicates that the alert rule is a rule of another type. You can specify multiple types. Separate them with commas (,).
    std::shared_ptr<string> alertRuleTypes_ = nullptr;
    // The ID of the Alibaba Cloud account used by the alert recipient.
    std::shared_ptr<string> alertUser_ = nullptr;
    // The baseline ID. This parameter takes effect if the AlertRuleTypes parameter is set to GLOBAL. You can configure either this parameter or the RemindId parameter.
    std::shared_ptr<int64_t> baselineId_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-dd\\"T\\"HH:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> beginTime_ = nullptr;
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-dd\\"T\\"HH:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The page number. Default value: 1. Minimum value: 1. Maximum value: 30.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The custom alert rule ID. This parameter takes effect if the AlertRuleTypes parameter is set to USER_DEFINE. You can configure either this parameter or the BaselineId parameter.
    std::shared_ptr<int64_t> remindId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
