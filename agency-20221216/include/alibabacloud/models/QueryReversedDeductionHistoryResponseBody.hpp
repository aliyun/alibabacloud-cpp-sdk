// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREVERSEDDEDUCTIONHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYREVERSEDDEDUCTIONHISTORYRESPONSEBODY_HPP_
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
  class QueryReversedDeductionHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReversedDeductionHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReversedDeductionHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    QueryReversedDeductionHistoryResponseBody() = default ;
    QueryReversedDeductionHistoryResponseBody(const QueryReversedDeductionHistoryResponseBody &) = default ;
    QueryReversedDeductionHistoryResponseBody(QueryReversedDeductionHistoryResponseBody &&) = default ;
    QueryReversedDeductionHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReversedDeductionHistoryResponseBody() = default ;
    QueryReversedDeductionHistoryResponseBody& operator=(const QueryReversedDeductionHistoryResponseBody &) = default ;
    QueryReversedDeductionHistoryResponseBody& operator=(QueryReversedDeductionHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(OffsetAmount, offsetAmount_);
        DARABONBA_PTR_TO_JSON(OperationSubmitType, operationSubmitType_);
        DARABONBA_PTR_TO_JSON(OperationTime, operationTime_);
        DARABONBA_PTR_TO_JSON(OperationUid, operationUid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(OffsetAmount, offsetAmount_);
        DARABONBA_PTR_FROM_JSON(OperationSubmitType, operationSubmitType_);
        DARABONBA_PTR_FROM_JSON(OperationTime, operationTime_);
        DARABONBA_PTR_FROM_JSON(OperationUid, operationUid_);
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
      virtual bool empty() const override { return this->offsetAmount_ == nullptr
        && this->operationSubmitType_ == nullptr && this->operationTime_ == nullptr && this->operationUid_ == nullptr; };
      // offsetAmount Field Functions 
      bool hasOffsetAmount() const { return this->offsetAmount_ != nullptr;};
      void deleteOffsetAmount() { this->offsetAmount_ = nullptr;};
      inline string getOffsetAmount() const { DARABONBA_PTR_GET_DEFAULT(offsetAmount_, "") };
      inline Data& setOffsetAmount(string offsetAmount) { DARABONBA_PTR_SET_VALUE(offsetAmount_, offsetAmount) };


      // operationSubmitType Field Functions 
      bool hasOperationSubmitType() const { return this->operationSubmitType_ != nullptr;};
      void deleteOperationSubmitType() { this->operationSubmitType_ = nullptr;};
      inline string getOperationSubmitType() const { DARABONBA_PTR_GET_DEFAULT(operationSubmitType_, "") };
      inline Data& setOperationSubmitType(string operationSubmitType) { DARABONBA_PTR_SET_VALUE(operationSubmitType_, operationSubmitType) };


      // operationTime Field Functions 
      bool hasOperationTime() const { return this->operationTime_ != nullptr;};
      void deleteOperationTime() { this->operationTime_ = nullptr;};
      inline string getOperationTime() const { DARABONBA_PTR_GET_DEFAULT(operationTime_, "") };
      inline Data& setOperationTime(string operationTime) { DARABONBA_PTR_SET_VALUE(operationTime_, operationTime) };


      // operationUid Field Functions 
      bool hasOperationUid() const { return this->operationUid_ != nullptr;};
      void deleteOperationUid() { this->operationUid_ = nullptr;};
      inline string getOperationUid() const { DARABONBA_PTR_GET_DEFAULT(operationUid_, "") };
      inline Data& setOperationUid(string operationUid) { DARABONBA_PTR_SET_VALUE(operationUid_, operationUid) };


    protected:
      shared_ptr<string> offsetAmount_ {};
      shared_ptr<string> operationSubmitType_ {};
      shared_ptr<string> operationTime_ {};
      shared_ptr<string> operationUid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryReversedDeductionHistoryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryReversedDeductionHistoryResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryReversedDeductionHistoryResponseBody::Data>) };
    inline vector<QueryReversedDeductionHistoryResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryReversedDeductionHistoryResponseBody::Data>) };
    inline QueryReversedDeductionHistoryResponseBody& setData(const vector<QueryReversedDeductionHistoryResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryReversedDeductionHistoryResponseBody& setData(vector<QueryReversedDeductionHistoryResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryReversedDeductionHistoryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline QueryReversedDeductionHistoryResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryReversedDeductionHistoryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryReversedDeductionHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline QueryReversedDeductionHistoryResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<QueryReversedDeductionHistoryResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
