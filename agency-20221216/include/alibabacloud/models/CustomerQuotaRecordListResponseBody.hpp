// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMERQUOTARECORDLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMERQUOTARECORDLISTRESPONSEBODY_HPP_
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
  class CustomerQuotaRecordListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomerQuotaRecordListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, CustomerQuotaRecordListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    CustomerQuotaRecordListResponseBody() = default ;
    CustomerQuotaRecordListResponseBody(const CustomerQuotaRecordListResponseBody &) = default ;
    CustomerQuotaRecordListResponseBody(CustomerQuotaRecordListResponseBody &&) = default ;
    CustomerQuotaRecordListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomerQuotaRecordListResponseBody() = default ;
    CustomerQuotaRecordListResponseBody& operator=(const CustomerQuotaRecordListResponseBody &) = default ;
    CustomerQuotaRecordListResponseBody& operator=(CustomerQuotaRecordListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(OperationSubmitType, operationSubmitType_);
        DARABONBA_PTR_TO_JSON(OperationTime, operationTime_);
        DARABONBA_PTR_TO_JSON(OperationTypeCode, operationTypeCode_);
        DARABONBA_PTR_TO_JSON(OperationTypeDesc, operationTypeDesc_);
        DARABONBA_PTR_TO_JSON(OperationUid, operationUid_);
        DARABONBA_PTR_TO_JSON(UpdateAfterAmount, updateAfterAmount_);
        DARABONBA_PTR_TO_JSON(UpdateAmount, updateAmount_);
        DARABONBA_PTR_TO_JSON(UpdateBeforeAmount, updateBeforeAmount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(OperationSubmitType, operationSubmitType_);
        DARABONBA_PTR_FROM_JSON(OperationTime, operationTime_);
        DARABONBA_PTR_FROM_JSON(OperationTypeCode, operationTypeCode_);
        DARABONBA_PTR_FROM_JSON(OperationTypeDesc, operationTypeDesc_);
        DARABONBA_PTR_FROM_JSON(OperationUid, operationUid_);
        DARABONBA_PTR_FROM_JSON(UpdateAfterAmount, updateAfterAmount_);
        DARABONBA_PTR_FROM_JSON(UpdateAmount, updateAmount_);
        DARABONBA_PTR_FROM_JSON(UpdateBeforeAmount, updateBeforeAmount_);
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
      virtual bool empty() const override { return this->operationSubmitType_ == nullptr
        && this->operationTime_ == nullptr && this->operationTypeCode_ == nullptr && this->operationTypeDesc_ == nullptr && this->operationUid_ == nullptr && this->updateAfterAmount_ == nullptr
        && this->updateAmount_ == nullptr && this->updateBeforeAmount_ == nullptr; };
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


      // operationTypeCode Field Functions 
      bool hasOperationTypeCode() const { return this->operationTypeCode_ != nullptr;};
      void deleteOperationTypeCode() { this->operationTypeCode_ = nullptr;};
      inline string getOperationTypeCode() const { DARABONBA_PTR_GET_DEFAULT(operationTypeCode_, "") };
      inline Data& setOperationTypeCode(string operationTypeCode) { DARABONBA_PTR_SET_VALUE(operationTypeCode_, operationTypeCode) };


      // operationTypeDesc Field Functions 
      bool hasOperationTypeDesc() const { return this->operationTypeDesc_ != nullptr;};
      void deleteOperationTypeDesc() { this->operationTypeDesc_ = nullptr;};
      inline string getOperationTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(operationTypeDesc_, "") };
      inline Data& setOperationTypeDesc(string operationTypeDesc) { DARABONBA_PTR_SET_VALUE(operationTypeDesc_, operationTypeDesc) };


      // operationUid Field Functions 
      bool hasOperationUid() const { return this->operationUid_ != nullptr;};
      void deleteOperationUid() { this->operationUid_ = nullptr;};
      inline string getOperationUid() const { DARABONBA_PTR_GET_DEFAULT(operationUid_, "") };
      inline Data& setOperationUid(string operationUid) { DARABONBA_PTR_SET_VALUE(operationUid_, operationUid) };


      // updateAfterAmount Field Functions 
      bool hasUpdateAfterAmount() const { return this->updateAfterAmount_ != nullptr;};
      void deleteUpdateAfterAmount() { this->updateAfterAmount_ = nullptr;};
      inline string getUpdateAfterAmount() const { DARABONBA_PTR_GET_DEFAULT(updateAfterAmount_, "") };
      inline Data& setUpdateAfterAmount(string updateAfterAmount) { DARABONBA_PTR_SET_VALUE(updateAfterAmount_, updateAfterAmount) };


      // updateAmount Field Functions 
      bool hasUpdateAmount() const { return this->updateAmount_ != nullptr;};
      void deleteUpdateAmount() { this->updateAmount_ = nullptr;};
      inline string getUpdateAmount() const { DARABONBA_PTR_GET_DEFAULT(updateAmount_, "") };
      inline Data& setUpdateAmount(string updateAmount) { DARABONBA_PTR_SET_VALUE(updateAmount_, updateAmount) };


      // updateBeforeAmount Field Functions 
      bool hasUpdateBeforeAmount() const { return this->updateBeforeAmount_ != nullptr;};
      void deleteUpdateBeforeAmount() { this->updateBeforeAmount_ = nullptr;};
      inline string getUpdateBeforeAmount() const { DARABONBA_PTR_GET_DEFAULT(updateBeforeAmount_, "") };
      inline Data& setUpdateBeforeAmount(string updateBeforeAmount) { DARABONBA_PTR_SET_VALUE(updateBeforeAmount_, updateBeforeAmount) };


    protected:
      // The way to submit the quota adjustment operation. API/ACPN
      shared_ptr<string> operationSubmitType_ {};
      // The time of submit the quota adjustment operation.
      shared_ptr<string> operationTime_ {};
      // Operation Type Enum</br>
      // all All types</br>
      // quota_create Create quota</br>
      // quota_amount_adjust Adjust the amount of quota</br>
      shared_ptr<string> operationTypeCode_ {};
      // The description of submitted quota adjustment operation.
      shared_ptr<string> operationTypeDesc_ {};
      // The UID of operator(Partner\\"s UID).
      shared_ptr<string> operationUid_ {};
      // Updated quota amount
      shared_ptr<string> updateAfterAmount_ {};
      // The difference amount between updated quota and original quota.
      shared_ptr<string> updateAmount_ {};
      // Original quota amount
      shared_ptr<string> updateBeforeAmount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CustomerQuotaRecordListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<CustomerQuotaRecordListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<CustomerQuotaRecordListResponseBody::Data>) };
    inline vector<CustomerQuotaRecordListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<CustomerQuotaRecordListResponseBody::Data>) };
    inline CustomerQuotaRecordListResponseBody& setData(const vector<CustomerQuotaRecordListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CustomerQuotaRecordListResponseBody& setData(vector<CustomerQuotaRecordListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline CustomerQuotaRecordListResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline CustomerQuotaRecordListResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline CustomerQuotaRecordListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CustomerQuotaRecordListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline CustomerQuotaRecordListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Status code of returning result, 200 means success.
    shared_ptr<string> code_ {};
    // Listed data of returning result
    shared_ptr<vector<CustomerQuotaRecordListResponseBody::Data>> data_ {};
    // Description of returning data
    shared_ptr<string> msg_ {};
    // Current page number
    shared_ptr<int32_t> pageNo_ {};
    // Record number on each page
    shared_ptr<int32_t> pageSize_ {};
    // ID of request
    shared_ptr<string> requestId_ {};
    // Total volume
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
