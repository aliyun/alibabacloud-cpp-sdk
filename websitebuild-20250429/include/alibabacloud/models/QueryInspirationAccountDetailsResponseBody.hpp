// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSPIRATIONACCOUNTDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSPIRATIONACCOUNTDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class QueryInspirationAccountDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInspirationAccountDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_TO_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_TO_JSON(Synchro, synchro_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInspirationAccountDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_FROM_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_FROM_JSON(Synchro, synchro_);
    };
    QueryInspirationAccountDetailsResponseBody() = default ;
    QueryInspirationAccountDetailsResponseBody(const QueryInspirationAccountDetailsResponseBody &) = default ;
    QueryInspirationAccountDetailsResponseBody(QueryInspirationAccountDetailsResponseBody &&) = default ;
    QueryInspirationAccountDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInspirationAccountDetailsResponseBody() = default ;
    QueryInspirationAccountDetailsResponseBody& operator=(const QueryInspirationAccountDetailsResponseBody &) = default ;
    QueryInspirationAccountDetailsResponseBody& operator=(QueryInspirationAccountDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Next, next_);
        DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(PrePage, prePage_);
        DARABONBA_PTR_TO_JSON(ResultLimit, resultLimit_);
        DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
        DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Next, next_);
        DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
        DARABONBA_PTR_FROM_JSON(ResultLimit, resultLimit_);
        DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
        DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
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
      class Next : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Next& obj) { 
          DARABONBA_PTR_TO_JSON(AcquisitionTime, acquisitionTime_);
          DARABONBA_PTR_TO_JSON(Balance, balance_);
          DARABONBA_PTR_TO_JSON(EndDate, endDate_);
          DARABONBA_PTR_TO_JSON(Expired, expired_);
          DARABONBA_PTR_TO_JSON(InitQuota, initQuota_);
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(SourceTypeName, sourceTypeName_);
        };
        friend void from_json(const Darabonba::Json& j, Next& obj) { 
          DARABONBA_PTR_FROM_JSON(AcquisitionTime, acquisitionTime_);
          DARABONBA_PTR_FROM_JSON(Balance, balance_);
          DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
          DARABONBA_PTR_FROM_JSON(Expired, expired_);
          DARABONBA_PTR_FROM_JSON(InitQuota, initQuota_);
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(SourceTypeName, sourceTypeName_);
        };
        Next() = default ;
        Next(const Next &) = default ;
        Next(Next &&) = default ;
        Next(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Next() = default ;
        Next& operator=(const Next &) = default ;
        Next& operator=(Next &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->acquisitionTime_ == nullptr
        && this->balance_ == nullptr && this->endDate_ == nullptr && this->expired_ == nullptr && this->initQuota_ == nullptr && this->sourceType_ == nullptr
        && this->sourceTypeName_ == nullptr; };
        // acquisitionTime Field Functions 
        bool hasAcquisitionTime() const { return this->acquisitionTime_ != nullptr;};
        void deleteAcquisitionTime() { this->acquisitionTime_ = nullptr;};
        inline string getAcquisitionTime() const { DARABONBA_PTR_GET_DEFAULT(acquisitionTime_, "") };
        inline Next& setAcquisitionTime(string acquisitionTime) { DARABONBA_PTR_SET_VALUE(acquisitionTime_, acquisitionTime) };


        // balance Field Functions 
        bool hasBalance() const { return this->balance_ != nullptr;};
        void deleteBalance() { this->balance_ = nullptr;};
        inline int64_t getBalance() const { DARABONBA_PTR_GET_DEFAULT(balance_, 0L) };
        inline Next& setBalance(int64_t balance) { DARABONBA_PTR_SET_VALUE(balance_, balance) };


        // endDate Field Functions 
        bool hasEndDate() const { return this->endDate_ != nullptr;};
        void deleteEndDate() { this->endDate_ = nullptr;};
        inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
        inline Next& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


        // expired Field Functions 
        bool hasExpired() const { return this->expired_ != nullptr;};
        void deleteExpired() { this->expired_ = nullptr;};
        inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
        inline Next& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


        // initQuota Field Functions 
        bool hasInitQuota() const { return this->initQuota_ != nullptr;};
        void deleteInitQuota() { this->initQuota_ = nullptr;};
        inline int64_t getInitQuota() const { DARABONBA_PTR_GET_DEFAULT(initQuota_, 0L) };
        inline Next& setInitQuota(int64_t initQuota) { DARABONBA_PTR_SET_VALUE(initQuota_, initQuota) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline Next& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // sourceTypeName Field Functions 
        bool hasSourceTypeName() const { return this->sourceTypeName_ != nullptr;};
        void deleteSourceTypeName() { this->sourceTypeName_ = nullptr;};
        inline string getSourceTypeName() const { DARABONBA_PTR_GET_DEFAULT(sourceTypeName_, "") };
        inline Next& setSourceTypeName(string sourceTypeName) { DARABONBA_PTR_SET_VALUE(sourceTypeName_, sourceTypeName) };


      protected:
        shared_ptr<string> acquisitionTime_ {};
        shared_ptr<int64_t> balance_ {};
        shared_ptr<string> endDate_ {};
        shared_ptr<bool> expired_ {};
        shared_ptr<int64_t> initQuota_ {};
        shared_ptr<string> sourceType_ {};
        shared_ptr<string> sourceTypeName_ {};
      };

      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(AcquisitionTime, acquisitionTime_);
          DARABONBA_PTR_TO_JSON(Balance, balance_);
          DARABONBA_PTR_TO_JSON(EndDate, endDate_);
          DARABONBA_PTR_TO_JSON(Expired, expired_);
          DARABONBA_PTR_TO_JSON(InitQuota, initQuota_);
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(SourceTypeName, sourceTypeName_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(AcquisitionTime, acquisitionTime_);
          DARABONBA_PTR_FROM_JSON(Balance, balance_);
          DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
          DARABONBA_PTR_FROM_JSON(Expired, expired_);
          DARABONBA_PTR_FROM_JSON(InitQuota, initQuota_);
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(SourceTypeName, sourceTypeName_);
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
        virtual bool empty() const override { return this->acquisitionTime_ == nullptr
        && this->balance_ == nullptr && this->endDate_ == nullptr && this->expired_ == nullptr && this->initQuota_ == nullptr && this->sourceType_ == nullptr
        && this->sourceTypeName_ == nullptr; };
        // acquisitionTime Field Functions 
        bool hasAcquisitionTime() const { return this->acquisitionTime_ != nullptr;};
        void deleteAcquisitionTime() { this->acquisitionTime_ = nullptr;};
        inline string getAcquisitionTime() const { DARABONBA_PTR_GET_DEFAULT(acquisitionTime_, "") };
        inline Data& setAcquisitionTime(string acquisitionTime) { DARABONBA_PTR_SET_VALUE(acquisitionTime_, acquisitionTime) };


        // balance Field Functions 
        bool hasBalance() const { return this->balance_ != nullptr;};
        void deleteBalance() { this->balance_ = nullptr;};
        inline int64_t getBalance() const { DARABONBA_PTR_GET_DEFAULT(balance_, 0L) };
        inline Data& setBalance(int64_t balance) { DARABONBA_PTR_SET_VALUE(balance_, balance) };


        // endDate Field Functions 
        bool hasEndDate() const { return this->endDate_ != nullptr;};
        void deleteEndDate() { this->endDate_ = nullptr;};
        inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
        inline Data& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


        // expired Field Functions 
        bool hasExpired() const { return this->expired_ != nullptr;};
        void deleteExpired() { this->expired_ = nullptr;};
        inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
        inline Data& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


        // initQuota Field Functions 
        bool hasInitQuota() const { return this->initQuota_ != nullptr;};
        void deleteInitQuota() { this->initQuota_ = nullptr;};
        inline int64_t getInitQuota() const { DARABONBA_PTR_GET_DEFAULT(initQuota_, 0L) };
        inline Data& setInitQuota(int64_t initQuota) { DARABONBA_PTR_SET_VALUE(initQuota_, initQuota) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline Data& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // sourceTypeName Field Functions 
        bool hasSourceTypeName() const { return this->sourceTypeName_ != nullptr;};
        void deleteSourceTypeName() { this->sourceTypeName_ = nullptr;};
        inline string getSourceTypeName() const { DARABONBA_PTR_GET_DEFAULT(sourceTypeName_, "") };
        inline Data& setSourceTypeName(string sourceTypeName) { DARABONBA_PTR_SET_VALUE(sourceTypeName_, sourceTypeName) };


      protected:
        shared_ptr<string> acquisitionTime_ {};
        shared_ptr<int64_t> balance_ {};
        shared_ptr<string> endDate_ {};
        shared_ptr<bool> expired_ {};
        shared_ptr<int64_t> initQuota_ {};
        shared_ptr<string> sourceType_ {};
        shared_ptr<string> sourceTypeName_ {};
      };

      virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && this->data_ == nullptr && this->next_ == nullptr && this->nextPage_ == nullptr && this->pageSize_ == nullptr && this->prePage_ == nullptr
        && this->resultLimit_ == nullptr && this->totalItemNum_ == nullptr && this->totalPageNum_ == nullptr; };
      // currentPageNum Field Functions 
      bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
      void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
      inline int32_t getCurrentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
      inline Module& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Module::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Module::Data>) };
      inline vector<Module::Data> getData() { DARABONBA_PTR_GET(data_, vector<Module::Data>) };
      inline Module& setData(const vector<Module::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Module& setData(vector<Module::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // next Field Functions 
      bool hasNext() const { return this->next_ != nullptr;};
      void deleteNext() { this->next_ = nullptr;};
      inline const Module::Next & getNext() const { DARABONBA_PTR_GET_CONST(next_, Module::Next) };
      inline Module::Next getNext() { DARABONBA_PTR_GET(next_, Module::Next) };
      inline Module& setNext(const Module::Next & next) { DARABONBA_PTR_SET_VALUE(next_, next) };
      inline Module& setNext(Module::Next && next) { DARABONBA_PTR_SET_RVALUE(next_, next) };


      // nextPage Field Functions 
      bool hasNextPage() const { return this->nextPage_ != nullptr;};
      void deleteNextPage() { this->nextPage_ = nullptr;};
      inline bool getNextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, false) };
      inline Module& setNextPage(bool nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Module& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // prePage Field Functions 
      bool hasPrePage() const { return this->prePage_ != nullptr;};
      void deletePrePage() { this->prePage_ = nullptr;};
      inline bool getPrePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, false) };
      inline Module& setPrePage(bool prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


      // resultLimit Field Functions 
      bool hasResultLimit() const { return this->resultLimit_ != nullptr;};
      void deleteResultLimit() { this->resultLimit_ = nullptr;};
      inline bool getResultLimit() const { DARABONBA_PTR_GET_DEFAULT(resultLimit_, false) };
      inline Module& setResultLimit(bool resultLimit) { DARABONBA_PTR_SET_VALUE(resultLimit_, resultLimit) };


      // totalItemNum Field Functions 
      bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
      void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
      inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
      inline Module& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


      // totalPageNum Field Functions 
      bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
      void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
      inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
      inline Module& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


    protected:
      shared_ptr<int32_t> currentPageNum_ {};
      shared_ptr<vector<Module::Data>> data_ {};
      shared_ptr<Module::Next> next_ {};
      shared_ptr<bool> nextPage_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<bool> prePage_ {};
      shared_ptr<bool> resultLimit_ {};
      shared_ptr<int32_t> totalItemNum_ {};
      shared_ptr<int32_t> totalPageNum_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->module_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryInspirationAccountDetailsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline QueryInspirationAccountDetailsResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline QueryInspirationAccountDetailsResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline QueryInspirationAccountDetailsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline QueryInspirationAccountDetailsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline QueryInspirationAccountDetailsResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline QueryInspirationAccountDetailsResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const QueryInspirationAccountDetailsResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, QueryInspirationAccountDetailsResponseBody::Module) };
    inline QueryInspirationAccountDetailsResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, QueryInspirationAccountDetailsResponseBody::Module) };
    inline QueryInspirationAccountDetailsResponseBody& setModule(const QueryInspirationAccountDetailsResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline QueryInspirationAccountDetailsResponseBody& setModule(QueryInspirationAccountDetailsResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryInspirationAccountDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline QueryInspirationAccountDetailsResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline QueryInspirationAccountDetailsResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline QueryInspirationAccountDetailsResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<bool> allowRetry_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<string> dynamicCode_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    shared_ptr<QueryInspirationAccountDetailsResponseBody::Module> module_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> rootErrorCode_ {};
    shared_ptr<string> rootErrorMsg_ {};
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
