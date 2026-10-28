// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGUIDTASKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYGUIDTASKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class QueryGuidTaskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGuidTaskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GuideTaskConfigList, guideTaskConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGuidTaskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GuideTaskConfigList, guideTaskConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryGuidTaskListResponseBody() = default ;
    QueryGuidTaskListResponseBody(const QueryGuidTaskListResponseBody &) = default ;
    QueryGuidTaskListResponseBody(QueryGuidTaskListResponseBody &&) = default ;
    QueryGuidTaskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGuidTaskListResponseBody() = default ;
    QueryGuidTaskListResponseBody& operator=(const QueryGuidTaskListResponseBody &) = default ;
    QueryGuidTaskListResponseBody& operator=(QueryGuidTaskListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GuideTaskConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GuideTaskConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(RewardData, rewardData_);
        DARABONBA_PTR_TO_JSON(SecurityScore, securityScore_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskTypeName, taskTypeName_);
      };
      friend void from_json(const Darabonba::Json& j, GuideTaskConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(RewardData, rewardData_);
        DARABONBA_PTR_FROM_JSON(SecurityScore, securityScore_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskTypeName, taskTypeName_);
      };
      GuideTaskConfigList() = default ;
      GuideTaskConfigList(const GuideTaskConfigList &) = default ;
      GuideTaskConfigList(GuideTaskConfigList &&) = default ;
      GuideTaskConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GuideTaskConfigList() = default ;
      GuideTaskConfigList& operator=(const GuideTaskConfigList &) = default ;
      GuideTaskConfigList& operator=(GuideTaskConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RewardData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RewardData& obj) { 
          DARABONBA_PTR_TO_JSON(IsRewardTaked, isRewardTaked_);
          DARABONBA_PTR_TO_JSON(Reward, reward_);
          DARABONBA_PTR_TO_JSON(RewardConfig, rewardConfig_);
        };
        friend void from_json(const Darabonba::Json& j, RewardData& obj) { 
          DARABONBA_PTR_FROM_JSON(IsRewardTaked, isRewardTaked_);
          DARABONBA_PTR_FROM_JSON(Reward, reward_);
          DARABONBA_PTR_FROM_JSON(RewardConfig, rewardConfig_);
        };
        RewardData() = default ;
        RewardData(const RewardData &) = default ;
        RewardData(RewardData &&) = default ;
        RewardData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RewardData() = default ;
        RewardData& operator=(const RewardData &) = default ;
        RewardData& operator=(RewardData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->isRewardTaked_ == nullptr
        && this->reward_ == nullptr && this->rewardConfig_ == nullptr; };
        // isRewardTaked Field Functions 
        bool hasIsRewardTaked() const { return this->isRewardTaked_ != nullptr;};
        void deleteIsRewardTaked() { this->isRewardTaked_ = nullptr;};
        inline string getIsRewardTaked() const { DARABONBA_PTR_GET_DEFAULT(isRewardTaked_, "") };
        inline RewardData& setIsRewardTaked(string isRewardTaked) { DARABONBA_PTR_SET_VALUE(isRewardTaked_, isRewardTaked) };


        // reward Field Functions 
        bool hasReward() const { return this->reward_ != nullptr;};
        void deleteReward() { this->reward_ = nullptr;};
        inline string getReward() const { DARABONBA_PTR_GET_DEFAULT(reward_, "") };
        inline RewardData& setReward(string reward) { DARABONBA_PTR_SET_VALUE(reward_, reward) };


        // rewardConfig Field Functions 
        bool hasRewardConfig() const { return this->rewardConfig_ != nullptr;};
        void deleteRewardConfig() { this->rewardConfig_ = nullptr;};
        inline string getRewardConfig() const { DARABONBA_PTR_GET_DEFAULT(rewardConfig_, "") };
        inline RewardData& setRewardConfig(string rewardConfig) { DARABONBA_PTR_SET_VALUE(rewardConfig_, rewardConfig) };


      protected:
        // The claim status. Valid values:
        // - **1**: Unclaimed.
        // - **2**: Claimed.
        shared_ptr<string> isRewardTaked_ {};
        // The reward name. Valid values:
        // - **addTrialDay**: Add trial days
        // - **addAntiRansomwareCapacity**: Add anti-ransomware capacity
        // - **addImageScanAuthCount**: Add image scan authorizations
        // - **addWebLockAuthCount**: Add web tamper-proofing authorizations
        // - **addSlsCapacity**: Add log analysis storage space
        shared_ptr<string> reward_ {};
        // The reward configuration information. This parameter is in JSON format.
        // > The JSON key indicates the reward content, and the value indicates the reward amount. Valid values for the key:
        // - **webLockAuthCount**: Web tamper-proofing authorizations
        // - **ransomwareCapacity**: Anti-ransomware capacity, in GB
        // - **slsCapacity**: Log analysis capacity, in GB
        // - **days**: Number of days
        // - **imageScanAuthCount**: Image scan authorizations
        // - **honeypotAuthCount**: Cloud honeypot authorizations
        shared_ptr<string> rewardConfig_ {};
      };

      virtual bool empty() const override { return this->rewardData_ == nullptr
        && this->securityScore_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->taskTypeName_ == nullptr; };
      // rewardData Field Functions 
      bool hasRewardData() const { return this->rewardData_ != nullptr;};
      void deleteRewardData() { this->rewardData_ = nullptr;};
      inline const GuideTaskConfigList::RewardData & getRewardData() const { DARABONBA_PTR_GET_CONST(rewardData_, GuideTaskConfigList::RewardData) };
      inline GuideTaskConfigList::RewardData getRewardData() { DARABONBA_PTR_GET(rewardData_, GuideTaskConfigList::RewardData) };
      inline GuideTaskConfigList& setRewardData(const GuideTaskConfigList::RewardData & rewardData) { DARABONBA_PTR_SET_VALUE(rewardData_, rewardData) };
      inline GuideTaskConfigList& setRewardData(GuideTaskConfigList::RewardData && rewardData) { DARABONBA_PTR_SET_RVALUE(rewardData_, rewardData) };


      // securityScore Field Functions 
      bool hasSecurityScore() const { return this->securityScore_ != nullptr;};
      void deleteSecurityScore() { this->securityScore_ = nullptr;};
      inline int32_t getSecurityScore() const { DARABONBA_PTR_GET_DEFAULT(securityScore_, 0) };
      inline GuideTaskConfigList& setSecurityScore(int32_t securityScore) { DARABONBA_PTR_SET_VALUE(securityScore_, securityScore) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline GuideTaskConfigList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int32_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
      inline GuideTaskConfigList& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskTypeName Field Functions 
      bool hasTaskTypeName() const { return this->taskTypeName_ != nullptr;};
      void deleteTaskTypeName() { this->taskTypeName_ = nullptr;};
      inline string getTaskTypeName() const { DARABONBA_PTR_GET_DEFAULT(taskTypeName_, "") };
      inline GuideTaskConfigList& setTaskTypeName(string taskTypeName) { DARABONBA_PTR_SET_VALUE(taskTypeName_, taskTypeName) };


    protected:
      // The reward information for task completion.
      shared_ptr<GuideTaskConfigList::RewardData> rewardData_ {};
      // The points added to the security score upon task completion.
      shared_ptr<int32_t> securityScore_ {};
      // The task status. Valid values:
      // - **0**: Closed.
      // - **1**: In progress.
      // - **2**: Completed.
      shared_ptr<int32_t> status_ {};
      // The task ID.
      shared_ptr<int32_t> taskId_ {};
      // The task name. Valid values:
      // 
      // - **guid_task_security_score_promote_video**: Watch the quick start video task
      // - **guide_sub_task_config_defence_hbr**: Server anti-ransomware configuration task
      // - **guide_sub_task_config_uni_defence_hbr**: Database anti-ransomware configuration task
      // - **guid_task_log_analysis_config**: Log analysis task
      // - **guide_sub_task_web_lock_config**: Web tamper-proofing task
      // - **guide_sub_task_config_anti_crack**: Anti-brute-force attacks task
      // - **guid_task_container_security_video**: Container security video task
      // - **guid_task_container_image_scan_config**: Container image scanning task
      // - **guid_task_k8s_log_analysis_config**: Kubernetes threat detection task
      // - **guid_task_container_network**: Container visualization task
      // - **guide_sub_task_config_add_collection**: Add console to favorites task
      // - **guide_sub_task_vul_scan**: Vulnerability scanning task
      // - **guide_sub_task_virusKill**: Virus scan and removal task
      shared_ptr<string> taskTypeName_ {};
    };

    virtual bool empty() const override { return this->guideTaskConfigList_ == nullptr
        && this->requestId_ == nullptr; };
    // guideTaskConfigList Field Functions 
    bool hasGuideTaskConfigList() const { return this->guideTaskConfigList_ != nullptr;};
    void deleteGuideTaskConfigList() { this->guideTaskConfigList_ = nullptr;};
    inline const vector<QueryGuidTaskListResponseBody::GuideTaskConfigList> & getGuideTaskConfigList() const { DARABONBA_PTR_GET_CONST(guideTaskConfigList_, vector<QueryGuidTaskListResponseBody::GuideTaskConfigList>) };
    inline vector<QueryGuidTaskListResponseBody::GuideTaskConfigList> getGuideTaskConfigList() { DARABONBA_PTR_GET(guideTaskConfigList_, vector<QueryGuidTaskListResponseBody::GuideTaskConfigList>) };
    inline QueryGuidTaskListResponseBody& setGuideTaskConfigList(const vector<QueryGuidTaskListResponseBody::GuideTaskConfigList> & guideTaskConfigList) { DARABONBA_PTR_SET_VALUE(guideTaskConfigList_, guideTaskConfigList) };
    inline QueryGuidTaskListResponseBody& setGuideTaskConfigList(vector<QueryGuidTaskListResponseBody::GuideTaskConfigList> && guideTaskConfigList) { DARABONBA_PTR_SET_RVALUE(guideTaskConfigList_, guideTaskConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryGuidTaskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of onboarding task information.
    shared_ptr<vector<QueryGuidTaskListResponseBody::GuideTaskConfigList>> guideTaskConfigList_ {};
    // The ID of the request. The ID is a unique identifier generated by Alibaba Cloud for the request and can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
