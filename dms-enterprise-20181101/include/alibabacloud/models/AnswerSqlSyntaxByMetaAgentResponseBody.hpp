// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANSWERSQLSYNTAXBYMETAAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ANSWERSQLSYNTAXBYMETAAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AnswerSqlSyntaxByMetaAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnswerSqlSyntaxByMetaAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AnswerSqlSyntaxByMetaAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AnswerSqlSyntaxByMetaAgentResponseBody() = default ;
    AnswerSqlSyntaxByMetaAgentResponseBody(const AnswerSqlSyntaxByMetaAgentResponseBody &) = default ;
    AnswerSqlSyntaxByMetaAgentResponseBody(AnswerSqlSyntaxByMetaAgentResponseBody &&) = default ;
    AnswerSqlSyntaxByMetaAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnswerSqlSyntaxByMetaAgentResponseBody() = default ;
    AnswerSqlSyntaxByMetaAgentResponseBody& operator=(const AnswerSqlSyntaxByMetaAgentResponseBody &) = default ;
    AnswerSqlSyntaxByMetaAgentResponseBody& operator=(AnswerSqlSyntaxByMetaAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->sessionId_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Data& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Data& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    protected:
      // The answer to the question.
      shared_ptr<string> content_ {};
      // The session ID.
      shared_ptr<string> sessionId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AnswerSqlSyntaxByMetaAgentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AnswerSqlSyntaxByMetaAgentResponseBody::Data) };
    inline AnswerSqlSyntaxByMetaAgentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AnswerSqlSyntaxByMetaAgentResponseBody::Data) };
    inline AnswerSqlSyntaxByMetaAgentResponseBody& setData(const AnswerSqlSyntaxByMetaAgentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AnswerSqlSyntaxByMetaAgentResponseBody& setData(AnswerSqlSyntaxByMetaAgentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline AnswerSqlSyntaxByMetaAgentResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline AnswerSqlSyntaxByMetaAgentResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AnswerSqlSyntaxByMetaAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AnswerSqlSyntaxByMetaAgentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    shared_ptr<AnswerSqlSyntaxByMetaAgentResponseBody::Data> data_ {};
    // The error code that is returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message that is returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
