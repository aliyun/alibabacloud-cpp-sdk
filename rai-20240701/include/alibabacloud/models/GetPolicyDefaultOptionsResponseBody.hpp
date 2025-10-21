// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYDEFAULTOPTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYDEFAULTOPTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPolicyDefaultOptionsResponseBodyHarmfulCategoryInfoList.hpp>
#include <alibabacloud/models/GetPolicyDefaultOptionsResponseBodyPromptAttackInfo.hpp>
#include <alibabacloud/models/GetPolicyDefaultOptionsResponseBodyPromptAttackInfoList.hpp>
#include <alibabacloud/models/GetPolicyDefaultOptionsResponseBodySensitiveDataTypeList.hpp>
#include <alibabacloud/models/GetPolicyDefaultOptionsResponseBodyTopicConfigInfoList.hpp>
#include <alibabacloud/models/GetPolicyDefaultOptionsResponseBodyWordGroupInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetPolicyDefaultOptionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyDefaultOptionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EnableSensitiveInputCheck, enableSensitiveInputCheck_);
      DARABONBA_PTR_TO_JSON(EnableSensitiveOutputCheck, enableSensitiveOutputCheck_);
      DARABONBA_PTR_TO_JSON(HarmfulCategoryInfoList, harmfulCategoryInfoList_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(InputSafeAnswer, inputSafeAnswer_);
      DARABONBA_PTR_TO_JSON(InputSafeAnswerSwitch, inputSafeAnswerSwitch_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OutputSafeAnswer, outputSafeAnswer_);
      DARABONBA_PTR_TO_JSON(OutputSafeAnswerSwitch, outputSafeAnswerSwitch_);
      DARABONBA_PTR_TO_JSON(PromptAttackInfo, promptAttackInfo_);
      DARABONBA_PTR_TO_JSON(PromptAttackInfoList, promptAttackInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SensitiveDataTypeList, sensitiveDataTypeList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TopicConfigInfoList, topicConfigInfoList_);
      DARABONBA_PTR_TO_JSON(WordGroupInfoList, wordGroupInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyDefaultOptionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EnableSensitiveInputCheck, enableSensitiveInputCheck_);
      DARABONBA_PTR_FROM_JSON(EnableSensitiveOutputCheck, enableSensitiveOutputCheck_);
      DARABONBA_PTR_FROM_JSON(HarmfulCategoryInfoList, harmfulCategoryInfoList_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(InputSafeAnswer, inputSafeAnswer_);
      DARABONBA_PTR_FROM_JSON(InputSafeAnswerSwitch, inputSafeAnswerSwitch_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OutputSafeAnswer, outputSafeAnswer_);
      DARABONBA_PTR_FROM_JSON(OutputSafeAnswerSwitch, outputSafeAnswerSwitch_);
      DARABONBA_PTR_FROM_JSON(PromptAttackInfo, promptAttackInfo_);
      DARABONBA_PTR_FROM_JSON(PromptAttackInfoList, promptAttackInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SensitiveDataTypeList, sensitiveDataTypeList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TopicConfigInfoList, topicConfigInfoList_);
      DARABONBA_PTR_FROM_JSON(WordGroupInfoList, wordGroupInfoList_);
    };
    GetPolicyDefaultOptionsResponseBody() = default ;
    GetPolicyDefaultOptionsResponseBody(const GetPolicyDefaultOptionsResponseBody &) = default ;
    GetPolicyDefaultOptionsResponseBody(GetPolicyDefaultOptionsResponseBody &&) = default ;
    GetPolicyDefaultOptionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyDefaultOptionsResponseBody() = default ;
    GetPolicyDefaultOptionsResponseBody& operator=(const GetPolicyDefaultOptionsResponseBody &) = default ;
    GetPolicyDefaultOptionsResponseBody& operator=(GetPolicyDefaultOptionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->enableSensitiveInputCheck_ == nullptr && return this->enableSensitiveOutputCheck_ == nullptr && return this->harmfulCategoryInfoList_ == nullptr && return this->httpStatusCode_ == nullptr && return this->inputSafeAnswer_ == nullptr
        && return this->inputSafeAnswerSwitch_ == nullptr && return this->message_ == nullptr && return this->outputSafeAnswer_ == nullptr && return this->outputSafeAnswerSwitch_ == nullptr && return this->promptAttackInfo_ == nullptr
        && return this->promptAttackInfoList_ == nullptr && return this->requestId_ == nullptr && return this->sensitiveDataTypeList_ == nullptr && return this->success_ == nullptr && return this->topicConfigInfoList_ == nullptr
        && return this->wordGroupInfoList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPolicyDefaultOptionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // enableSensitiveInputCheck Field Functions 
    bool hasEnableSensitiveInputCheck() const { return this->enableSensitiveInputCheck_ != nullptr;};
    void deleteEnableSensitiveInputCheck() { this->enableSensitiveInputCheck_ = nullptr;};
    inline int32_t enableSensitiveInputCheck() const { DARABONBA_PTR_GET_DEFAULT(enableSensitiveInputCheck_, 0) };
    inline GetPolicyDefaultOptionsResponseBody& setEnableSensitiveInputCheck(int32_t enableSensitiveInputCheck) { DARABONBA_PTR_SET_VALUE(enableSensitiveInputCheck_, enableSensitiveInputCheck) };


    // enableSensitiveOutputCheck Field Functions 
    bool hasEnableSensitiveOutputCheck() const { return this->enableSensitiveOutputCheck_ != nullptr;};
    void deleteEnableSensitiveOutputCheck() { this->enableSensitiveOutputCheck_ = nullptr;};
    inline int32_t enableSensitiveOutputCheck() const { DARABONBA_PTR_GET_DEFAULT(enableSensitiveOutputCheck_, 0) };
    inline GetPolicyDefaultOptionsResponseBody& setEnableSensitiveOutputCheck(int32_t enableSensitiveOutputCheck) { DARABONBA_PTR_SET_VALUE(enableSensitiveOutputCheck_, enableSensitiveOutputCheck) };


    // harmfulCategoryInfoList Field Functions 
    bool hasHarmfulCategoryInfoList() const { return this->harmfulCategoryInfoList_ != nullptr;};
    void deleteHarmfulCategoryInfoList() { this->harmfulCategoryInfoList_ = nullptr;};
    inline const vector<GetPolicyDefaultOptionsResponseBodyHarmfulCategoryInfoList> & harmfulCategoryInfoList() const { DARABONBA_PTR_GET_CONST(harmfulCategoryInfoList_, vector<GetPolicyDefaultOptionsResponseBodyHarmfulCategoryInfoList>) };
    inline vector<GetPolicyDefaultOptionsResponseBodyHarmfulCategoryInfoList> harmfulCategoryInfoList() { DARABONBA_PTR_GET(harmfulCategoryInfoList_, vector<GetPolicyDefaultOptionsResponseBodyHarmfulCategoryInfoList>) };
    inline GetPolicyDefaultOptionsResponseBody& setHarmfulCategoryInfoList(const vector<GetPolicyDefaultOptionsResponseBodyHarmfulCategoryInfoList> & harmfulCategoryInfoList) { DARABONBA_PTR_SET_VALUE(harmfulCategoryInfoList_, harmfulCategoryInfoList) };
    inline GetPolicyDefaultOptionsResponseBody& setHarmfulCategoryInfoList(vector<GetPolicyDefaultOptionsResponseBodyHarmfulCategoryInfoList> && harmfulCategoryInfoList) { DARABONBA_PTR_SET_RVALUE(harmfulCategoryInfoList_, harmfulCategoryInfoList) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetPolicyDefaultOptionsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // inputSafeAnswer Field Functions 
    bool hasInputSafeAnswer() const { return this->inputSafeAnswer_ != nullptr;};
    void deleteInputSafeAnswer() { this->inputSafeAnswer_ = nullptr;};
    inline string inputSafeAnswer() const { DARABONBA_PTR_GET_DEFAULT(inputSafeAnswer_, "") };
    inline GetPolicyDefaultOptionsResponseBody& setInputSafeAnswer(string inputSafeAnswer) { DARABONBA_PTR_SET_VALUE(inputSafeAnswer_, inputSafeAnswer) };


    // inputSafeAnswerSwitch Field Functions 
    bool hasInputSafeAnswerSwitch() const { return this->inputSafeAnswerSwitch_ != nullptr;};
    void deleteInputSafeAnswerSwitch() { this->inputSafeAnswerSwitch_ = nullptr;};
    inline int32_t inputSafeAnswerSwitch() const { DARABONBA_PTR_GET_DEFAULT(inputSafeAnswerSwitch_, 0) };
    inline GetPolicyDefaultOptionsResponseBody& setInputSafeAnswerSwitch(int32_t inputSafeAnswerSwitch) { DARABONBA_PTR_SET_VALUE(inputSafeAnswerSwitch_, inputSafeAnswerSwitch) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPolicyDefaultOptionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // outputSafeAnswer Field Functions 
    bool hasOutputSafeAnswer() const { return this->outputSafeAnswer_ != nullptr;};
    void deleteOutputSafeAnswer() { this->outputSafeAnswer_ = nullptr;};
    inline string outputSafeAnswer() const { DARABONBA_PTR_GET_DEFAULT(outputSafeAnswer_, "") };
    inline GetPolicyDefaultOptionsResponseBody& setOutputSafeAnswer(string outputSafeAnswer) { DARABONBA_PTR_SET_VALUE(outputSafeAnswer_, outputSafeAnswer) };


    // outputSafeAnswerSwitch Field Functions 
    bool hasOutputSafeAnswerSwitch() const { return this->outputSafeAnswerSwitch_ != nullptr;};
    void deleteOutputSafeAnswerSwitch() { this->outputSafeAnswerSwitch_ = nullptr;};
    inline int32_t outputSafeAnswerSwitch() const { DARABONBA_PTR_GET_DEFAULT(outputSafeAnswerSwitch_, 0) };
    inline GetPolicyDefaultOptionsResponseBody& setOutputSafeAnswerSwitch(int32_t outputSafeAnswerSwitch) { DARABONBA_PTR_SET_VALUE(outputSafeAnswerSwitch_, outputSafeAnswerSwitch) };


    // promptAttackInfo Field Functions 
    bool hasPromptAttackInfo() const { return this->promptAttackInfo_ != nullptr;};
    void deletePromptAttackInfo() { this->promptAttackInfo_ = nullptr;};
    inline const GetPolicyDefaultOptionsResponseBodyPromptAttackInfo & promptAttackInfo() const { DARABONBA_PTR_GET_CONST(promptAttackInfo_, GetPolicyDefaultOptionsResponseBodyPromptAttackInfo) };
    inline GetPolicyDefaultOptionsResponseBodyPromptAttackInfo promptAttackInfo() { DARABONBA_PTR_GET(promptAttackInfo_, GetPolicyDefaultOptionsResponseBodyPromptAttackInfo) };
    inline GetPolicyDefaultOptionsResponseBody& setPromptAttackInfo(const GetPolicyDefaultOptionsResponseBodyPromptAttackInfo & promptAttackInfo) { DARABONBA_PTR_SET_VALUE(promptAttackInfo_, promptAttackInfo) };
    inline GetPolicyDefaultOptionsResponseBody& setPromptAttackInfo(GetPolicyDefaultOptionsResponseBodyPromptAttackInfo && promptAttackInfo) { DARABONBA_PTR_SET_RVALUE(promptAttackInfo_, promptAttackInfo) };


    // promptAttackInfoList Field Functions 
    bool hasPromptAttackInfoList() const { return this->promptAttackInfoList_ != nullptr;};
    void deletePromptAttackInfoList() { this->promptAttackInfoList_ = nullptr;};
    inline const vector<GetPolicyDefaultOptionsResponseBodyPromptAttackInfoList> & promptAttackInfoList() const { DARABONBA_PTR_GET_CONST(promptAttackInfoList_, vector<GetPolicyDefaultOptionsResponseBodyPromptAttackInfoList>) };
    inline vector<GetPolicyDefaultOptionsResponseBodyPromptAttackInfoList> promptAttackInfoList() { DARABONBA_PTR_GET(promptAttackInfoList_, vector<GetPolicyDefaultOptionsResponseBodyPromptAttackInfoList>) };
    inline GetPolicyDefaultOptionsResponseBody& setPromptAttackInfoList(const vector<GetPolicyDefaultOptionsResponseBodyPromptAttackInfoList> & promptAttackInfoList) { DARABONBA_PTR_SET_VALUE(promptAttackInfoList_, promptAttackInfoList) };
    inline GetPolicyDefaultOptionsResponseBody& setPromptAttackInfoList(vector<GetPolicyDefaultOptionsResponseBodyPromptAttackInfoList> && promptAttackInfoList) { DARABONBA_PTR_SET_RVALUE(promptAttackInfoList_, promptAttackInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPolicyDefaultOptionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sensitiveDataTypeList Field Functions 
    bool hasSensitiveDataTypeList() const { return this->sensitiveDataTypeList_ != nullptr;};
    void deleteSensitiveDataTypeList() { this->sensitiveDataTypeList_ = nullptr;};
    inline const vector<GetPolicyDefaultOptionsResponseBodySensitiveDataTypeList> & sensitiveDataTypeList() const { DARABONBA_PTR_GET_CONST(sensitiveDataTypeList_, vector<GetPolicyDefaultOptionsResponseBodySensitiveDataTypeList>) };
    inline vector<GetPolicyDefaultOptionsResponseBodySensitiveDataTypeList> sensitiveDataTypeList() { DARABONBA_PTR_GET(sensitiveDataTypeList_, vector<GetPolicyDefaultOptionsResponseBodySensitiveDataTypeList>) };
    inline GetPolicyDefaultOptionsResponseBody& setSensitiveDataTypeList(const vector<GetPolicyDefaultOptionsResponseBodySensitiveDataTypeList> & sensitiveDataTypeList) { DARABONBA_PTR_SET_VALUE(sensitiveDataTypeList_, sensitiveDataTypeList) };
    inline GetPolicyDefaultOptionsResponseBody& setSensitiveDataTypeList(vector<GetPolicyDefaultOptionsResponseBodySensitiveDataTypeList> && sensitiveDataTypeList) { DARABONBA_PTR_SET_RVALUE(sensitiveDataTypeList_, sensitiveDataTypeList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPolicyDefaultOptionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // topicConfigInfoList Field Functions 
    bool hasTopicConfigInfoList() const { return this->topicConfigInfoList_ != nullptr;};
    void deleteTopicConfigInfoList() { this->topicConfigInfoList_ = nullptr;};
    inline const vector<GetPolicyDefaultOptionsResponseBodyTopicConfigInfoList> & topicConfigInfoList() const { DARABONBA_PTR_GET_CONST(topicConfigInfoList_, vector<GetPolicyDefaultOptionsResponseBodyTopicConfigInfoList>) };
    inline vector<GetPolicyDefaultOptionsResponseBodyTopicConfigInfoList> topicConfigInfoList() { DARABONBA_PTR_GET(topicConfigInfoList_, vector<GetPolicyDefaultOptionsResponseBodyTopicConfigInfoList>) };
    inline GetPolicyDefaultOptionsResponseBody& setTopicConfigInfoList(const vector<GetPolicyDefaultOptionsResponseBodyTopicConfigInfoList> & topicConfigInfoList) { DARABONBA_PTR_SET_VALUE(topicConfigInfoList_, topicConfigInfoList) };
    inline GetPolicyDefaultOptionsResponseBody& setTopicConfigInfoList(vector<GetPolicyDefaultOptionsResponseBodyTopicConfigInfoList> && topicConfigInfoList) { DARABONBA_PTR_SET_RVALUE(topicConfigInfoList_, topicConfigInfoList) };


    // wordGroupInfoList Field Functions 
    bool hasWordGroupInfoList() const { return this->wordGroupInfoList_ != nullptr;};
    void deleteWordGroupInfoList() { this->wordGroupInfoList_ = nullptr;};
    inline const vector<GetPolicyDefaultOptionsResponseBodyWordGroupInfoList> & wordGroupInfoList() const { DARABONBA_PTR_GET_CONST(wordGroupInfoList_, vector<GetPolicyDefaultOptionsResponseBodyWordGroupInfoList>) };
    inline vector<GetPolicyDefaultOptionsResponseBodyWordGroupInfoList> wordGroupInfoList() { DARABONBA_PTR_GET(wordGroupInfoList_, vector<GetPolicyDefaultOptionsResponseBodyWordGroupInfoList>) };
    inline GetPolicyDefaultOptionsResponseBody& setWordGroupInfoList(const vector<GetPolicyDefaultOptionsResponseBodyWordGroupInfoList> & wordGroupInfoList) { DARABONBA_PTR_SET_VALUE(wordGroupInfoList_, wordGroupInfoList) };
    inline GetPolicyDefaultOptionsResponseBody& setWordGroupInfoList(vector<GetPolicyDefaultOptionsResponseBodyWordGroupInfoList> && wordGroupInfoList) { DARABONBA_PTR_SET_RVALUE(wordGroupInfoList_, wordGroupInfoList) };


  protected:
    // Status code, 00000 indicates success; others indicate failure.
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> enableSensitiveInputCheck_ = nullptr;
    std::shared_ptr<int32_t> enableSensitiveOutputCheck_ = nullptr;
    // List of harmful category objects
    std::shared_ptr<vector<GetPolicyDefaultOptionsResponseBodyHarmfulCategoryInfoList>> harmfulCategoryInfoList_ = nullptr;
    // HTTP status code
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> inputSafeAnswer_ = nullptr;
    std::shared_ptr<int32_t> inputSafeAnswerSwitch_ = nullptr;
    // Return message.
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> outputSafeAnswer_ = nullptr;
    std::shared_ptr<int32_t> outputSafeAnswerSwitch_ = nullptr;
    // Prompt attack detection result object
    std::shared_ptr<GetPolicyDefaultOptionsResponseBodyPromptAttackInfo> promptAttackInfo_ = nullptr;
    // Prompt attack list
    std::shared_ptr<vector<GetPolicyDefaultOptionsResponseBodyPromptAttackInfoList>> promptAttackInfoList_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<GetPolicyDefaultOptionsResponseBodySensitiveDataTypeList>> sensitiveDataTypeList_ = nullptr;
    // Indicates whether the operation was successful. `true` means success, `false` means failure.
    std::shared_ptr<bool> success_ = nullptr;
    // Sensitive topic list
    std::shared_ptr<vector<GetPolicyDefaultOptionsResponseBodyTopicConfigInfoList>> topicConfigInfoList_ = nullptr;
    // List of keyword group objects
    std::shared_ptr<vector<GetPolicyDefaultOptionsResponseBodyWordGroupInfoList>> wordGroupInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
