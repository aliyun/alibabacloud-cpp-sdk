// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTELORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTELORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListHotelOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotelOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotelOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListHotelOrderResponseBody() = default ;
    ListHotelOrderResponseBody(const ListHotelOrderResponseBody &) = default ;
    ListHotelOrderResponseBody(ListHotelOrderResponseBody &&) = default ;
    ListHotelOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotelOrderResponseBody() = default ;
    ListHotelOrderResponseBody& operator=(const ListHotelOrderResponseBody &) = default ;
    ListHotelOrderResponseBody& operator=(ListHotelOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Amt, amt_);
        DARABONBA_PTR_TO_JSON(ApplyAmt, applyAmt_);
        DARABONBA_PTR_TO_JSON(DeliveryMethod, deliveryMethod_);
        DARABONBA_PTR_TO_JSON(DeliveryRoomName, deliveryRoomName_);
        DARABONBA_PTR_TO_JSON(DeliveryTime, deliveryTime_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(Icon, icon_);
        DARABONBA_PTR_TO_JSON(ItemId, itemId_);
        DARABONBA_PTR_TO_JSON(ItemType, itemType_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OrderNo, orderNo_);
        DARABONBA_PTR_TO_JSON(OrderStatus, orderStatus_);
        DARABONBA_PTR_TO_JSON(PaymentMethod, paymentMethod_);
        DARABONBA_PTR_TO_JSON(Quantity, quantity_);
        DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SumAmt, sumAmt_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(TypeIconUrl, typeIconUrl_);
        DARABONBA_PTR_TO_JSON(TypeName, typeName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Amt, amt_);
        DARABONBA_PTR_FROM_JSON(ApplyAmt, applyAmt_);
        DARABONBA_PTR_FROM_JSON(DeliveryMethod, deliveryMethod_);
        DARABONBA_PTR_FROM_JSON(DeliveryRoomName, deliveryRoomName_);
        DARABONBA_PTR_FROM_JSON(DeliveryTime, deliveryTime_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(Icon, icon_);
        DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
        DARABONBA_PTR_FROM_JSON(ItemType, itemType_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OrderNo, orderNo_);
        DARABONBA_PTR_FROM_JSON(OrderStatus, orderStatus_);
        DARABONBA_PTR_FROM_JSON(PaymentMethod, paymentMethod_);
        DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
        DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SumAmt, sumAmt_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(TypeIconUrl, typeIconUrl_);
        DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->amt_ == nullptr
        && this->applyAmt_ == nullptr && this->deliveryMethod_ == nullptr && this->deliveryRoomName_ == nullptr && this->deliveryTime_ == nullptr && this->gmtCreate_ == nullptr
        && this->icon_ == nullptr && this->itemId_ == nullptr && this->itemType_ == nullptr && this->name_ == nullptr && this->orderNo_ == nullptr
        && this->orderStatus_ == nullptr && this->paymentMethod_ == nullptr && this->quantity_ == nullptr && this->roomNo_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->sumAmt_ == nullptr && this->type_ == nullptr && this->typeIconUrl_ == nullptr && this->typeName_ == nullptr; };
      // amt Field Functions 
      bool hasAmt() const { return this->amt_ != nullptr;};
      void deleteAmt() { this->amt_ = nullptr;};
      inline int64_t getAmt() const { DARABONBA_PTR_GET_DEFAULT(amt_, 0L) };
      inline Result& setAmt(int64_t amt) { DARABONBA_PTR_SET_VALUE(amt_, amt) };


      // applyAmt Field Functions 
      bool hasApplyAmt() const { return this->applyAmt_ != nullptr;};
      void deleteApplyAmt() { this->applyAmt_ = nullptr;};
      inline int64_t getApplyAmt() const { DARABONBA_PTR_GET_DEFAULT(applyAmt_, 0L) };
      inline Result& setApplyAmt(int64_t applyAmt) { DARABONBA_PTR_SET_VALUE(applyAmt_, applyAmt) };


      // deliveryMethod Field Functions 
      bool hasDeliveryMethod() const { return this->deliveryMethod_ != nullptr;};
      void deleteDeliveryMethod() { this->deliveryMethod_ = nullptr;};
      inline string getDeliveryMethod() const { DARABONBA_PTR_GET_DEFAULT(deliveryMethod_, "") };
      inline Result& setDeliveryMethod(string deliveryMethod) { DARABONBA_PTR_SET_VALUE(deliveryMethod_, deliveryMethod) };


      // deliveryRoomName Field Functions 
      bool hasDeliveryRoomName() const { return this->deliveryRoomName_ != nullptr;};
      void deleteDeliveryRoomName() { this->deliveryRoomName_ = nullptr;};
      inline string getDeliveryRoomName() const { DARABONBA_PTR_GET_DEFAULT(deliveryRoomName_, "") };
      inline Result& setDeliveryRoomName(string deliveryRoomName) { DARABONBA_PTR_SET_VALUE(deliveryRoomName_, deliveryRoomName) };


      // deliveryTime Field Functions 
      bool hasDeliveryTime() const { return this->deliveryTime_ != nullptr;};
      void deleteDeliveryTime() { this->deliveryTime_ = nullptr;};
      inline int64_t getDeliveryTime() const { DARABONBA_PTR_GET_DEFAULT(deliveryTime_, 0L) };
      inline Result& setDeliveryTime(int64_t deliveryTime) { DARABONBA_PTR_SET_VALUE(deliveryTime_, deliveryTime) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Result& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
      inline Result& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


      // itemId Field Functions 
      bool hasItemId() const { return this->itemId_ != nullptr;};
      void deleteItemId() { this->itemId_ = nullptr;};
      inline int64_t getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
      inline Result& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


      // itemType Field Functions 
      bool hasItemType() const { return this->itemType_ != nullptr;};
      void deleteItemType() { this->itemType_ = nullptr;};
      inline string getItemType() const { DARABONBA_PTR_GET_DEFAULT(itemType_, "") };
      inline Result& setItemType(string itemType) { DARABONBA_PTR_SET_VALUE(itemType_, itemType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // orderNo Field Functions 
      bool hasOrderNo() const { return this->orderNo_ != nullptr;};
      void deleteOrderNo() { this->orderNo_ = nullptr;};
      inline string getOrderNo() const { DARABONBA_PTR_GET_DEFAULT(orderNo_, "") };
      inline Result& setOrderNo(string orderNo) { DARABONBA_PTR_SET_VALUE(orderNo_, orderNo) };


      // orderStatus Field Functions 
      bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
      void deleteOrderStatus() { this->orderStatus_ = nullptr;};
      inline string getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, "") };
      inline Result& setOrderStatus(string orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


      // paymentMethod Field Functions 
      bool hasPaymentMethod() const { return this->paymentMethod_ != nullptr;};
      void deletePaymentMethod() { this->paymentMethod_ = nullptr;};
      inline string getPaymentMethod() const { DARABONBA_PTR_GET_DEFAULT(paymentMethod_, "") };
      inline Result& setPaymentMethod(string paymentMethod) { DARABONBA_PTR_SET_VALUE(paymentMethod_, paymentMethod) };


      // quantity Field Functions 
      bool hasQuantity() const { return this->quantity_ != nullptr;};
      void deleteQuantity() { this->quantity_ = nullptr;};
      inline int64_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0L) };
      inline Result& setQuantity(int64_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


      // roomNo Field Functions 
      bool hasRoomNo() const { return this->roomNo_ != nullptr;};
      void deleteRoomNo() { this->roomNo_ = nullptr;};
      inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
      inline Result& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Result& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // sumAmt Field Functions 
      bool hasSumAmt() const { return this->sumAmt_ != nullptr;};
      void deleteSumAmt() { this->sumAmt_ = nullptr;};
      inline int64_t getSumAmt() const { DARABONBA_PTR_GET_DEFAULT(sumAmt_, 0L) };
      inline Result& setSumAmt(int64_t sumAmt) { DARABONBA_PTR_SET_VALUE(sumAmt_, sumAmt) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // typeIconUrl Field Functions 
      bool hasTypeIconUrl() const { return this->typeIconUrl_ != nullptr;};
      void deleteTypeIconUrl() { this->typeIconUrl_ = nullptr;};
      inline string getTypeIconUrl() const { DARABONBA_PTR_GET_DEFAULT(typeIconUrl_, "") };
      inline Result& setTypeIconUrl(string typeIconUrl) { DARABONBA_PTR_SET_VALUE(typeIconUrl_, typeIconUrl) };


      // typeName Field Functions 
      bool hasTypeName() const { return this->typeName_ != nullptr;};
      void deleteTypeName() { this->typeName_ = nullptr;};
      inline string getTypeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
      inline Result& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


    protected:
      shared_ptr<int64_t> amt_ {};
      shared_ptr<int64_t> applyAmt_ {};
      shared_ptr<string> deliveryMethod_ {};
      shared_ptr<string> deliveryRoomName_ {};
      shared_ptr<int64_t> deliveryTime_ {};
      shared_ptr<int64_t> gmtCreate_ {};
      shared_ptr<string> icon_ {};
      shared_ptr<int64_t> itemId_ {};
      shared_ptr<string> itemType_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> orderNo_ {};
      shared_ptr<string> orderStatus_ {};
      shared_ptr<string> paymentMethod_ {};
      shared_ptr<int64_t> quantity_ {};
      shared_ptr<string> roomNo_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int64_t> sumAmt_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> typeIconUrl_ {};
      shared_ptr<string> typeName_ {};
    };

    class Page : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Page& obj) { 
        DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
        DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
      };
      friend void from_json(const Darabonba::Json& j, Page& obj) { 
        DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
        DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
      };
      Page() = default ;
      Page(const Page &) = default ;
      Page(Page &&) = default ;
      Page(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Page() = default ;
      Page& operator=(const Page &) = default ;
      Page& operator=(Page &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hasNext_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr && this->totalPage_ == nullptr; };
      // hasNext Field Functions 
      bool hasHasNext() const { return this->hasNext_ != nullptr;};
      void deleteHasNext() { this->hasNext_ = nullptr;};
      inline bool getHasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
      inline Page& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Page& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Page& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Page& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      // totalPage Field Functions 
      bool hasTotalPage() const { return this->totalPage_ != nullptr;};
      void deleteTotalPage() { this->totalPage_ = nullptr;};
      inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
      inline Page& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    protected:
      shared_ptr<bool> hasNext_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> total_ {};
      shared_ptr<int32_t> totalPage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->page_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListHotelOrderResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListHotelOrderResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const ListHotelOrderResponseBody::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, ListHotelOrderResponseBody::Page) };
    inline ListHotelOrderResponseBody::Page getPage() { DARABONBA_PTR_GET(page_, ListHotelOrderResponseBody::Page) };
    inline ListHotelOrderResponseBody& setPage(const ListHotelOrderResponseBody::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline ListHotelOrderResponseBody& setPage(ListHotelOrderResponseBody::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHotelOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListHotelOrderResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListHotelOrderResponseBody::Result>) };
    inline vector<ListHotelOrderResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListHotelOrderResponseBody::Result>) };
    inline ListHotelOrderResponseBody& setResult(const vector<ListHotelOrderResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListHotelOrderResponseBody& setResult(vector<ListHotelOrderResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListHotelOrderResponseBody::Page> page_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListHotelOrderResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
