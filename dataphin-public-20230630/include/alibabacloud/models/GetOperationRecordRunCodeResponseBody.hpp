// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPERATIONRECORDRUNCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOPERATIONRECORDRUNCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetOperationRecordRunCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOperationRecordRunCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OperationLogCodeResponse, operationLogCodeResponse_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetOperationRecordRunCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OperationLogCodeResponse, operationLogCodeResponse_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetOperationRecordRunCodeResponseBody() = default ;
    GetOperationRecordRunCodeResponseBody(const GetOperationRecordRunCodeResponseBody &) = default ;
    GetOperationRecordRunCodeResponseBody(GetOperationRecordRunCodeResponseBody &&) = default ;
    GetOperationRecordRunCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOperationRecordRunCodeResponseBody() = default ;
    GetOperationRecordRunCodeResponseBody& operator=(const GetOperationRecordRunCodeResponseBody &) = default ;
    GetOperationRecordRunCodeResponseBody& operator=(GetOperationRecordRunCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OperationLogCodeResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperationLogCodeResponse& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(OperatorId, operatorId_);
        DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
        DARABONBA_PTR_TO_JSON(SqlNum, sqlNum_);
      };
      friend void from_json(const Darabonba::Json& j, OperationLogCodeResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(OperatorId, operatorId_);
        DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
        DARABONBA_PTR_FROM_JSON(SqlNum, sqlNum_);
      };
      OperationLogCodeResponse() = default ;
      OperationLogCodeResponse(const OperationLogCodeResponse &) = default ;
      OperationLogCodeResponse(OperationLogCodeResponse &&) = default ;
      OperationLogCodeResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperationLogCodeResponse() = default ;
      OperationLogCodeResponse& operator=(const OperationLogCodeResponse &) = default ;
      OperationLogCodeResponse& operator=(OperationLogCodeResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->operatorId_ == nullptr && this->operatorName_ == nullptr && this->sqlNum_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline OperationLogCodeResponse& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // operatorId Field Functions 
      bool hasOperatorId() const { return this->operatorId_ != nullptr;};
      void deleteOperatorId() { this->operatorId_ = nullptr;};
      inline int32_t getOperatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, 0) };
      inline OperationLogCodeResponse& setOperatorId(int32_t operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


      // operatorName Field Functions 
      bool hasOperatorName() const { return this->operatorName_ != nullptr;};
      void deleteOperatorName() { this->operatorName_ = nullptr;};
      inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
      inline OperationLogCodeResponse& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


      // sqlNum Field Functions 
      bool hasSqlNum() const { return this->sqlNum_ != nullptr;};
      void deleteSqlNum() { this->sqlNum_ = nullptr;};
      inline int32_t getSqlNum() const { DARABONBA_PTR_GET_DEFAULT(sqlNum_, 0) };
      inline OperationLogCodeResponse& setSqlNum(int32_t sqlNum) { DARABONBA_PTR_SET_VALUE(sqlNum_, sqlNum) };


    protected:
      // The code content.
      shared_ptr<string> code_ {};
      // The operator ID.
      shared_ptr<int32_t> operatorId_ {};
      // The operator name.
      shared_ptr<string> operatorName_ {};
      // The number of SQL statements.
      shared_ptr<int32_t> sqlNum_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->operationLogCodeResponse_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetOperationRecordRunCodeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetOperationRecordRunCodeResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetOperationRecordRunCodeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // operationLogCodeResponse Field Functions 
    bool hasOperationLogCodeResponse() const { return this->operationLogCodeResponse_ != nullptr;};
    void deleteOperationLogCodeResponse() { this->operationLogCodeResponse_ = nullptr;};
    inline const GetOperationRecordRunCodeResponseBody::OperationLogCodeResponse & getOperationLogCodeResponse() const { DARABONBA_PTR_GET_CONST(operationLogCodeResponse_, GetOperationRecordRunCodeResponseBody::OperationLogCodeResponse) };
    inline GetOperationRecordRunCodeResponseBody::OperationLogCodeResponse getOperationLogCodeResponse() { DARABONBA_PTR_GET(operationLogCodeResponse_, GetOperationRecordRunCodeResponseBody::OperationLogCodeResponse) };
    inline GetOperationRecordRunCodeResponseBody& setOperationLogCodeResponse(const GetOperationRecordRunCodeResponseBody::OperationLogCodeResponse & operationLogCodeResponse) { DARABONBA_PTR_SET_VALUE(operationLogCodeResponse_, operationLogCodeResponse) };
    inline GetOperationRecordRunCodeResponseBody& setOperationLogCodeResponse(GetOperationRecordRunCodeResponseBody::OperationLogCodeResponse && operationLogCodeResponse) { DARABONBA_PTR_SET_RVALUE(operationLogCodeResponse_, operationLogCodeResponse) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOperationRecordRunCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetOperationRecordRunCodeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend exception details.
    shared_ptr<string> message_ {};
    // The operation log code response.
    shared_ptr<GetOperationRecordRunCodeResponseBody::OperationLogCodeResponse> operationLogCodeResponse_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
