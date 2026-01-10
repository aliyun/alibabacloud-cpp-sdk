// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTORDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListOrdersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrdersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Orders, orders_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrdersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Orders, orders_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListOrdersResponseBody() = default ;
    ListOrdersResponseBody(const ListOrdersResponseBody &) = default ;
    ListOrdersResponseBody(ListOrdersResponseBody &&) = default ;
    ListOrdersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrdersResponseBody() = default ;
    ListOrdersResponseBody& operator=(const ListOrdersResponseBody &) = default ;
    ListOrdersResponseBody& operator=(ListOrdersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Orders : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Orders& obj) { 
        DARABONBA_PTR_TO_JSON(Order, order_);
      };
      friend void from_json(const Darabonba::Json& j, Orders& obj) { 
        DARABONBA_PTR_FROM_JSON(Order, order_);
      };
      Orders() = default ;
      Orders(const Orders &) = default ;
      Orders(Orders &&) = default ;
      Orders(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Orders() = default ;
      Orders& operator=(const Orders &) = default ;
      Orders& operator=(Orders &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Order : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Order& obj) { 
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(Committer, committer_);
          DARABONBA_PTR_TO_JSON(CommitterId, committerId_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
          DARABONBA_PTR_TO_JSON(OrderId, orderId_);
          DARABONBA_PTR_TO_JSON(PluginType, pluginType_);
          DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
          DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
        };
        friend void from_json(const Darabonba::Json& j, Order& obj) { 
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(Committer, committer_);
          DARABONBA_PTR_FROM_JSON(CommitterId, committerId_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
          DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
          DARABONBA_PTR_FROM_JSON(PluginType, pluginType_);
          DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
          DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
        };
        Order() = default ;
        Order(const Order &) = default ;
        Order(Order &&) = default ;
        Order(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Order() = default ;
        Order& operator=(const Order &) = default ;
        Order& operator=(Order &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comment_ == nullptr
        && this->committer_ == nullptr && this->committerId_ == nullptr && this->createTime_ == nullptr && this->lastModifyTime_ == nullptr && this->orderId_ == nullptr
        && this->pluginType_ == nullptr && this->statusCode_ == nullptr && this->statusDesc_ == nullptr; };
        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline Order& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // committer Field Functions 
        bool hasCommitter() const { return this->committer_ != nullptr;};
        void deleteCommitter() { this->committer_ = nullptr;};
        inline string getCommitter() const { DARABONBA_PTR_GET_DEFAULT(committer_, "") };
        inline Order& setCommitter(string committer) { DARABONBA_PTR_SET_VALUE(committer_, committer) };


        // committerId Field Functions 
        bool hasCommitterId() const { return this->committerId_ != nullptr;};
        void deleteCommitterId() { this->committerId_ = nullptr;};
        inline int64_t getCommitterId() const { DARABONBA_PTR_GET_DEFAULT(committerId_, 0L) };
        inline Order& setCommitterId(int64_t committerId) { DARABONBA_PTR_SET_VALUE(committerId_, committerId) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Order& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // lastModifyTime Field Functions 
        bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
        void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
        inline string getLastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, "") };
        inline Order& setLastModifyTime(string lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
        inline Order& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // pluginType Field Functions 
        bool hasPluginType() const { return this->pluginType_ != nullptr;};
        void deletePluginType() { this->pluginType_ = nullptr;};
        inline string getPluginType() const { DARABONBA_PTR_GET_DEFAULT(pluginType_, "") };
        inline Order& setPluginType(string pluginType) { DARABONBA_PTR_SET_VALUE(pluginType_, pluginType) };


        // statusCode Field Functions 
        bool hasStatusCode() const { return this->statusCode_ != nullptr;};
        void deleteStatusCode() { this->statusCode_ = nullptr;};
        inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
        inline Order& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


        // statusDesc Field Functions 
        bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
        void deleteStatusDesc() { this->statusDesc_ = nullptr;};
        inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
        inline Order& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


      protected:
        // The remarks of the ticket.
        shared_ptr<string> comment_ {};
        // The user who submitted the ticket.
        shared_ptr<string> committer_ {};
        // The ID of the user who submitted the ticket.
        shared_ptr<int64_t> committerId_ {};
        // The time when the ticket was created.
        shared_ptr<string> createTime_ {};
        // The time when the ticket was last modified.
        shared_ptr<string> lastModifyTime_ {};
        // The ID of the ticket.
        shared_ptr<int64_t> orderId_ {};
        // The type of the ticket.
        shared_ptr<string> pluginType_ {};
        // The status code of the ticket. Valid values:
        // 
        // *   **fail**: The ticket fails to be executed.
        // *   **toaudit**: The ticket is waiting for approval.
        // *   **cancel**: The ticket is cancelled.
        // *   **processing**: The ticket is being executed.
        // *   **approved**: The ticket is approved.
        // *   **reject**: The ticket is rejected.
        // *   **success**: The ticket is executed.
        // *   **closed**: The ticket is closed.
        shared_ptr<string> statusCode_ {};
        // The status description of the ticket.
        shared_ptr<string> statusDesc_ {};
      };

      virtual bool empty() const override { return this->order_ == nullptr; };
      // order Field Functions 
      bool hasOrder() const { return this->order_ != nullptr;};
      void deleteOrder() { this->order_ = nullptr;};
      inline const vector<Orders::Order> & getOrder() const { DARABONBA_PTR_GET_CONST(order_, vector<Orders::Order>) };
      inline vector<Orders::Order> getOrder() { DARABONBA_PTR_GET(order_, vector<Orders::Order>) };
      inline Orders& setOrder(const vector<Orders::Order> & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
      inline Orders& setOrder(vector<Orders::Order> && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


    protected:
      shared_ptr<vector<Orders::Order>> order_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->orders_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListOrdersResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListOrdersResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // orders Field Functions 
    bool hasOrders() const { return this->orders_ != nullptr;};
    void deleteOrders() { this->orders_ = nullptr;};
    inline const ListOrdersResponseBody::Orders & getOrders() const { DARABONBA_PTR_GET_CONST(orders_, ListOrdersResponseBody::Orders) };
    inline ListOrdersResponseBody::Orders getOrders() { DARABONBA_PTR_GET(orders_, ListOrdersResponseBody::Orders) };
    inline ListOrdersResponseBody& setOrders(const ListOrdersResponseBody::Orders & orders) { DARABONBA_PTR_SET_VALUE(orders_, orders) };
    inline ListOrdersResponseBody& setOrders(ListOrdersResponseBody::Orders && orders) { DARABONBA_PTR_SET_RVALUE(orders_, orders) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOrdersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListOrdersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListOrdersResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The details about the tickets.
    shared_ptr<ListOrdersResponseBody::Orders> orders_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request was successful.
    // - **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of entries that are returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
