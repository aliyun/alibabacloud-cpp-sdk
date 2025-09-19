// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGUIDTASKLISTRESPONSEBODYGUIDETASKCONFIGLISTREWARDDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYGUIDTASKLISTRESPONSEBODYGUIDETASKCONFIGLISTREWARDDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData& obj) { 
      DARABONBA_PTR_TO_JSON(IsRewardTaked, isRewardTaked_);
      DARABONBA_PTR_TO_JSON(Reward, reward_);
      DARABONBA_PTR_TO_JSON(RewardConfig, rewardConfig_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData& obj) { 
      DARABONBA_PTR_FROM_JSON(IsRewardTaked, isRewardTaked_);
      DARABONBA_PTR_FROM_JSON(Reward, reward_);
      DARABONBA_PTR_FROM_JSON(RewardConfig, rewardConfig_);
    };
    QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData() = default ;
    QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData(const QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData &) = default ;
    QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData(QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData &&) = default ;
    QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData() = default ;
    QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData& operator=(const QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData &) = default ;
    QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData& operator=(QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isRewardTaked_ != nullptr
        && this->reward_ != nullptr && this->rewardConfig_ != nullptr; };
    // isRewardTaked Field Functions 
    bool hasIsRewardTaked() const { return this->isRewardTaked_ != nullptr;};
    void deleteIsRewardTaked() { this->isRewardTaked_ = nullptr;};
    inline string isRewardTaked() const { DARABONBA_PTR_GET_DEFAULT(isRewardTaked_, "") };
    inline QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData& setIsRewardTaked(string isRewardTaked) { DARABONBA_PTR_SET_VALUE(isRewardTaked_, isRewardTaked) };


    // reward Field Functions 
    bool hasReward() const { return this->reward_ != nullptr;};
    void deleteReward() { this->reward_ = nullptr;};
    inline string reward() const { DARABONBA_PTR_GET_DEFAULT(reward_, "") };
    inline QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData& setReward(string reward) { DARABONBA_PTR_SET_VALUE(reward_, reward) };


    // rewardConfig Field Functions 
    bool hasRewardConfig() const { return this->rewardConfig_ != nullptr;};
    void deleteRewardConfig() { this->rewardConfig_ = nullptr;};
    inline string rewardConfig() const { DARABONBA_PTR_GET_DEFAULT(rewardConfig_, "") };
    inline QueryGuidTaskListResponseBodyGuideTaskConfigListRewardData& setRewardConfig(string rewardConfig) { DARABONBA_PTR_SET_VALUE(rewardConfig_, rewardConfig) };


  protected:
    // Indicates whether the reward is claimed. Valid values:
    // 
    // *   **1**: no.
    // *   **2**: yes.
    std::shared_ptr<string> isRewardTaked_ = nullptr;
    // The name of the reward. Valid values:
    // 
    // *   **addTrialDay**: the days of trial use.
    // *   **addAntiRansomwareCapacity**: the anti-ransomware capacity.
    // *   **addImageScanAuthCount**: the quota for container image scan.
    // *   **addWebLockAuthCount**: the quota for web tamper proofing.
    // *   **addSlsCapacity**: the log storage capacity.
    std::shared_ptr<string> reward_ = nullptr;
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
    std::shared_ptr<string> rewardConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
