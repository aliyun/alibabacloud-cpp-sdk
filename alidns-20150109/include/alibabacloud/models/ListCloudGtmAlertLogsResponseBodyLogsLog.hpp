// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMALERTLOGSRESPONSEBODYLOGSLOG_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMALERTLOGSRESPONSEBODYLOGSLOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmAlertLogsResponseBodyLogsLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmAlertLogsResponseBodyLogsLog& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmAlertLogsResponseBodyLogsLog& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    ListCloudGtmAlertLogsResponseBodyLogsLog() = default ;
    ListCloudGtmAlertLogsResponseBodyLogsLog(const ListCloudGtmAlertLogsResponseBodyLogsLog &) = default ;
    ListCloudGtmAlertLogsResponseBodyLogsLog(ListCloudGtmAlertLogsResponseBodyLogsLog &&) = default ;
    ListCloudGtmAlertLogsResponseBodyLogsLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmAlertLogsResponseBodyLogsLog() = default ;
    ListCloudGtmAlertLogsResponseBodyLogsLog& operator=(const ListCloudGtmAlertLogsResponseBodyLogsLog &) = default ;
    ListCloudGtmAlertLogsResponseBodyLogsLog& operator=(ListCloudGtmAlertLogsResponseBodyLogsLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && return this->content_ == nullptr && return this->entityType_ == nullptr && return this->timestamp_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline ListCloudGtmAlertLogsResponseBodyLogsLog& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListCloudGtmAlertLogsResponseBodyLogsLog& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline ListCloudGtmAlertLogsResponseBodyLogsLog& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline ListCloudGtmAlertLogsResponseBodyLogsLog& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // Alert type:
    // - ALERT
    // - RESUME
    std::shared_ptr<string> actionType_ = nullptr;
    // The alert content.
    std::shared_ptr<string> content_ = nullptr;
    // Alarm object types:
    // - GTM_ADDRESS: Address
    // - GTM_ADDRESS_POOL: Address Pool
    // - GTM_INSTANCE: Instance
    // - GTM_MONITOR_TEMPLATE: Health Check Template
    std::shared_ptr<string> entityType_ = nullptr;
    // Alert log time (timestamp).
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
