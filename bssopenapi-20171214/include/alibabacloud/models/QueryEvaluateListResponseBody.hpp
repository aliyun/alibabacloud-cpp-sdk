// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEVALUATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYEVALUATELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryEvaluateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEvaluateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEvaluateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryEvaluateListResponseBody() = default ;
    QueryEvaluateListResponseBody(const QueryEvaluateListResponseBody &) = default ;
    QueryEvaluateListResponseBody(QueryEvaluateListResponseBody &&) = default ;
    QueryEvaluateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEvaluateListResponseBody() = default ;
    QueryEvaluateListResponseBody& operator=(const QueryEvaluateListResponseBody &) = default ;
    QueryEvaluateListResponseBody& operator=(QueryEvaluateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EvaluateList, evaluateList_);
        DARABONBA_PTR_TO_JSON(HostId, hostId_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(TotalInvoiceAmount, totalInvoiceAmount_);
        DARABONBA_PTR_TO_JSON(TotalUnAppliedInvoiceAmount, totalUnAppliedInvoiceAmount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EvaluateList, evaluateList_);
        DARABONBA_PTR_FROM_JSON(HostId, hostId_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(TotalInvoiceAmount, totalInvoiceAmount_);
        DARABONBA_PTR_FROM_JSON(TotalUnAppliedInvoiceAmount, totalUnAppliedInvoiceAmount_);
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
      class EvaluateList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EvaluateList& obj) { 
          DARABONBA_PTR_TO_JSON(Evaluate, evaluate_);
        };
        friend void from_json(const Darabonba::Json& j, EvaluateList& obj) { 
          DARABONBA_PTR_FROM_JSON(Evaluate, evaluate_);
        };
        EvaluateList() = default ;
        EvaluateList(const EvaluateList &) = default ;
        EvaluateList(EvaluateList &&) = default ;
        EvaluateList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EvaluateList() = default ;
        EvaluateList& operator=(const EvaluateList &) = default ;
        EvaluateList& operator=(EvaluateList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Evaluate : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Evaluate& obj) { 
            DARABONBA_PTR_TO_JSON(BillCycle, billCycle_);
            DARABONBA_PTR_TO_JSON(BillId, billId_);
            DARABONBA_PTR_TO_JSON(BizTime, bizTime_);
            DARABONBA_PTR_TO_JSON(BizType, bizType_);
            DARABONBA_PTR_TO_JSON(CanInvoiceAmount, canInvoiceAmount_);
            DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(InvoicedAmount, invoicedAmount_);
            DARABONBA_PTR_TO_JSON(ItemId, itemId_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(OffsetAcceptAmount, offsetAcceptAmount_);
            DARABONBA_PTR_TO_JSON(OffsetCostAmount, offsetCostAmount_);
            DARABONBA_PTR_TO_JSON(OpId, opId_);
            DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
            DARABONBA_PTR_TO_JSON(OutBizId, outBizId_);
            DARABONBA_PTR_TO_JSON(PresentAmount, presentAmount_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(UserId, userId_);
            DARABONBA_PTR_TO_JSON(UserNick, userNick_);
          };
          friend void from_json(const Darabonba::Json& j, Evaluate& obj) { 
            DARABONBA_PTR_FROM_JSON(BillCycle, billCycle_);
            DARABONBA_PTR_FROM_JSON(BillId, billId_);
            DARABONBA_PTR_FROM_JSON(BizTime, bizTime_);
            DARABONBA_PTR_FROM_JSON(BizType, bizType_);
            DARABONBA_PTR_FROM_JSON(CanInvoiceAmount, canInvoiceAmount_);
            DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(InvoicedAmount, invoicedAmount_);
            DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(OffsetAcceptAmount, offsetAcceptAmount_);
            DARABONBA_PTR_FROM_JSON(OffsetCostAmount, offsetCostAmount_);
            DARABONBA_PTR_FROM_JSON(OpId, opId_);
            DARABONBA_PTR_FROM_JSON(OriginalAmount, originalAmount_);
            DARABONBA_PTR_FROM_JSON(OutBizId, outBizId_);
            DARABONBA_PTR_FROM_JSON(PresentAmount, presentAmount_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(UserId, userId_);
            DARABONBA_PTR_FROM_JSON(UserNick, userNick_);
          };
          Evaluate() = default ;
          Evaluate(const Evaluate &) = default ;
          Evaluate(Evaluate &&) = default ;
          Evaluate(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Evaluate() = default ;
          Evaluate& operator=(const Evaluate &) = default ;
          Evaluate& operator=(Evaluate &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->billCycle_ == nullptr
        && this->billId_ == nullptr && this->bizTime_ == nullptr && this->bizType_ == nullptr && this->canInvoiceAmount_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->invoicedAmount_ == nullptr && this->itemId_ == nullptr && this->name_ == nullptr
        && this->offsetAcceptAmount_ == nullptr && this->offsetCostAmount_ == nullptr && this->opId_ == nullptr && this->originalAmount_ == nullptr && this->outBizId_ == nullptr
        && this->presentAmount_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->userId_ == nullptr && this->userNick_ == nullptr; };
          // billCycle Field Functions 
          bool hasBillCycle() const { return this->billCycle_ != nullptr;};
          void deleteBillCycle() { this->billCycle_ = nullptr;};
          inline string getBillCycle() const { DARABONBA_PTR_GET_DEFAULT(billCycle_, "") };
          inline Evaluate& setBillCycle(string billCycle) { DARABONBA_PTR_SET_VALUE(billCycle_, billCycle) };


          // billId Field Functions 
          bool hasBillId() const { return this->billId_ != nullptr;};
          void deleteBillId() { this->billId_ = nullptr;};
          inline int64_t getBillId() const { DARABONBA_PTR_GET_DEFAULT(billId_, 0L) };
          inline Evaluate& setBillId(int64_t billId) { DARABONBA_PTR_SET_VALUE(billId_, billId) };


          // bizTime Field Functions 
          bool hasBizTime() const { return this->bizTime_ != nullptr;};
          void deleteBizTime() { this->bizTime_ = nullptr;};
          inline string getBizTime() const { DARABONBA_PTR_GET_DEFAULT(bizTime_, "") };
          inline Evaluate& setBizTime(string bizTime) { DARABONBA_PTR_SET_VALUE(bizTime_, bizTime) };


          // bizType Field Functions 
          bool hasBizType() const { return this->bizType_ != nullptr;};
          void deleteBizType() { this->bizType_ = nullptr;};
          inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
          inline Evaluate& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


          // canInvoiceAmount Field Functions 
          bool hasCanInvoiceAmount() const { return this->canInvoiceAmount_ != nullptr;};
          void deleteCanInvoiceAmount() { this->canInvoiceAmount_ = nullptr;};
          inline int64_t getCanInvoiceAmount() const { DARABONBA_PTR_GET_DEFAULT(canInvoiceAmount_, 0L) };
          inline Evaluate& setCanInvoiceAmount(int64_t canInvoiceAmount) { DARABONBA_PTR_SET_VALUE(canInvoiceAmount_, canInvoiceAmount) };


          // gmtCreate Field Functions 
          bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
          void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
          inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
          inline Evaluate& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


          // gmtModified Field Functions 
          bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
          void deleteGmtModified() { this->gmtModified_ = nullptr;};
          inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
          inline Evaluate& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline Evaluate& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // invoicedAmount Field Functions 
          bool hasInvoicedAmount() const { return this->invoicedAmount_ != nullptr;};
          void deleteInvoicedAmount() { this->invoicedAmount_ = nullptr;};
          inline int64_t getInvoicedAmount() const { DARABONBA_PTR_GET_DEFAULT(invoicedAmount_, 0L) };
          inline Evaluate& setInvoicedAmount(int64_t invoicedAmount) { DARABONBA_PTR_SET_VALUE(invoicedAmount_, invoicedAmount) };


          // itemId Field Functions 
          bool hasItemId() const { return this->itemId_ != nullptr;};
          void deleteItemId() { this->itemId_ = nullptr;};
          inline int64_t getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
          inline Evaluate& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Evaluate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // offsetAcceptAmount Field Functions 
          bool hasOffsetAcceptAmount() const { return this->offsetAcceptAmount_ != nullptr;};
          void deleteOffsetAcceptAmount() { this->offsetAcceptAmount_ = nullptr;};
          inline int64_t getOffsetAcceptAmount() const { DARABONBA_PTR_GET_DEFAULT(offsetAcceptAmount_, 0L) };
          inline Evaluate& setOffsetAcceptAmount(int64_t offsetAcceptAmount) { DARABONBA_PTR_SET_VALUE(offsetAcceptAmount_, offsetAcceptAmount) };


          // offsetCostAmount Field Functions 
          bool hasOffsetCostAmount() const { return this->offsetCostAmount_ != nullptr;};
          void deleteOffsetCostAmount() { this->offsetCostAmount_ = nullptr;};
          inline int64_t getOffsetCostAmount() const { DARABONBA_PTR_GET_DEFAULT(offsetCostAmount_, 0L) };
          inline Evaluate& setOffsetCostAmount(int64_t offsetCostAmount) { DARABONBA_PTR_SET_VALUE(offsetCostAmount_, offsetCostAmount) };


          // opId Field Functions 
          bool hasOpId() const { return this->opId_ != nullptr;};
          void deleteOpId() { this->opId_ = nullptr;};
          inline string getOpId() const { DARABONBA_PTR_GET_DEFAULT(opId_, "") };
          inline Evaluate& setOpId(string opId) { DARABONBA_PTR_SET_VALUE(opId_, opId) };


          // originalAmount Field Functions 
          bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
          void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
          inline int64_t getOriginalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, 0L) };
          inline Evaluate& setOriginalAmount(int64_t originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


          // outBizId Field Functions 
          bool hasOutBizId() const { return this->outBizId_ != nullptr;};
          void deleteOutBizId() { this->outBizId_ = nullptr;};
          inline string getOutBizId() const { DARABONBA_PTR_GET_DEFAULT(outBizId_, "") };
          inline Evaluate& setOutBizId(string outBizId) { DARABONBA_PTR_SET_VALUE(outBizId_, outBizId) };


          // presentAmount Field Functions 
          bool hasPresentAmount() const { return this->presentAmount_ != nullptr;};
          void deletePresentAmount() { this->presentAmount_ = nullptr;};
          inline int64_t getPresentAmount() const { DARABONBA_PTR_GET_DEFAULT(presentAmount_, 0L) };
          inline Evaluate& setPresentAmount(int64_t presentAmount) { DARABONBA_PTR_SET_VALUE(presentAmount_, presentAmount) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
          inline Evaluate& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
          inline Evaluate& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
          inline Evaluate& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


          // userNick Field Functions 
          bool hasUserNick() const { return this->userNick_ != nullptr;};
          void deleteUserNick() { this->userNick_ = nullptr;};
          inline string getUserNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
          inline Evaluate& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


        protected:
          // The billing cycle.
          shared_ptr<string> billCycle_ {};
          // The ID of the bill.
          shared_ptr<int64_t> billId_ {};
          // The time.
          shared_ptr<string> bizTime_ {};
          // The market type in the invoice. Valid values:
          // 
          // *   ALIYUN: Alibaba Cloud
          // *   MARKETPLACE: Alibaba Cloud Marketplace
          shared_ptr<string> bizType_ {};
          // The invoiceable amount.
          shared_ptr<int64_t> canInvoiceAmount_ {};
          // The creation time.
          shared_ptr<string> gmtCreate_ {};
          // The modification time.
          shared_ptr<string> gmtModified_ {};
          // The ID of the invoice.
          shared_ptr<int64_t> id_ {};
          // The invoiced amount.
          shared_ptr<int64_t> invoicedAmount_ {};
          // The ID of the item.
          shared_ptr<int64_t> itemId_ {};
          // The name of the object to be invoiced.
          shared_ptr<string> name_ {};
          // If a refund is issued due to an order such as an unsubscription order or a configuration downgrade order, the refund amount is used to offset the amount of the invoice. The value is consistent with the value of the **OffsetCostAmount** parameter.
          shared_ptr<int64_t> offsetAcceptAmount_ {};
          // The refund amount used to offset the amount of the invoice. If a refund is issued due to an order such as an unsubscription order or a configuration downgrade order, the refund amount is used to offset the amount of the invoice. The value is consistent with the value of the **OffsetAcceptAmount** parameter.
          shared_ptr<int64_t> offsetCostAmount_ {};
          // The ID of the external object.
          shared_ptr<string> opId_ {};
          // The original amount.
          shared_ptr<int64_t> originalAmount_ {};
          // The ID of the external order.
          shared_ptr<string> outBizId_ {};
          // The balance.
          shared_ptr<int64_t> presentAmount_ {};
          // The status of the invoiceable amount.
          shared_ptr<int32_t> status_ {};
          // The type of orders that are queried. Valid values:
          // 
          // *   1: the orders in which the invoiceable amount is negative.
          // *   2: the orders in which the invoiceable amount is positive.
          // *   3: the orders in which the invoiceable amount is not 0.
          // *   4: the orders in which the amount that has been invoiced is greater than 0.
          // 
          // >  By default, this parameter is left empty. If this parameter is left empty, all orders are queried.
          shared_ptr<int32_t> type_ {};
          // The ID of the user.
          shared_ptr<int64_t> userId_ {};
          // The nickname of the user.
          shared_ptr<string> userNick_ {};
        };

        virtual bool empty() const override { return this->evaluate_ == nullptr; };
        // evaluate Field Functions 
        bool hasEvaluate() const { return this->evaluate_ != nullptr;};
        void deleteEvaluate() { this->evaluate_ = nullptr;};
        inline const vector<EvaluateList::Evaluate> & getEvaluate() const { DARABONBA_PTR_GET_CONST(evaluate_, vector<EvaluateList::Evaluate>) };
        inline vector<EvaluateList::Evaluate> getEvaluate() { DARABONBA_PTR_GET(evaluate_, vector<EvaluateList::Evaluate>) };
        inline EvaluateList& setEvaluate(const vector<EvaluateList::Evaluate> & evaluate) { DARABONBA_PTR_SET_VALUE(evaluate_, evaluate) };
        inline EvaluateList& setEvaluate(vector<EvaluateList::Evaluate> && evaluate) { DARABONBA_PTR_SET_RVALUE(evaluate_, evaluate) };


      protected:
        shared_ptr<vector<EvaluateList::Evaluate>> evaluate_ {};
      };

      virtual bool empty() const override { return this->evaluateList_ == nullptr
        && this->hostId_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr && this->totalInvoiceAmount_ == nullptr
        && this->totalUnAppliedInvoiceAmount_ == nullptr; };
      // evaluateList Field Functions 
      bool hasEvaluateList() const { return this->evaluateList_ != nullptr;};
      void deleteEvaluateList() { this->evaluateList_ = nullptr;};
      inline const Data::EvaluateList & getEvaluateList() const { DARABONBA_PTR_GET_CONST(evaluateList_, Data::EvaluateList) };
      inline Data::EvaluateList getEvaluateList() { DARABONBA_PTR_GET(evaluateList_, Data::EvaluateList) };
      inline Data& setEvaluateList(const Data::EvaluateList & evaluateList) { DARABONBA_PTR_SET_VALUE(evaluateList_, evaluateList) };
      inline Data& setEvaluateList(Data::EvaluateList && evaluateList) { DARABONBA_PTR_SET_RVALUE(evaluateList_, evaluateList) };


      // hostId Field Functions 
      bool hasHostId() const { return this->hostId_ != nullptr;};
      void deleteHostId() { this->hostId_ = nullptr;};
      inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
      inline Data& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Data& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // totalInvoiceAmount Field Functions 
      bool hasTotalInvoiceAmount() const { return this->totalInvoiceAmount_ != nullptr;};
      void deleteTotalInvoiceAmount() { this->totalInvoiceAmount_ = nullptr;};
      inline int64_t getTotalInvoiceAmount() const { DARABONBA_PTR_GET_DEFAULT(totalInvoiceAmount_, 0L) };
      inline Data& setTotalInvoiceAmount(int64_t totalInvoiceAmount) { DARABONBA_PTR_SET_VALUE(totalInvoiceAmount_, totalInvoiceAmount) };


      // totalUnAppliedInvoiceAmount Field Functions 
      bool hasTotalUnAppliedInvoiceAmount() const { return this->totalUnAppliedInvoiceAmount_ != nullptr;};
      void deleteTotalUnAppliedInvoiceAmount() { this->totalUnAppliedInvoiceAmount_ = nullptr;};
      inline int64_t getTotalUnAppliedInvoiceAmount() const { DARABONBA_PTR_GET_DEFAULT(totalUnAppliedInvoiceAmount_, 0L) };
      inline Data& setTotalUnAppliedInvoiceAmount(int64_t totalUnAppliedInvoiceAmount) { DARABONBA_PTR_SET_VALUE(totalUnAppliedInvoiceAmount_, totalUnAppliedInvoiceAmount) };


    protected:
      // The data returned.
      shared_ptr<Data::EvaluateList> evaluateList_ {};
      // The ID of the host.
      shared_ptr<string> hostId_ {};
      // The number of the page returned.
      shared_ptr<int32_t> pageNum_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of returned entries.
      shared_ptr<int32_t> totalCount_ {};
      // The invoiced amount that meets the query conditions. Unit: Cent.
      shared_ptr<int64_t> totalInvoiceAmount_ {};
      // The invoiceable amount that meets the query conditions. Unit: Cent.
      shared_ptr<int64_t> totalUnAppliedInvoiceAmount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryEvaluateListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryEvaluateListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryEvaluateListResponseBody::Data) };
    inline QueryEvaluateListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryEvaluateListResponseBody::Data) };
    inline QueryEvaluateListResponseBody& setData(const QueryEvaluateListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryEvaluateListResponseBody& setData(QueryEvaluateListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryEvaluateListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryEvaluateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryEvaluateListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<QueryEvaluateListResponseBody::Data> data_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
