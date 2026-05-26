// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECOGNITIONRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECOGNITIONRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRetailVision20260506
{
namespace Models
{
  class QueryRecognitionResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRecognitionResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRecognitionResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryRecognitionResultResponseBody() = default ;
    QueryRecognitionResultResponseBody(const QueryRecognitionResultResponseBody &) = default ;
    QueryRecognitionResultResponseBody(QueryRecognitionResultResponseBody &&) = default ;
    QueryRecognitionResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRecognitionResultResponseBody() = default ;
    QueryRecognitionResultResponseBody& operator=(const QueryRecognitionResultResponseBody &) = default ;
    QueryRecognitionResultResponseBody& operator=(QueryRecognitionResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(OrderUniqueId, orderUniqueId_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(OrderUniqueId, orderUniqueId_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(CheckoutInfo, checkoutInfo_);
          DARABONBA_PTR_TO_JSON(Items, items_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckoutInfo, checkoutInfo_);
          DARABONBA_PTR_FROM_JSON(Items, items_);
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
        class Items : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Items& obj) { 
            DARABONBA_PTR_TO_JSON(ItemUniqueId, itemUniqueId_);
            DARABONBA_PTR_TO_JSON(PlatformItemId, platformItemId_);
            DARABONBA_PTR_TO_JSON(Quantity, quantity_);
          };
          friend void from_json(const Darabonba::Json& j, Items& obj) { 
            DARABONBA_PTR_FROM_JSON(ItemUniqueId, itemUniqueId_);
            DARABONBA_PTR_FROM_JSON(PlatformItemId, platformItemId_);
            DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
          };
          Items() = default ;
          Items(const Items &) = default ;
          Items(Items &&) = default ;
          Items(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Items() = default ;
          Items& operator=(const Items &) = default ;
          Items& operator=(Items &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->itemUniqueId_ == nullptr
        && this->platformItemId_ == nullptr && this->quantity_ == nullptr; };
          // itemUniqueId Field Functions 
          bool hasItemUniqueId() const { return this->itemUniqueId_ != nullptr;};
          void deleteItemUniqueId() { this->itemUniqueId_ = nullptr;};
          inline string getItemUniqueId() const { DARABONBA_PTR_GET_DEFAULT(itemUniqueId_, "") };
          inline Items& setItemUniqueId(string itemUniqueId) { DARABONBA_PTR_SET_VALUE(itemUniqueId_, itemUniqueId) };


          // platformItemId Field Functions 
          bool hasPlatformItemId() const { return this->platformItemId_ != nullptr;};
          void deletePlatformItemId() { this->platformItemId_ = nullptr;};
          inline string getPlatformItemId() const { DARABONBA_PTR_GET_DEFAULT(platformItemId_, "") };
          inline Items& setPlatformItemId(string platformItemId) { DARABONBA_PTR_SET_VALUE(platformItemId_, platformItemId) };


          // quantity Field Functions 
          bool hasQuantity() const { return this->quantity_ != nullptr;};
          void deleteQuantity() { this->quantity_ = nullptr;};
          inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
          inline Items& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


        protected:
          shared_ptr<string> itemUniqueId_ {};
          shared_ptr<string> platformItemId_ {};
          shared_ptr<int32_t> quantity_ {};
        };

        class CheckoutInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CheckoutInfo& obj) { 
            DARABONBA_PTR_TO_JSON(CheckoutStatus, checkoutStatus_);
          };
          friend void from_json(const Darabonba::Json& j, CheckoutInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(CheckoutStatus, checkoutStatus_);
          };
          CheckoutInfo() = default ;
          CheckoutInfo(const CheckoutInfo &) = default ;
          CheckoutInfo(CheckoutInfo &&) = default ;
          CheckoutInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CheckoutInfo() = default ;
          CheckoutInfo& operator=(const CheckoutInfo &) = default ;
          CheckoutInfo& operator=(CheckoutInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->checkoutStatus_ == nullptr; };
          // checkoutStatus Field Functions 
          bool hasCheckoutStatus() const { return this->checkoutStatus_ != nullptr;};
          void deleteCheckoutStatus() { this->checkoutStatus_ = nullptr;};
          inline string getCheckoutStatus() const { DARABONBA_PTR_GET_DEFAULT(checkoutStatus_, "") };
          inline CheckoutInfo& setCheckoutStatus(string checkoutStatus) { DARABONBA_PTR_SET_VALUE(checkoutStatus_, checkoutStatus) };


        protected:
          shared_ptr<string> checkoutStatus_ {};
        };

        virtual bool empty() const override { return this->checkoutInfo_ == nullptr
        && this->items_ == nullptr; };
        // checkoutInfo Field Functions 
        bool hasCheckoutInfo() const { return this->checkoutInfo_ != nullptr;};
        void deleteCheckoutInfo() { this->checkoutInfo_ = nullptr;};
        inline const Result::CheckoutInfo & getCheckoutInfo() const { DARABONBA_PTR_GET_CONST(checkoutInfo_, Result::CheckoutInfo) };
        inline Result::CheckoutInfo getCheckoutInfo() { DARABONBA_PTR_GET(checkoutInfo_, Result::CheckoutInfo) };
        inline Result& setCheckoutInfo(const Result::CheckoutInfo & checkoutInfo) { DARABONBA_PTR_SET_VALUE(checkoutInfo_, checkoutInfo) };
        inline Result& setCheckoutInfo(Result::CheckoutInfo && checkoutInfo) { DARABONBA_PTR_SET_RVALUE(checkoutInfo_, checkoutInfo) };


        // items Field Functions 
        bool hasItems() const { return this->items_ != nullptr;};
        void deleteItems() { this->items_ = nullptr;};
        inline const vector<Result::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Result::Items>) };
        inline vector<Result::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Result::Items>) };
        inline Result& setItems(const vector<Result::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
        inline Result& setItems(vector<Result::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      protected:
        shared_ptr<Result::CheckoutInfo> checkoutInfo_ {};
        shared_ptr<vector<Result::Items>> items_ {};
      };

      virtual bool empty() const override { return this->orderUniqueId_ == nullptr
        && this->result_ == nullptr && this->taskId_ == nullptr && this->taskStatus_ == nullptr; };
      // orderUniqueId Field Functions 
      bool hasOrderUniqueId() const { return this->orderUniqueId_ != nullptr;};
      void deleteOrderUniqueId() { this->orderUniqueId_ = nullptr;};
      inline string getOrderUniqueId() const { DARABONBA_PTR_GET_DEFAULT(orderUniqueId_, "") };
      inline Data& setOrderUniqueId(string orderUniqueId) { DARABONBA_PTR_SET_VALUE(orderUniqueId_, orderUniqueId) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const Data::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, Data::Result) };
      inline Data::Result getResult() { DARABONBA_PTR_GET(result_, Data::Result) };
      inline Data& setResult(const Data::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(Data::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline Data& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    protected:
      shared_ptr<string> orderUniqueId_ {};
      shared_ptr<Data::Result> result_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryRecognitionResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryRecognitionResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryRecognitionResultResponseBody::Data) };
    inline QueryRecognitionResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryRecognitionResultResponseBody::Data) };
    inline QueryRecognitionResultResponseBody& setData(const QueryRecognitionResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryRecognitionResultResponseBody& setData(QueryRecognitionResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryRecognitionResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRecognitionResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryRecognitionResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryRecognitionResultResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRetailVision20260506
#endif
