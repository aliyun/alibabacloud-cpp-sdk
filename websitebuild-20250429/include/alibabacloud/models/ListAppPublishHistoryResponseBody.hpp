// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPPUBLISHHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPPUBLISHHISTORYRESPONSEBODY_HPP_
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
  class ListAppPublishHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppPublishHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_TO_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_TO_JSON(Synchro, synchro_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppPublishHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_FROM_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_FROM_JSON(Synchro, synchro_);
    };
    ListAppPublishHistoryResponseBody() = default ;
    ListAppPublishHistoryResponseBody(const ListAppPublishHistoryResponseBody &) = default ;
    ListAppPublishHistoryResponseBody(ListAppPublishHistoryResponseBody &&) = default ;
    ListAppPublishHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppPublishHistoryResponseBody() = default ;
    ListAppPublishHistoryResponseBody& operator=(const ListAppPublishHistoryResponseBody &) = default ;
    ListAppPublishHistoryResponseBody& operator=(ListAppPublishHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPublishOrderId, currentPublishOrderId_);
        DARABONBA_PTR_TO_JSON(History, history_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPublishOrderId, currentPublishOrderId_);
        DARABONBA_PTR_FROM_JSON(History, history_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class History : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const History& obj) { 
          DARABONBA_PTR_TO_JSON(CanQuickRevert, canQuickRevert_);
          DARABONBA_PTR_TO_JSON(CurrentStep, currentStep_);
          DARABONBA_PTR_TO_JSON(DeployChannel, deployChannel_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ErrorStep, errorStep_);
          DARABONBA_PTR_TO_JSON(IsFinish, isFinish_);
          DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
          DARABONBA_PTR_TO_JSON(Msg, msg_);
          DARABONBA_PTR_TO_JSON(OrderType, orderType_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(PublishNumber, publishNumber_);
          DARABONBA_PTR_TO_JSON(PublishOrderId, publishOrderId_);
          DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
          DARABONBA_PTR_TO_JSON(Steps, steps_);
        };
        friend void from_json(const Darabonba::Json& j, History& obj) { 
          DARABONBA_PTR_FROM_JSON(CanQuickRevert, canQuickRevert_);
          DARABONBA_PTR_FROM_JSON(CurrentStep, currentStep_);
          DARABONBA_PTR_FROM_JSON(DeployChannel, deployChannel_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ErrorStep, errorStep_);
          DARABONBA_PTR_FROM_JSON(IsFinish, isFinish_);
          DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
          DARABONBA_PTR_FROM_JSON(Msg, msg_);
          DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(PublishNumber, publishNumber_);
          DARABONBA_PTR_FROM_JSON(PublishOrderId, publishOrderId_);
          DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
          DARABONBA_PTR_FROM_JSON(Steps, steps_);
        };
        History() = default ;
        History(const History &) = default ;
        History(History &&) = default ;
        History(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~History() = default ;
        History& operator=(const History &) = default ;
        History& operator=(History &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->canQuickRevert_ == nullptr
        && this->currentStep_ == nullptr && this->deployChannel_ == nullptr && this->description_ == nullptr && this->errorStep_ == nullptr && this->isFinish_ == nullptr
        && this->isSuccess_ == nullptr && this->msg_ == nullptr && this->orderType_ == nullptr && this->percent_ == nullptr && this->publishNumber_ == nullptr
        && this->publishOrderId_ == nullptr && this->publishTime_ == nullptr && this->steps_ == nullptr; };
        // canQuickRevert Field Functions 
        bool hasCanQuickRevert() const { return this->canQuickRevert_ != nullptr;};
        void deleteCanQuickRevert() { this->canQuickRevert_ = nullptr;};
        inline string getCanQuickRevert() const { DARABONBA_PTR_GET_DEFAULT(canQuickRevert_, "") };
        inline History& setCanQuickRevert(string canQuickRevert) { DARABONBA_PTR_SET_VALUE(canQuickRevert_, canQuickRevert) };


        // currentStep Field Functions 
        bool hasCurrentStep() const { return this->currentStep_ != nullptr;};
        void deleteCurrentStep() { this->currentStep_ = nullptr;};
        inline string getCurrentStep() const { DARABONBA_PTR_GET_DEFAULT(currentStep_, "") };
        inline History& setCurrentStep(string currentStep) { DARABONBA_PTR_SET_VALUE(currentStep_, currentStep) };


        // deployChannel Field Functions 
        bool hasDeployChannel() const { return this->deployChannel_ != nullptr;};
        void deleteDeployChannel() { this->deployChannel_ = nullptr;};
        inline string getDeployChannel() const { DARABONBA_PTR_GET_DEFAULT(deployChannel_, "") };
        inline History& setDeployChannel(string deployChannel) { DARABONBA_PTR_SET_VALUE(deployChannel_, deployChannel) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline History& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // errorStep Field Functions 
        bool hasErrorStep() const { return this->errorStep_ != nullptr;};
        void deleteErrorStep() { this->errorStep_ = nullptr;};
        inline string getErrorStep() const { DARABONBA_PTR_GET_DEFAULT(errorStep_, "") };
        inline History& setErrorStep(string errorStep) { DARABONBA_PTR_SET_VALUE(errorStep_, errorStep) };


        // isFinish Field Functions 
        bool hasIsFinish() const { return this->isFinish_ != nullptr;};
        void deleteIsFinish() { this->isFinish_ = nullptr;};
        inline bool getIsFinish() const { DARABONBA_PTR_GET_DEFAULT(isFinish_, false) };
        inline History& setIsFinish(bool isFinish) { DARABONBA_PTR_SET_VALUE(isFinish_, isFinish) };


        // isSuccess Field Functions 
        bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
        void deleteIsSuccess() { this->isSuccess_ = nullptr;};
        inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
        inline History& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


        // msg Field Functions 
        bool hasMsg() const { return this->msg_ != nullptr;};
        void deleteMsg() { this->msg_ = nullptr;};
        inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
        inline History& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


        // orderType Field Functions 
        bool hasOrderType() const { return this->orderType_ != nullptr;};
        void deleteOrderType() { this->orderType_ = nullptr;};
        inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
        inline History& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline int32_t getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0) };
        inline History& setPercent(int32_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // publishNumber Field Functions 
        bool hasPublishNumber() const { return this->publishNumber_ != nullptr;};
        void deletePublishNumber() { this->publishNumber_ = nullptr;};
        inline string getPublishNumber() const { DARABONBA_PTR_GET_DEFAULT(publishNumber_, "") };
        inline History& setPublishNumber(string publishNumber) { DARABONBA_PTR_SET_VALUE(publishNumber_, publishNumber) };


        // publishOrderId Field Functions 
        bool hasPublishOrderId() const { return this->publishOrderId_ != nullptr;};
        void deletePublishOrderId() { this->publishOrderId_ = nullptr;};
        inline int64_t getPublishOrderId() const { DARABONBA_PTR_GET_DEFAULT(publishOrderId_, 0L) };
        inline History& setPublishOrderId(int64_t publishOrderId) { DARABONBA_PTR_SET_VALUE(publishOrderId_, publishOrderId) };


        // publishTime Field Functions 
        bool hasPublishTime() const { return this->publishTime_ != nullptr;};
        void deletePublishTime() { this->publishTime_ = nullptr;};
        inline string getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
        inline History& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


        // steps Field Functions 
        bool hasSteps() const { return this->steps_ != nullptr;};
        void deleteSteps() { this->steps_ = nullptr;};
        inline const vector<string> & getSteps() const { DARABONBA_PTR_GET_CONST(steps_, vector<string>) };
        inline vector<string> getSteps() { DARABONBA_PTR_GET(steps_, vector<string>) };
        inline History& setSteps(const vector<string> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
        inline History& setSteps(vector<string> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


      protected:
        shared_ptr<string> canQuickRevert_ {};
        shared_ptr<string> currentStep_ {};
        shared_ptr<string> deployChannel_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> errorStep_ {};
        shared_ptr<bool> isFinish_ {};
        shared_ptr<bool> isSuccess_ {};
        shared_ptr<string> msg_ {};
        shared_ptr<string> orderType_ {};
        shared_ptr<int32_t> percent_ {};
        shared_ptr<string> publishNumber_ {};
        shared_ptr<int64_t> publishOrderId_ {};
        // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
        shared_ptr<string> publishTime_ {};
        shared_ptr<vector<string>> steps_ {};
      };

      virtual bool empty() const override { return this->currentPublishOrderId_ == nullptr
        && this->history_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // currentPublishOrderId Field Functions 
      bool hasCurrentPublishOrderId() const { return this->currentPublishOrderId_ != nullptr;};
      void deleteCurrentPublishOrderId() { this->currentPublishOrderId_ = nullptr;};
      inline int64_t getCurrentPublishOrderId() const { DARABONBA_PTR_GET_DEFAULT(currentPublishOrderId_, 0L) };
      inline Module& setCurrentPublishOrderId(int64_t currentPublishOrderId) { DARABONBA_PTR_SET_VALUE(currentPublishOrderId_, currentPublishOrderId) };


      // history Field Functions 
      bool hasHistory() const { return this->history_ != nullptr;};
      void deleteHistory() { this->history_ = nullptr;};
      inline const vector<Module::History> & getHistory() const { DARABONBA_PTR_GET_CONST(history_, vector<Module::History>) };
      inline vector<Module::History> getHistory() { DARABONBA_PTR_GET(history_, vector<Module::History>) };
      inline Module& setHistory(const vector<Module::History> & history) { DARABONBA_PTR_SET_VALUE(history_, history) };
      inline Module& setHistory(vector<Module::History> && history) { DARABONBA_PTR_SET_RVALUE(history_, history) };


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


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Module& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int64_t> currentPublishOrderId_ {};
      shared_ptr<vector<Module::History>> history_ {};
      shared_ptr<int32_t> pageNum_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->maxResults_ == nullptr && this->module_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr
        && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListAppPublishHistoryResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline ListAppPublishHistoryResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAppPublishHistoryResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline ListAppPublishHistoryResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ListAppPublishHistoryResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline ListAppPublishHistoryResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline ListAppPublishHistoryResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAppPublishHistoryResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const ListAppPublishHistoryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, ListAppPublishHistoryResponseBody::Module) };
    inline ListAppPublishHistoryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, ListAppPublishHistoryResponseBody::Module) };
    inline ListAppPublishHistoryResponseBody& setModule(const ListAppPublishHistoryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline ListAppPublishHistoryResponseBody& setModule(ListAppPublishHistoryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAppPublishHistoryResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppPublishHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline ListAppPublishHistoryResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline ListAppPublishHistoryResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline ListAppPublishHistoryResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<bool> allowRetry_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<string> dynamicCode_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<ListAppPublishHistoryResponseBody::Module> module_ {};
    shared_ptr<string> nextToken_ {};
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
