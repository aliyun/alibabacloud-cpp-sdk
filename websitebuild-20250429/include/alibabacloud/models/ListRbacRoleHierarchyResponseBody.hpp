// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRBACROLEHIERARCHYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRBACROLEHIERARCHYRESPONSEBODY_HPP_
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
  class ListRbacRoleHierarchyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRbacRoleHierarchyResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListRbacRoleHierarchyResponseBody& obj) { 
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
    ListRbacRoleHierarchyResponseBody() = default ;
    ListRbacRoleHierarchyResponseBody(const ListRbacRoleHierarchyResponseBody &) = default ;
    ListRbacRoleHierarchyResponseBody(ListRbacRoleHierarchyResponseBody &&) = default ;
    ListRbacRoleHierarchyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRbacRoleHierarchyResponseBody() = default ;
    ListRbacRoleHierarchyResponseBody& operator=(const ListRbacRoleHierarchyResponseBody &) = default ;
    ListRbacRoleHierarchyResponseBody& operator=(ListRbacRoleHierarchyResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(ChildRoleId, childRoleId_);
          DARABONBA_PTR_TO_JSON(ParentRoleId, parentRoleId_);
        };
        friend void from_json(const Darabonba::Json& j, Next& obj) { 
          DARABONBA_PTR_FROM_JSON(ChildRoleId, childRoleId_);
          DARABONBA_PTR_FROM_JSON(ParentRoleId, parentRoleId_);
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
        virtual bool empty() const override { return this->childRoleId_ == nullptr
        && this->parentRoleId_ == nullptr; };
        // childRoleId Field Functions 
        bool hasChildRoleId() const { return this->childRoleId_ != nullptr;};
        void deleteChildRoleId() { this->childRoleId_ = nullptr;};
        inline string getChildRoleId() const { DARABONBA_PTR_GET_DEFAULT(childRoleId_, "") };
        inline Next& setChildRoleId(string childRoleId) { DARABONBA_PTR_SET_VALUE(childRoleId_, childRoleId) };


        // parentRoleId Field Functions 
        bool hasParentRoleId() const { return this->parentRoleId_ != nullptr;};
        void deleteParentRoleId() { this->parentRoleId_ = nullptr;};
        inline string getParentRoleId() const { DARABONBA_PTR_GET_DEFAULT(parentRoleId_, "") };
        inline Next& setParentRoleId(string parentRoleId) { DARABONBA_PTR_SET_VALUE(parentRoleId_, parentRoleId) };


      protected:
        // The child role ID.
        shared_ptr<string> childRoleId_ {};
        // The parent role ID.
        shared_ptr<string> parentRoleId_ {};
      };

      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(ChildRoleId, childRoleId_);
          DARABONBA_PTR_TO_JSON(ParentRoleId, parentRoleId_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(ChildRoleId, childRoleId_);
          DARABONBA_PTR_FROM_JSON(ParentRoleId, parentRoleId_);
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
        virtual bool empty() const override { return this->childRoleId_ == nullptr
        && this->parentRoleId_ == nullptr; };
        // childRoleId Field Functions 
        bool hasChildRoleId() const { return this->childRoleId_ != nullptr;};
        void deleteChildRoleId() { this->childRoleId_ = nullptr;};
        inline string getChildRoleId() const { DARABONBA_PTR_GET_DEFAULT(childRoleId_, "") };
        inline Data& setChildRoleId(string childRoleId) { DARABONBA_PTR_SET_VALUE(childRoleId_, childRoleId) };


        // parentRoleId Field Functions 
        bool hasParentRoleId() const { return this->parentRoleId_ != nullptr;};
        void deleteParentRoleId() { this->parentRoleId_ = nullptr;};
        inline string getParentRoleId() const { DARABONBA_PTR_GET_DEFAULT(parentRoleId_, "") };
        inline Data& setParentRoleId(string parentRoleId) { DARABONBA_PTR_SET_VALUE(parentRoleId_, parentRoleId) };


      protected:
        // The child role ID.
        shared_ptr<string> childRoleId_ {};
        // The parent role ID.
        shared_ptr<string> parentRoleId_ {};
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
      // The current page number.
      shared_ptr<int32_t> currentPageNum_ {};
      // The request results.
      shared_ptr<vector<Module::Data>> data_ {};
      // The decision weight.
      shared_ptr<Module::Next> next_ {};
      // Indicates whether a next page exists.
      shared_ptr<bool> nextPage_ {};
      // The page size.
      shared_ptr<int32_t> pageSize_ {};
      // Indicates whether a previous page exists.
      shared_ptr<bool> prePage_ {};
      // The server processes up to 1,000 most recent records beyond the pagination limit. If the results exceed 1,000 records, **ResultLimit** is **true**. In this case, narrow the time range and search again. Otherwise, **ResultLimit** is **false**.
      shared_ptr<bool> resultLimit_ {};
      // The total number of entries.
      shared_ptr<int32_t> totalItemNum_ {};
      // The total number of pages.
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
    inline ListRbacRoleHierarchyResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline ListRbacRoleHierarchyResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListRbacRoleHierarchyResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline ListRbacRoleHierarchyResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ListRbacRoleHierarchyResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline ListRbacRoleHierarchyResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline ListRbacRoleHierarchyResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRbacRoleHierarchyResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const ListRbacRoleHierarchyResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, ListRbacRoleHierarchyResponseBody::Module) };
    inline ListRbacRoleHierarchyResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, ListRbacRoleHierarchyResponseBody::Module) };
    inline ListRbacRoleHierarchyResponseBody& setModule(const ListRbacRoleHierarchyResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline ListRbacRoleHierarchyResponseBody& setModule(ListRbacRoleHierarchyResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRbacRoleHierarchyResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRbacRoleHierarchyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline ListRbacRoleHierarchyResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline ListRbacRoleHierarchyResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline ListRbacRoleHierarchyResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    // The access denied details.
    shared_ptr<string> accessDeniedDetail_ {};
    // Indicates whether a retry is allowed. Valid values:
    // - false: No retry is allowed.
    // - true: A retry is allowed.
    shared_ptr<bool> allowRetry_ {};
    // The application name.
    shared_ptr<string> appName_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message, which is used to replace the `%s` variable in the **ErrMessage** response parameter.
    // > If **ErrMessage** returns **The Value of Input Parameter %s is not valid** and **DynamicMessage** returns **DtsJobId**, the value of the request parameter **DtsJobId** is invalid.
    shared_ptr<string> dynamicMessage_ {};
    // The error parameters.
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    // The number of entries per query.
    // 
    // Valid values: 10 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The response object.
    shared_ptr<ListRbacRoleHierarchyResponseBody::Module> module_ {};
    // The token for the next query. This parameter is empty if no more results exist.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The error code.
    shared_ptr<string> rootErrorCode_ {};
    // The exception message.
    shared_ptr<string> rootErrorMsg_ {};
    // Indicates whether the request is synchronously processed.
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
