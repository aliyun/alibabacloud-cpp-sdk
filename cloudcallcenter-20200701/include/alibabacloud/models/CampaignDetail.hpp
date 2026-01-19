// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CAMPAIGNDETAIL_HPP_
#define ALIBABACLOUD_MODELS_CAMPAIGNDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudCallCenter20200701
{
namespace Models
{
  class CampaignDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CampaignDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ActualEndTime, actualEndTime_);
      DARABONBA_PTR_TO_JSON(ActualStartTime, actualStartTime_);
      DARABONBA_PTR_TO_JSON(CasesAborted, casesAborted_);
      DARABONBA_PTR_TO_JSON(CasesConnected, casesConnected_);
      DARABONBA_PTR_TO_JSON(CasesUncompleted, casesUncompleted_);
      DARABONBA_PTR_TO_JSON(CompletedRate, completedRate_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MaxAttemptCount, maxAttemptCount_);
      DARABONBA_PTR_TO_JSON(MinAttemptInterval, minAttemptInterval_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PlanedEndTime, planedEndTime_);
      DARABONBA_PTR_TO_JSON(PlanedStartTime, planedStartTime_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TotalCases, totalCases_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, CampaignDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualEndTime, actualEndTime_);
      DARABONBA_PTR_FROM_JSON(ActualStartTime, actualStartTime_);
      DARABONBA_PTR_FROM_JSON(CasesAborted, casesAborted_);
      DARABONBA_PTR_FROM_JSON(CasesConnected, casesConnected_);
      DARABONBA_PTR_FROM_JSON(CasesUncompleted, casesUncompleted_);
      DARABONBA_PTR_FROM_JSON(CompletedRate, completedRate_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MaxAttemptCount, maxAttemptCount_);
      DARABONBA_PTR_FROM_JSON(MinAttemptInterval, minAttemptInterval_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PlanedEndTime, planedEndTime_);
      DARABONBA_PTR_FROM_JSON(PlanedStartTime, planedStartTime_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TotalCases, totalCases_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    CampaignDetail() = default ;
    CampaignDetail(const CampaignDetail &) = default ;
    CampaignDetail(CampaignDetail &&) = default ;
    CampaignDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CampaignDetail() = default ;
    CampaignDetail& operator=(const CampaignDetail &) = default ;
    CampaignDetail& operator=(CampaignDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualEndTime_ == nullptr
        && this->actualStartTime_ == nullptr && this->casesAborted_ == nullptr && this->casesConnected_ == nullptr && this->casesUncompleted_ == nullptr && this->completedRate_ == nullptr
        && this->createTime_ == nullptr && this->id_ == nullptr && this->maxAttemptCount_ == nullptr && this->minAttemptInterval_ == nullptr && this->name_ == nullptr
        && this->planedEndTime_ == nullptr && this->planedStartTime_ == nullptr && this->queueName_ == nullptr && this->state_ == nullptr && this->totalCases_ == nullptr
        && this->updateTime_ == nullptr; };
    // actualEndTime Field Functions 
    bool hasActualEndTime() const { return this->actualEndTime_ != nullptr;};
    void deleteActualEndTime() { this->actualEndTime_ = nullptr;};
    inline int64_t getActualEndTime() const { DARABONBA_PTR_GET_DEFAULT(actualEndTime_, 0L) };
    inline CampaignDetail& setActualEndTime(int64_t actualEndTime) { DARABONBA_PTR_SET_VALUE(actualEndTime_, actualEndTime) };


    // actualStartTime Field Functions 
    bool hasActualStartTime() const { return this->actualStartTime_ != nullptr;};
    void deleteActualStartTime() { this->actualStartTime_ = nullptr;};
    inline int64_t getActualStartTime() const { DARABONBA_PTR_GET_DEFAULT(actualStartTime_, 0L) };
    inline CampaignDetail& setActualStartTime(int64_t actualStartTime) { DARABONBA_PTR_SET_VALUE(actualStartTime_, actualStartTime) };


    // casesAborted Field Functions 
    bool hasCasesAborted() const { return this->casesAborted_ != nullptr;};
    void deleteCasesAborted() { this->casesAborted_ = nullptr;};
    inline int64_t getCasesAborted() const { DARABONBA_PTR_GET_DEFAULT(casesAborted_, 0L) };
    inline CampaignDetail& setCasesAborted(int64_t casesAborted) { DARABONBA_PTR_SET_VALUE(casesAborted_, casesAborted) };


    // casesConnected Field Functions 
    bool hasCasesConnected() const { return this->casesConnected_ != nullptr;};
    void deleteCasesConnected() { this->casesConnected_ = nullptr;};
    inline int64_t getCasesConnected() const { DARABONBA_PTR_GET_DEFAULT(casesConnected_, 0L) };
    inline CampaignDetail& setCasesConnected(int64_t casesConnected) { DARABONBA_PTR_SET_VALUE(casesConnected_, casesConnected) };


    // casesUncompleted Field Functions 
    bool hasCasesUncompleted() const { return this->casesUncompleted_ != nullptr;};
    void deleteCasesUncompleted() { this->casesUncompleted_ = nullptr;};
    inline int64_t getCasesUncompleted() const { DARABONBA_PTR_GET_DEFAULT(casesUncompleted_, 0L) };
    inline CampaignDetail& setCasesUncompleted(int64_t casesUncompleted) { DARABONBA_PTR_SET_VALUE(casesUncompleted_, casesUncompleted) };


    // completedRate Field Functions 
    bool hasCompletedRate() const { return this->completedRate_ != nullptr;};
    void deleteCompletedRate() { this->completedRate_ = nullptr;};
    inline int64_t getCompletedRate() const { DARABONBA_PTR_GET_DEFAULT(completedRate_, 0L) };
    inline CampaignDetail& setCompletedRate(int64_t completedRate) { DARABONBA_PTR_SET_VALUE(completedRate_, completedRate) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline CampaignDetail& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CampaignDetail& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // maxAttemptCount Field Functions 
    bool hasMaxAttemptCount() const { return this->maxAttemptCount_ != nullptr;};
    void deleteMaxAttemptCount() { this->maxAttemptCount_ = nullptr;};
    inline int64_t getMaxAttemptCount() const { DARABONBA_PTR_GET_DEFAULT(maxAttemptCount_, 0L) };
    inline CampaignDetail& setMaxAttemptCount(int64_t maxAttemptCount) { DARABONBA_PTR_SET_VALUE(maxAttemptCount_, maxAttemptCount) };


    // minAttemptInterval Field Functions 
    bool hasMinAttemptInterval() const { return this->minAttemptInterval_ != nullptr;};
    void deleteMinAttemptInterval() { this->minAttemptInterval_ = nullptr;};
    inline int64_t getMinAttemptInterval() const { DARABONBA_PTR_GET_DEFAULT(minAttemptInterval_, 0L) };
    inline CampaignDetail& setMinAttemptInterval(int64_t minAttemptInterval) { DARABONBA_PTR_SET_VALUE(minAttemptInterval_, minAttemptInterval) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CampaignDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // planedEndTime Field Functions 
    bool hasPlanedEndTime() const { return this->planedEndTime_ != nullptr;};
    void deletePlanedEndTime() { this->planedEndTime_ = nullptr;};
    inline int64_t getPlanedEndTime() const { DARABONBA_PTR_GET_DEFAULT(planedEndTime_, 0L) };
    inline CampaignDetail& setPlanedEndTime(int64_t planedEndTime) { DARABONBA_PTR_SET_VALUE(planedEndTime_, planedEndTime) };


    // planedStartTime Field Functions 
    bool hasPlanedStartTime() const { return this->planedStartTime_ != nullptr;};
    void deletePlanedStartTime() { this->planedStartTime_ = nullptr;};
    inline int64_t getPlanedStartTime() const { DARABONBA_PTR_GET_DEFAULT(planedStartTime_, 0L) };
    inline CampaignDetail& setPlanedStartTime(int64_t planedStartTime) { DARABONBA_PTR_SET_VALUE(planedStartTime_, planedStartTime) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline CampaignDetail& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CampaignDetail& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // totalCases Field Functions 
    bool hasTotalCases() const { return this->totalCases_ != nullptr;};
    void deleteTotalCases() { this->totalCases_ = nullptr;};
    inline int64_t getTotalCases() const { DARABONBA_PTR_GET_DEFAULT(totalCases_, 0L) };
    inline CampaignDetail& setTotalCases(int64_t totalCases) { DARABONBA_PTR_SET_VALUE(totalCases_, totalCases) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline CampaignDetail& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    shared_ptr<int64_t> actualEndTime_ {};
    shared_ptr<int64_t> actualStartTime_ {};
    shared_ptr<int64_t> casesAborted_ {};
    shared_ptr<int64_t> casesConnected_ {};
    shared_ptr<int64_t> casesUncompleted_ {};
    shared_ptr<int64_t> completedRate_ {};
    shared_ptr<int64_t> createTime_ {};
    shared_ptr<string> id_ {};
    shared_ptr<int64_t> maxAttemptCount_ {};
    shared_ptr<int64_t> minAttemptInterval_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> planedEndTime_ {};
    shared_ptr<int64_t> planedStartTime_ {};
    shared_ptr<string> queueName_ {};
    shared_ptr<string> state_ {};
    shared_ptr<int64_t> totalCases_ {};
    shared_ptr<int64_t> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudCallCenter20200701
#endif
