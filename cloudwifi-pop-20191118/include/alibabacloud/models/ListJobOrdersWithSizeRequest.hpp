// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBORDERSWITHSIZEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBORDERSWITHSIZEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class ListJobOrdersWithSizeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobOrdersWithSizeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ChangingType, changingType_);
      DARABONBA_PTR_TO_JSON(ClientSystem, clientSystem_);
      DARABONBA_PTR_TO_JSON(ClientUniqueId, clientUniqueId_);
      DARABONBA_PTR_TO_JSON(Cursor, cursor_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Handler, handler_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OrderStatus, orderStatus_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobOrdersWithSizeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ChangingType, changingType_);
      DARABONBA_PTR_FROM_JSON(ClientSystem, clientSystem_);
      DARABONBA_PTR_FROM_JSON(ClientUniqueId, clientUniqueId_);
      DARABONBA_PTR_FROM_JSON(Cursor, cursor_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Handler, handler_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OrderStatus, orderStatus_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ListJobOrdersWithSizeRequest() = default ;
    ListJobOrdersWithSizeRequest(const ListJobOrdersWithSizeRequest &) = default ;
    ListJobOrdersWithSizeRequest(ListJobOrdersWithSizeRequest &&) = default ;
    ListJobOrdersWithSizeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobOrdersWithSizeRequest() = default ;
    ListJobOrdersWithSizeRequest& operator=(const ListJobOrdersWithSizeRequest &) = default ;
    ListJobOrdersWithSizeRequest& operator=(ListJobOrdersWithSizeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && this->appName_ == nullptr && this->changingType_ == nullptr && this->clientSystem_ == nullptr && this->clientUniqueId_ == nullptr && this->cursor_ == nullptr
        && this->endTime_ == nullptr && this->handler_ == nullptr && this->id_ == nullptr && this->orderStatus_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->title_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline ListJobOrdersWithSizeRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListJobOrdersWithSizeRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // changingType Field Functions 
    bool hasChangingType() const { return this->changingType_ != nullptr;};
    void deleteChangingType() { this->changingType_ = nullptr;};
    inline string getChangingType() const { DARABONBA_PTR_GET_DEFAULT(changingType_, "") };
    inline ListJobOrdersWithSizeRequest& setChangingType(string changingType) { DARABONBA_PTR_SET_VALUE(changingType_, changingType) };


    // clientSystem Field Functions 
    bool hasClientSystem() const { return this->clientSystem_ != nullptr;};
    void deleteClientSystem() { this->clientSystem_ = nullptr;};
    inline string getClientSystem() const { DARABONBA_PTR_GET_DEFAULT(clientSystem_, "") };
    inline ListJobOrdersWithSizeRequest& setClientSystem(string clientSystem) { DARABONBA_PTR_SET_VALUE(clientSystem_, clientSystem) };


    // clientUniqueId Field Functions 
    bool hasClientUniqueId() const { return this->clientUniqueId_ != nullptr;};
    void deleteClientUniqueId() { this->clientUniqueId_ = nullptr;};
    inline string getClientUniqueId() const { DARABONBA_PTR_GET_DEFAULT(clientUniqueId_, "") };
    inline ListJobOrdersWithSizeRequest& setClientUniqueId(string clientUniqueId) { DARABONBA_PTR_SET_VALUE(clientUniqueId_, clientUniqueId) };


    // cursor Field Functions 
    bool hasCursor() const { return this->cursor_ != nullptr;};
    void deleteCursor() { this->cursor_ = nullptr;};
    inline int64_t getCursor() const { DARABONBA_PTR_GET_DEFAULT(cursor_, 0L) };
    inline ListJobOrdersWithSizeRequest& setCursor(int64_t cursor) { DARABONBA_PTR_SET_VALUE(cursor_, cursor) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListJobOrdersWithSizeRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // handler Field Functions 
    bool hasHandler() const { return this->handler_ != nullptr;};
    void deleteHandler() { this->handler_ = nullptr;};
    inline string getHandler() const { DARABONBA_PTR_GET_DEFAULT(handler_, "") };
    inline ListJobOrdersWithSizeRequest& setHandler(string handler) { DARABONBA_PTR_SET_VALUE(handler_, handler) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListJobOrdersWithSizeRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline string getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, "") };
    inline ListJobOrdersWithSizeRequest& setOrderStatus(string orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListJobOrdersWithSizeRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobOrdersWithSizeRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListJobOrdersWithSizeRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListJobOrdersWithSizeRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListJobOrdersWithSizeRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<string> appCode_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<string> changingType_ {};
    shared_ptr<string> clientSystem_ {};
    shared_ptr<string> clientUniqueId_ {};
    // This parameter is required.
    shared_ptr<int64_t> cursor_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> handler_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> orderStatus_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // This parameter is required.
    shared_ptr<string> requestId_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
