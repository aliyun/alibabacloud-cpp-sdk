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
        // Indicates whether the reward is claimed. Valid values:
        // 
        // *   **1**: no.
        // *   **2**: yes.
        shared_ptr<string> isRewardTaked_ {};
        // The name of the reward. Valid values:
        // 
        // *   **addTrialDay**: the days of trial use.
        // *   **addAntiRansomwareCapacity**: the anti-ransomware capacity.
        // *   **addImageScanAuthCount**: the quota for container image scan.
        // *   **addWebLockAuthCount**: the quota for web tamper proofing.
        // *   **addSlsCapacity**: the log storage capacity.
        shared_ptr<string> reward_ {};
        // The reward configuration. The value of this parameter is in the JSON format.
        // 
        // >  The key indicates the reward type, and the value indicates the number of rewards. Valid values of key:
        // 
        // *   **webLockAuthCount**: the quota for web tamper proofing.
        // *   **webLockAuthCount**: the anti-ransomware capacity. Unit: GB.
        // *   **slsCapacity**: the log storage capacity. Unit: GB.
        // *   **days**: the days of trial use.
        // *   **imageScanAuthCount**: the quota for container image scan.
        // *   **honeypotAuthCount**: the quota for cloud honeypot.
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
      // The information about the reward for a complete task.
      shared_ptr<GuideTaskConfigList::RewardData> rewardData_ {};
      // The security score that is increased after you complete the task.
      shared_ptr<int32_t> securityScore_ {};
      // The status of the beginner task. Valid values:
      // 
      // *   **0**: disabled.
      // *   **1**: in progress.
      // *   **2**: complete.
      shared_ptr<int32_t> status_ {};
      // The ID of the beginner task.
      shared_ptr<int32_t> taskId_ {};
      // The name of the task type. Valid values:
      // 
      // *   **guid_task_security_score_promote_video**: the task of viewing a video tutorial for beginners.
      // *   **guide_sub_task_config_defence_hbr**: the task of configuring anti-ransomware for servers.
      // *   **guide_sub_task_config_uni_defence_hbr**: the task of configuring anti-ransomware for databases.
      // *   **guid_task_log_analysis_config**: the task of configuring log analysis.
      // *   **guide_sub_task_web_lock_config**: the task of configuring web tamper proofing.
      // *   **guide_sub_task_config_anti_crack**: the task of configuring protection against brute-force attacks.
      // *   **guid_task_container_security_video**: the task of viewing the video on how to protect containers.
      // *   **guid_task_container_image_scan_config**: the task of configuring container image scan.
      // *   **guid_task_k8s_log_analysis_config**: the task of configuring threat detection on Kubernetes containers.
      // *   **guid_task_container_network**: the task of configuring container network visualization.
      // *   **guide_sub_task_config_add_collection**: the task of saving a console URL.
      // *   **guide_sub_task_vul_scan**: the task of scanning for vulnerabilities.
      // *   **guide_sub_task_virusKill**: the task of configuring virus detection and removal.
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
    // The list of beginner tasks.
    shared_ptr<vector<QueryGuidTaskListResponseBody::GuideTaskConfigList>> guideTaskConfigList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
