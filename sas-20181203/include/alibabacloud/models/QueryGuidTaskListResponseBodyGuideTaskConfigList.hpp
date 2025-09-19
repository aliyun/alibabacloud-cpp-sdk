// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGUIDTASKLISTRESPONSEBODYGUIDETASKCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYGUIDTASKLISTRESPONSEBODYGUIDETASKCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class QueryGuidTaskListResponseBodyGuideTaskConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGuidTaskListResponseBodyGuideTaskConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(RewardData, rewardData_);
      DARABONBA_PTR_TO_JSON(SecurityScore, securityScore_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskTypeName, taskTypeName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGuidTaskListResponseBodyGuideTaskConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(RewardData, rewardData_);
      DARABONBA_PTR_FROM_JSON(SecurityScore, securityScore_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskTypeName, taskTypeName_);
    };
    QueryGuidTaskListResponseBodyGuideTaskConfigList() = default ;
    QueryGuidTaskListResponseBodyGuideTaskConfigList(const QueryGuidTaskListResponseBodyGuideTaskConfigList &) = default ;
    QueryGuidTaskListResponseBodyGuideTaskConfigList(QueryGuidTaskListResponseBodyGuideTaskConfigList &&) = default ;
    QueryGuidTaskListResponseBodyGuideTaskConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGuidTaskListResponseBodyGuideTaskConfigList() = default ;
    QueryGuidTaskListResponseBodyGuideTaskConfigList& operator=(const QueryGuidTaskListResponseBodyGuideTaskConfigList &) = default ;
    QueryGuidTaskListResponseBodyGuideTaskConfigList& operator=(QueryGuidTaskListResponseBodyGuideTaskConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rewardData_ != nullptr
        && this->securityScore_ != nullptr && this->status_ != nullptr && this->taskId_ != nullptr && this->taskTypeName_ != nullptr; };
    // rewardData Field Functions 
    bool hasRewardData() const { return this->rewardData_ != nullptr;};
    void deleteRewardData() { this->rewardData_ = nullptr;};
    inline const Models::QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData & rewardData() const { DARABONBA_PTR_GET_CONST(rewardData_, Models::QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData) };
    inline Models::QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData rewardData() { DARABONBA_PTR_GET(rewardData_, Models::QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData) };
    inline QueryGuidTaskListResponseBodyGuideTaskConfigList& setRewardData(const Models::QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData & rewardData) { DARABONBA_PTR_SET_VALUE(rewardData_, rewardData) };
    inline QueryGuidTaskListResponseBodyGuideTaskConfigList& setRewardData(Models::QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData && rewardData) { DARABONBA_PTR_SET_RVALUE(rewardData_, rewardData) };


    // securityScore Field Functions 
    bool hasSecurityScore() const { return this->securityScore_ != nullptr;};
    void deleteSecurityScore() { this->securityScore_ = nullptr;};
    inline int32_t securityScore() const { DARABONBA_PTR_GET_DEFAULT(securityScore_, 0) };
    inline QueryGuidTaskListResponseBodyGuideTaskConfigList& setSecurityScore(int32_t securityScore) { DARABONBA_PTR_SET_VALUE(securityScore_, securityScore) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryGuidTaskListResponseBodyGuideTaskConfigList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int32_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
    inline QueryGuidTaskListResponseBodyGuideTaskConfigList& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskTypeName Field Functions 
    bool hasTaskTypeName() const { return this->taskTypeName_ != nullptr;};
    void deleteTaskTypeName() { this->taskTypeName_ = nullptr;};
    inline string taskTypeName() const { DARABONBA_PTR_GET_DEFAULT(taskTypeName_, "") };
    inline QueryGuidTaskListResponseBodyGuideTaskConfigList& setTaskTypeName(string taskTypeName) { DARABONBA_PTR_SET_VALUE(taskTypeName_, taskTypeName) };


  protected:
    // The information about the reward for a complete task.
    std::shared_ptr<Models::QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData> rewardData_ = nullptr;
    // The security score that is increased after you complete the task.
    std::shared_ptr<int32_t> securityScore_ = nullptr;
    // The status of the beginner task. Valid values:
    // 
    // *   **0**: disabled.
    // *   **1**: in progress.
    // *   **2**: complete.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The ID of the beginner task.
    std::shared_ptr<int32_t> taskId_ = nullptr;
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
    std::shared_ptr<string> taskTypeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
