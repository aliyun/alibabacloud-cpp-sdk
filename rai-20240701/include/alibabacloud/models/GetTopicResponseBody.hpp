// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTopicResponseBodyPolicyInfoList.hpp>
#include <alibabacloud/models/GetTopicResponseBodyTopicExampleInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetTopicResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PolicyInfoList, policyInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TopicDefinition, topicDefinition_);
      DARABONBA_PTR_TO_JSON(TopicExampleInfoList, topicExampleInfoList_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PolicyInfoList, policyInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TopicDefinition, topicDefinition_);
      DARABONBA_PTR_FROM_JSON(TopicExampleInfoList, topicExampleInfoList_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    GetTopicResponseBody() = default ;
    GetTopicResponseBody(const GetTopicResponseBody &) = default ;
    GetTopicResponseBody(GetTopicResponseBody &&) = default ;
    GetTopicResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicResponseBody() = default ;
    GetTopicResponseBody& operator=(const GetTopicResponseBody &) = default ;
    GetTopicResponseBody& operator=(GetTopicResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->gmtModified_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->policyInfoList_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr && return this->topicDefinition_ == nullptr && return this->topicExampleInfoList_ == nullptr && return this->topicName_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTopicResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline GetTopicResponseBody& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetTopicResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTopicResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // policyInfoList Field Functions 
    bool hasPolicyInfoList() const { return this->policyInfoList_ != nullptr;};
    void deletePolicyInfoList() { this->policyInfoList_ = nullptr;};
    inline const vector<GetTopicResponseBodyPolicyInfoList> & policyInfoList() const { DARABONBA_PTR_GET_CONST(policyInfoList_, vector<GetTopicResponseBodyPolicyInfoList>) };
    inline vector<GetTopicResponseBodyPolicyInfoList> policyInfoList() { DARABONBA_PTR_GET(policyInfoList_, vector<GetTopicResponseBodyPolicyInfoList>) };
    inline GetTopicResponseBody& setPolicyInfoList(const vector<GetTopicResponseBodyPolicyInfoList> & policyInfoList) { DARABONBA_PTR_SET_VALUE(policyInfoList_, policyInfoList) };
    inline GetTopicResponseBody& setPolicyInfoList(vector<GetTopicResponseBodyPolicyInfoList> && policyInfoList) { DARABONBA_PTR_SET_RVALUE(policyInfoList_, policyInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTopicResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTopicResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // topicDefinition Field Functions 
    bool hasTopicDefinition() const { return this->topicDefinition_ != nullptr;};
    void deleteTopicDefinition() { this->topicDefinition_ = nullptr;};
    inline string topicDefinition() const { DARABONBA_PTR_GET_DEFAULT(topicDefinition_, "") };
    inline GetTopicResponseBody& setTopicDefinition(string topicDefinition) { DARABONBA_PTR_SET_VALUE(topicDefinition_, topicDefinition) };


    // topicExampleInfoList Field Functions 
    bool hasTopicExampleInfoList() const { return this->topicExampleInfoList_ != nullptr;};
    void deleteTopicExampleInfoList() { this->topicExampleInfoList_ = nullptr;};
    inline const vector<GetTopicResponseBodyTopicExampleInfoList> & topicExampleInfoList() const { DARABONBA_PTR_GET_CONST(topicExampleInfoList_, vector<GetTopicResponseBodyTopicExampleInfoList>) };
    inline vector<GetTopicResponseBodyTopicExampleInfoList> topicExampleInfoList() { DARABONBA_PTR_GET(topicExampleInfoList_, vector<GetTopicResponseBodyTopicExampleInfoList>) };
    inline GetTopicResponseBody& setTopicExampleInfoList(const vector<GetTopicResponseBodyTopicExampleInfoList> & topicExampleInfoList) { DARABONBA_PTR_SET_VALUE(topicExampleInfoList_, topicExampleInfoList) };
    inline GetTopicResponseBody& setTopicExampleInfoList(vector<GetTopicResponseBodyTopicExampleInfoList> && topicExampleInfoList) { DARABONBA_PTR_SET_RVALUE(topicExampleInfoList_, topicExampleInfoList) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetTopicResponseBody& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<vector<GetTopicResponseBodyPolicyInfoList>> policyInfoList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> topicDefinition_ = nullptr;
    std::shared_ptr<vector<GetTopicResponseBodyTopicExampleInfoList>> topicExampleInfoList_ = nullptr;
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
