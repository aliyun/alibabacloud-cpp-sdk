// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYRECEIVEDPUSHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYRECEIVEDPUSHSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class BatchQueryReceivedPushStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryReceivedPushStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryReceivedPushStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BatchQueryReceivedPushStatusResponseBody() = default ;
    BatchQueryReceivedPushStatusResponseBody(const BatchQueryReceivedPushStatusResponseBody &) = default ;
    BatchQueryReceivedPushStatusResponseBody(BatchQueryReceivedPushStatusResponseBody &&) = default ;
    BatchQueryReceivedPushStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryReceivedPushStatusResponseBody() = default ;
    BatchQueryReceivedPushStatusResponseBody& operator=(const BatchQueryReceivedPushStatusResponseBody &) = default ;
    BatchQueryReceivedPushStatusResponseBody& operator=(BatchQueryReceivedPushStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(PushResults, pushResults_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(PushResults, pushResults_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PushResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PushResults& obj) { 
          DARABONBA_PTR_TO_JSON(DomainList, domainList_);
          DARABONBA_PTR_TO_JSON(OutBizId, outBizId_);
          DARABONBA_PTR_TO_JSON(PushNo, pushNo_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
        };
        friend void from_json(const Darabonba::Json& j, PushResults& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
          DARABONBA_PTR_FROM_JSON(OutBizId, outBizId_);
          DARABONBA_PTR_FROM_JSON(PushNo, pushNo_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
        };
        PushResults() = default ;
        PushResults(const PushResults &) = default ;
        PushResults(PushResults &&) = default ;
        PushResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PushResults() = default ;
        PushResults& operator=(const PushResults &) = default ;
        PushResults& operator=(PushResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domainList_ == nullptr
        && this->outBizId_ == nullptr && this->pushNo_ == nullptr && this->status_ == nullptr && this->statusDesc_ == nullptr; };
        // domainList Field Functions 
        bool hasDomainList() const { return this->domainList_ != nullptr;};
        void deleteDomainList() { this->domainList_ = nullptr;};
        inline string getDomainList() const { DARABONBA_PTR_GET_DEFAULT(domainList_, "") };
        inline PushResults& setDomainList(string domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };


        // outBizId Field Functions 
        bool hasOutBizId() const { return this->outBizId_ != nullptr;};
        void deleteOutBizId() { this->outBizId_ = nullptr;};
        inline string getOutBizId() const { DARABONBA_PTR_GET_DEFAULT(outBizId_, "") };
        inline PushResults& setOutBizId(string outBizId) { DARABONBA_PTR_SET_VALUE(outBizId_, outBizId) };


        // pushNo Field Functions 
        bool hasPushNo() const { return this->pushNo_ != nullptr;};
        void deletePushNo() { this->pushNo_ = nullptr;};
        inline string getPushNo() const { DARABONBA_PTR_GET_DEFAULT(pushNo_, "") };
        inline PushResults& setPushNo(string pushNo) { DARABONBA_PTR_SET_VALUE(pushNo_, pushNo) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PushResults& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusDesc Field Functions 
        bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
        void deleteStatusDesc() { this->statusDesc_ = nullptr;};
        inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
        inline PushResults& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


      protected:
        // 域名列表，逗号分隔
        shared_ptr<string> domainList_ {};
        // 外部业务ID，卖家发起时指定
        shared_ptr<string> outBizId_ {};
        // Push编号
        shared_ptr<string> pushNo_ {};
        // 枚举值：PENDING（待接收）、ACCEPTED（已接收）、REJECTED（已拒绝）、EXPIRED（已过期）、CANCELLED（已取消）
        shared_ptr<string> status_ {};
        // 状态描述，买家视角
        shared_ptr<string> statusDesc_ {};
      };

      virtual bool empty() const override { return this->pushResults_ == nullptr; };
      // pushResults Field Functions 
      bool hasPushResults() const { return this->pushResults_ != nullptr;};
      void deletePushResults() { this->pushResults_ = nullptr;};
      inline const vector<Module::PushResults> & getPushResults() const { DARABONBA_PTR_GET_CONST(pushResults_, vector<Module::PushResults>) };
      inline vector<Module::PushResults> getPushResults() { DARABONBA_PTR_GET(pushResults_, vector<Module::PushResults>) };
      inline Module& setPushResults(const vector<Module::PushResults> & pushResults) { DARABONBA_PTR_SET_VALUE(pushResults_, pushResults) };
      inline Module& setPushResults(vector<Module::PushResults> && pushResults) { DARABONBA_PTR_SET_RVALUE(pushResults_, pushResults) };


    protected:
      // Push接收状态结果列表
      shared_ptr<vector<Module::PushResults>> pushResults_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->httpStatusCode_ == nullptr && this->maxResults_ == nullptr && this->module_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline BatchQueryReceivedPushStatusResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline BatchQueryReceivedPushStatusResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline BatchQueryReceivedPushStatusResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline BatchQueryReceivedPushStatusResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const BatchQueryReceivedPushStatusResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, BatchQueryReceivedPushStatusResponseBody::Module) };
    inline BatchQueryReceivedPushStatusResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, BatchQueryReceivedPushStatusResponseBody::Module) };
    inline BatchQueryReceivedPushStatusResponseBody& setModule(const BatchQueryReceivedPushStatusResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline BatchQueryReceivedPushStatusResponseBody& setModule(BatchQueryReceivedPushStatusResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline BatchQueryReceivedPushStatusResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchQueryReceivedPushStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchQueryReceivedPushStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // RAM鉴权失败时的标准化错误详情，JSON字符串，包含NoPermissionType、PolicyType、AuthPrincipalType、EncodedDiagnosticMessage等字段
    shared_ptr<string> accessDeniedDetail_ {};
    // 是否允许重试
    shared_ptr<bool> allowRetry_ {};
    // HTTP状态码
    shared_ptr<int64_t> httpStatusCode_ {};
    // 本次返回的最大记录条数
    shared_ptr<int32_t> maxResults_ {};
    // 业务数据模块
    shared_ptr<BatchQueryReceivedPushStatusResponseBody::Module> module_ {};
    // 获取下一页需用到的凭证
    shared_ptr<string> nextToken_ {};
    // 唯一请求识别码
    shared_ptr<string> requestId_ {};
    // 是否调用成功
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
