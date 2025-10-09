// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYALERTRULESRESPONSEBODYPAGEINFODATAQUALITYALERTRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYALERTRULESRESPONSEBODYPAGEINFODATAQUALITYALERTRULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification.hpp>
#include <alibabacloud/models/ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules& obj) { 
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules() = default ;
    ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules(const ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules &) = default ;
    ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules(ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules &&) = default ;
    ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules() = default ;
    ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules& operator=(const ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules &) = default ;
    ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules& operator=(ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules &&) = default ;
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
    inline ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification & notification() const { DARABONBA_PTR_GET_CONST(notification_, Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification) };
    inline Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification notification() { DARABONBA_PTR_GET(notification_, Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification) };
    inline ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules& setNotification(const Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules& setNotification(Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget & target() const { DARABONBA_PTR_GET_CONST(target_, Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget) };
    inline Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget target() { DARABONBA_PTR_GET(target_, Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget) };
    inline ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules& setTarget(const Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRules& setTarget(Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


  protected:
    // The alert conditions.
    std::shared_ptr<string> condition_ = nullptr;
    // The ID of the data quality monitor alert rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Alert notification configurations.
    std::shared_ptr<Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesNotification> notification_ = nullptr;
    // The project ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // Monitored targets of the data quality alert rule.
    std::shared_ptr<Models::ListDataQualityAlertRulesResponseBodyPageInfoDataQualityAlertRulesTarget> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
