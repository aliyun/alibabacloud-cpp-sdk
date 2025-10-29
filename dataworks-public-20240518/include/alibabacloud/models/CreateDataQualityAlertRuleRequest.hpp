// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYALERTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYALERTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDataQualityAlertRuleRequestNotification.hpp>
#include <alibabacloud/models/CreateDataQualityAlertRuleRequestTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityAlertRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityAlertRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityAlertRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    CreateDataQualityAlertRuleRequest() = default ;
    CreateDataQualityAlertRuleRequest(const CreateDataQualityAlertRuleRequest &) = default ;
    CreateDataQualityAlertRuleRequest(CreateDataQualityAlertRuleRequest &&) = default ;
    CreateDataQualityAlertRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityAlertRuleRequest() = default ;
    CreateDataQualityAlertRuleRequest& operator=(const CreateDataQualityAlertRuleRequest &) = default ;
    CreateDataQualityAlertRuleRequest& operator=(CreateDataQualityAlertRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && return this->notification_ == nullptr && return this->projectId_ == nullptr && return this->target_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline CreateDataQualityAlertRuleRequest& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const CreateDataQualityAlertRuleRequestNotification & notification() const { DARABONBA_PTR_GET_CONST(notification_, CreateDataQualityAlertRuleRequestNotification) };
    inline CreateDataQualityAlertRuleRequestNotification notification() { DARABONBA_PTR_GET(notification_, CreateDataQualityAlertRuleRequestNotification) };
    inline CreateDataQualityAlertRuleRequest& setNotification(const CreateDataQualityAlertRuleRequestNotification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline CreateDataQualityAlertRuleRequest& setNotification(CreateDataQualityAlertRuleRequestNotification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDataQualityAlertRuleRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const CreateDataQualityAlertRuleRequestTarget & target() const { DARABONBA_PTR_GET_CONST(target_, CreateDataQualityAlertRuleRequestTarget) };
    inline CreateDataQualityAlertRuleRequestTarget target() { DARABONBA_PTR_GET(target_, CreateDataQualityAlertRuleRequestTarget) };
    inline CreateDataQualityAlertRuleRequest& setTarget(const CreateDataQualityAlertRuleRequestTarget & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline CreateDataQualityAlertRuleRequest& setTarget(CreateDataQualityAlertRuleRequestTarget && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


  protected:
    // The alert condition of the data quality monitoring rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> condition_ = nullptr;
    // The list of alert channels.
    // 
    // This parameter is required.
    std::shared_ptr<CreateDataQualityAlertRuleRequestNotification> notification_ = nullptr;
    // The project ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The monitored target of the data quality monitoring rule.
    // 
    // This parameter is required.
    std::shared_ptr<CreateDataQualityAlertRuleRequestTarget> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
