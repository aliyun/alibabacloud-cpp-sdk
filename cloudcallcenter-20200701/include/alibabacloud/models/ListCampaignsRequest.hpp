// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCAMPAIGNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCAMPAIGNSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudCallCenter20200701
{
namespace Models
{
  class ListCampaignsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCampaignsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActualStartTimeFrom, actualStartTimeFrom_);
      DARABONBA_PTR_TO_JSON(ActualStartTimeTo, actualStartTimeTo_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PlanedStartTimeFrom, planedStartTimeFrom_);
      DARABONBA_PTR_TO_JSON(PlanedStartTimeTo, planedStartTimeTo_);
      DARABONBA_PTR_TO_JSON(QueueId, queueId_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListCampaignsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualStartTimeFrom, actualStartTimeFrom_);
      DARABONBA_PTR_FROM_JSON(ActualStartTimeTo, actualStartTimeTo_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PlanedStartTimeFrom, planedStartTimeFrom_);
      DARABONBA_PTR_FROM_JSON(PlanedStartTimeTo, planedStartTimeTo_);
      DARABONBA_PTR_FROM_JSON(QueueId, queueId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    ListCampaignsRequest() = default ;
    ListCampaignsRequest(const ListCampaignsRequest &) = default ;
    ListCampaignsRequest(ListCampaignsRequest &&) = default ;
    ListCampaignsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCampaignsRequest() = default ;
    ListCampaignsRequest& operator=(const ListCampaignsRequest &) = default ;
    ListCampaignsRequest& operator=(ListCampaignsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualStartTimeFrom_ == nullptr
        && this->actualStartTimeTo_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->planedStartTimeFrom_ == nullptr && this->planedStartTimeTo_ == nullptr && this->queueId_ == nullptr && this->state_ == nullptr; };
    // actualStartTimeFrom Field Functions 
    bool hasActualStartTimeFrom() const { return this->actualStartTimeFrom_ != nullptr;};
    void deleteActualStartTimeFrom() { this->actualStartTimeFrom_ = nullptr;};
    inline string getActualStartTimeFrom() const { DARABONBA_PTR_GET_DEFAULT(actualStartTimeFrom_, "") };
    inline ListCampaignsRequest& setActualStartTimeFrom(string actualStartTimeFrom) { DARABONBA_PTR_SET_VALUE(actualStartTimeFrom_, actualStartTimeFrom) };


    // actualStartTimeTo Field Functions 
    bool hasActualStartTimeTo() const { return this->actualStartTimeTo_ != nullptr;};
    void deleteActualStartTimeTo() { this->actualStartTimeTo_ = nullptr;};
    inline string getActualStartTimeTo() const { DARABONBA_PTR_GET_DEFAULT(actualStartTimeTo_, "") };
    inline ListCampaignsRequest& setActualStartTimeTo(string actualStartTimeTo) { DARABONBA_PTR_SET_VALUE(actualStartTimeTo_, actualStartTimeTo) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCampaignsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCampaignsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListCampaignsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListCampaignsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // planedStartTimeFrom Field Functions 
    bool hasPlanedStartTimeFrom() const { return this->planedStartTimeFrom_ != nullptr;};
    void deletePlanedStartTimeFrom() { this->planedStartTimeFrom_ = nullptr;};
    inline string getPlanedStartTimeFrom() const { DARABONBA_PTR_GET_DEFAULT(planedStartTimeFrom_, "") };
    inline ListCampaignsRequest& setPlanedStartTimeFrom(string planedStartTimeFrom) { DARABONBA_PTR_SET_VALUE(planedStartTimeFrom_, planedStartTimeFrom) };


    // planedStartTimeTo Field Functions 
    bool hasPlanedStartTimeTo() const { return this->planedStartTimeTo_ != nullptr;};
    void deletePlanedStartTimeTo() { this->planedStartTimeTo_ = nullptr;};
    inline string getPlanedStartTimeTo() const { DARABONBA_PTR_GET_DEFAULT(planedStartTimeTo_, "") };
    inline ListCampaignsRequest& setPlanedStartTimeTo(string planedStartTimeTo) { DARABONBA_PTR_SET_VALUE(planedStartTimeTo_, planedStartTimeTo) };


    // queueId Field Functions 
    bool hasQueueId() const { return this->queueId_ != nullptr;};
    void deleteQueueId() { this->queueId_ = nullptr;};
    inline string getQueueId() const { DARABONBA_PTR_GET_DEFAULT(queueId_, "") };
    inline ListCampaignsRequest& setQueueId(string queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListCampaignsRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    shared_ptr<string> actualStartTimeFrom_ {};
    shared_ptr<string> actualStartTimeTo_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> planedStartTimeFrom_ {};
    shared_ptr<string> planedStartTimeTo_ {};
    shared_ptr<string> queueId_ {};
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudCallCenter20200701
#endif
