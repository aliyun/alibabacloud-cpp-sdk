// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdatePolicyRequestHarmfulCategoryConfigInfoList.hpp>
#include <alibabacloud/models/UpdatePolicyRequestPromptAttackInfo.hpp>
#include <alibabacloud/models/UpdatePolicyRequestPromptAttackInfoList.hpp>
#include <alibabacloud/models/UpdatePolicyRequestRegularExpressList.hpp>
#include <alibabacloud/models/UpdatePolicyRequestSensitiveConfigList.hpp>
#include <alibabacloud/models/UpdatePolicyRequestSensitiveTopicList.hpp>
#include <alibabacloud/models/UpdatePolicyRequestSensitiveWordList.hpp>
#include <alibabacloud/models/UpdatePolicyRequestTopicConfigInfoList.hpp>
#include <alibabacloud/models/UpdatePolicyRequestWordGroupInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class UpdatePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContentSafeModelInstanceId, contentSafeModelInstanceId_);
      DARABONBA_PTR_TO_JSON(EnableSensitiveInputCheck, enableSensitiveInputCheck_);
      DARABONBA_PTR_TO_JSON(EnableSensitiveOutputCheck, enableSensitiveOutputCheck_);
      DARABONBA_PTR_TO_JSON(HarmfulCategoryConfigInfoList, harmfulCategoryConfigInfoList_);
      DARABONBA_PTR_TO_JSON(InputSafeAnswer, inputSafeAnswer_);
      DARABONBA_PTR_TO_JSON(InputSafeAnswerSwitch, inputSafeAnswerSwitch_);
      DARABONBA_PTR_TO_JSON(IsSidecarPolicy, isSidecarPolicy_);
      DARABONBA_PTR_TO_JSON(OutputSafeAnswer, outputSafeAnswer_);
      DARABONBA_PTR_TO_JSON(OutputSafeAnswerSwitch, outputSafeAnswerSwitch_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PromptAttackInfo, promptAttackInfo_);
      DARABONBA_PTR_TO_JSON(PromptAttackInfoList, promptAttackInfoList_);
      DARABONBA_PTR_TO_JSON(PromptAttackModelInstanceId, promptAttackModelInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegularExpressList, regularExpressList_);
      DARABONBA_PTR_TO_JSON(SceneType, sceneType_);
      DARABONBA_PTR_TO_JSON(SensitiveConfigList, sensitiveConfigList_);
      DARABONBA_PTR_TO_JSON(SensitiveTopicList, sensitiveTopicList_);
      DARABONBA_PTR_TO_JSON(SensitiveTopicModelInstanceId, sensitiveTopicModelInstanceId_);
      DARABONBA_PTR_TO_JSON(SensitiveWordList, sensitiveWordList_);
      DARABONBA_PTR_TO_JSON(TopicConfigInfoList, topicConfigInfoList_);
      DARABONBA_PTR_TO_JSON(WordGroupInfoList, wordGroupInfoList_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentSafeModelInstanceId, contentSafeModelInstanceId_);
      DARABONBA_PTR_FROM_JSON(EnableSensitiveInputCheck, enableSensitiveInputCheck_);
      DARABONBA_PTR_FROM_JSON(EnableSensitiveOutputCheck, enableSensitiveOutputCheck_);
      DARABONBA_PTR_FROM_JSON(HarmfulCategoryConfigInfoList, harmfulCategoryConfigInfoList_);
      DARABONBA_PTR_FROM_JSON(InputSafeAnswer, inputSafeAnswer_);
      DARABONBA_PTR_FROM_JSON(InputSafeAnswerSwitch, inputSafeAnswerSwitch_);
      DARABONBA_PTR_FROM_JSON(IsSidecarPolicy, isSidecarPolicy_);
      DARABONBA_PTR_FROM_JSON(OutputSafeAnswer, outputSafeAnswer_);
      DARABONBA_PTR_FROM_JSON(OutputSafeAnswerSwitch, outputSafeAnswerSwitch_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PromptAttackInfo, promptAttackInfo_);
      DARABONBA_PTR_FROM_JSON(PromptAttackInfoList, promptAttackInfoList_);
      DARABONBA_PTR_FROM_JSON(PromptAttackModelInstanceId, promptAttackModelInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegularExpressList, regularExpressList_);
      DARABONBA_PTR_FROM_JSON(SceneType, sceneType_);
      DARABONBA_PTR_FROM_JSON(SensitiveConfigList, sensitiveConfigList_);
      DARABONBA_PTR_FROM_JSON(SensitiveTopicList, sensitiveTopicList_);
      DARABONBA_PTR_FROM_JSON(SensitiveTopicModelInstanceId, sensitiveTopicModelInstanceId_);
      DARABONBA_PTR_FROM_JSON(SensitiveWordList, sensitiveWordList_);
      DARABONBA_PTR_FROM_JSON(TopicConfigInfoList, topicConfigInfoList_);
      DARABONBA_PTR_FROM_JSON(WordGroupInfoList, wordGroupInfoList_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdatePolicyRequest() = default ;
    UpdatePolicyRequest(const UpdatePolicyRequest &) = default ;
    UpdatePolicyRequest(UpdatePolicyRequest &&) = default ;
    UpdatePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolicyRequest() = default ;
    UpdatePolicyRequest& operator=(const UpdatePolicyRequest &) = default ;
    UpdatePolicyRequest& operator=(UpdatePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentSafeModelInstanceId_ == nullptr
        && return this->enableSensitiveInputCheck_ == nullptr && return this->enableSensitiveOutputCheck_ == nullptr && return this->harmfulCategoryConfigInfoList_ == nullptr && return this->inputSafeAnswer_ == nullptr && return this->inputSafeAnswerSwitch_ == nullptr
        && return this->isSidecarPolicy_ == nullptr && return this->outputSafeAnswer_ == nullptr && return this->outputSafeAnswerSwitch_ == nullptr && return this->policyId_ == nullptr && return this->policyName_ == nullptr
        && return this->promptAttackInfo_ == nullptr && return this->promptAttackInfoList_ == nullptr && return this->promptAttackModelInstanceId_ == nullptr && return this->regionId_ == nullptr && return this->regularExpressList_ == nullptr
        && return this->sceneType_ == nullptr && return this->sensitiveConfigList_ == nullptr && return this->sensitiveTopicList_ == nullptr && return this->sensitiveTopicModelInstanceId_ == nullptr && return this->sensitiveWordList_ == nullptr
        && return this->topicConfigInfoList_ == nullptr && return this->wordGroupInfoList_ == nullptr && return this->workspaceId_ == nullptr; };
    // contentSafeModelInstanceId Field Functions 
    bool hasContentSafeModelInstanceId() const { return this->contentSafeModelInstanceId_ != nullptr;};
    void deleteContentSafeModelInstanceId() { this->contentSafeModelInstanceId_ = nullptr;};
    inline int64_t contentSafeModelInstanceId() const { DARABONBA_PTR_GET_DEFAULT(contentSafeModelInstanceId_, 0L) };
    inline UpdatePolicyRequest& setContentSafeModelInstanceId(int64_t contentSafeModelInstanceId) { DARABONBA_PTR_SET_VALUE(contentSafeModelInstanceId_, contentSafeModelInstanceId) };


    // enableSensitiveInputCheck Field Functions 
    bool hasEnableSensitiveInputCheck() const { return this->enableSensitiveInputCheck_ != nullptr;};
    void deleteEnableSensitiveInputCheck() { this->enableSensitiveInputCheck_ = nullptr;};
    inline int32_t enableSensitiveInputCheck() const { DARABONBA_PTR_GET_DEFAULT(enableSensitiveInputCheck_, 0) };
    inline UpdatePolicyRequest& setEnableSensitiveInputCheck(int32_t enableSensitiveInputCheck) { DARABONBA_PTR_SET_VALUE(enableSensitiveInputCheck_, enableSensitiveInputCheck) };


    // enableSensitiveOutputCheck Field Functions 
    bool hasEnableSensitiveOutputCheck() const { return this->enableSensitiveOutputCheck_ != nullptr;};
    void deleteEnableSensitiveOutputCheck() { this->enableSensitiveOutputCheck_ = nullptr;};
    inline int32_t enableSensitiveOutputCheck() const { DARABONBA_PTR_GET_DEFAULT(enableSensitiveOutputCheck_, 0) };
    inline UpdatePolicyRequest& setEnableSensitiveOutputCheck(int32_t enableSensitiveOutputCheck) { DARABONBA_PTR_SET_VALUE(enableSensitiveOutputCheck_, enableSensitiveOutputCheck) };


    // harmfulCategoryConfigInfoList Field Functions 
    bool hasHarmfulCategoryConfigInfoList() const { return this->harmfulCategoryConfigInfoList_ != nullptr;};
    void deleteHarmfulCategoryConfigInfoList() { this->harmfulCategoryConfigInfoList_ = nullptr;};
    inline const vector<UpdatePolicyRequestHarmfulCategoryConfigInfoList> & harmfulCategoryConfigInfoList() const { DARABONBA_PTR_GET_CONST(harmfulCategoryConfigInfoList_, vector<UpdatePolicyRequestHarmfulCategoryConfigInfoList>) };
    inline vector<UpdatePolicyRequestHarmfulCategoryConfigInfoList> harmfulCategoryConfigInfoList() { DARABONBA_PTR_GET(harmfulCategoryConfigInfoList_, vector<UpdatePolicyRequestHarmfulCategoryConfigInfoList>) };
    inline UpdatePolicyRequest& setHarmfulCategoryConfigInfoList(const vector<UpdatePolicyRequestHarmfulCategoryConfigInfoList> & harmfulCategoryConfigInfoList) { DARABONBA_PTR_SET_VALUE(harmfulCategoryConfigInfoList_, harmfulCategoryConfigInfoList) };
    inline UpdatePolicyRequest& setHarmfulCategoryConfigInfoList(vector<UpdatePolicyRequestHarmfulCategoryConfigInfoList> && harmfulCategoryConfigInfoList) { DARABONBA_PTR_SET_RVALUE(harmfulCategoryConfigInfoList_, harmfulCategoryConfigInfoList) };


    // inputSafeAnswer Field Functions 
    bool hasInputSafeAnswer() const { return this->inputSafeAnswer_ != nullptr;};
    void deleteInputSafeAnswer() { this->inputSafeAnswer_ = nullptr;};
    inline string inputSafeAnswer() const { DARABONBA_PTR_GET_DEFAULT(inputSafeAnswer_, "") };
    inline UpdatePolicyRequest& setInputSafeAnswer(string inputSafeAnswer) { DARABONBA_PTR_SET_VALUE(inputSafeAnswer_, inputSafeAnswer) };


    // inputSafeAnswerSwitch Field Functions 
    bool hasInputSafeAnswerSwitch() const { return this->inputSafeAnswerSwitch_ != nullptr;};
    void deleteInputSafeAnswerSwitch() { this->inputSafeAnswerSwitch_ = nullptr;};
    inline int32_t inputSafeAnswerSwitch() const { DARABONBA_PTR_GET_DEFAULT(inputSafeAnswerSwitch_, 0) };
    inline UpdatePolicyRequest& setInputSafeAnswerSwitch(int32_t inputSafeAnswerSwitch) { DARABONBA_PTR_SET_VALUE(inputSafeAnswerSwitch_, inputSafeAnswerSwitch) };


    // isSidecarPolicy Field Functions 
    bool hasIsSidecarPolicy() const { return this->isSidecarPolicy_ != nullptr;};
    void deleteIsSidecarPolicy() { this->isSidecarPolicy_ = nullptr;};
    inline int32_t isSidecarPolicy() const { DARABONBA_PTR_GET_DEFAULT(isSidecarPolicy_, 0) };
    inline UpdatePolicyRequest& setIsSidecarPolicy(int32_t isSidecarPolicy) { DARABONBA_PTR_SET_VALUE(isSidecarPolicy_, isSidecarPolicy) };


    // outputSafeAnswer Field Functions 
    bool hasOutputSafeAnswer() const { return this->outputSafeAnswer_ != nullptr;};
    void deleteOutputSafeAnswer() { this->outputSafeAnswer_ = nullptr;};
    inline string outputSafeAnswer() const { DARABONBA_PTR_GET_DEFAULT(outputSafeAnswer_, "") };
    inline UpdatePolicyRequest& setOutputSafeAnswer(string outputSafeAnswer) { DARABONBA_PTR_SET_VALUE(outputSafeAnswer_, outputSafeAnswer) };


    // outputSafeAnswerSwitch Field Functions 
    bool hasOutputSafeAnswerSwitch() const { return this->outputSafeAnswerSwitch_ != nullptr;};
    void deleteOutputSafeAnswerSwitch() { this->outputSafeAnswerSwitch_ = nullptr;};
    inline int32_t outputSafeAnswerSwitch() const { DARABONBA_PTR_GET_DEFAULT(outputSafeAnswerSwitch_, 0) };
    inline UpdatePolicyRequest& setOutputSafeAnswerSwitch(int32_t outputSafeAnswerSwitch) { DARABONBA_PTR_SET_VALUE(outputSafeAnswerSwitch_, outputSafeAnswerSwitch) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline UpdatePolicyRequest& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline UpdatePolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // promptAttackInfo Field Functions 
    bool hasPromptAttackInfo() const { return this->promptAttackInfo_ != nullptr;};
    void deletePromptAttackInfo() { this->promptAttackInfo_ = nullptr;};
    inline const UpdatePolicyRequestPromptAttackInfo & promptAttackInfo() const { DARABONBA_PTR_GET_CONST(promptAttackInfo_, UpdatePolicyRequestPromptAttackInfo) };
    inline UpdatePolicyRequestPromptAttackInfo promptAttackInfo() { DARABONBA_PTR_GET(promptAttackInfo_, UpdatePolicyRequestPromptAttackInfo) };
    inline UpdatePolicyRequest& setPromptAttackInfo(const UpdatePolicyRequestPromptAttackInfo & promptAttackInfo) { DARABONBA_PTR_SET_VALUE(promptAttackInfo_, promptAttackInfo) };
    inline UpdatePolicyRequest& setPromptAttackInfo(UpdatePolicyRequestPromptAttackInfo && promptAttackInfo) { DARABONBA_PTR_SET_RVALUE(promptAttackInfo_, promptAttackInfo) };


    // promptAttackInfoList Field Functions 
    bool hasPromptAttackInfoList() const { return this->promptAttackInfoList_ != nullptr;};
    void deletePromptAttackInfoList() { this->promptAttackInfoList_ = nullptr;};
    inline const vector<UpdatePolicyRequestPromptAttackInfoList> & promptAttackInfoList() const { DARABONBA_PTR_GET_CONST(promptAttackInfoList_, vector<UpdatePolicyRequestPromptAttackInfoList>) };
    inline vector<UpdatePolicyRequestPromptAttackInfoList> promptAttackInfoList() { DARABONBA_PTR_GET(promptAttackInfoList_, vector<UpdatePolicyRequestPromptAttackInfoList>) };
    inline UpdatePolicyRequest& setPromptAttackInfoList(const vector<UpdatePolicyRequestPromptAttackInfoList> & promptAttackInfoList) { DARABONBA_PTR_SET_VALUE(promptAttackInfoList_, promptAttackInfoList) };
    inline UpdatePolicyRequest& setPromptAttackInfoList(vector<UpdatePolicyRequestPromptAttackInfoList> && promptAttackInfoList) { DARABONBA_PTR_SET_RVALUE(promptAttackInfoList_, promptAttackInfoList) };


    // promptAttackModelInstanceId Field Functions 
    bool hasPromptAttackModelInstanceId() const { return this->promptAttackModelInstanceId_ != nullptr;};
    void deletePromptAttackModelInstanceId() { this->promptAttackModelInstanceId_ = nullptr;};
    inline int64_t promptAttackModelInstanceId() const { DARABONBA_PTR_GET_DEFAULT(promptAttackModelInstanceId_, 0L) };
    inline UpdatePolicyRequest& setPromptAttackModelInstanceId(int64_t promptAttackModelInstanceId) { DARABONBA_PTR_SET_VALUE(promptAttackModelInstanceId_, promptAttackModelInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdatePolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regularExpressList Field Functions 
    bool hasRegularExpressList() const { return this->regularExpressList_ != nullptr;};
    void deleteRegularExpressList() { this->regularExpressList_ = nullptr;};
    inline const vector<UpdatePolicyRequestRegularExpressList> & regularExpressList() const { DARABONBA_PTR_GET_CONST(regularExpressList_, vector<UpdatePolicyRequestRegularExpressList>) };
    inline vector<UpdatePolicyRequestRegularExpressList> regularExpressList() { DARABONBA_PTR_GET(regularExpressList_, vector<UpdatePolicyRequestRegularExpressList>) };
    inline UpdatePolicyRequest& setRegularExpressList(const vector<UpdatePolicyRequestRegularExpressList> & regularExpressList) { DARABONBA_PTR_SET_VALUE(regularExpressList_, regularExpressList) };
    inline UpdatePolicyRequest& setRegularExpressList(vector<UpdatePolicyRequestRegularExpressList> && regularExpressList) { DARABONBA_PTR_SET_RVALUE(regularExpressList_, regularExpressList) };


    // sceneType Field Functions 
    bool hasSceneType() const { return this->sceneType_ != nullptr;};
    void deleteSceneType() { this->sceneType_ = nullptr;};
    inline int32_t sceneType() const { DARABONBA_PTR_GET_DEFAULT(sceneType_, 0) };
    inline UpdatePolicyRequest& setSceneType(int32_t sceneType) { DARABONBA_PTR_SET_VALUE(sceneType_, sceneType) };


    // sensitiveConfigList Field Functions 
    bool hasSensitiveConfigList() const { return this->sensitiveConfigList_ != nullptr;};
    void deleteSensitiveConfigList() { this->sensitiveConfigList_ = nullptr;};
    inline const vector<UpdatePolicyRequestSensitiveConfigList> & sensitiveConfigList() const { DARABONBA_PTR_GET_CONST(sensitiveConfigList_, vector<UpdatePolicyRequestSensitiveConfigList>) };
    inline vector<UpdatePolicyRequestSensitiveConfigList> sensitiveConfigList() { DARABONBA_PTR_GET(sensitiveConfigList_, vector<UpdatePolicyRequestSensitiveConfigList>) };
    inline UpdatePolicyRequest& setSensitiveConfigList(const vector<UpdatePolicyRequestSensitiveConfigList> & sensitiveConfigList) { DARABONBA_PTR_SET_VALUE(sensitiveConfigList_, sensitiveConfigList) };
    inline UpdatePolicyRequest& setSensitiveConfigList(vector<UpdatePolicyRequestSensitiveConfigList> && sensitiveConfigList) { DARABONBA_PTR_SET_RVALUE(sensitiveConfigList_, sensitiveConfigList) };


    // sensitiveTopicList Field Functions 
    bool hasSensitiveTopicList() const { return this->sensitiveTopicList_ != nullptr;};
    void deleteSensitiveTopicList() { this->sensitiveTopicList_ = nullptr;};
    inline const vector<UpdatePolicyRequestSensitiveTopicList> & sensitiveTopicList() const { DARABONBA_PTR_GET_CONST(sensitiveTopicList_, vector<UpdatePolicyRequestSensitiveTopicList>) };
    inline vector<UpdatePolicyRequestSensitiveTopicList> sensitiveTopicList() { DARABONBA_PTR_GET(sensitiveTopicList_, vector<UpdatePolicyRequestSensitiveTopicList>) };
    inline UpdatePolicyRequest& setSensitiveTopicList(const vector<UpdatePolicyRequestSensitiveTopicList> & sensitiveTopicList) { DARABONBA_PTR_SET_VALUE(sensitiveTopicList_, sensitiveTopicList) };
    inline UpdatePolicyRequest& setSensitiveTopicList(vector<UpdatePolicyRequestSensitiveTopicList> && sensitiveTopicList) { DARABONBA_PTR_SET_RVALUE(sensitiveTopicList_, sensitiveTopicList) };


    // sensitiveTopicModelInstanceId Field Functions 
    bool hasSensitiveTopicModelInstanceId() const { return this->sensitiveTopicModelInstanceId_ != nullptr;};
    void deleteSensitiveTopicModelInstanceId() { this->sensitiveTopicModelInstanceId_ = nullptr;};
    inline int64_t sensitiveTopicModelInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sensitiveTopicModelInstanceId_, 0L) };
    inline UpdatePolicyRequest& setSensitiveTopicModelInstanceId(int64_t sensitiveTopicModelInstanceId) { DARABONBA_PTR_SET_VALUE(sensitiveTopicModelInstanceId_, sensitiveTopicModelInstanceId) };


    // sensitiveWordList Field Functions 
    bool hasSensitiveWordList() const { return this->sensitiveWordList_ != nullptr;};
    void deleteSensitiveWordList() { this->sensitiveWordList_ = nullptr;};
    inline const vector<UpdatePolicyRequestSensitiveWordList> & sensitiveWordList() const { DARABONBA_PTR_GET_CONST(sensitiveWordList_, vector<UpdatePolicyRequestSensitiveWordList>) };
    inline vector<UpdatePolicyRequestSensitiveWordList> sensitiveWordList() { DARABONBA_PTR_GET(sensitiveWordList_, vector<UpdatePolicyRequestSensitiveWordList>) };
    inline UpdatePolicyRequest& setSensitiveWordList(const vector<UpdatePolicyRequestSensitiveWordList> & sensitiveWordList) { DARABONBA_PTR_SET_VALUE(sensitiveWordList_, sensitiveWordList) };
    inline UpdatePolicyRequest& setSensitiveWordList(vector<UpdatePolicyRequestSensitiveWordList> && sensitiveWordList) { DARABONBA_PTR_SET_RVALUE(sensitiveWordList_, sensitiveWordList) };


    // topicConfigInfoList Field Functions 
    bool hasTopicConfigInfoList() const { return this->topicConfigInfoList_ != nullptr;};
    void deleteTopicConfigInfoList() { this->topicConfigInfoList_ = nullptr;};
    inline const vector<UpdatePolicyRequestTopicConfigInfoList> & topicConfigInfoList() const { DARABONBA_PTR_GET_CONST(topicConfigInfoList_, vector<UpdatePolicyRequestTopicConfigInfoList>) };
    inline vector<UpdatePolicyRequestTopicConfigInfoList> topicConfigInfoList() { DARABONBA_PTR_GET(topicConfigInfoList_, vector<UpdatePolicyRequestTopicConfigInfoList>) };
    inline UpdatePolicyRequest& setTopicConfigInfoList(const vector<UpdatePolicyRequestTopicConfigInfoList> & topicConfigInfoList) { DARABONBA_PTR_SET_VALUE(topicConfigInfoList_, topicConfigInfoList) };
    inline UpdatePolicyRequest& setTopicConfigInfoList(vector<UpdatePolicyRequestTopicConfigInfoList> && topicConfigInfoList) { DARABONBA_PTR_SET_RVALUE(topicConfigInfoList_, topicConfigInfoList) };


    // wordGroupInfoList Field Functions 
    bool hasWordGroupInfoList() const { return this->wordGroupInfoList_ != nullptr;};
    void deleteWordGroupInfoList() { this->wordGroupInfoList_ = nullptr;};
    inline const vector<UpdatePolicyRequestWordGroupInfoList> & wordGroupInfoList() const { DARABONBA_PTR_GET_CONST(wordGroupInfoList_, vector<UpdatePolicyRequestWordGroupInfoList>) };
    inline vector<UpdatePolicyRequestWordGroupInfoList> wordGroupInfoList() { DARABONBA_PTR_GET(wordGroupInfoList_, vector<UpdatePolicyRequestWordGroupInfoList>) };
    inline UpdatePolicyRequest& setWordGroupInfoList(const vector<UpdatePolicyRequestWordGroupInfoList> & wordGroupInfoList) { DARABONBA_PTR_SET_VALUE(wordGroupInfoList_, wordGroupInfoList) };
    inline UpdatePolicyRequest& setWordGroupInfoList(vector<UpdatePolicyRequestWordGroupInfoList> && wordGroupInfoList) { DARABONBA_PTR_SET_RVALUE(wordGroupInfoList_, wordGroupInfoList) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline UpdatePolicyRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<int64_t> contentSafeModelInstanceId_ = nullptr;
    std::shared_ptr<int32_t> enableSensitiveInputCheck_ = nullptr;
    std::shared_ptr<int32_t> enableSensitiveOutputCheck_ = nullptr;
    // List of harmful category configurations
    std::shared_ptr<vector<UpdatePolicyRequestHarmfulCategoryConfigInfoList>> harmfulCategoryConfigInfoList_ = nullptr;
    std::shared_ptr<string> inputSafeAnswer_ = nullptr;
    std::shared_ptr<int32_t> inputSafeAnswerSwitch_ = nullptr;
    std::shared_ptr<int32_t> isSidecarPolicy_ = nullptr;
    std::shared_ptr<string> outputSafeAnswer_ = nullptr;
    std::shared_ptr<int32_t> outputSafeAnswerSwitch_ = nullptr;
    // Detection policy ID
    std::shared_ptr<int64_t> policyId_ = nullptr;
    // Detection policy name.
    std::shared_ptr<string> policyName_ = nullptr;
    // Prompt attack detection result object
    std::shared_ptr<UpdatePolicyRequestPromptAttackInfo> promptAttackInfo_ = nullptr;
    // List of prompt attacks
    std::shared_ptr<vector<UpdatePolicyRequestPromptAttackInfoList>> promptAttackInfoList_ = nullptr;
    std::shared_ptr<int64_t> promptAttackModelInstanceId_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<vector<UpdatePolicyRequestRegularExpressList>> regularExpressList_ = nullptr;
    std::shared_ptr<int32_t> sceneType_ = nullptr;
    std::shared_ptr<vector<UpdatePolicyRequestSensitiveConfigList>> sensitiveConfigList_ = nullptr;
    std::shared_ptr<vector<UpdatePolicyRequestSensitiveTopicList>> sensitiveTopicList_ = nullptr;
    std::shared_ptr<int64_t> sensitiveTopicModelInstanceId_ = nullptr;
    std::shared_ptr<vector<UpdatePolicyRequestSensitiveWordList>> sensitiveWordList_ = nullptr;
    // List of sensitive topics
    std::shared_ptr<vector<UpdatePolicyRequestTopicConfigInfoList>> topicConfigInfoList_ = nullptr;
    // List of keyword group objects
    std::shared_ptr<vector<UpdatePolicyRequestWordGroupInfoList>> wordGroupInfoList_ = nullptr;
    std::shared_ptr<int64_t> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
