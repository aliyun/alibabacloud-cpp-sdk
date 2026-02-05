// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeIntentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIntentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Intent, intent_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIntentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Intent, intent_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeIntentResponseBody() = default ;
    DescribeIntentResponseBody(const DescribeIntentResponseBody &) = default ;
    DescribeIntentResponseBody(DescribeIntentResponseBody &&) = default ;
    DescribeIntentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIntentResponseBody() = default ;
    DescribeIntentResponseBody& operator=(const DescribeIntentResponseBody &) = default ;
    DescribeIntentResponseBody& operator=(DescribeIntentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Intent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Intent& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(IntentDescription, intentDescription_);
        DARABONBA_PTR_TO_JSON(IntentId, intentId_);
        DARABONBA_PTR_TO_JSON(IntentName, intentName_);
        DARABONBA_PTR_TO_JSON(Keywords, keywords_);
        DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(Utterances, utterances_);
      };
      friend void from_json(const Darabonba::Json& j, Intent& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(IntentDescription, intentDescription_);
        DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
        DARABONBA_PTR_FROM_JSON(IntentName, intentName_);
        DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
        DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(Utterances, utterances_);
      };
      Intent() = default ;
      Intent(const Intent &) = default ;
      Intent(Intent &&) = default ;
      Intent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Intent() = default ;
      Intent& operator=(const Intent &) = default ;
      Intent& operator=(Intent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->intentDescription_ == nullptr && this->intentId_ == nullptr && this->intentName_ == nullptr && this->keywords_ == nullptr && this->scriptId_ == nullptr
        && this->updateTime_ == nullptr && this->utterances_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Intent& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // intentDescription Field Functions 
      bool hasIntentDescription() const { return this->intentDescription_ != nullptr;};
      void deleteIntentDescription() { this->intentDescription_ = nullptr;};
      inline string getIntentDescription() const { DARABONBA_PTR_GET_DEFAULT(intentDescription_, "") };
      inline Intent& setIntentDescription(string intentDescription) { DARABONBA_PTR_SET_VALUE(intentDescription_, intentDescription) };


      // intentId Field Functions 
      bool hasIntentId() const { return this->intentId_ != nullptr;};
      void deleteIntentId() { this->intentId_ = nullptr;};
      inline string getIntentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, "") };
      inline Intent& setIntentId(string intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


      // intentName Field Functions 
      bool hasIntentName() const { return this->intentName_ != nullptr;};
      void deleteIntentName() { this->intentName_ = nullptr;};
      inline string getIntentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
      inline Intent& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


      // keywords Field Functions 
      bool hasKeywords() const { return this->keywords_ != nullptr;};
      void deleteKeywords() { this->keywords_ = nullptr;};
      inline string getKeywords() const { DARABONBA_PTR_GET_DEFAULT(keywords_, "") };
      inline Intent& setKeywords(string keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };


      // scriptId Field Functions 
      bool hasScriptId() const { return this->scriptId_ != nullptr;};
      void deleteScriptId() { this->scriptId_ = nullptr;};
      inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
      inline Intent& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Intent& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // utterances Field Functions 
      bool hasUtterances() const { return this->utterances_ != nullptr;};
      void deleteUtterances() { this->utterances_ = nullptr;};
      inline string getUtterances() const { DARABONBA_PTR_GET_DEFAULT(utterances_, "") };
      inline Intent& setUtterances(string utterances) { DARABONBA_PTR_SET_VALUE(utterances_, utterances) };


    protected:
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> intentDescription_ {};
      shared_ptr<string> intentId_ {};
      shared_ptr<string> intentName_ {};
      shared_ptr<string> keywords_ {};
      shared_ptr<string> scriptId_ {};
      shared_ptr<int64_t> updateTime_ {};
      shared_ptr<string> utterances_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->intent_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeIntentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeIntentResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // intent Field Functions 
    bool hasIntent() const { return this->intent_ != nullptr;};
    void deleteIntent() { this->intent_ = nullptr;};
    inline const DescribeIntentResponseBody::Intent & getIntent() const { DARABONBA_PTR_GET_CONST(intent_, DescribeIntentResponseBody::Intent) };
    inline DescribeIntentResponseBody::Intent getIntent() { DARABONBA_PTR_GET(intent_, DescribeIntentResponseBody::Intent) };
    inline DescribeIntentResponseBody& setIntent(const DescribeIntentResponseBody::Intent & intent) { DARABONBA_PTR_SET_VALUE(intent_, intent) };
    inline DescribeIntentResponseBody& setIntent(DescribeIntentResponseBody::Intent && intent) { DARABONBA_PTR_SET_RVALUE(intent_, intent) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeIntentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIntentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeIntentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<DescribeIntentResponseBody::Intent> intent_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
