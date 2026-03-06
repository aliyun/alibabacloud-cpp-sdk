// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPCOMMODITYSPECIFICATIONSV2FORPARTNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPCOMMODITYSPECIFICATIONSV2FORPARTNERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ModuleNextComponentsValue.hpp>
#include <alibabacloud/models/ModuleNextPropertiesValue.hpp>
#include <alibabacloud/models/ModuleDataComponentsValue.hpp>
#include <alibabacloud/models/ModuleDataPropertiesValue.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppCommoditySpecificationsV2ForPartnerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppCommoditySpecificationsV2ForPartnerResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListAppCommoditySpecificationsV2ForPartnerResponseBody& obj) { 
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
    ListAppCommoditySpecificationsV2ForPartnerResponseBody() = default ;
    ListAppCommoditySpecificationsV2ForPartnerResponseBody(const ListAppCommoditySpecificationsV2ForPartnerResponseBody &) = default ;
    ListAppCommoditySpecificationsV2ForPartnerResponseBody(ListAppCommoditySpecificationsV2ForPartnerResponseBody &&) = default ;
    ListAppCommoditySpecificationsV2ForPartnerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppCommoditySpecificationsV2ForPartnerResponseBody() = default ;
    ListAppCommoditySpecificationsV2ForPartnerResponseBody& operator=(const ListAppCommoditySpecificationsV2ForPartnerResponseBody &) = default ;
    ListAppCommoditySpecificationsV2ForPartnerResponseBody& operator=(ListAppCommoditySpecificationsV2ForPartnerResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Components, components_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Properties, properties_);
        };
        friend void from_json(const Darabonba::Json& j, Next& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Components, components_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Properties, properties_);
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
        virtual bool empty() const override { return this->code_ == nullptr
        && this->components_ == nullptr && this->name_ == nullptr && this->properties_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Next& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // components Field Functions 
        bool hasComponents() const { return this->components_ != nullptr;};
        void deleteComponents() { this->components_ = nullptr;};
        inline const map<string, ModuleNextComponentsValue> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, map<string, ModuleNextComponentsValue>) };
        inline map<string, ModuleNextComponentsValue> getComponents() { DARABONBA_PTR_GET(components_, map<string, ModuleNextComponentsValue>) };
        inline Next& setComponents(const map<string, ModuleNextComponentsValue> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
        inline Next& setComponents(map<string, ModuleNextComponentsValue> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Next& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // properties Field Functions 
        bool hasProperties() const { return this->properties_ != nullptr;};
        void deleteProperties() { this->properties_ = nullptr;};
        inline const map<string, ModuleNextPropertiesValue> & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, map<string, ModuleNextPropertiesValue>) };
        inline map<string, ModuleNextPropertiesValue> getProperties() { DARABONBA_PTR_GET(properties_, map<string, ModuleNextPropertiesValue>) };
        inline Next& setProperties(const map<string, ModuleNextPropertiesValue> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
        inline Next& setProperties(map<string, ModuleNextPropertiesValue> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<map<string, ModuleNextComponentsValue>> components_ {};
        shared_ptr<string> name_ {};
        shared_ptr<map<string, ModuleNextPropertiesValue>> properties_ {};
      };

      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Components, components_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Properties, properties_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Components, components_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Properties, properties_);
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
        virtual bool empty() const override { return this->code_ == nullptr
        && this->components_ == nullptr && this->name_ == nullptr && this->properties_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // components Field Functions 
        bool hasComponents() const { return this->components_ != nullptr;};
        void deleteComponents() { this->components_ = nullptr;};
        inline const map<string, ModuleDataComponentsValue> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, map<string, ModuleDataComponentsValue>) };
        inline map<string, ModuleDataComponentsValue> getComponents() { DARABONBA_PTR_GET(components_, map<string, ModuleDataComponentsValue>) };
        inline Data& setComponents(const map<string, ModuleDataComponentsValue> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
        inline Data& setComponents(map<string, ModuleDataComponentsValue> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // properties Field Functions 
        bool hasProperties() const { return this->properties_ != nullptr;};
        void deleteProperties() { this->properties_ = nullptr;};
        inline const map<string, ModuleDataPropertiesValue> & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, map<string, ModuleDataPropertiesValue>) };
        inline map<string, ModuleDataPropertiesValue> getProperties() { DARABONBA_PTR_GET(properties_, map<string, ModuleDataPropertiesValue>) };
        inline Data& setProperties(const map<string, ModuleDataPropertiesValue> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
        inline Data& setProperties(map<string, ModuleDataPropertiesValue> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<map<string, ModuleDataComponentsValue>> components_ {};
        shared_ptr<string> name_ {};
        shared_ptr<map<string, ModuleDataPropertiesValue>> properties_ {};
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
        && this->maxResults_ == nullptr && this->module_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr
        && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListAppCommoditySpecificationsV2ForPartnerResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline ListAppCommoditySpecificationsV2ForPartnerResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAppCommoditySpecificationsV2ForPartnerResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline ListAppCommoditySpecificationsV2ForPartnerResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ListAppCommoditySpecificationsV2ForPartnerResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline ListAppCommoditySpecificationsV2ForPartnerResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline ListAppCommoditySpecificationsV2ForPartnerResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAppCommoditySpecificationsV2ForPartnerResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const ListAppCommoditySpecificationsV2ForPartnerResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, ListAppCommoditySpecificationsV2ForPartnerResponseBody::Module) };
    inline ListAppCommoditySpecificationsV2ForPartnerResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, ListAppCommoditySpecificationsV2ForPartnerResponseBody::Module) };
    inline ListAppCommoditySpecificationsV2ForPartnerResponseBody& setModule(const ListAppCommoditySpecificationsV2ForPartnerResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline ListAppCommoditySpecificationsV2ForPartnerResponseBody& setModule(ListAppCommoditySpecificationsV2ForPartnerResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAppCommoditySpecificationsV2ForPartnerResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppCommoditySpecificationsV2ForPartnerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline ListAppCommoditySpecificationsV2ForPartnerResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline ListAppCommoditySpecificationsV2ForPartnerResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline ListAppCommoditySpecificationsV2ForPartnerResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<bool> allowRetry_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<string> dynamicCode_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<ListAppCommoditySpecificationsV2ForPartnerResponseBody::Module> module_ {};
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
