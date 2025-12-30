// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHYSICALNODEOPERATIONLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPHYSICALNODEOPERATIONLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPhysicalNodeOperationLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhysicalNodeOperationLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OperationLogList, operationLogList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhysicalNodeOperationLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OperationLogList, operationLogList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetPhysicalNodeOperationLogResponseBody() = default ;
    GetPhysicalNodeOperationLogResponseBody(const GetPhysicalNodeOperationLogResponseBody &) = default ;
    GetPhysicalNodeOperationLogResponseBody(GetPhysicalNodeOperationLogResponseBody &&) = default ;
    GetPhysicalNodeOperationLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhysicalNodeOperationLogResponseBody() = default ;
    GetPhysicalNodeOperationLogResponseBody& operator=(const GetPhysicalNodeOperationLogResponseBody &) = default ;
    GetPhysicalNodeOperationLogResponseBody& operator=(GetPhysicalNodeOperationLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OperationLogList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperationLogList& obj) { 
        DARABONBA_PTR_TO_JSON(Context, context_);
        DARABONBA_PTR_TO_JSON(OperationTime, operationTime_);
        DARABONBA_PTR_TO_JSON(OperationType, operationType_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
      };
      friend void from_json(const Darabonba::Json& j, OperationLogList& obj) { 
        DARABONBA_PTR_FROM_JSON(Context, context_);
        DARABONBA_PTR_FROM_JSON(OperationTime, operationTime_);
        DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
      };
      OperationLogList() = default ;
      OperationLogList(const OperationLogList &) = default ;
      OperationLogList(OperationLogList &&) = default ;
      OperationLogList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperationLogList() = default ;
      OperationLogList& operator=(const OperationLogList &) = default ;
      OperationLogList& operator=(OperationLogList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->context_ == nullptr
        && this->operationTime_ == nullptr && this->operationType_ == nullptr && this->operator_ == nullptr && this->operatorName_ == nullptr; };
      // context Field Functions 
      bool hasContext() const { return this->context_ != nullptr;};
      void deleteContext() { this->context_ = nullptr;};
      inline string getContext() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
      inline OperationLogList& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


      // operationTime Field Functions 
      bool hasOperationTime() const { return this->operationTime_ != nullptr;};
      void deleteOperationTime() { this->operationTime_ = nullptr;};
      inline string getOperationTime() const { DARABONBA_PTR_GET_DEFAULT(operationTime_, "") };
      inline OperationLogList& setOperationTime(string operationTime) { DARABONBA_PTR_SET_VALUE(operationTime_, operationTime) };


      // operationType Field Functions 
      bool hasOperationType() const { return this->operationType_ != nullptr;};
      void deleteOperationType() { this->operationType_ = nullptr;};
      inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
      inline OperationLogList& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline OperationLogList& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // operatorName Field Functions 
      bool hasOperatorName() const { return this->operatorName_ != nullptr;};
      void deleteOperatorName() { this->operatorName_ = nullptr;};
      inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
      inline OperationLogList& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


    protected:
      shared_ptr<string> context_ {};
      shared_ptr<string> operationTime_ {};
      shared_ptr<string> operationType_ {};
      shared_ptr<string> operator_ {};
      shared_ptr<string> operatorName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->operationLogList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPhysicalNodeOperationLogResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetPhysicalNodeOperationLogResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPhysicalNodeOperationLogResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // operationLogList Field Functions 
    bool hasOperationLogList() const { return this->operationLogList_ != nullptr;};
    void deleteOperationLogList() { this->operationLogList_ = nullptr;};
    inline const vector<GetPhysicalNodeOperationLogResponseBody::OperationLogList> & getOperationLogList() const { DARABONBA_PTR_GET_CONST(operationLogList_, vector<GetPhysicalNodeOperationLogResponseBody::OperationLogList>) };
    inline vector<GetPhysicalNodeOperationLogResponseBody::OperationLogList> getOperationLogList() { DARABONBA_PTR_GET(operationLogList_, vector<GetPhysicalNodeOperationLogResponseBody::OperationLogList>) };
    inline GetPhysicalNodeOperationLogResponseBody& setOperationLogList(const vector<GetPhysicalNodeOperationLogResponseBody::OperationLogList> & operationLogList) { DARABONBA_PTR_SET_VALUE(operationLogList_, operationLogList) };
    inline GetPhysicalNodeOperationLogResponseBody& setOperationLogList(vector<GetPhysicalNodeOperationLogResponseBody::OperationLogList> && operationLogList) { DARABONBA_PTR_SET_RVALUE(operationLogList_, operationLogList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPhysicalNodeOperationLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPhysicalNodeOperationLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<GetPhysicalNodeOperationLogResponseBody::OperationLogList>> operationLogList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
