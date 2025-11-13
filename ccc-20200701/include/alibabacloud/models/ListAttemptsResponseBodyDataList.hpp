// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTATTEMPTSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTATTEMPTSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListAttemptsResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAttemptsResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AgentEstablishedTime, agentEstablishedTime_);
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentRingDuration, agentRingDuration_);
      DARABONBA_PTR_TO_JSON(AssignAgentTime, assignAgentTime_);
      DARABONBA_PTR_TO_JSON(AttemptId, attemptId_);
      DARABONBA_PTR_TO_JSON(Callee, callee_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_TO_JSON(CaseId, caseId_);
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(CustomerEstablishedTime, customerEstablishedTime_);
      DARABONBA_PTR_TO_JSON(CustomerReleasedTime, customerReleasedTime_);
      DARABONBA_PTR_TO_JSON(DialDuration, dialDuration_);
      DARABONBA_PTR_TO_JSON(DialTime, dialTime_);
      DARABONBA_PTR_TO_JSON(EnqueueTime, enqueueTime_);
      DARABONBA_PTR_TO_JSON(EnterIvrTime, enterIvrTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IvrDuration, ivrDuration_);
      DARABONBA_PTR_TO_JSON(QueueDuration, queueDuration_);
      DARABONBA_PTR_TO_JSON(QueueId, queueId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAttemptsResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentEstablishedTime, agentEstablishedTime_);
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentRingDuration, agentRingDuration_);
      DARABONBA_PTR_FROM_JSON(AssignAgentTime, assignAgentTime_);
      DARABONBA_PTR_FROM_JSON(AttemptId, attemptId_);
      DARABONBA_PTR_FROM_JSON(Callee, callee_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(CampaignId, campaignId_);
      DARABONBA_PTR_FROM_JSON(CaseId, caseId_);
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(CustomerEstablishedTime, customerEstablishedTime_);
      DARABONBA_PTR_FROM_JSON(CustomerReleasedTime, customerReleasedTime_);
      DARABONBA_PTR_FROM_JSON(DialDuration, dialDuration_);
      DARABONBA_PTR_FROM_JSON(DialTime, dialTime_);
      DARABONBA_PTR_FROM_JSON(EnqueueTime, enqueueTime_);
      DARABONBA_PTR_FROM_JSON(EnterIvrTime, enterIvrTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IvrDuration, ivrDuration_);
      DARABONBA_PTR_FROM_JSON(QueueDuration, queueDuration_);
      DARABONBA_PTR_FROM_JSON(QueueId, queueId_);
    };
    ListAttemptsResponseBodyDataList() = default ;
    ListAttemptsResponseBodyDataList(const ListAttemptsResponseBodyDataList &) = default ;
    ListAttemptsResponseBodyDataList(ListAttemptsResponseBodyDataList &&) = default ;
    ListAttemptsResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAttemptsResponseBodyDataList() = default ;
    ListAttemptsResponseBodyDataList& operator=(const ListAttemptsResponseBodyDataList &) = default ;
    ListAttemptsResponseBodyDataList& operator=(ListAttemptsResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentEstablishedTime_ == nullptr
        && return this->agentId_ == nullptr && return this->agentRingDuration_ == nullptr && return this->assignAgentTime_ == nullptr && return this->attemptId_ == nullptr && return this->callee_ == nullptr
        && return this->caller_ == nullptr && return this->campaignId_ == nullptr && return this->caseId_ == nullptr && return this->contactId_ == nullptr && return this->customerEstablishedTime_ == nullptr
        && return this->customerReleasedTime_ == nullptr && return this->dialDuration_ == nullptr && return this->dialTime_ == nullptr && return this->enqueueTime_ == nullptr && return this->enterIvrTime_ == nullptr
        && return this->instanceId_ == nullptr && return this->ivrDuration_ == nullptr && return this->queueDuration_ == nullptr && return this->queueId_ == nullptr; };
    // agentEstablishedTime Field Functions 
    bool hasAgentEstablishedTime() const { return this->agentEstablishedTime_ != nullptr;};
    void deleteAgentEstablishedTime() { this->agentEstablishedTime_ = nullptr;};
    inline int64_t agentEstablishedTime() const { DARABONBA_PTR_GET_DEFAULT(agentEstablishedTime_, 0L) };
    inline ListAttemptsResponseBodyDataList& setAgentEstablishedTime(int64_t agentEstablishedTime) { DARABONBA_PTR_SET_VALUE(agentEstablishedTime_, agentEstablishedTime) };


    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline ListAttemptsResponseBodyDataList& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentRingDuration Field Functions 
    bool hasAgentRingDuration() const { return this->agentRingDuration_ != nullptr;};
    void deleteAgentRingDuration() { this->agentRingDuration_ = nullptr;};
    inline int64_t agentRingDuration() const { DARABONBA_PTR_GET_DEFAULT(agentRingDuration_, 0L) };
    inline ListAttemptsResponseBodyDataList& setAgentRingDuration(int64_t agentRingDuration) { DARABONBA_PTR_SET_VALUE(agentRingDuration_, agentRingDuration) };


    // assignAgentTime Field Functions 
    bool hasAssignAgentTime() const { return this->assignAgentTime_ != nullptr;};
    void deleteAssignAgentTime() { this->assignAgentTime_ = nullptr;};
    inline int64_t assignAgentTime() const { DARABONBA_PTR_GET_DEFAULT(assignAgentTime_, 0L) };
    inline ListAttemptsResponseBodyDataList& setAssignAgentTime(int64_t assignAgentTime) { DARABONBA_PTR_SET_VALUE(assignAgentTime_, assignAgentTime) };


    // attemptId Field Functions 
    bool hasAttemptId() const { return this->attemptId_ != nullptr;};
    void deleteAttemptId() { this->attemptId_ = nullptr;};
    inline string attemptId() const { DARABONBA_PTR_GET_DEFAULT(attemptId_, "") };
    inline ListAttemptsResponseBodyDataList& setAttemptId(string attemptId) { DARABONBA_PTR_SET_VALUE(attemptId_, attemptId) };


    // callee Field Functions 
    bool hasCallee() const { return this->callee_ != nullptr;};
    void deleteCallee() { this->callee_ = nullptr;};
    inline string callee() const { DARABONBA_PTR_GET_DEFAULT(callee_, "") };
    inline ListAttemptsResponseBodyDataList& setCallee(string callee) { DARABONBA_PTR_SET_VALUE(callee_, callee) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string caller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline ListAttemptsResponseBodyDataList& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // campaignId Field Functions 
    bool hasCampaignId() const { return this->campaignId_ != nullptr;};
    void deleteCampaignId() { this->campaignId_ = nullptr;};
    inline string campaignId() const { DARABONBA_PTR_GET_DEFAULT(campaignId_, "") };
    inline ListAttemptsResponseBodyDataList& setCampaignId(string campaignId) { DARABONBA_PTR_SET_VALUE(campaignId_, campaignId) };


    // caseId Field Functions 
    bool hasCaseId() const { return this->caseId_ != nullptr;};
    void deleteCaseId() { this->caseId_ = nullptr;};
    inline string caseId() const { DARABONBA_PTR_GET_DEFAULT(caseId_, "") };
    inline ListAttemptsResponseBodyDataList& setCaseId(string caseId) { DARABONBA_PTR_SET_VALUE(caseId_, caseId) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline ListAttemptsResponseBodyDataList& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // customerEstablishedTime Field Functions 
    bool hasCustomerEstablishedTime() const { return this->customerEstablishedTime_ != nullptr;};
    void deleteCustomerEstablishedTime() { this->customerEstablishedTime_ = nullptr;};
    inline int64_t customerEstablishedTime() const { DARABONBA_PTR_GET_DEFAULT(customerEstablishedTime_, 0L) };
    inline ListAttemptsResponseBodyDataList& setCustomerEstablishedTime(int64_t customerEstablishedTime) { DARABONBA_PTR_SET_VALUE(customerEstablishedTime_, customerEstablishedTime) };


    // customerReleasedTime Field Functions 
    bool hasCustomerReleasedTime() const { return this->customerReleasedTime_ != nullptr;};
    void deleteCustomerReleasedTime() { this->customerReleasedTime_ = nullptr;};
    inline int64_t customerReleasedTime() const { DARABONBA_PTR_GET_DEFAULT(customerReleasedTime_, 0L) };
    inline ListAttemptsResponseBodyDataList& setCustomerReleasedTime(int64_t customerReleasedTime) { DARABONBA_PTR_SET_VALUE(customerReleasedTime_, customerReleasedTime) };


    // dialDuration Field Functions 
    bool hasDialDuration() const { return this->dialDuration_ != nullptr;};
    void deleteDialDuration() { this->dialDuration_ = nullptr;};
    inline int64_t dialDuration() const { DARABONBA_PTR_GET_DEFAULT(dialDuration_, 0L) };
    inline ListAttemptsResponseBodyDataList& setDialDuration(int64_t dialDuration) { DARABONBA_PTR_SET_VALUE(dialDuration_, dialDuration) };


    // dialTime Field Functions 
    bool hasDialTime() const { return this->dialTime_ != nullptr;};
    void deleteDialTime() { this->dialTime_ = nullptr;};
    inline int64_t dialTime() const { DARABONBA_PTR_GET_DEFAULT(dialTime_, 0L) };
    inline ListAttemptsResponseBodyDataList& setDialTime(int64_t dialTime) { DARABONBA_PTR_SET_VALUE(dialTime_, dialTime) };


    // enqueueTime Field Functions 
    bool hasEnqueueTime() const { return this->enqueueTime_ != nullptr;};
    void deleteEnqueueTime() { this->enqueueTime_ = nullptr;};
    inline int64_t enqueueTime() const { DARABONBA_PTR_GET_DEFAULT(enqueueTime_, 0L) };
    inline ListAttemptsResponseBodyDataList& setEnqueueTime(int64_t enqueueTime) { DARABONBA_PTR_SET_VALUE(enqueueTime_, enqueueTime) };


    // enterIvrTime Field Functions 
    bool hasEnterIvrTime() const { return this->enterIvrTime_ != nullptr;};
    void deleteEnterIvrTime() { this->enterIvrTime_ = nullptr;};
    inline int64_t enterIvrTime() const { DARABONBA_PTR_GET_DEFAULT(enterIvrTime_, 0L) };
    inline ListAttemptsResponseBodyDataList& setEnterIvrTime(int64_t enterIvrTime) { DARABONBA_PTR_SET_VALUE(enterIvrTime_, enterIvrTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAttemptsResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ivrDuration Field Functions 
    bool hasIvrDuration() const { return this->ivrDuration_ != nullptr;};
    void deleteIvrDuration() { this->ivrDuration_ = nullptr;};
    inline int64_t ivrDuration() const { DARABONBA_PTR_GET_DEFAULT(ivrDuration_, 0L) };
    inline ListAttemptsResponseBodyDataList& setIvrDuration(int64_t ivrDuration) { DARABONBA_PTR_SET_VALUE(ivrDuration_, ivrDuration) };


    // queueDuration Field Functions 
    bool hasQueueDuration() const { return this->queueDuration_ != nullptr;};
    void deleteQueueDuration() { this->queueDuration_ = nullptr;};
    inline int64_t queueDuration() const { DARABONBA_PTR_GET_DEFAULT(queueDuration_, 0L) };
    inline ListAttemptsResponseBodyDataList& setQueueDuration(int64_t queueDuration) { DARABONBA_PTR_SET_VALUE(queueDuration_, queueDuration) };


    // queueId Field Functions 
    bool hasQueueId() const { return this->queueId_ != nullptr;};
    void deleteQueueId() { this->queueId_ = nullptr;};
    inline string queueId() const { DARABONBA_PTR_GET_DEFAULT(queueId_, "") };
    inline ListAttemptsResponseBodyDataList& setQueueId(string queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };


  protected:
    std::shared_ptr<int64_t> agentEstablishedTime_ = nullptr;
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<int64_t> agentRingDuration_ = nullptr;
    std::shared_ptr<int64_t> assignAgentTime_ = nullptr;
    std::shared_ptr<string> attemptId_ = nullptr;
    std::shared_ptr<string> callee_ = nullptr;
    std::shared_ptr<string> caller_ = nullptr;
    std::shared_ptr<string> campaignId_ = nullptr;
    std::shared_ptr<string> caseId_ = nullptr;
    std::shared_ptr<string> contactId_ = nullptr;
    std::shared_ptr<int64_t> customerEstablishedTime_ = nullptr;
    std::shared_ptr<int64_t> customerReleasedTime_ = nullptr;
    std::shared_ptr<int64_t> dialDuration_ = nullptr;
    std::shared_ptr<int64_t> dialTime_ = nullptr;
    std::shared_ptr<int64_t> enqueueTime_ = nullptr;
    std::shared_ptr<int64_t> enterIvrTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> ivrDuration_ = nullptr;
    std::shared_ptr<int64_t> queueDuration_ = nullptr;
    std::shared_ptr<string> queueId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
