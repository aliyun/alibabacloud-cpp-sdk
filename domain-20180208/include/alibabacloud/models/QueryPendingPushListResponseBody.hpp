// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPENDINGPUSHLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPENDINGPUSHLISTRESPONSEBODY_HPP_
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
  class QueryPendingPushListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPendingPushListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPendingPushListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryPendingPushListResponseBody() = default ;
    QueryPendingPushListResponseBody(const QueryPendingPushListResponseBody &) = default ;
    QueryPendingPushListResponseBody(QueryPendingPushListResponseBody &&) = default ;
    QueryPendingPushListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPendingPushListResponseBody() = default ;
    QueryPendingPushListResponseBody& operator=(const QueryPendingPushListResponseBody &) = default ;
    QueryPendingPushListResponseBody& operator=(QueryPendingPushListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(PushList, pushList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(PushList, pushList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class PushList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PushList& obj) { 
          DARABONBA_PTR_TO_JSON(DomainCount, domainCount_);
          DARABONBA_PTR_TO_JSON(DomainList, domainList_);
          DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_TO_JSON(OutBizId, outBizId_);
          DARABONBA_PTR_TO_JSON(PushNo, pushNo_);
          DARABONBA_PTR_TO_JSON(PushTime, pushTime_);
          DARABONBA_PTR_TO_JSON(SellerRemark, sellerRemark_);
          DARABONBA_PTR_TO_JSON(TradeMoney, tradeMoney_);
        };
        friend void from_json(const Darabonba::Json& j, PushList& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainCount, domainCount_);
          DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
          DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
          DARABONBA_PTR_FROM_JSON(OutBizId, outBizId_);
          DARABONBA_PTR_FROM_JSON(PushNo, pushNo_);
          DARABONBA_PTR_FROM_JSON(PushTime, pushTime_);
          DARABONBA_PTR_FROM_JSON(SellerRemark, sellerRemark_);
          DARABONBA_PTR_FROM_JSON(TradeMoney, tradeMoney_);
        };
        PushList() = default ;
        PushList(const PushList &) = default ;
        PushList(PushList &&) = default ;
        PushList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PushList() = default ;
        PushList& operator=(const PushList &) = default ;
        PushList& operator=(PushList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domainCount_ == nullptr
        && this->domainList_ == nullptr && this->expireTime_ == nullptr && this->outBizId_ == nullptr && this->pushNo_ == nullptr && this->pushTime_ == nullptr
        && this->sellerRemark_ == nullptr && this->tradeMoney_ == nullptr; };
        // domainCount Field Functions 
        bool hasDomainCount() const { return this->domainCount_ != nullptr;};
        void deleteDomainCount() { this->domainCount_ = nullptr;};
        inline int32_t getDomainCount() const { DARABONBA_PTR_GET_DEFAULT(domainCount_, 0) };
        inline PushList& setDomainCount(int32_t domainCount) { DARABONBA_PTR_SET_VALUE(domainCount_, domainCount) };


        // domainList Field Functions 
        bool hasDomainList() const { return this->domainList_ != nullptr;};
        void deleteDomainList() { this->domainList_ = nullptr;};
        inline string getDomainList() const { DARABONBA_PTR_GET_DEFAULT(domainList_, "") };
        inline PushList& setDomainList(string domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
        inline PushList& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // outBizId Field Functions 
        bool hasOutBizId() const { return this->outBizId_ != nullptr;};
        void deleteOutBizId() { this->outBizId_ = nullptr;};
        inline string getOutBizId() const { DARABONBA_PTR_GET_DEFAULT(outBizId_, "") };
        inline PushList& setOutBizId(string outBizId) { DARABONBA_PTR_SET_VALUE(outBizId_, outBizId) };


        // pushNo Field Functions 
        bool hasPushNo() const { return this->pushNo_ != nullptr;};
        void deletePushNo() { this->pushNo_ = nullptr;};
        inline string getPushNo() const { DARABONBA_PTR_GET_DEFAULT(pushNo_, "") };
        inline PushList& setPushNo(string pushNo) { DARABONBA_PTR_SET_VALUE(pushNo_, pushNo) };


        // pushTime Field Functions 
        bool hasPushTime() const { return this->pushTime_ != nullptr;};
        void deletePushTime() { this->pushTime_ = nullptr;};
        inline string getPushTime() const { DARABONBA_PTR_GET_DEFAULT(pushTime_, "") };
        inline PushList& setPushTime(string pushTime) { DARABONBA_PTR_SET_VALUE(pushTime_, pushTime) };


        // sellerRemark Field Functions 
        bool hasSellerRemark() const { return this->sellerRemark_ != nullptr;};
        void deleteSellerRemark() { this->sellerRemark_ = nullptr;};
        inline string getSellerRemark() const { DARABONBA_PTR_GET_DEFAULT(sellerRemark_, "") };
        inline PushList& setSellerRemark(string sellerRemark) { DARABONBA_PTR_SET_VALUE(sellerRemark_, sellerRemark) };


        // tradeMoney Field Functions 
        bool hasTradeMoney() const { return this->tradeMoney_ != nullptr;};
        void deleteTradeMoney() { this->tradeMoney_ = nullptr;};
        inline string getTradeMoney() const { DARABONBA_PTR_GET_DEFAULT(tradeMoney_, "") };
        inline PushList& setTradeMoney(string tradeMoney) { DARABONBA_PTR_SET_VALUE(tradeMoney_, tradeMoney) };


      protected:
        // 本次Push包含的域名数量
        shared_ptr<int32_t> domainCount_ {};
        // 域名列表，逗号分隔摘要
        shared_ptr<string> domainList_ {};
        // 超过该时间未操作将自动关闭
        // 
        // Use the UTC time format: yyyy-MM-ddTHH:mmZ
        shared_ptr<string> expireTime_ {};
        // 卖家发起时指定，用于双方业务关联
        shared_ptr<string> outBizId_ {};
        // Push编号
        shared_ptr<string> pushNo_ {};
        // Push发起时间
        // 
        // Use the UTC time format: yyyy-MM-ddTHH:mmZ
        shared_ptr<string> pushTime_ {};
        // 卖家发起Push时填写的备注信息
        shared_ptr<string> sellerRemark_ {};
        // 交易金额，0表示免费Push
        shared_ptr<string> tradeMoney_ {};
      };

      virtual bool empty() const override { return this->pageNum_ == nullptr
        && this->pageSize_ == nullptr && this->pushList_ == nullptr && this->totalCount_ == nullptr; };
      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Module& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Module& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // pushList Field Functions 
      bool hasPushList() const { return this->pushList_ != nullptr;};
      void deletePushList() { this->pushList_ = nullptr;};
      inline const vector<Module::PushList> & getPushList() const { DARABONBA_PTR_GET_CONST(pushList_, vector<Module::PushList>) };
      inline vector<Module::PushList> getPushList() { DARABONBA_PTR_GET(pushList_, vector<Module::PushList>) };
      inline Module& setPushList(const vector<Module::PushList> & pushList) { DARABONBA_PTR_SET_VALUE(pushList_, pushList) };
      inline Module& setPushList(vector<Module::PushList> && pushList) { DARABONBA_PTR_SET_RVALUE(pushList_, pushList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Module& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // 当前页码
      shared_ptr<int32_t> pageNum_ {};
      // 每页大小
      shared_ptr<int32_t> pageSize_ {};
      // 待接收Push列表
      shared_ptr<vector<Module::PushList>> pushList_ {};
      // 满足条件的总记录数
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->httpStatusCode_ == nullptr && this->maxResults_ == nullptr && this->module_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryPendingPushListResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline QueryPendingPushListResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline QueryPendingPushListResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline QueryPendingPushListResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const QueryPendingPushListResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, QueryPendingPushListResponseBody::Module) };
    inline QueryPendingPushListResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, QueryPendingPushListResponseBody::Module) };
    inline QueryPendingPushListResponseBody& setModule(const QueryPendingPushListResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline QueryPendingPushListResponseBody& setModule(QueryPendingPushListResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryPendingPushListResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPendingPushListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryPendingPushListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


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
    shared_ptr<QueryPendingPushListResponseBody::Module> module_ {};
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
