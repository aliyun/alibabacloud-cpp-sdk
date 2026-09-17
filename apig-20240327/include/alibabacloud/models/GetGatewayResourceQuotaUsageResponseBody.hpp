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
        // true 时返回 used 和 limit；false 时省略二者。CustomPlugin 当前固定为 false，仅表示暂时隐藏配额展示，不影响插件上传、安装或既有配额校验。其他项按网关能力及有效额度判定，不能仅凭本字段推断写入操作是否允许。
        shared_ptr<bool> applicable_ {};
        // 当前生效的非负整数配额上限，单位与 used 相同，已考虑现有配置、加白及适用的购买额度。仅 applicable=true 时返回，包括合法零值；示例不是所有网关的固定上限。
        shared_ptr<int64_t> limit_ {};
        // GATEWAY 表示当前网关；ACCOUNT_GATEWAY_TYPE 表示当前账号、地域及网关类型的范围。仅 CustomPlugin 保留 ACCOUNT_GATEWAY_TYPE 标识；该项当前不读取或返回上限。
        shared_ptr<string> limitScope_ {};
        // 指标标识：Route（路由）、ConsumerAuthorizationRule（消费者授权规则）、McpServer（MCP Server）、Domain（域名）、Service（服务）、ConsumerQuotaRule（消费者配额规则）、K8sServiceSource（K8s 服务来源）、InstalledPlugin（已安装插件）、CustomPlugin（自定义插件）。
        shared_ptr<string> quotaKey_ {};
        // 实际占用数量，为非负整数，单位与 quotaKey 对应。仅 applicable=true 时返回；零值为真实零用量，历史超额可大于 limit，不截断。
        shared_ptr<int64_t> used_ {};
        // GATEWAY 表示当前网关；ACCOUNT_REGION 表示当前账号在当前地域的共享范围。仅 CustomPlugin 保留 ACCOUNT_REGION 标识；该项当前不读取或返回用量。
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
      // 本次查询的目标网关唯一标识，与请求路径 gatewayId 一致。
      shared_ptr<string> gatewayId_ {};
      // 固定返回九项，每个 quotaKey 仅出现一次。不适用或暂不展示的项仍保留，applicable=false 且省略 used/limit。不返回剩余额度或百分比；示例数值不是固定默认上限。
      shared_ptr<vector<Data::Items>> items_ {};
      // 服务端完成本次统计的 UTC 时间，格式为 RFC 3339，可包含小数秒。各来源独立读取，不保证跨来源瞬时原子快照。
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
    // 业务响应码。成功时为 Ok；失败时为具体错误码，应结合 HTTP 状态码处理。
    shared_ptr<string> code_ {};
    // 目标网关及其九项资源配额观测结果。示例数值只说明格式，实际有效上限以本次响应为准。
    shared_ptr<GetGatewayResourceQuotaUsageResponseBody::Data> data_ {};
    // 失败时返回的错误说明，成功响应通常省略本字段。示例为错误信息，不是成功响应。
    shared_ptr<string> message_ {};
    // 请求的唯一标识，用于排查问题。
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
