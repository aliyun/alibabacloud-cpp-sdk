// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBILLINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBILLINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListBillingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBillingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(list, list_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListBillingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(list, list_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListBillingResponseBody() = default ;
    ListBillingResponseBody(const ListBillingResponseBody &) = default ;
    ListBillingResponseBody(ListBillingResponseBody &&) = default ;
    ListBillingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBillingResponseBody() = default ;
    ListBillingResponseBody& operator=(const ListBillingResponseBody &) = default ;
    ListBillingResponseBody& operator=(ListBillingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(billingId, billingId_);
        DARABONBA_PTR_TO_JSON(bizId, bizId_);
        DARABONBA_PTR_TO_JSON(bizType, bizType_);
        DARABONBA_PTR_TO_JSON(costSource, costSource_);
        DARABONBA_PTR_TO_JSON(costSourceDisplayName, costSourceDisplayName_);
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(entryObjectId, entryObjectId_);
        DARABONBA_PTR_TO_JSON(entryObjectType, entryObjectType_);
        DARABONBA_PTR_TO_JSON(isShadow, isShadow_);
        DARABONBA_PTR_TO_JSON(operation, operation_);
        DARABONBA_PTR_TO_JSON(operationDisplayName, operationDisplayName_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(statusDisplayName, statusDisplayName_);
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(totalCreditCost, totalCreditCost_);
        DARABONBA_PTR_TO_JSON(wnUserId, wnUserId_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(billingId, billingId_);
        DARABONBA_PTR_FROM_JSON(bizId, bizId_);
        DARABONBA_PTR_FROM_JSON(bizType, bizType_);
        DARABONBA_PTR_FROM_JSON(costSource, costSource_);
        DARABONBA_PTR_FROM_JSON(costSourceDisplayName, costSourceDisplayName_);
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(entryObjectId, entryObjectId_);
        DARABONBA_PTR_FROM_JSON(entryObjectType, entryObjectType_);
        DARABONBA_PTR_FROM_JSON(isShadow, isShadow_);
        DARABONBA_PTR_FROM_JSON(operation, operation_);
        DARABONBA_PTR_FROM_JSON(operationDisplayName, operationDisplayName_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(statusDisplayName, statusDisplayName_);
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(totalCreditCost, totalCreditCost_);
        DARABONBA_PTR_FROM_JSON(wnUserId, wnUserId_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->billingId_ == nullptr
        && this->bizId_ == nullptr && this->bizType_ == nullptr && this->costSource_ == nullptr && this->costSourceDisplayName_ == nullptr && this->endTime_ == nullptr
        && this->entryObjectId_ == nullptr && this->entryObjectType_ == nullptr && this->isShadow_ == nullptr && this->operation_ == nullptr && this->operationDisplayName_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->statusDisplayName_ == nullptr && this->tenantId_ == nullptr && this->totalCreditCost_ == nullptr
        && this->wnUserId_ == nullptr; };
      // billingId Field Functions 
      bool hasBillingId() const { return this->billingId_ != nullptr;};
      void deleteBillingId() { this->billingId_ = nullptr;};
      inline string getBillingId() const { DARABONBA_PTR_GET_DEFAULT(billingId_, "") };
      inline List& setBillingId(string billingId) { DARABONBA_PTR_SET_VALUE(billingId_, billingId) };


      // bizId Field Functions 
      bool hasBizId() const { return this->bizId_ != nullptr;};
      void deleteBizId() { this->bizId_ = nullptr;};
      inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
      inline List& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


      // bizType Field Functions 
      bool hasBizType() const { return this->bizType_ != nullptr;};
      void deleteBizType() { this->bizType_ = nullptr;};
      inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
      inline List& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


      // costSource Field Functions 
      bool hasCostSource() const { return this->costSource_ != nullptr;};
      void deleteCostSource() { this->costSource_ = nullptr;};
      inline const vector<string> & getCostSource() const { DARABONBA_PTR_GET_CONST(costSource_, vector<string>) };
      inline vector<string> getCostSource() { DARABONBA_PTR_GET(costSource_, vector<string>) };
      inline List& setCostSource(const vector<string> & costSource) { DARABONBA_PTR_SET_VALUE(costSource_, costSource) };
      inline List& setCostSource(vector<string> && costSource) { DARABONBA_PTR_SET_RVALUE(costSource_, costSource) };


      // costSourceDisplayName Field Functions 
      bool hasCostSourceDisplayName() const { return this->costSourceDisplayName_ != nullptr;};
      void deleteCostSourceDisplayName() { this->costSourceDisplayName_ = nullptr;};
      inline const vector<string> & getCostSourceDisplayName() const { DARABONBA_PTR_GET_CONST(costSourceDisplayName_, vector<string>) };
      inline vector<string> getCostSourceDisplayName() { DARABONBA_PTR_GET(costSourceDisplayName_, vector<string>) };
      inline List& setCostSourceDisplayName(const vector<string> & costSourceDisplayName) { DARABONBA_PTR_SET_VALUE(costSourceDisplayName_, costSourceDisplayName) };
      inline List& setCostSourceDisplayName(vector<string> && costSourceDisplayName) { DARABONBA_PTR_SET_RVALUE(costSourceDisplayName_, costSourceDisplayName) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline List& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // entryObjectId Field Functions 
      bool hasEntryObjectId() const { return this->entryObjectId_ != nullptr;};
      void deleteEntryObjectId() { this->entryObjectId_ = nullptr;};
      inline string getEntryObjectId() const { DARABONBA_PTR_GET_DEFAULT(entryObjectId_, "") };
      inline List& setEntryObjectId(string entryObjectId) { DARABONBA_PTR_SET_VALUE(entryObjectId_, entryObjectId) };


      // entryObjectType Field Functions 
      bool hasEntryObjectType() const { return this->entryObjectType_ != nullptr;};
      void deleteEntryObjectType() { this->entryObjectType_ = nullptr;};
      inline string getEntryObjectType() const { DARABONBA_PTR_GET_DEFAULT(entryObjectType_, "") };
      inline List& setEntryObjectType(string entryObjectType) { DARABONBA_PTR_SET_VALUE(entryObjectType_, entryObjectType) };


      // isShadow Field Functions 
      bool hasIsShadow() const { return this->isShadow_ != nullptr;};
      void deleteIsShadow() { this->isShadow_ = nullptr;};
      inline bool getIsShadow() const { DARABONBA_PTR_GET_DEFAULT(isShadow_, false) };
      inline List& setIsShadow(bool isShadow) { DARABONBA_PTR_SET_VALUE(isShadow_, isShadow) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline List& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // operationDisplayName Field Functions 
      bool hasOperationDisplayName() const { return this->operationDisplayName_ != nullptr;};
      void deleteOperationDisplayName() { this->operationDisplayName_ = nullptr;};
      inline string getOperationDisplayName() const { DARABONBA_PTR_GET_DEFAULT(operationDisplayName_, "") };
      inline List& setOperationDisplayName(string operationDisplayName) { DARABONBA_PTR_SET_VALUE(operationDisplayName_, operationDisplayName) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline List& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusDisplayName Field Functions 
      bool hasStatusDisplayName() const { return this->statusDisplayName_ != nullptr;};
      void deleteStatusDisplayName() { this->statusDisplayName_ = nullptr;};
      inline string getStatusDisplayName() const { DARABONBA_PTR_GET_DEFAULT(statusDisplayName_, "") };
      inline List& setStatusDisplayName(string statusDisplayName) { DARABONBA_PTR_SET_VALUE(statusDisplayName_, statusDisplayName) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
      inline List& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // totalCreditCost Field Functions 
      bool hasTotalCreditCost() const { return this->totalCreditCost_ != nullptr;};
      void deleteTotalCreditCost() { this->totalCreditCost_ = nullptr;};
      inline string getTotalCreditCost() const { DARABONBA_PTR_GET_DEFAULT(totalCreditCost_, "") };
      inline List& setTotalCreditCost(string totalCreditCost) { DARABONBA_PTR_SET_VALUE(totalCreditCost_, totalCreditCost) };


      // wnUserId Field Functions 
      bool hasWnUserId() const { return this->wnUserId_ != nullptr;};
      void deleteWnUserId() { this->wnUserId_ = nullptr;};
      inline string getWnUserId() const { DARABONBA_PTR_GET_DEFAULT(wnUserId_, "") };
      inline List& setWnUserId(string wnUserId) { DARABONBA_PTR_SET_VALUE(wnUserId_, wnUserId) };


    protected:
      // The billing ID.
      shared_ptr<string> billingId_ {};
      // The file ID.
      shared_ptr<string> bizId_ {};
      // The business type.
      shared_ptr<string> bizType_ {};
      // costSource
      shared_ptr<vector<string>> costSource_ {};
      // costSourceDisplayName
      shared_ptr<vector<string>> costSourceDisplayName_ {};
      // The end timestamp, in milliseconds.
      shared_ptr<string> endTime_ {};
      // The entry object ID.
      shared_ptr<string> entryObjectId_ {};
      // The entry object type.
      shared_ptr<string> entryObjectType_ {};
      // Indicates whether the bill is a shadow bill.
      shared_ptr<bool> isShadow_ {};
      // The operation type.
      shared_ptr<string> operation_ {};
      // The display name of the operation.
      shared_ptr<string> operationDisplayName_ {};
      // The start timestamp, in milliseconds.
      shared_ptr<string> startTime_ {};
      // The task status. Running is returned upon submission.
      shared_ptr<string> status_ {};
      // The display name of the status.
      shared_ptr<string> statusDisplayName_ {};
      // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
      shared_ptr<int64_t> tenantId_ {};
      // The total credit consumption.
      shared_ptr<string> totalCreditCost_ {};
      // The WINNEXO platform user ID.
      shared_ptr<string> wnUserId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->list_ == nullptr && this->message_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListBillingResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListBillingResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ListBillingResponseBody::List>) };
    inline vector<ListBillingResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<ListBillingResponseBody::List>) };
    inline ListBillingResponseBody& setList(const vector<ListBillingResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListBillingResponseBody& setList(vector<ListBillingResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListBillingResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListBillingResponseBody& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListBillingResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBillingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListBillingResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The details of the list.
    shared_ptr<vector<ListBillingResponseBody::List>> list_ {};
    // The prompt message.
    shared_ptr<string> message_ {};
    // The page number.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of bills.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
