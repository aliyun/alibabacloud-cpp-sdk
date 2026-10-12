// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYRESOURCEQUOTAUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYRESOURCEQUOTAUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetGatewayResourceQuotaUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayResourceQuotaUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayResourceQuotaUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetGatewayResourceQuotaUsageResponseBody() = default ;
    GetGatewayResourceQuotaUsageResponseBody(const GetGatewayResourceQuotaUsageResponseBody &) = default ;
    GetGatewayResourceQuotaUsageResponseBody(GetGatewayResourceQuotaUsageResponseBody &&) = default ;
    GetGatewayResourceQuotaUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayResourceQuotaUsageResponseBody() = default ;
    GetGatewayResourceQuotaUsageResponseBody& operator=(const GetGatewayResourceQuotaUsageResponseBody &) = default ;
    GetGatewayResourceQuotaUsageResponseBody& operator=(GetGatewayResourceQuotaUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(observedAt, observedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(observedAt, observedAt_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(applicable, applicable_);
          DARABONBA_PTR_TO_JSON(limit, limit_);
          DARABONBA_PTR_TO_JSON(limitScope, limitScope_);
          DARABONBA_PTR_TO_JSON(quotaKey, quotaKey_);
          DARABONBA_PTR_TO_JSON(used, used_);
          DARABONBA_PTR_TO_JSON(usedScope, usedScope_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(applicable, applicable_);
          DARABONBA_PTR_FROM_JSON(limit, limit_);
          DARABONBA_PTR_FROM_JSON(limitScope, limitScope_);
          DARABONBA_PTR_FROM_JSON(quotaKey, quotaKey_);
          DARABONBA_PTR_FROM_JSON(used, used_);
          DARABONBA_PTR_FROM_JSON(usedScope, usedScope_);
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
        virtual bool empty() const override { return this->applicable_ == nullptr
        && this->limit_ == nullptr && this->limitScope_ == nullptr && this->quotaKey_ == nullptr && this->used_ == nullptr && this->usedScope_ == nullptr; };
        // applicable Field Functions 
        bool hasApplicable() const { return this->applicable_ != nullptr;};
        void deleteApplicable() { this->applicable_ = nullptr;};
        inline bool getApplicable() const { DARABONBA_PTR_GET_DEFAULT(applicable_, false) };
        inline Items& setApplicable(bool applicable) { DARABONBA_PTR_SET_VALUE(applicable_, applicable) };


        // limit Field Functions 
        bool hasLimit() const { return this->limit_ != nullptr;};
        void deleteLimit() { this->limit_ = nullptr;};
        inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
        inline Items& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


        // limitScope Field Functions 
        bool hasLimitScope() const { return this->limitScope_ != nullptr;};
        void deleteLimitScope() { this->limitScope_ = nullptr;};
        inline string getLimitScope() const { DARABONBA_PTR_GET_DEFAULT(limitScope_, "") };
        inline Items& setLimitScope(string limitScope) { DARABONBA_PTR_SET_VALUE(limitScope_, limitScope) };


        // quotaKey Field Functions 
        bool hasQuotaKey() const { return this->quotaKey_ != nullptr;};
        void deleteQuotaKey() { this->quotaKey_ = nullptr;};
        inline string getQuotaKey() const { DARABONBA_PTR_GET_DEFAULT(quotaKey_, "") };
        inline Items& setQuotaKey(string quotaKey) { DARABONBA_PTR_SET_VALUE(quotaKey_, quotaKey) };


        // used Field Functions 
        bool hasUsed() const { return this->used_ != nullptr;};
        void deleteUsed() { this->used_ = nullptr;};
        inline int64_t getUsed() const { DARABONBA_PTR_GET_DEFAULT(used_, 0L) };
        inline Items& setUsed(int64_t used) { DARABONBA_PTR_SET_VALUE(used_, used) };


        // usedScope Field Functions 
        bool hasUsedScope() const { return this->usedScope_ != nullptr;};
        void deleteUsedScope() { this->usedScope_ = nullptr;};
        inline string getUsedScope() const { DARABONBA_PTR_GET_DEFAULT(usedScope_, "") };
        inline Items& setUsedScope(string usedScope) { DARABONBA_PTR_SET_VALUE(usedScope_, usedScope) };


      protected:
        // Indicates whether quota numerical values are provided.
        shared_ptr<bool> applicable_ {};
        // The effective limit.
        shared_ptr<int64_t> limit_ {};
        // The scope to which the limit applies.
        shared_ptr<string> limitScope_ {};
        // The quota metric.
        shared_ptr<string> quotaKey_ {};
        // The current usage.
        shared_ptr<int64_t> used_ {};
        // The scope for usage statistics.
        shared_ptr<string> usedScope_ {};
      };

      virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->items_ == nullptr && this->observedAt_ == nullptr; };
      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Data& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // observedAt Field Functions 
      bool hasObservedAt() const { return this->observedAt_ != nullptr;};
      void deleteObservedAt() { this->observedAt_ = nullptr;};
      inline string getObservedAt() const { DARABONBA_PTR_GET_DEFAULT(observedAt_, "") };
      inline Data& setObservedAt(string observedAt) { DARABONBA_PTR_SET_VALUE(observedAt_, observedAt) };


    protected:
      // The gateway ID.
      shared_ptr<string> gatewayId_ {};
      // The resource quota items.
      shared_ptr<vector<Data::Items>> items_ {};
      // The time when the statistics collection was completed.
      shared_ptr<string> observedAt_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetGatewayResourceQuotaUsageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGatewayResourceQuotaUsageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetGatewayResourceQuotaUsageResponseBody::Data) };
    inline GetGatewayResourceQuotaUsageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetGatewayResourceQuotaUsageResponseBody::Data) };
    inline GetGatewayResourceQuotaUsageResponseBody& setData(const GetGatewayResourceQuotaUsageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGatewayResourceQuotaUsageResponseBody& setData(GetGatewayResourceQuotaUsageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGatewayResourceQuotaUsageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGatewayResourceQuotaUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The quota query result.
    shared_ptr<GetGatewayResourceQuotaUsageResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
