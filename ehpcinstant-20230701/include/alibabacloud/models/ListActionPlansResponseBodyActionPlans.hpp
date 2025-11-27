// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIONPLANSRESPONSEBODYACTIONPLANS_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIONPLANSRESPONSEBODYACTIONPLANS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListActionPlansResponseBodyActionPlans : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActionPlansResponseBodyActionPlans& obj) { 
      DARABONBA_PTR_TO_JSON(ActionPlanId, actionPlanId_);
      DARABONBA_PTR_TO_JSON(ActionPlanName, actionPlanName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListActionPlansResponseBodyActionPlans& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionPlanId, actionPlanId_);
      DARABONBA_PTR_FROM_JSON(ActionPlanName, actionPlanName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListActionPlansResponseBodyActionPlans() = default ;
    ListActionPlansResponseBodyActionPlans(const ListActionPlansResponseBodyActionPlans &) = default ;
    ListActionPlansResponseBodyActionPlans(ListActionPlansResponseBodyActionPlans &&) = default ;
    ListActionPlansResponseBodyActionPlans(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActionPlansResponseBodyActionPlans() = default ;
    ListActionPlansResponseBodyActionPlans& operator=(const ListActionPlansResponseBodyActionPlans &) = default ;
    ListActionPlansResponseBodyActionPlans& operator=(ListActionPlansResponseBodyActionPlans &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionPlanId_ == nullptr
        && return this->actionPlanName_ == nullptr && return this->createTime_ == nullptr && return this->status_ == nullptr && return this->updateTime_ == nullptr; };
    // actionPlanId Field Functions 
    bool hasActionPlanId() const { return this->actionPlanId_ != nullptr;};
    void deleteActionPlanId() { this->actionPlanId_ = nullptr;};
    inline string actionPlanId() const { DARABONBA_PTR_GET_DEFAULT(actionPlanId_, "") };
    inline ListActionPlansResponseBodyActionPlans& setActionPlanId(string actionPlanId) { DARABONBA_PTR_SET_VALUE(actionPlanId_, actionPlanId) };


    // actionPlanName Field Functions 
    bool hasActionPlanName() const { return this->actionPlanName_ != nullptr;};
    void deleteActionPlanName() { this->actionPlanName_ = nullptr;};
    inline string actionPlanName() const { DARABONBA_PTR_GET_DEFAULT(actionPlanName_, "") };
    inline ListActionPlansResponseBodyActionPlans& setActionPlanName(string actionPlanName) { DARABONBA_PTR_SET_VALUE(actionPlanName_, actionPlanName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListActionPlansResponseBodyActionPlans& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListActionPlansResponseBodyActionPlans& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListActionPlansResponseBodyActionPlans& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The ID of the execution plan.
    std::shared_ptr<string> actionPlanId_ = nullptr;
    // The name of the execution plan.
    std::shared_ptr<string> actionPlanName_ = nullptr;
    // The time when the execution plan was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The status of the execution plan. The possible values are as follows:
    // 
    // *   Active Instant tasks are dynamically managed only when the execution plan is in the Active state.
    // *   Inactive Instant tasks are no longer managed by execution plans in the Inactive state.
    // *   Deleting: The execution plan is being deleted. You cannot modify the parameters of an execution plan in this state.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the execution plan was last modified. The time follows the ISO 8601 standard and UTC +0. The format is yyyy-MM-ddTHH:mmZ.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
