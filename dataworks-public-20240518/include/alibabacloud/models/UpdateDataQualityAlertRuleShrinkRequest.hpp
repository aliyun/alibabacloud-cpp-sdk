// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYALERTRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYALERTRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityAlertRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityAlertRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Target, targetShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityAlertRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Target, targetShrink_);
    };
    UpdateDataQualityAlertRuleShrinkRequest() = default ;
    UpdateDataQualityAlertRuleShrinkRequest(const UpdateDataQualityAlertRuleShrinkRequest &) = default ;
    UpdateDataQualityAlertRuleShrinkRequest(UpdateDataQualityAlertRuleShrinkRequest &&) = default ;
    UpdateDataQualityAlertRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityAlertRuleShrinkRequest() = default ;
    UpdateDataQualityAlertRuleShrinkRequest& operator=(const UpdateDataQualityAlertRuleShrinkRequest &) = default ;
    UpdateDataQualityAlertRuleShrinkRequest& operator=(UpdateDataQualityAlertRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && return this->id_ == nullptr && return this->notificationShrink_ == nullptr && return this->projectId_ == nullptr && return this->targetShrink_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline UpdateDataQualityAlertRuleShrinkRequest& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateDataQualityAlertRuleShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string notificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline UpdateDataQualityAlertRuleShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateDataQualityAlertRuleShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // targetShrink Field Functions 
    bool hasTargetShrink() const { return this->targetShrink_ != nullptr;};
    void deleteTargetShrink() { this->targetShrink_ = nullptr;};
    inline string targetShrink() const { DARABONBA_PTR_GET_DEFAULT(targetShrink_, "") };
    inline UpdateDataQualityAlertRuleShrinkRequest& setTargetShrink(string targetShrink) { DARABONBA_PTR_SET_VALUE(targetShrink_, targetShrink) };


  protected:
    // The alert condition of the data quality monitoring rule.
    std::shared_ptr<string> condition_ = nullptr;
    // The ID of the alert rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Alert notification configurations.
    std::shared_ptr<string> notificationShrink_ = nullptr;
    // The project ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The monitored target of the data quality monitoring rule.
    std::shared_ptr<string> targetShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
