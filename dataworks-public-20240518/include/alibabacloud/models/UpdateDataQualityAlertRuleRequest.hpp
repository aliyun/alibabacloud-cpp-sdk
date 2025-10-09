// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYALERTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYALERTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateDataQualityAlertRuleRequestNotification.hpp>
#include <alibabacloud/models/UpdateDataQualityAlertRuleRequestTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityAlertRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityAlertRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityAlertRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    UpdateDataQualityAlertRuleRequest() = default ;
    UpdateDataQualityAlertRuleRequest(const UpdateDataQualityAlertRuleRequest &) = default ;
    UpdateDataQualityAlertRuleRequest(UpdateDataQualityAlertRuleRequest &&) = default ;
    UpdateDataQualityAlertRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityAlertRuleRequest() = default ;
    UpdateDataQualityAlertRuleRequest& operator=(const UpdateDataQualityAlertRuleRequest &) = default ;
    UpdateDataQualityAlertRuleRequest& operator=(UpdateDataQualityAlertRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->condition_ != nullptr
        && this->id_ != nullptr && this->notification_ != nullptr && this->projectId_ != nullptr && this->target_ != nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline UpdateDataQualityAlertRuleRequest& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateDataQualityAlertRuleRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const UpdateDataQualityAlertRuleRequestNotification & notification() const { DARABONBA_PTR_GET_CONST(notification_, UpdateDataQualityAlertRuleRequestNotification) };
    inline UpdateDataQualityAlertRuleRequestNotification notification() { DARABONBA_PTR_GET(notification_, UpdateDataQualityAlertRuleRequestNotification) };
    inline UpdateDataQualityAlertRuleRequest& setNotification(const UpdateDataQualityAlertRuleRequestNotification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline UpdateDataQualityAlertRuleRequest& setNotification(UpdateDataQualityAlertRuleRequestNotification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateDataQualityAlertRuleRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const UpdateDataQualityAlertRuleRequestTarget & target() const { DARABONBA_PTR_GET_CONST(target_, UpdateDataQualityAlertRuleRequestTarget) };
    inline UpdateDataQualityAlertRuleRequestTarget target() { DARABONBA_PTR_GET(target_, UpdateDataQualityAlertRuleRequestTarget) };
    inline UpdateDataQualityAlertRuleRequest& setTarget(const UpdateDataQualityAlertRuleRequestTarget & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline UpdateDataQualityAlertRuleRequest& setTarget(UpdateDataQualityAlertRuleRequestTarget && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


  protected:
    // The alert condition of the data quality monitoring rule.
    std::shared_ptr<string> condition_ = nullptr;
    // The ID of the alert rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Alert notification configurations.
    std::shared_ptr<UpdateDataQualityAlertRuleRequestNotification> notification_ = nullptr;
    // The project ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The monitored target of the data quality monitoring rule.
    std::shared_ptr<UpdateDataQualityAlertRuleRequestTarget> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
