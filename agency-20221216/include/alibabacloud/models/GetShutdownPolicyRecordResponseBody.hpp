// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSHUTDOWNPOLICYRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSHUTDOWNPOLICYRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetShutdownPolicyRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetShutdownPolicyRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetShutdownPolicyRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetShutdownPolicyRecordResponseBody() = default ;
    GetShutdownPolicyRecordResponseBody(const GetShutdownPolicyRecordResponseBody &) = default ;
    GetShutdownPolicyRecordResponseBody(GetShutdownPolicyRecordResponseBody &&) = default ;
    GetShutdownPolicyRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetShutdownPolicyRecordResponseBody() = default ;
    GetShutdownPolicyRecordResponseBody& operator=(const GetShutdownPolicyRecordResponseBody &) = default ;
    GetShutdownPolicyRecordResponseBody& operator=(GetShutdownPolicyRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPolicy, currentPolicy_);
        DARABONBA_PTR_TO_JSON(OperationPath, operationPath_);
        DARABONBA_PTR_TO_JSON(OperationTime, operationTime_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(PreviousPolicy, previousPolicy_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPolicy, currentPolicy_);
        DARABONBA_PTR_FROM_JSON(OperationPath, operationPath_);
        DARABONBA_PTR_FROM_JSON(OperationTime, operationTime_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(PreviousPolicy, previousPolicy_);
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
      virtual bool empty() const override { return this->currentPolicy_ == nullptr
        && this->operationPath_ == nullptr && this->operationTime_ == nullptr && this->operator_ == nullptr && this->previousPolicy_ == nullptr; };
      // currentPolicy Field Functions 
      bool hasCurrentPolicy() const { return this->currentPolicy_ != nullptr;};
      void deleteCurrentPolicy() { this->currentPolicy_ = nullptr;};
      inline string getCurrentPolicy() const { DARABONBA_PTR_GET_DEFAULT(currentPolicy_, "") };
      inline Data& setCurrentPolicy(string currentPolicy) { DARABONBA_PTR_SET_VALUE(currentPolicy_, currentPolicy) };


      // operationPath Field Functions 
      bool hasOperationPath() const { return this->operationPath_ != nullptr;};
      void deleteOperationPath() { this->operationPath_ = nullptr;};
      inline string getOperationPath() const { DARABONBA_PTR_GET_DEFAULT(operationPath_, "") };
      inline Data& setOperationPath(string operationPath) { DARABONBA_PTR_SET_VALUE(operationPath_, operationPath) };


      // operationTime Field Functions 
      bool hasOperationTime() const { return this->operationTime_ != nullptr;};
      void deleteOperationTime() { this->operationTime_ = nullptr;};
      inline string getOperationTime() const { DARABONBA_PTR_GET_DEFAULT(operationTime_, "") };
      inline Data& setOperationTime(string operationTime) { DARABONBA_PTR_SET_VALUE(operationTime_, operationTime) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline Data& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // previousPolicy Field Functions 
      bool hasPreviousPolicy() const { return this->previousPolicy_ != nullptr;};
      void deletePreviousPolicy() { this->previousPolicy_ = nullptr;};
      inline string getPreviousPolicy() const { DARABONBA_PTR_GET_DEFAULT(previousPolicy_, "") };
      inline Data& setPreviousPolicy(string previousPolicy) { DARABONBA_PTR_SET_VALUE(previousPolicy_, previousPolicy) };


    protected:
      shared_ptr<string> currentPolicy_ {};
      shared_ptr<string> operationPath_ {};
      shared_ptr<string> operationTime_ {};
      shared_ptr<string> operator_ {};
      shared_ptr<string> previousPolicy_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetShutdownPolicyRecordResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetShutdownPolicyRecordResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetShutdownPolicyRecordResponseBody::Data>) };
    inline vector<GetShutdownPolicyRecordResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetShutdownPolicyRecordResponseBody::Data>) };
    inline GetShutdownPolicyRecordResponseBody& setData(const vector<GetShutdownPolicyRecordResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetShutdownPolicyRecordResponseBody& setData(vector<GetShutdownPolicyRecordResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetShutdownPolicyRecordResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetShutdownPolicyRecordResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetShutdownPolicyRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetShutdownPolicyRecordResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetShutdownPolicyRecordResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetShutdownPolicyRecordResponseBody::Data>> data_ {};
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
