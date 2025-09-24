// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEVALUATELISTRESPONSEBODYDATAEVALUATELISTEVALUATE_HPP_
#define ALIBABACLOUD_MODELS_QUERYEVALUATELISTRESPONSEBODYDATAEVALUATELISTEVALUATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryEvaluateListResponseBodyDataEvaluateListEvaluate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEvaluateListResponseBodyDataEvaluateListEvaluate& obj) { 
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
    friend void from_json(const Darabonba::Json& j, QueryEvaluateListResponseBodyDataEvaluateListEvaluate& obj) { 
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
    QueryEvaluateListResponseBodyDataEvaluateListEvaluate() = default ;
    QueryEvaluateListResponseBodyDataEvaluateListEvaluate(const QueryEvaluateListResponseBodyDataEvaluateListEvaluate &) = default ;
    QueryEvaluateListResponseBodyDataEvaluateListEvaluate(QueryEvaluateListResponseBodyDataEvaluateListEvaluate &&) = default ;
    QueryEvaluateListResponseBodyDataEvaluateListEvaluate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEvaluateListResponseBodyDataEvaluateListEvaluate() = default ;
    QueryEvaluateListResponseBodyDataEvaluateListEvaluate& operator=(const QueryEvaluateListResponseBodyDataEvaluateListEvaluate &) = default ;
    QueryEvaluateListResponseBodyDataEvaluateListEvaluate& operator=(QueryEvaluateListResponseBodyDataEvaluateListEvaluate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billCycle_ != nullptr
        && this->billId_ != nullptr && this->bizTime_ != nullptr && this->bizType_ != nullptr && this->canInvoiceAmount_ != nullptr && this->gmtCreate_ != nullptr
        && this->gmtModified_ != nullptr && this->id_ != nullptr && this->invoicedAmount_ != nullptr && this->itemId_ != nullptr && this->name_ != nullptr
        && this->offsetAcceptAmount_ != nullptr && this->offsetCostAmount_ != nullptr && this->opId_ != nullptr && this->originalAmount_ != nullptr && this->outBizId_ != nullptr
        && this->presentAmount_ != nullptr && this->status_ != nullptr && this->type_ != nullptr && this->userId_ != nullptr && this->userNick_ != nullptr; };
    // billCycle Field Functions 
    bool hasBillCycle() const { return this->billCycle_ != nullptr;};
    void deleteBillCycle() { this->billCycle_ = nullptr;};
    inline string billCycle() const { DARABONBA_PTR_GET_DEFAULT(billCycle_, "") };
    inline QueryEvaluateListResponseBodyDataEvaluateListEvaluate& setBillCycle(string billCycle) { DARABONBA_PTR_SET_VALUE(billCycle_, billCycle) };


    // billId Field Functions 
    bool hasBillId() const { return this->billId_ != nullptr;};
    void deleteBillId() { this->billId_ = nullptr;};
    inline int64_t billId() const { DARABONBA_PTR_GET_DEFAULT(billId_, 0L) };
    inline QueryEvaluateListResponseBodyDataEvaluateListEvaluate& setBillId(int64_t billId) { DARABONBA_PTR_SET_VALUE(billId_, billId) };


    // bizTime Field Functions 
    bool hasBizTime() const { return this->bizTime_ != nullptr;};
    void deleteBizTime() { this->bizTime_ = nullptr;};
    inline string bizTime() const { DARABONBA_PTR_GET_DEFAULT(bizTime_, "") };
    inline QueryEvaluateListResponseBodyDataEvaluateListEvaluate& setBizTime(string bizTime) { DARABONBA_PTR_SET_VALUE(bizTime_, bizTime) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline QueryEvaluateListResponseBodyDataEvaluateListEvaluate& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // canInvoiceAmount Field Functions 
    bool hasCanInvoiceAmount() const { return this->canInvoiceAmount_ != nullptr;};
    void deleteCanInvoiceAmount() { this->canInvoiceAmount_ = nullptr;};
    inline int64_t canInvoiceAmount() const { DARABONBA_PTR_GET_DEFAULT(canInvoiceAmount_, 0L) };
    inline QueryEvaluateListResponseBodyDataEvaluateListEvaluate& setCanInvoiceAmount(int64_t canInvoiceAmount) { DARABONBA_PTR_SET_VALUE(canInvoiceAmount_, canInvoiceAmount) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QueryEvaluateListResponseBodyDataEvaluateListEvaluate& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline QueryEvaluateListResponseBodyDataEvaluateListEvaluate& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryEvaluateListResponseBodyDataEvaluateListEvaluate& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // invoicedAmount Field Functions 
    bool hasInvoicedAmount() const { return this->invoicedAmount_ != nullptr;};
    void deleteInvoicedAmount() { this->invoicedAmount_ = nullptr;};
    inline int64_t invoicedAmount() const { DARABONBA_PTR_GET_DEFAULT(invoicedAmount_, 0L) };
    inline QueryEvaluateListResponseBodyDataEvaluateListEvaluate& setInvoicedAmount(int64_t invoicedAmount) { DARABONBA_PTR_SET_VALUE(invoicedAmount_, invoicedAmount) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline int64_t itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
    inline QueryEvaluateListResponseBodyDataEvaluateListEvaluate& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryEvaluateListResponseBodyDataEvaluateListEvaluate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // offsetAcceptAmount Field Functions 
    bool hasOffsetAcceptAmount() const { return this->offsetAcceptAmount_ != nullptr;};
    void deleteOffsetAcceptAmount() { this->offsetAcceptAmount_ = nullptr;};
    inline int64_t offsetAcceptAmount() const { DARABONBA_PTR_GET_DEFAULT(offsetAcceptAmount_, 0L) };
    inline QueryEvaluateListResponseBodyDataEvaluateListEvaluate& setOffsetAcceptAmount(int64_t offsetAcceptAmount) { DARABONBA_PTR_SET_VALUE(offsetAcceptAmount_, offsetAcceptAmount) };


    // offsetCostAmount Field Functions 
    bool hasOffsetCostAmount() const { return this->offsetCostAmount_ != nullptr;};
    void deleteOffsetCostAmount() { this->offsetCostAmount_ = nullptr;};
    inline int64_t offsetCostAmount() const { DARABONBA_PTR_GET_DEFAULT(offsetCostAmount_, 0L) };
    inline QueryEvaluateListResponseBodyDataEvaluateListEvaluate& setOffsetCostAmount(int64_t offsetCostAmount) { DARABONBA_PTR_SET_VALUE(offsetCostAmount_, offsetCostAmount) };


    // opId Field Functions 
    bool hasOpId() const { return this->opId_ != nullptr;};
    void deleteOpId() { this->opId_ = nullptr;};
    inline string opId() const { DARABONBA_PTR_GET_DEFAULT(opId_, "") };
    inline QueryEvaluateListResponseBodyDataEvaluateListEvaluate& setOpId(string opId) { DARABONBA_PTR_SET_VALUE(opId_, opId) };


    // originalAmount Field Functions 
    bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
    void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
    inline int64_t originalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, 0L) };
    inline QueryEvaluateListResponseBodyDataEvaluateListEvaluate& setOriginalAmount(int64_t originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


    // outBizId Field Functions 
    bool hasOutBizId() const { return this->outBizId_ != nullptr;};
    void deleteOutBizId() { this->outBizId_ = nullptr;};
    inline string outBizId() const { DARABONBA_PTR_GET_DEFAULT(outBizId_, "") };
    inline QueryEvaluateListResponseBodyDataEvaluateListEvaluate& setOutBizId(string outBizId) { DARABONBA_PTR_SET_VALUE(outBizId_, outBizId) };


    // presentAmount Field Functions 
    bool hasPresentAmount() const { return this->presentAmount_ != nullptr;};
    void deletePresentAmount() { this->presentAmount_ = nullptr;};
    inline int64_t presentAmount() const { DARABONBA_PTR_GET_DEFAULT(presentAmount_, 0L) };
    inline QueryEvaluateListResponseBodyDataEvaluateListEvaluate& setPresentAmount(int64_t presentAmount) { DARABONBA_PTR_SET_VALUE(presentAmount_, presentAmount) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryEvaluateListResponseBodyDataEvaluateListEvaluate& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline QueryEvaluateListResponseBodyDataEvaluateListEvaluate& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline QueryEvaluateListResponseBodyDataEvaluateListEvaluate& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string userNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline QueryEvaluateListResponseBodyDataEvaluateListEvaluate& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


  protected:
    // The billing cycle.
    std::shared_ptr<string> billCycle_ = nullptr;
    // The ID of the bill.
    std::shared_ptr<int64_t> billId_ = nullptr;
    // The time.
    std::shared_ptr<string> bizTime_ = nullptr;
    // The market type in the invoice. Valid values:
    // 
    // *   ALIYUN: Alibaba Cloud
    // *   MARKETPLACE: Alibaba Cloud Marketplace
    std::shared_ptr<string> bizType_ = nullptr;
    // The invoiceable amount.
    std::shared_ptr<int64_t> canInvoiceAmount_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the invoice.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The invoiced amount.
    std::shared_ptr<int64_t> invoicedAmount_ = nullptr;
    // The ID of the item.
    std::shared_ptr<int64_t> itemId_ = nullptr;
    // The name of the object to be invoiced.
    std::shared_ptr<string> name_ = nullptr;
    // If a refund is issued due to an order such as an unsubscription order or a configuration downgrade order, the refund amount is used to offset the amount of the invoice. The value is consistent with the value of the **OffsetCostAmount** parameter.
    std::shared_ptr<int64_t> offsetAcceptAmount_ = nullptr;
    // The refund amount used to offset the amount of the invoice. If a refund is issued due to an order such as an unsubscription order or a configuration downgrade order, the refund amount is used to offset the amount of the invoice. The value is consistent with the value of the **OffsetAcceptAmount** parameter.
    std::shared_ptr<int64_t> offsetCostAmount_ = nullptr;
    // The ID of the external object.
    std::shared_ptr<string> opId_ = nullptr;
    // The original amount.
    std::shared_ptr<int64_t> originalAmount_ = nullptr;
    // The ID of the external order.
    std::shared_ptr<string> outBizId_ = nullptr;
    // The balance.
    std::shared_ptr<int64_t> presentAmount_ = nullptr;
    // The status of the invoiceable amount.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The type of orders that are queried. Valid values:
    // 
    // *   1: the orders in which the invoiceable amount is negative.
    // *   2: the orders in which the invoiceable amount is positive.
    // *   3: the orders in which the invoiceable amount is not 0.
    // *   4: the orders in which the amount that has been invoiced is greater than 0.
    // 
    // >  By default, this parameter is left empty. If this parameter is left empty, all orders are queried.
    std::shared_ptr<int32_t> type_ = nullptr;
    // The ID of the user.
    std::shared_ptr<int64_t> userId_ = nullptr;
    // The nickname of the user.
    std::shared_ptr<string> userNick_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
