// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTENTSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTENTSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIntentStatisticsResponseBodyGlobalIntents.hpp>
#include <alibabacloud/models/DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer.hpp>
#include <alibabacloud/models/DescribeIntentStatisticsResponseBodyProcessIntents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeIntentStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIntentStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(GlobalIntentNum, globalIntentNum_);
      DARABONBA_PTR_TO_JSON(GlobalIntents, globalIntents_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentsAfterNoAnswer, intentsAfterNoAnswer_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(ProcessIntentNum, processIntentNum_);
      DARABONBA_PTR_TO_JSON(ProcessIntents, processIntents_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIntentStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(GlobalIntentNum, globalIntentNum_);
      DARABONBA_PTR_FROM_JSON(GlobalIntents, globalIntents_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentsAfterNoAnswer, intentsAfterNoAnswer_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(ProcessIntentNum, processIntentNum_);
      DARABONBA_PTR_FROM_JSON(ProcessIntents, processIntents_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeIntentStatisticsResponseBody() = default ;
    DescribeIntentStatisticsResponseBody(const DescribeIntentStatisticsResponseBody &) = default ;
    DescribeIntentStatisticsResponseBody(DescribeIntentStatisticsResponseBody &&) = default ;
    DescribeIntentStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIntentStatisticsResponseBody() = default ;
    DescribeIntentStatisticsResponseBody& operator=(const DescribeIntentStatisticsResponseBody &) = default ;
    DescribeIntentStatisticsResponseBody& operator=(DescribeIntentStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->globalIntentNum_ == nullptr && return this->globalIntents_ == nullptr && return this->groupId_ == nullptr && return this->httpStatusCode_ == nullptr && return this->instanceId_ == nullptr
        && return this->intentsAfterNoAnswer_ == nullptr && return this->message_ == nullptr && return this->processIntentNum_ == nullptr && return this->processIntents_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeIntentStatisticsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // globalIntentNum Field Functions 
    bool hasGlobalIntentNum() const { return this->globalIntentNum_ != nullptr;};
    void deleteGlobalIntentNum() { this->globalIntentNum_ = nullptr;};
    inline int32_t globalIntentNum() const { DARABONBA_PTR_GET_DEFAULT(globalIntentNum_, 0) };
    inline DescribeIntentStatisticsResponseBody& setGlobalIntentNum(int32_t globalIntentNum) { DARABONBA_PTR_SET_VALUE(globalIntentNum_, globalIntentNum) };


    // globalIntents Field Functions 
    bool hasGlobalIntents() const { return this->globalIntents_ != nullptr;};
    void deleteGlobalIntents() { this->globalIntents_ = nullptr;};
    inline const vector<DescribeIntentStatisticsResponseBodyGlobalIntents> & globalIntents() const { DARABONBA_PTR_GET_CONST(globalIntents_, vector<DescribeIntentStatisticsResponseBodyGlobalIntents>) };
    inline vector<DescribeIntentStatisticsResponseBodyGlobalIntents> globalIntents() { DARABONBA_PTR_GET(globalIntents_, vector<DescribeIntentStatisticsResponseBodyGlobalIntents>) };
    inline DescribeIntentStatisticsResponseBody& setGlobalIntents(const vector<DescribeIntentStatisticsResponseBodyGlobalIntents> & globalIntents) { DARABONBA_PTR_SET_VALUE(globalIntents_, globalIntents) };
    inline DescribeIntentStatisticsResponseBody& setGlobalIntents(vector<DescribeIntentStatisticsResponseBodyGlobalIntents> && globalIntents) { DARABONBA_PTR_SET_RVALUE(globalIntents_, globalIntents) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeIntentStatisticsResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeIntentStatisticsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeIntentStatisticsResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentsAfterNoAnswer Field Functions 
    bool hasIntentsAfterNoAnswer() const { return this->intentsAfterNoAnswer_ != nullptr;};
    void deleteIntentsAfterNoAnswer() { this->intentsAfterNoAnswer_ = nullptr;};
    inline const vector<DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer> & intentsAfterNoAnswer() const { DARABONBA_PTR_GET_CONST(intentsAfterNoAnswer_, vector<DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer>) };
    inline vector<DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer> intentsAfterNoAnswer() { DARABONBA_PTR_GET(intentsAfterNoAnswer_, vector<DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer>) };
    inline DescribeIntentStatisticsResponseBody& setIntentsAfterNoAnswer(const vector<DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer> & intentsAfterNoAnswer) { DARABONBA_PTR_SET_VALUE(intentsAfterNoAnswer_, intentsAfterNoAnswer) };
    inline DescribeIntentStatisticsResponseBody& setIntentsAfterNoAnswer(vector<DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer> && intentsAfterNoAnswer) { DARABONBA_PTR_SET_RVALUE(intentsAfterNoAnswer_, intentsAfterNoAnswer) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeIntentStatisticsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // processIntentNum Field Functions 
    bool hasProcessIntentNum() const { return this->processIntentNum_ != nullptr;};
    void deleteProcessIntentNum() { this->processIntentNum_ = nullptr;};
    inline int32_t processIntentNum() const { DARABONBA_PTR_GET_DEFAULT(processIntentNum_, 0) };
    inline DescribeIntentStatisticsResponseBody& setProcessIntentNum(int32_t processIntentNum) { DARABONBA_PTR_SET_VALUE(processIntentNum_, processIntentNum) };


    // processIntents Field Functions 
    bool hasProcessIntents() const { return this->processIntents_ != nullptr;};
    void deleteProcessIntents() { this->processIntents_ = nullptr;};
    inline const vector<DescribeIntentStatisticsResponseBodyProcessIntents> & processIntents() const { DARABONBA_PTR_GET_CONST(processIntents_, vector<DescribeIntentStatisticsResponseBodyProcessIntents>) };
    inline vector<DescribeIntentStatisticsResponseBodyProcessIntents> processIntents() { DARABONBA_PTR_GET(processIntents_, vector<DescribeIntentStatisticsResponseBodyProcessIntents>) };
    inline DescribeIntentStatisticsResponseBody& setProcessIntents(const vector<DescribeIntentStatisticsResponseBodyProcessIntents> & processIntents) { DARABONBA_PTR_SET_VALUE(processIntents_, processIntents) };
    inline DescribeIntentStatisticsResponseBody& setProcessIntents(vector<DescribeIntentStatisticsResponseBodyProcessIntents> && processIntents) { DARABONBA_PTR_SET_RVALUE(processIntents_, processIntents) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIntentStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeIntentStatisticsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> globalIntentNum_ = nullptr;
    std::shared_ptr<vector<DescribeIntentStatisticsResponseBodyGlobalIntents>> globalIntents_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<vector<DescribeIntentStatisticsResponseBodyIntentsAfterNoAnswer>> intentsAfterNoAnswer_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<int32_t> processIntentNum_ = nullptr;
    std::shared_ptr<vector<DescribeIntentStatisticsResponseBodyProcessIntents>> processIntents_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
