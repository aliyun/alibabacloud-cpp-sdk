// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class CreatePolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContentSafeModelInstanceId, contentSafeModelInstanceId_);
      DARABONBA_PTR_TO_JSON(EnableSensitiveInputCheck, enableSensitiveInputCheck_);
      DARABONBA_PTR_TO_JSON(EnableSensitiveOutputCheck, enableSensitiveOutputCheck_);
      DARABONBA_PTR_TO_JSON(HarmfulCategoryConfigInfoList, harmfulCategoryConfigInfoListShrink_);
      DARABONBA_PTR_TO_JSON(InputSafeAnswer, inputSafeAnswer_);
      DARABONBA_PTR_TO_JSON(InputSafeAnswerSwitch, inputSafeAnswerSwitch_);
      DARABONBA_PTR_TO_JSON(IsSidecarPolicy, isSidecarPolicy_);
      DARABONBA_PTR_TO_JSON(OutputSafeAnswer, outputSafeAnswer_);
      DARABONBA_PTR_TO_JSON(OutputSafeAnswerSwitch, outputSafeAnswerSwitch_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PromptAttackInfo, promptAttackInfoShrink_);
      DARABONBA_PTR_TO_JSON(PromptAttackInfoList, promptAttackInfoListShrink_);
      DARABONBA_PTR_TO_JSON(PromptAttackModelInstanceId, promptAttackModelInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegularExpressList, regularExpressListShrink_);
      DARABONBA_PTR_TO_JSON(SceneType, sceneType_);
      DARABONBA_PTR_TO_JSON(SensitiveConfigList, sensitiveConfigListShrink_);
      DARABONBA_PTR_TO_JSON(SensitiveTopicList, sensitiveTopicListShrink_);
      DARABONBA_PTR_TO_JSON(SensitiveTopicModelInstanceId, sensitiveTopicModelInstanceId_);
      DARABONBA_PTR_TO_JSON(SensitiveWordList, sensitiveWordListShrink_);
      DARABONBA_PTR_TO_JSON(TopicConfigInfoList, topicConfigInfoListShrink_);
      DARABONBA_PTR_TO_JSON(WordGroupInfoList, wordGroupInfoListShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentSafeModelInstanceId, contentSafeModelInstanceId_);
      DARABONBA_PTR_FROM_JSON(EnableSensitiveInputCheck, enableSensitiveInputCheck_);
      DARABONBA_PTR_FROM_JSON(EnableSensitiveOutputCheck, enableSensitiveOutputCheck_);
      DARABONBA_PTR_FROM_JSON(HarmfulCategoryConfigInfoList, harmfulCategoryConfigInfoListShrink_);
      DARABONBA_PTR_FROM_JSON(InputSafeAnswer, inputSafeAnswer_);
      DARABONBA_PTR_FROM_JSON(InputSafeAnswerSwitch, inputSafeAnswerSwitch_);
      DARABONBA_PTR_FROM_JSON(IsSidecarPolicy, isSidecarPolicy_);
      DARABONBA_PTR_FROM_JSON(OutputSafeAnswer, outputSafeAnswer_);
      DARABONBA_PTR_FROM_JSON(OutputSafeAnswerSwitch, outputSafeAnswerSwitch_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PromptAttackInfo, promptAttackInfoShrink_);
      DARABONBA_PTR_FROM_JSON(PromptAttackInfoList, promptAttackInfoListShrink_);
      DARABONBA_PTR_FROM_JSON(PromptAttackModelInstanceId, promptAttackModelInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegularExpressList, regularExpressListShrink_);
      DARABONBA_PTR_FROM_JSON(SceneType, sceneType_);
      DARABONBA_PTR_FROM_JSON(SensitiveConfigList, sensitiveConfigListShrink_);
      DARABONBA_PTR_FROM_JSON(SensitiveTopicList, sensitiveTopicListShrink_);
      DARABONBA_PTR_FROM_JSON(SensitiveTopicModelInstanceId, sensitiveTopicModelInstanceId_);
      DARABONBA_PTR_FROM_JSON(SensitiveWordList, sensitiveWordListShrink_);
      DARABONBA_PTR_FROM_JSON(TopicConfigInfoList, topicConfigInfoListShrink_);
      DARABONBA_PTR_FROM_JSON(WordGroupInfoList, wordGroupInfoListShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreatePolicyShrinkRequest() = default ;
    CreatePolicyShrinkRequest(const CreatePolicyShrinkRequest &) = default ;
    CreatePolicyShrinkRequest(CreatePolicyShrinkRequest &&) = default ;
    CreatePolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyShrinkRequest() = default ;
    CreatePolicyShrinkRequest& operator=(const CreatePolicyShrinkRequest &) = default ;
    CreatePolicyShrinkRequest& operator=(CreatePolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentSafeModelInstanceId_ == nullptr
        && return this->enableSensitiveInputCheck_ == nullptr && return this->enableSensitiveOutputCheck_ == nullptr && return this->harmfulCategoryConfigInfoListShrink_ == nullptr && return this->inputSafeAnswer_ == nullptr && return this->inputSafeAnswerSwitch_ == nullptr
        && return this->isSidecarPolicy_ == nullptr && return this->outputSafeAnswer_ == nullptr && return this->outputSafeAnswerSwitch_ == nullptr && return this->policyName_ == nullptr && return this->promptAttackInfoShrink_ == nullptr
        && return this->promptAttackInfoListShrink_ == nullptr && return this->promptAttackModelInstanceId_ == nullptr && return this->regionId_ == nullptr && return this->regularExpressListShrink_ == nullptr && return this->sceneType_ == nullptr
        && return this->sensitiveConfigListShrink_ == nullptr && return this->sensitiveTopicListShrink_ == nullptr && return this->sensitiveTopicModelInstanceId_ == nullptr && return this->sensitiveWordListShrink_ == nullptr && return this->topicConfigInfoListShrink_ == nullptr
        && return this->wordGroupInfoListShrink_ == nullptr && return this->workspaceId_ == nullptr; };
    // contentSafeModelInstanceId Field Functions 
    bool hasContentSafeModelInstanceId() const { return this->contentSafeModelInstanceId_ != nullptr;};
    void deleteContentSafeModelInstanceId() { this->contentSafeModelInstanceId_ = nullptr;};
    inline int64_t contentSafeModelInstanceId() const { DARABONBA_PTR_GET_DEFAULT(contentSafeModelInstanceId_, 0L) };
    inline CreatePolicyShrinkRequest& setContentSafeModelInstanceId(int64_t contentSafeModelInstanceId) { DARABONBA_PTR_SET_VALUE(contentSafeModelInstanceId_, contentSafeModelInstanceId) };


    // enableSensitiveInputCheck Field Functions 
    bool hasEnableSensitiveInputCheck() const { return this->enableSensitiveInputCheck_ != nullptr;};
    void deleteEnableSensitiveInputCheck() { this->enableSensitiveInputCheck_ = nullptr;};
    inline int32_t enableSensitiveInputCheck() const { DARABONBA_PTR_GET_DEFAULT(enableSensitiveInputCheck_, 0) };
    inline CreatePolicyShrinkRequest& setEnableSensitiveInputCheck(int32_t enableSensitiveInputCheck) { DARABONBA_PTR_SET_VALUE(enableSensitiveInputCheck_, enableSensitiveInputCheck) };


    // enableSensitiveOutputCheck Field Functions 
    bool hasEnableSensitiveOutputCheck() const { return this->enableSensitiveOutputCheck_ != nullptr;};
    void deleteEnableSensitiveOutputCheck() { this->enableSensitiveOutputCheck_ = nullptr;};
    inline int32_t enableSensitiveOutputCheck() const { DARABONBA_PTR_GET_DEFAULT(enableSensitiveOutputCheck_, 0) };
    inline CreatePolicyShrinkRequest& setEnableSensitiveOutputCheck(int32_t enableSensitiveOutputCheck) { DARABONBA_PTR_SET_VALUE(enableSensitiveOutputCheck_, enableSensitiveOutputCheck) };


    // harmfulCategoryConfigInfoListShrink Field Functions 
    bool hasHarmfulCategoryConfigInfoListShrink() const { return this->harmfulCategoryConfigInfoListShrink_ != nullptr;};
    void deleteHarmfulCategoryConfigInfoListShrink() { this->harmfulCategoryConfigInfoListShrink_ = nullptr;};
    inline string harmfulCategoryConfigInfoListShrink() const { DARABONBA_PTR_GET_DEFAULT(harmfulCategoryConfigInfoListShrink_, "") };
    inline CreatePolicyShrinkRequest& setHarmfulCategoryConfigInfoListShrink(string harmfulCategoryConfigInfoListShrink) { DARABONBA_PTR_SET_VALUE(harmfulCategoryConfigInfoListShrink_, harmfulCategoryConfigInfoListShrink) };


    // inputSafeAnswer Field Functions 
    bool hasInputSafeAnswer() const { return this->inputSafeAnswer_ != nullptr;};
    void deleteInputSafeAnswer() { this->inputSafeAnswer_ = nullptr;};
    inline string inputSafeAnswer() const { DARABONBA_PTR_GET_DEFAULT(inputSafeAnswer_, "") };
    inline CreatePolicyShrinkRequest& setInputSafeAnswer(string inputSafeAnswer) { DARABONBA_PTR_SET_VALUE(inputSafeAnswer_, inputSafeAnswer) };


    // inputSafeAnswerSwitch Field Functions 
    bool hasInputSafeAnswerSwitch() const { return this->inputSafeAnswerSwitch_ != nullptr;};
    void deleteInputSafeAnswerSwitch() { this->inputSafeAnswerSwitch_ = nullptr;};
    inline int32_t inputSafeAnswerSwitch() const { DARABONBA_PTR_GET_DEFAULT(inputSafeAnswerSwitch_, 0) };
    inline CreatePolicyShrinkRequest& setInputSafeAnswerSwitch(int32_t inputSafeAnswerSwitch) { DARABONBA_PTR_SET_VALUE(inputSafeAnswerSwitch_, inputSafeAnswerSwitch) };


    // isSidecarPolicy Field Functions 
    bool hasIsSidecarPolicy() const { return this->isSidecarPolicy_ != nullptr;};
    void deleteIsSidecarPolicy() { this->isSidecarPolicy_ = nullptr;};
    inline int32_t isSidecarPolicy() const { DARABONBA_PTR_GET_DEFAULT(isSidecarPolicy_, 0) };
    inline CreatePolicyShrinkRequest& setIsSidecarPolicy(int32_t isSidecarPolicy) { DARABONBA_PTR_SET_VALUE(isSidecarPolicy_, isSidecarPolicy) };


    // outputSafeAnswer Field Functions 
    bool hasOutputSafeAnswer() const { return this->outputSafeAnswer_ != nullptr;};
    void deleteOutputSafeAnswer() { this->outputSafeAnswer_ = nullptr;};
    inline string outputSafeAnswer() const { DARABONBA_PTR_GET_DEFAULT(outputSafeAnswer_, "") };
    inline CreatePolicyShrinkRequest& setOutputSafeAnswer(string outputSafeAnswer) { DARABONBA_PTR_SET_VALUE(outputSafeAnswer_, outputSafeAnswer) };


    // outputSafeAnswerSwitch Field Functions 
    bool hasOutputSafeAnswerSwitch() const { return this->outputSafeAnswerSwitch_ != nullptr;};
    void deleteOutputSafeAnswerSwitch() { this->outputSafeAnswerSwitch_ = nullptr;};
    inline int32_t outputSafeAnswerSwitch() const { DARABONBA_PTR_GET_DEFAULT(outputSafeAnswerSwitch_, 0) };
    inline CreatePolicyShrinkRequest& setOutputSafeAnswerSwitch(int32_t outputSafeAnswerSwitch) { DARABONBA_PTR_SET_VALUE(outputSafeAnswerSwitch_, outputSafeAnswerSwitch) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline CreatePolicyShrinkRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // promptAttackInfoShrink Field Functions 
    bool hasPromptAttackInfoShrink() const { return this->promptAttackInfoShrink_ != nullptr;};
    void deletePromptAttackInfoShrink() { this->promptAttackInfoShrink_ = nullptr;};
    inline string promptAttackInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(promptAttackInfoShrink_, "") };
    inline CreatePolicyShrinkRequest& setPromptAttackInfoShrink(string promptAttackInfoShrink) { DARABONBA_PTR_SET_VALUE(promptAttackInfoShrink_, promptAttackInfoShrink) };


    // promptAttackInfoListShrink Field Functions 
    bool hasPromptAttackInfoListShrink() const { return this->promptAttackInfoListShrink_ != nullptr;};
    void deletePromptAttackInfoListShrink() { this->promptAttackInfoListShrink_ = nullptr;};
    inline string promptAttackInfoListShrink() const { DARABONBA_PTR_GET_DEFAULT(promptAttackInfoListShrink_, "") };
    inline CreatePolicyShrinkRequest& setPromptAttackInfoListShrink(string promptAttackInfoListShrink) { DARABONBA_PTR_SET_VALUE(promptAttackInfoListShrink_, promptAttackInfoListShrink) };


    // promptAttackModelInstanceId Field Functions 
    bool hasPromptAttackModelInstanceId() const { return this->promptAttackModelInstanceId_ != nullptr;};
    void deletePromptAttackModelInstanceId() { this->promptAttackModelInstanceId_ = nullptr;};
    inline int64_t promptAttackModelInstanceId() const { DARABONBA_PTR_GET_DEFAULT(promptAttackModelInstanceId_, 0L) };
    inline CreatePolicyShrinkRequest& setPromptAttackModelInstanceId(int64_t promptAttackModelInstanceId) { DARABONBA_PTR_SET_VALUE(promptAttackModelInstanceId_, promptAttackModelInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePolicyShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regularExpressListShrink Field Functions 
    bool hasRegularExpressListShrink() const { return this->regularExpressListShrink_ != nullptr;};
    void deleteRegularExpressListShrink() { this->regularExpressListShrink_ = nullptr;};
    inline string regularExpressListShrink() const { DARABONBA_PTR_GET_DEFAULT(regularExpressListShrink_, "") };
    inline CreatePolicyShrinkRequest& setRegularExpressListShrink(string regularExpressListShrink) { DARABONBA_PTR_SET_VALUE(regularExpressListShrink_, regularExpressListShrink) };


    // sceneType Field Functions 
    bool hasSceneType() const { return this->sceneType_ != nullptr;};
    void deleteSceneType() { this->sceneType_ = nullptr;};
    inline int32_t sceneType() const { DARABONBA_PTR_GET_DEFAULT(sceneType_, 0) };
    inline CreatePolicyShrinkRequest& setSceneType(int32_t sceneType) { DARABONBA_PTR_SET_VALUE(sceneType_, sceneType) };


    // sensitiveConfigListShrink Field Functions 
    bool hasSensitiveConfigListShrink() const { return this->sensitiveConfigListShrink_ != nullptr;};
    void deleteSensitiveConfigListShrink() { this->sensitiveConfigListShrink_ = nullptr;};
    inline string sensitiveConfigListShrink() const { DARABONBA_PTR_GET_DEFAULT(sensitiveConfigListShrink_, "") };
    inline CreatePolicyShrinkRequest& setSensitiveConfigListShrink(string sensitiveConfigListShrink) { DARABONBA_PTR_SET_VALUE(sensitiveConfigListShrink_, sensitiveConfigListShrink) };


    // sensitiveTopicListShrink Field Functions 
    bool hasSensitiveTopicListShrink() const { return this->sensitiveTopicListShrink_ != nullptr;};
    void deleteSensitiveTopicListShrink() { this->sensitiveTopicListShrink_ = nullptr;};
    inline string sensitiveTopicListShrink() const { DARABONBA_PTR_GET_DEFAULT(sensitiveTopicListShrink_, "") };
    inline CreatePolicyShrinkRequest& setSensitiveTopicListShrink(string sensitiveTopicListShrink) { DARABONBA_PTR_SET_VALUE(sensitiveTopicListShrink_, sensitiveTopicListShrink) };


    // sensitiveTopicModelInstanceId Field Functions 
    bool hasSensitiveTopicModelInstanceId() const { return this->sensitiveTopicModelInstanceId_ != nullptr;};
    void deleteSensitiveTopicModelInstanceId() { this->sensitiveTopicModelInstanceId_ = nullptr;};
    inline int64_t sensitiveTopicModelInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sensitiveTopicModelInstanceId_, 0L) };
    inline CreatePolicyShrinkRequest& setSensitiveTopicModelInstanceId(int64_t sensitiveTopicModelInstanceId) { DARABONBA_PTR_SET_VALUE(sensitiveTopicModelInstanceId_, sensitiveTopicModelInstanceId) };


    // sensitiveWordListShrink Field Functions 
    bool hasSensitiveWordListShrink() const { return this->sensitiveWordListShrink_ != nullptr;};
    void deleteSensitiveWordListShrink() { this->sensitiveWordListShrink_ = nullptr;};
    inline string sensitiveWordListShrink() const { DARABONBA_PTR_GET_DEFAULT(sensitiveWordListShrink_, "") };
    inline CreatePolicyShrinkRequest& setSensitiveWordListShrink(string sensitiveWordListShrink) { DARABONBA_PTR_SET_VALUE(sensitiveWordListShrink_, sensitiveWordListShrink) };


    // topicConfigInfoListShrink Field Functions 
    bool hasTopicConfigInfoListShrink() const { return this->topicConfigInfoListShrink_ != nullptr;};
    void deleteTopicConfigInfoListShrink() { this->topicConfigInfoListShrink_ = nullptr;};
    inline string topicConfigInfoListShrink() const { DARABONBA_PTR_GET_DEFAULT(topicConfigInfoListShrink_, "") };
    inline CreatePolicyShrinkRequest& setTopicConfigInfoListShrink(string topicConfigInfoListShrink) { DARABONBA_PTR_SET_VALUE(topicConfigInfoListShrink_, topicConfigInfoListShrink) };


    // wordGroupInfoListShrink Field Functions 
    bool hasWordGroupInfoListShrink() const { return this->wordGroupInfoListShrink_ != nullptr;};
    void deleteWordGroupInfoListShrink() { this->wordGroupInfoListShrink_ = nullptr;};
    inline string wordGroupInfoListShrink() const { DARABONBA_PTR_GET_DEFAULT(wordGroupInfoListShrink_, "") };
    inline CreatePolicyShrinkRequest& setWordGroupInfoListShrink(string wordGroupInfoListShrink) { DARABONBA_PTR_SET_VALUE(wordGroupInfoListShrink_, wordGroupInfoListShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline CreatePolicyShrinkRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<int64_t> contentSafeModelInstanceId_ = nullptr;
    std::shared_ptr<int32_t> enableSensitiveInputCheck_ = nullptr;
    std::shared_ptr<int32_t> enableSensitiveOutputCheck_ = nullptr;
    // List of harmful category configurations
    std::shared_ptr<string> harmfulCategoryConfigInfoListShrink_ = nullptr;
    std::shared_ptr<string> inputSafeAnswer_ = nullptr;
    std::shared_ptr<int32_t> inputSafeAnswerSwitch_ = nullptr;
    std::shared_ptr<int32_t> isSidecarPolicy_ = nullptr;
    std::shared_ptr<string> outputSafeAnswer_ = nullptr;
    std::shared_ptr<int32_t> outputSafeAnswerSwitch_ = nullptr;
    // Detection policy name.
    std::shared_ptr<string> policyName_ = nullptr;
    // Prompt attack detection result object
    std::shared_ptr<string> promptAttackInfoShrink_ = nullptr;
    // List of prompt attacks
    std::shared_ptr<string> promptAttackInfoListShrink_ = nullptr;
    std::shared_ptr<int64_t> promptAttackModelInstanceId_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> regularExpressListShrink_ = nullptr;
    std::shared_ptr<int32_t> sceneType_ = nullptr;
    std::shared_ptr<string> sensitiveConfigListShrink_ = nullptr;
    std::shared_ptr<string> sensitiveTopicListShrink_ = nullptr;
    std::shared_ptr<int64_t> sensitiveTopicModelInstanceId_ = nullptr;
    std::shared_ptr<string> sensitiveWordListShrink_ = nullptr;
    // List of sensitive topics
    std::shared_ptr<string> topicConfigInfoListShrink_ = nullptr;
    // List of keyword group objects
    std::shared_ptr<string> wordGroupInfoListShrink_ = nullptr;
    // Workspace ID
    std::shared_ptr<int64_t> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
