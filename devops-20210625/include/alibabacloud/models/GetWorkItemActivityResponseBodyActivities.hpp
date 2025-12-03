// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMACTIVITYRESPONSEBODYACTIVITIES_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMACTIVITYRESPONSEBODYACTIVITIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWorkItemActivityResponseBodyActivitiesNewValue.hpp>
#include <alibabacloud/models/GetWorkItemActivityResponseBodyActivitiesOldValue.hpp>
#include <alibabacloud/models/GetWorkItemActivityResponseBodyActivitiesProperty.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkItemActivityResponseBodyActivities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkItemActivityResponseBodyActivities& obj) { 
      DARABONBA_PTR_TO_JSON(actionType, actionType_);
      DARABONBA_PTR_TO_JSON(eventId, eventId_);
      DARABONBA_PTR_TO_JSON(eventTime, eventTime_);
      DARABONBA_PTR_TO_JSON(eventType, eventType_);
      DARABONBA_PTR_TO_JSON(newValue, newValue_);
      DARABONBA_PTR_TO_JSON(oldValue, oldValue_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(parentEventId, parentEventId_);
      DARABONBA_PTR_TO_JSON(property, property_);
      DARABONBA_PTR_TO_JSON(resourceIdentifier, resourceIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkItemActivityResponseBodyActivities& obj) { 
      DARABONBA_PTR_FROM_JSON(actionType, actionType_);
      DARABONBA_PTR_FROM_JSON(eventId, eventId_);
      DARABONBA_PTR_FROM_JSON(eventTime, eventTime_);
      DARABONBA_PTR_FROM_JSON(eventType, eventType_);
      DARABONBA_PTR_FROM_JSON(newValue, newValue_);
      DARABONBA_PTR_FROM_JSON(oldValue, oldValue_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(parentEventId, parentEventId_);
      DARABONBA_PTR_FROM_JSON(property, property_);
      DARABONBA_PTR_FROM_JSON(resourceIdentifier, resourceIdentifier_);
    };
    GetWorkItemActivityResponseBodyActivities() = default ;
    GetWorkItemActivityResponseBodyActivities(const GetWorkItemActivityResponseBodyActivities &) = default ;
    GetWorkItemActivityResponseBodyActivities(GetWorkItemActivityResponseBodyActivities &&) = default ;
    GetWorkItemActivityResponseBodyActivities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkItemActivityResponseBodyActivities() = default ;
    GetWorkItemActivityResponseBodyActivities& operator=(const GetWorkItemActivityResponseBodyActivities &) = default ;
    GetWorkItemActivityResponseBodyActivities& operator=(GetWorkItemActivityResponseBodyActivities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && return this->eventId_ == nullptr && return this->eventTime_ == nullptr && return this->eventType_ == nullptr && return this->newValue_ == nullptr && return this->oldValue_ == nullptr
        && return this->operator_ == nullptr && return this->parentEventId_ == nullptr && return this->property_ == nullptr && return this->resourceIdentifier_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline GetWorkItemActivityResponseBodyActivities& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline int64_t eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
    inline GetWorkItemActivityResponseBodyActivities& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventTime Field Functions 
    bool hasEventTime() const { return this->eventTime_ != nullptr;};
    void deleteEventTime() { this->eventTime_ = nullptr;};
    inline int64_t eventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0L) };
    inline GetWorkItemActivityResponseBodyActivities& setEventTime(int64_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline GetWorkItemActivityResponseBodyActivities& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // newValue Field Functions 
    bool hasNewValue() const { return this->newValue_ != nullptr;};
    void deleteNewValue() { this->newValue_ = nullptr;};
    inline const vector<Models::GetWorkItemActivityResponseBodyActivitiesNewValue> & newValue() const { DARABONBA_PTR_GET_CONST(newValue_, vector<Models::GetWorkItemActivityResponseBodyActivitiesNewValue>) };
    inline vector<Models::GetWorkItemActivityResponseBodyActivitiesNewValue> newValue() { DARABONBA_PTR_GET(newValue_, vector<Models::GetWorkItemActivityResponseBodyActivitiesNewValue>) };
    inline GetWorkItemActivityResponseBodyActivities& setNewValue(const vector<Models::GetWorkItemActivityResponseBodyActivitiesNewValue> & newValue) { DARABONBA_PTR_SET_VALUE(newValue_, newValue) };
    inline GetWorkItemActivityResponseBodyActivities& setNewValue(vector<Models::GetWorkItemActivityResponseBodyActivitiesNewValue> && newValue) { DARABONBA_PTR_SET_RVALUE(newValue_, newValue) };


    // oldValue Field Functions 
    bool hasOldValue() const { return this->oldValue_ != nullptr;};
    void deleteOldValue() { this->oldValue_ = nullptr;};
    inline const vector<Models::GetWorkItemActivityResponseBodyActivitiesOldValue> & oldValue() const { DARABONBA_PTR_GET_CONST(oldValue_, vector<Models::GetWorkItemActivityResponseBodyActivitiesOldValue>) };
    inline vector<Models::GetWorkItemActivityResponseBodyActivitiesOldValue> oldValue() { DARABONBA_PTR_GET(oldValue_, vector<Models::GetWorkItemActivityResponseBodyActivitiesOldValue>) };
    inline GetWorkItemActivityResponseBodyActivities& setOldValue(const vector<Models::GetWorkItemActivityResponseBodyActivitiesOldValue> & oldValue) { DARABONBA_PTR_SET_VALUE(oldValue_, oldValue) };
    inline GetWorkItemActivityResponseBodyActivities& setOldValue(vector<Models::GetWorkItemActivityResponseBodyActivitiesOldValue> && oldValue) { DARABONBA_PTR_SET_RVALUE(oldValue_, oldValue) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline GetWorkItemActivityResponseBodyActivities& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // parentEventId Field Functions 
    bool hasParentEventId() const { return this->parentEventId_ != nullptr;};
    void deleteParentEventId() { this->parentEventId_ = nullptr;};
    inline int64_t parentEventId() const { DARABONBA_PTR_GET_DEFAULT(parentEventId_, 0L) };
    inline GetWorkItemActivityResponseBodyActivities& setParentEventId(int64_t parentEventId) { DARABONBA_PTR_SET_VALUE(parentEventId_, parentEventId) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline const Models::GetWorkItemActivityResponseBodyActivitiesProperty & property() const { DARABONBA_PTR_GET_CONST(property_, Models::GetWorkItemActivityResponseBodyActivitiesProperty) };
    inline Models::GetWorkItemActivityResponseBodyActivitiesProperty property() { DARABONBA_PTR_GET(property_, Models::GetWorkItemActivityResponseBodyActivitiesProperty) };
    inline GetWorkItemActivityResponseBodyActivities& setProperty(const Models::GetWorkItemActivityResponseBodyActivitiesProperty & property) { DARABONBA_PTR_SET_VALUE(property_, property) };
    inline GetWorkItemActivityResponseBodyActivities& setProperty(Models::GetWorkItemActivityResponseBodyActivitiesProperty && property) { DARABONBA_PTR_SET_RVALUE(property_, property) };


    // resourceIdentifier Field Functions 
    bool hasResourceIdentifier() const { return this->resourceIdentifier_ != nullptr;};
    void deleteResourceIdentifier() { this->resourceIdentifier_ = nullptr;};
    inline string resourceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceIdentifier_, "") };
    inline GetWorkItemActivityResponseBodyActivities& setResourceIdentifier(string resourceIdentifier) { DARABONBA_PTR_SET_VALUE(resourceIdentifier_, resourceIdentifier) };


  protected:
    std::shared_ptr<string> actionType_ = nullptr;
    std::shared_ptr<int64_t> eventId_ = nullptr;
    std::shared_ptr<int64_t> eventTime_ = nullptr;
    std::shared_ptr<string> eventType_ = nullptr;
    std::shared_ptr<vector<Models::GetWorkItemActivityResponseBodyActivitiesNewValue>> newValue_ = nullptr;
    std::shared_ptr<vector<Models::GetWorkItemActivityResponseBodyActivitiesOldValue>> oldValue_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<int64_t> parentEventId_ = nullptr;
    std::shared_ptr<Models::GetWorkItemActivityResponseBodyActivitiesProperty> property_ = nullptr;
    std::shared_ptr<string> resourceIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
