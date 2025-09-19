// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANSWERSQLSYNTAXBYMETAAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ANSWERSQLSYNTAXBYMETAAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AnswerSqlSyntaxByMetaAgentResponseBodyData.hpp>
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
    virtual bool empty() const override { this->data_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AnswerSqlSyntaxByMetaAgentResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, AnswerSqlSyntaxByMetaAgentResponseBodyData) };
    inline AnswerSqlSyntaxByMetaAgentResponseBodyData data() { DARABONBA_PTR_GET(data_, AnswerSqlSyntaxByMetaAgentResponseBodyData) };
    inline AnswerSqlSyntaxByMetaAgentResponseBody& setData(const AnswerSqlSyntaxByMetaAgentResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AnswerSqlSyntaxByMetaAgentResponseBody& setData(AnswerSqlSyntaxByMetaAgentResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline AnswerSqlSyntaxByMetaAgentResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline AnswerSqlSyntaxByMetaAgentResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AnswerSqlSyntaxByMetaAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AnswerSqlSyntaxByMetaAgentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<AnswerSqlSyntaxByMetaAgentResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
