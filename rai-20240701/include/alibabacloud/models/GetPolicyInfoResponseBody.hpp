// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPolicyInfoResponseBodyContentSafeModelInfo.hpp>
#include <vector>
#include <alibabacloud/models/GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList.hpp>
#include <alibabacloud/models/GetPolicyInfoResponseBodyPromptAttackInfo.hpp>
#include <alibabacloud/models/GetPolicyInfoResponseBodyPromptAttackInfoList.hpp>
#include <alibabacloud/models/GetPolicyInfoResponseBodyPromptAttackModelInfo.hpp>
#include <alibabacloud/models/GetPolicyInfoResponseBodyRegularExpressList.hpp>
#include <alibabacloud/models/GetPolicyInfoResponseBodySensitiveConfigList.hpp>
#include <alibabacloud/models/GetPolicyInfoResponseBodySensitiveTopicList.hpp>
#include <alibabacloud/models/GetPolicyInfoResponseBodySensitiveTopicModelInfo.hpp>
#include <alibabacloud/models/GetPolicyInfoResponseBodySensitiveWordList.hpp>
#include <alibabacloud/models/GetPolicyInfoResponseBodyTopicConfigInfoList.hpp>
#include <alibabacloud/models/GetPolicyInfoResponseBodyWordGroupInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetPolicyInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ContentSafeModelInfo, contentSafeModelInfo_);
      DARABONBA_PTR_TO_JSON(EnableSensitiveInputCheck, enableSensitiveInputCheck_);
      DARABONBA_PTR_TO_JSON(EnableSensitiveOutputCheck, enableSensitiveOutputCheck_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(HarmfulCategoryConfigInfoList, harmfulCategoryConfigInfoList_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(InputSafeAnswer, inputSafeAnswer_);
      DARABONBA_PTR_TO_JSON(InputSafeAnswerSwitch, inputSafeAnswerSwitch_);
      DARABONBA_PTR_TO_JSON(IsSidecarPolicy, isSidecarPolicy_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OutputSafeAnswer, outputSafeAnswer_);
      DARABONBA_PTR_TO_JSON(OutputSafeAnswerSwitch, outputSafeAnswerSwitch_);
      DARABONBA_PTR_TO_JSON(PolicyIdentifier, policyIdentifier_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PromptAttackInfo, promptAttackInfo_);
      DARABONBA_PTR_TO_JSON(PromptAttackInfoList, promptAttackInfoList_);
      DARABONBA_PTR_TO_JSON(PromptAttackModelInfo, promptAttackModelInfo_);
      DARABONBA_PTR_TO_JSON(RegularExpressList, regularExpressList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SceneType, sceneType_);
      DARABONBA_PTR_TO_JSON(SensitiveConfigList, sensitiveConfigList_);
      DARABONBA_PTR_TO_JSON(SensitiveTopicList, sensitiveTopicList_);
      DARABONBA_PTR_TO_JSON(SensitiveTopicModelInfo, sensitiveTopicModelInfo_);
      DARABONBA_PTR_TO_JSON(SensitiveWordList, sensitiveWordList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TopicConfigInfoList, topicConfigInfoList_);
      DARABONBA_PTR_TO_JSON(WordGroupInfoList, wordGroupInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ContentSafeModelInfo, contentSafeModelInfo_);
      DARABONBA_PTR_FROM_JSON(EnableSensitiveInputCheck, enableSensitiveInputCheck_);
      DARABONBA_PTR_FROM_JSON(EnableSensitiveOutputCheck, enableSensitiveOutputCheck_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(HarmfulCategoryConfigInfoList, harmfulCategoryConfigInfoList_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(InputSafeAnswer, inputSafeAnswer_);
      DARABONBA_PTR_FROM_JSON(InputSafeAnswerSwitch, inputSafeAnswerSwitch_);
      DARABONBA_PTR_FROM_JSON(IsSidecarPolicy, isSidecarPolicy_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OutputSafeAnswer, outputSafeAnswer_);
      DARABONBA_PTR_FROM_JSON(OutputSafeAnswerSwitch, outputSafeAnswerSwitch_);
      DARABONBA_PTR_FROM_JSON(PolicyIdentifier, policyIdentifier_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PromptAttackInfo, promptAttackInfo_);
      DARABONBA_PTR_FROM_JSON(PromptAttackInfoList, promptAttackInfoList_);
      DARABONBA_PTR_FROM_JSON(PromptAttackModelInfo, promptAttackModelInfo_);
      DARABONBA_PTR_FROM_JSON(RegularExpressList, regularExpressList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SceneType, sceneType_);
      DARABONBA_PTR_FROM_JSON(SensitiveConfigList, sensitiveConfigList_);
      DARABONBA_PTR_FROM_JSON(SensitiveTopicList, sensitiveTopicList_);
      DARABONBA_PTR_FROM_JSON(SensitiveTopicModelInfo, sensitiveTopicModelInfo_);
      DARABONBA_PTR_FROM_JSON(SensitiveWordList, sensitiveWordList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TopicConfigInfoList, topicConfigInfoList_);
      DARABONBA_PTR_FROM_JSON(WordGroupInfoList, wordGroupInfoList_);
    };
    GetPolicyInfoResponseBody() = default ;
    GetPolicyInfoResponseBody(const GetPolicyInfoResponseBody &) = default ;
    GetPolicyInfoResponseBody(GetPolicyInfoResponseBody &&) = default ;
    GetPolicyInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyInfoResponseBody() = default ;
    GetPolicyInfoResponseBody& operator=(const GetPolicyInfoResponseBody &) = default ;
    GetPolicyInfoResponseBody& operator=(GetPolicyInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->contentSafeModelInfo_ == nullptr && return this->enableSensitiveInputCheck_ == nullptr && return this->enableSensitiveOutputCheck_ == nullptr && return this->gmtModified_ == nullptr && return this->harmfulCategoryConfigInfoList_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->inputSafeAnswer_ == nullptr && return this->inputSafeAnswerSwitch_ == nullptr && return this->isSidecarPolicy_ == nullptr && return this->message_ == nullptr
        && return this->outputSafeAnswer_ == nullptr && return this->outputSafeAnswerSwitch_ == nullptr && return this->policyIdentifier_ == nullptr && return this->policyName_ == nullptr && return this->promptAttackInfo_ == nullptr
        && return this->promptAttackInfoList_ == nullptr && return this->promptAttackModelInfo_ == nullptr && return this->regularExpressList_ == nullptr && return this->requestId_ == nullptr && return this->sceneType_ == nullptr
        && return this->sensitiveConfigList_ == nullptr && return this->sensitiveTopicList_ == nullptr && return this->sensitiveTopicModelInfo_ == nullptr && return this->sensitiveWordList_ == nullptr && return this->success_ == nullptr
        && return this->topicConfigInfoList_ == nullptr && return this->wordGroupInfoList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPolicyInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // contentSafeModelInfo Field Functions 
    bool hasContentSafeModelInfo() const { return this->contentSafeModelInfo_ != nullptr;};
    void deleteContentSafeModelInfo() { this->contentSafeModelInfo_ = nullptr;};
    inline const GetPolicyInfoResponseBodyContentSafeModelInfo & contentSafeModelInfo() const { DARABONBA_PTR_GET_CONST(contentSafeModelInfo_, GetPolicyInfoResponseBodyContentSafeModelInfo) };
    inline GetPolicyInfoResponseBodyContentSafeModelInfo contentSafeModelInfo() { DARABONBA_PTR_GET(contentSafeModelInfo_, GetPolicyInfoResponseBodyContentSafeModelInfo) };
    inline GetPolicyInfoResponseBody& setContentSafeModelInfo(const GetPolicyInfoResponseBodyContentSafeModelInfo & contentSafeModelInfo) { DARABONBA_PTR_SET_VALUE(contentSafeModelInfo_, contentSafeModelInfo) };
    inline GetPolicyInfoResponseBody& setContentSafeModelInfo(GetPolicyInfoResponseBodyContentSafeModelInfo && contentSafeModelInfo) { DARABONBA_PTR_SET_RVALUE(contentSafeModelInfo_, contentSafeModelInfo) };


    // enableSensitiveInputCheck Field Functions 
    bool hasEnableSensitiveInputCheck() const { return this->enableSensitiveInputCheck_ != nullptr;};
    void deleteEnableSensitiveInputCheck() { this->enableSensitiveInputCheck_ = nullptr;};
    inline int32_t enableSensitiveInputCheck() const { DARABONBA_PTR_GET_DEFAULT(enableSensitiveInputCheck_, 0) };
    inline GetPolicyInfoResponseBody& setEnableSensitiveInputCheck(int32_t enableSensitiveInputCheck) { DARABONBA_PTR_SET_VALUE(enableSensitiveInputCheck_, enableSensitiveInputCheck) };


    // enableSensitiveOutputCheck Field Functions 
    bool hasEnableSensitiveOutputCheck() const { return this->enableSensitiveOutputCheck_ != nullptr;};
    void deleteEnableSensitiveOutputCheck() { this->enableSensitiveOutputCheck_ = nullptr;};
    inline int32_t enableSensitiveOutputCheck() const { DARABONBA_PTR_GET_DEFAULT(enableSensitiveOutputCheck_, 0) };
    inline GetPolicyInfoResponseBody& setEnableSensitiveOutputCheck(int32_t enableSensitiveOutputCheck) { DARABONBA_PTR_SET_VALUE(enableSensitiveOutputCheck_, enableSensitiveOutputCheck) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline GetPolicyInfoResponseBody& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // harmfulCategoryConfigInfoList Field Functions 
    bool hasHarmfulCategoryConfigInfoList() const { return this->harmfulCategoryConfigInfoList_ != nullptr;};
    void deleteHarmfulCategoryConfigInfoList() { this->harmfulCategoryConfigInfoList_ = nullptr;};
    inline const vector<GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList> & harmfulCategoryConfigInfoList() const { DARABONBA_PTR_GET_CONST(harmfulCategoryConfigInfoList_, vector<GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList>) };
    inline vector<GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList> harmfulCategoryConfigInfoList() { DARABONBA_PTR_GET(harmfulCategoryConfigInfoList_, vector<GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList>) };
    inline GetPolicyInfoResponseBody& setHarmfulCategoryConfigInfoList(const vector<GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList> & harmfulCategoryConfigInfoList) { DARABONBA_PTR_SET_VALUE(harmfulCategoryConfigInfoList_, harmfulCategoryConfigInfoList) };
    inline GetPolicyInfoResponseBody& setHarmfulCategoryConfigInfoList(vector<GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList> && harmfulCategoryConfigInfoList) { DARABONBA_PTR_SET_RVALUE(harmfulCategoryConfigInfoList_, harmfulCategoryConfigInfoList) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetPolicyInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // inputSafeAnswer Field Functions 
    bool hasInputSafeAnswer() const { return this->inputSafeAnswer_ != nullptr;};
    void deleteInputSafeAnswer() { this->inputSafeAnswer_ = nullptr;};
    inline string inputSafeAnswer() const { DARABONBA_PTR_GET_DEFAULT(inputSafeAnswer_, "") };
    inline GetPolicyInfoResponseBody& setInputSafeAnswer(string inputSafeAnswer) { DARABONBA_PTR_SET_VALUE(inputSafeAnswer_, inputSafeAnswer) };


    // inputSafeAnswerSwitch Field Functions 
    bool hasInputSafeAnswerSwitch() const { return this->inputSafeAnswerSwitch_ != nullptr;};
    void deleteInputSafeAnswerSwitch() { this->inputSafeAnswerSwitch_ = nullptr;};
    inline int32_t inputSafeAnswerSwitch() const { DARABONBA_PTR_GET_DEFAULT(inputSafeAnswerSwitch_, 0) };
    inline GetPolicyInfoResponseBody& setInputSafeAnswerSwitch(int32_t inputSafeAnswerSwitch) { DARABONBA_PTR_SET_VALUE(inputSafeAnswerSwitch_, inputSafeAnswerSwitch) };


    // isSidecarPolicy Field Functions 
    bool hasIsSidecarPolicy() const { return this->isSidecarPolicy_ != nullptr;};
    void deleteIsSidecarPolicy() { this->isSidecarPolicy_ = nullptr;};
    inline int32_t isSidecarPolicy() const { DARABONBA_PTR_GET_DEFAULT(isSidecarPolicy_, 0) };
    inline GetPolicyInfoResponseBody& setIsSidecarPolicy(int32_t isSidecarPolicy) { DARABONBA_PTR_SET_VALUE(isSidecarPolicy_, isSidecarPolicy) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPolicyInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // outputSafeAnswer Field Functions 
    bool hasOutputSafeAnswer() const { return this->outputSafeAnswer_ != nullptr;};
    void deleteOutputSafeAnswer() { this->outputSafeAnswer_ = nullptr;};
    inline string outputSafeAnswer() const { DARABONBA_PTR_GET_DEFAULT(outputSafeAnswer_, "") };
    inline GetPolicyInfoResponseBody& setOutputSafeAnswer(string outputSafeAnswer) { DARABONBA_PTR_SET_VALUE(outputSafeAnswer_, outputSafeAnswer) };


    // outputSafeAnswerSwitch Field Functions 
    bool hasOutputSafeAnswerSwitch() const { return this->outputSafeAnswerSwitch_ != nullptr;};
    void deleteOutputSafeAnswerSwitch() { this->outputSafeAnswerSwitch_ = nullptr;};
    inline int32_t outputSafeAnswerSwitch() const { DARABONBA_PTR_GET_DEFAULT(outputSafeAnswerSwitch_, 0) };
    inline GetPolicyInfoResponseBody& setOutputSafeAnswerSwitch(int32_t outputSafeAnswerSwitch) { DARABONBA_PTR_SET_VALUE(outputSafeAnswerSwitch_, outputSafeAnswerSwitch) };


    // policyIdentifier Field Functions 
    bool hasPolicyIdentifier() const { return this->policyIdentifier_ != nullptr;};
    void deletePolicyIdentifier() { this->policyIdentifier_ = nullptr;};
    inline string policyIdentifier() const { DARABONBA_PTR_GET_DEFAULT(policyIdentifier_, "") };
    inline GetPolicyInfoResponseBody& setPolicyIdentifier(string policyIdentifier) { DARABONBA_PTR_SET_VALUE(policyIdentifier_, policyIdentifier) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline GetPolicyInfoResponseBody& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // promptAttackInfo Field Functions 
    bool hasPromptAttackInfo() const { return this->promptAttackInfo_ != nullptr;};
    void deletePromptAttackInfo() { this->promptAttackInfo_ = nullptr;};
    inline const GetPolicyInfoResponseBodyPromptAttackInfo & promptAttackInfo() const { DARABONBA_PTR_GET_CONST(promptAttackInfo_, GetPolicyInfoResponseBodyPromptAttackInfo) };
    inline GetPolicyInfoResponseBodyPromptAttackInfo promptAttackInfo() { DARABONBA_PTR_GET(promptAttackInfo_, GetPolicyInfoResponseBodyPromptAttackInfo) };
    inline GetPolicyInfoResponseBody& setPromptAttackInfo(const GetPolicyInfoResponseBodyPromptAttackInfo & promptAttackInfo) { DARABONBA_PTR_SET_VALUE(promptAttackInfo_, promptAttackInfo) };
    inline GetPolicyInfoResponseBody& setPromptAttackInfo(GetPolicyInfoResponseBodyPromptAttackInfo && promptAttackInfo) { DARABONBA_PTR_SET_RVALUE(promptAttackInfo_, promptAttackInfo) };


    // promptAttackInfoList Field Functions 
    bool hasPromptAttackInfoList() const { return this->promptAttackInfoList_ != nullptr;};
    void deletePromptAttackInfoList() { this->promptAttackInfoList_ = nullptr;};
    inline const vector<GetPolicyInfoResponseBodyPromptAttackInfoList> & promptAttackInfoList() const { DARABONBA_PTR_GET_CONST(promptAttackInfoList_, vector<GetPolicyInfoResponseBodyPromptAttackInfoList>) };
    inline vector<GetPolicyInfoResponseBodyPromptAttackInfoList> promptAttackInfoList() { DARABONBA_PTR_GET(promptAttackInfoList_, vector<GetPolicyInfoResponseBodyPromptAttackInfoList>) };
    inline GetPolicyInfoResponseBody& setPromptAttackInfoList(const vector<GetPolicyInfoResponseBodyPromptAttackInfoList> & promptAttackInfoList) { DARABONBA_PTR_SET_VALUE(promptAttackInfoList_, promptAttackInfoList) };
    inline GetPolicyInfoResponseBody& setPromptAttackInfoList(vector<GetPolicyInfoResponseBodyPromptAttackInfoList> && promptAttackInfoList) { DARABONBA_PTR_SET_RVALUE(promptAttackInfoList_, promptAttackInfoList) };


    // promptAttackModelInfo Field Functions 
    bool hasPromptAttackModelInfo() const { return this->promptAttackModelInfo_ != nullptr;};
    void deletePromptAttackModelInfo() { this->promptAttackModelInfo_ = nullptr;};
    inline const GetPolicyInfoResponseBodyPromptAttackModelInfo & promptAttackModelInfo() const { DARABONBA_PTR_GET_CONST(promptAttackModelInfo_, GetPolicyInfoResponseBodyPromptAttackModelInfo) };
    inline GetPolicyInfoResponseBodyPromptAttackModelInfo promptAttackModelInfo() { DARABONBA_PTR_GET(promptAttackModelInfo_, GetPolicyInfoResponseBodyPromptAttackModelInfo) };
    inline GetPolicyInfoResponseBody& setPromptAttackModelInfo(const GetPolicyInfoResponseBodyPromptAttackModelInfo & promptAttackModelInfo) { DARABONBA_PTR_SET_VALUE(promptAttackModelInfo_, promptAttackModelInfo) };
    inline GetPolicyInfoResponseBody& setPromptAttackModelInfo(GetPolicyInfoResponseBodyPromptAttackModelInfo && promptAttackModelInfo) { DARABONBA_PTR_SET_RVALUE(promptAttackModelInfo_, promptAttackModelInfo) };


    // regularExpressList Field Functions 
    bool hasRegularExpressList() const { return this->regularExpressList_ != nullptr;};
    void deleteRegularExpressList() { this->regularExpressList_ = nullptr;};
    inline const vector<GetPolicyInfoResponseBodyRegularExpressList> & regularExpressList() const { DARABONBA_PTR_GET_CONST(regularExpressList_, vector<GetPolicyInfoResponseBodyRegularExpressList>) };
    inline vector<GetPolicyInfoResponseBodyRegularExpressList> regularExpressList() { DARABONBA_PTR_GET(regularExpressList_, vector<GetPolicyInfoResponseBodyRegularExpressList>) };
    inline GetPolicyInfoResponseBody& setRegularExpressList(const vector<GetPolicyInfoResponseBodyRegularExpressList> & regularExpressList) { DARABONBA_PTR_SET_VALUE(regularExpressList_, regularExpressList) };
    inline GetPolicyInfoResponseBody& setRegularExpressList(vector<GetPolicyInfoResponseBodyRegularExpressList> && regularExpressList) { DARABONBA_PTR_SET_RVALUE(regularExpressList_, regularExpressList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPolicyInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sceneType Field Functions 
    bool hasSceneType() const { return this->sceneType_ != nullptr;};
    void deleteSceneType() { this->sceneType_ = nullptr;};
    inline int32_t sceneType() const { DARABONBA_PTR_GET_DEFAULT(sceneType_, 0) };
    inline GetPolicyInfoResponseBody& setSceneType(int32_t sceneType) { DARABONBA_PTR_SET_VALUE(sceneType_, sceneType) };


    // sensitiveConfigList Field Functions 
    bool hasSensitiveConfigList() const { return this->sensitiveConfigList_ != nullptr;};
    void deleteSensitiveConfigList() { this->sensitiveConfigList_ = nullptr;};
    inline const vector<GetPolicyInfoResponseBodySensitiveConfigList> & sensitiveConfigList() const { DARABONBA_PTR_GET_CONST(sensitiveConfigList_, vector<GetPolicyInfoResponseBodySensitiveConfigList>) };
    inline vector<GetPolicyInfoResponseBodySensitiveConfigList> sensitiveConfigList() { DARABONBA_PTR_GET(sensitiveConfigList_, vector<GetPolicyInfoResponseBodySensitiveConfigList>) };
    inline GetPolicyInfoResponseBody& setSensitiveConfigList(const vector<GetPolicyInfoResponseBodySensitiveConfigList> & sensitiveConfigList) { DARABONBA_PTR_SET_VALUE(sensitiveConfigList_, sensitiveConfigList) };
    inline GetPolicyInfoResponseBody& setSensitiveConfigList(vector<GetPolicyInfoResponseBodySensitiveConfigList> && sensitiveConfigList) { DARABONBA_PTR_SET_RVALUE(sensitiveConfigList_, sensitiveConfigList) };


    // sensitiveTopicList Field Functions 
    bool hasSensitiveTopicList() const { return this->sensitiveTopicList_ != nullptr;};
    void deleteSensitiveTopicList() { this->sensitiveTopicList_ = nullptr;};
    inline const vector<GetPolicyInfoResponseBodySensitiveTopicList> & sensitiveTopicList() const { DARABONBA_PTR_GET_CONST(sensitiveTopicList_, vector<GetPolicyInfoResponseBodySensitiveTopicList>) };
    inline vector<GetPolicyInfoResponseBodySensitiveTopicList> sensitiveTopicList() { DARABONBA_PTR_GET(sensitiveTopicList_, vector<GetPolicyInfoResponseBodySensitiveTopicList>) };
    inline GetPolicyInfoResponseBody& setSensitiveTopicList(const vector<GetPolicyInfoResponseBodySensitiveTopicList> & sensitiveTopicList) { DARABONBA_PTR_SET_VALUE(sensitiveTopicList_, sensitiveTopicList) };
    inline GetPolicyInfoResponseBody& setSensitiveTopicList(vector<GetPolicyInfoResponseBodySensitiveTopicList> && sensitiveTopicList) { DARABONBA_PTR_SET_RVALUE(sensitiveTopicList_, sensitiveTopicList) };


    // sensitiveTopicModelInfo Field Functions 
    bool hasSensitiveTopicModelInfo() const { return this->sensitiveTopicModelInfo_ != nullptr;};
    void deleteSensitiveTopicModelInfo() { this->sensitiveTopicModelInfo_ = nullptr;};
    inline const GetPolicyInfoResponseBodySensitiveTopicModelInfo & sensitiveTopicModelInfo() const { DARABONBA_PTR_GET_CONST(sensitiveTopicModelInfo_, GetPolicyInfoResponseBodySensitiveTopicModelInfo) };
    inline GetPolicyInfoResponseBodySensitiveTopicModelInfo sensitiveTopicModelInfo() { DARABONBA_PTR_GET(sensitiveTopicModelInfo_, GetPolicyInfoResponseBodySensitiveTopicModelInfo) };
    inline GetPolicyInfoResponseBody& setSensitiveTopicModelInfo(const GetPolicyInfoResponseBodySensitiveTopicModelInfo & sensitiveTopicModelInfo) { DARABONBA_PTR_SET_VALUE(sensitiveTopicModelInfo_, sensitiveTopicModelInfo) };
    inline GetPolicyInfoResponseBody& setSensitiveTopicModelInfo(GetPolicyInfoResponseBodySensitiveTopicModelInfo && sensitiveTopicModelInfo) { DARABONBA_PTR_SET_RVALUE(sensitiveTopicModelInfo_, sensitiveTopicModelInfo) };


    // sensitiveWordList Field Functions 
    bool hasSensitiveWordList() const { return this->sensitiveWordList_ != nullptr;};
    void deleteSensitiveWordList() { this->sensitiveWordList_ = nullptr;};
    inline const vector<GetPolicyInfoResponseBodySensitiveWordList> & sensitiveWordList() const { DARABONBA_PTR_GET_CONST(sensitiveWordList_, vector<GetPolicyInfoResponseBodySensitiveWordList>) };
    inline vector<GetPolicyInfoResponseBodySensitiveWordList> sensitiveWordList() { DARABONBA_PTR_GET(sensitiveWordList_, vector<GetPolicyInfoResponseBodySensitiveWordList>) };
    inline GetPolicyInfoResponseBody& setSensitiveWordList(const vector<GetPolicyInfoResponseBodySensitiveWordList> & sensitiveWordList) { DARABONBA_PTR_SET_VALUE(sensitiveWordList_, sensitiveWordList) };
    inline GetPolicyInfoResponseBody& setSensitiveWordList(vector<GetPolicyInfoResponseBodySensitiveWordList> && sensitiveWordList) { DARABONBA_PTR_SET_RVALUE(sensitiveWordList_, sensitiveWordList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPolicyInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // topicConfigInfoList Field Functions 
    bool hasTopicConfigInfoList() const { return this->topicConfigInfoList_ != nullptr;};
    void deleteTopicConfigInfoList() { this->topicConfigInfoList_ = nullptr;};
    inline const vector<GetPolicyInfoResponseBodyTopicConfigInfoList> & topicConfigInfoList() const { DARABONBA_PTR_GET_CONST(topicConfigInfoList_, vector<GetPolicyInfoResponseBodyTopicConfigInfoList>) };
    inline vector<GetPolicyInfoResponseBodyTopicConfigInfoList> topicConfigInfoList() { DARABONBA_PTR_GET(topicConfigInfoList_, vector<GetPolicyInfoResponseBodyTopicConfigInfoList>) };
    inline GetPolicyInfoResponseBody& setTopicConfigInfoList(const vector<GetPolicyInfoResponseBodyTopicConfigInfoList> & topicConfigInfoList) { DARABONBA_PTR_SET_VALUE(topicConfigInfoList_, topicConfigInfoList) };
    inline GetPolicyInfoResponseBody& setTopicConfigInfoList(vector<GetPolicyInfoResponseBodyTopicConfigInfoList> && topicConfigInfoList) { DARABONBA_PTR_SET_RVALUE(topicConfigInfoList_, topicConfigInfoList) };


    // wordGroupInfoList Field Functions 
    bool hasWordGroupInfoList() const { return this->wordGroupInfoList_ != nullptr;};
    void deleteWordGroupInfoList() { this->wordGroupInfoList_ = nullptr;};
    inline const vector<GetPolicyInfoResponseBodyWordGroupInfoList> & wordGroupInfoList() const { DARABONBA_PTR_GET_CONST(wordGroupInfoList_, vector<GetPolicyInfoResponseBodyWordGroupInfoList>) };
    inline vector<GetPolicyInfoResponseBodyWordGroupInfoList> wordGroupInfoList() { DARABONBA_PTR_GET(wordGroupInfoList_, vector<GetPolicyInfoResponseBodyWordGroupInfoList>) };
    inline GetPolicyInfoResponseBody& setWordGroupInfoList(const vector<GetPolicyInfoResponseBodyWordGroupInfoList> & wordGroupInfoList) { DARABONBA_PTR_SET_VALUE(wordGroupInfoList_, wordGroupInfoList) };
    inline GetPolicyInfoResponseBody& setWordGroupInfoList(vector<GetPolicyInfoResponseBodyWordGroupInfoList> && wordGroupInfoList) { DARABONBA_PTR_SET_RVALUE(wordGroupInfoList_, wordGroupInfoList) };


  protected:
    // Result code, 00000 indicates success; others indicate failure.
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<GetPolicyInfoResponseBodyContentSafeModelInfo> contentSafeModelInfo_ = nullptr;
    std::shared_ptr<int32_t> enableSensitiveInputCheck_ = nullptr;
    std::shared_ptr<int32_t> enableSensitiveOutputCheck_ = nullptr;
    // Policy modification time
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Harmful category configuration list
    std::shared_ptr<vector<GetPolicyInfoResponseBodyHarmfulCategoryConfigInfoList>> harmfulCategoryConfigInfoList_ = nullptr;
    // HTTP status code
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> inputSafeAnswer_ = nullptr;
    std::shared_ptr<int32_t> inputSafeAnswerSwitch_ = nullptr;
    std::shared_ptr<int32_t> isSidecarPolicy_ = nullptr;
    // Error message.
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> outputSafeAnswer_ = nullptr;
    std::shared_ptr<int32_t> outputSafeAnswerSwitch_ = nullptr;
    // Policy identifier
    std::shared_ptr<string> policyIdentifier_ = nullptr;
    // Detection policy name.
    std::shared_ptr<string> policyName_ = nullptr;
    // Prompt attack detection result object
    std::shared_ptr<GetPolicyInfoResponseBodyPromptAttackInfo> promptAttackInfo_ = nullptr;
    // Prompt attack list
    std::shared_ptr<vector<GetPolicyInfoResponseBodyPromptAttackInfoList>> promptAttackInfoList_ = nullptr;
    std::shared_ptr<GetPolicyInfoResponseBodyPromptAttackModelInfo> promptAttackModelInfo_ = nullptr;
    std::shared_ptr<vector<GetPolicyInfoResponseBodyRegularExpressList>> regularExpressList_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> sceneType_ = nullptr;
    std::shared_ptr<vector<GetPolicyInfoResponseBodySensitiveConfigList>> sensitiveConfigList_ = nullptr;
    std::shared_ptr<vector<GetPolicyInfoResponseBodySensitiveTopicList>> sensitiveTopicList_ = nullptr;
    std::shared_ptr<GetPolicyInfoResponseBodySensitiveTopicModelInfo> sensitiveTopicModelInfo_ = nullptr;
    std::shared_ptr<vector<GetPolicyInfoResponseBodySensitiveWordList>> sensitiveWordList_ = nullptr;
    // Indicates whether the operation was successful. `true` for success, `false` for failure.
    std::shared_ptr<bool> success_ = nullptr;
    // Sensitive topic list
    std::shared_ptr<vector<GetPolicyInfoResponseBodyTopicConfigInfoList>> topicConfigInfoList_ = nullptr;
    // Keyword group object list
    std::shared_ptr<vector<GetPolicyInfoResponseBodyWordGroupInfoList>> wordGroupInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
