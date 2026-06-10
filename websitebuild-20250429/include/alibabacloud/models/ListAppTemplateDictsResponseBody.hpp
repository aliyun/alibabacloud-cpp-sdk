// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPTEMPLATEDICTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPTEMPLATEDICTSRESPONSEBODY_HPP_
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
  class ListAppTemplateDictsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppTemplateDictsResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListAppTemplateDictsResponseBody& obj) { 
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
    ListAppTemplateDictsResponseBody() = default ;
    ListAppTemplateDictsResponseBody(const ListAppTemplateDictsResponseBody &) = default ;
    ListAppTemplateDictsResponseBody(ListAppTemplateDictsResponseBody &&) = default ;
    ListAppTemplateDictsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppTemplateDictsResponseBody() = default ;
    ListAppTemplateDictsResponseBody& operator=(const ListAppTemplateDictsResponseBody &) = default ;
    ListAppTemplateDictsResponseBody& operator=(ListAppTemplateDictsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(DictCode, dictCode_);
        DARABONBA_PTR_TO_JSON(DictLabel, dictLabel_);
        DARABONBA_PTR_TO_JSON(DictType, dictType_);
        DARABONBA_PTR_TO_JSON(DictValue, dictValue_);
        DARABONBA_PTR_TO_JSON(HasTemplates, hasTemplates_);
        DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(DictCode, dictCode_);
        DARABONBA_PTR_FROM_JSON(DictLabel, dictLabel_);
        DARABONBA_PTR_FROM_JSON(DictType, dictType_);
        DARABONBA_PTR_FROM_JSON(DictValue, dictValue_);
        DARABONBA_PTR_FROM_JSON(HasTemplates, hasTemplates_);
        DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
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
      virtual bool empty() const override { return this->dictCode_ == nullptr
        && this->dictLabel_ == nullptr && this->dictType_ == nullptr && this->dictValue_ == nullptr && this->hasTemplates_ == nullptr && this->sortOrder_ == nullptr; };
      // dictCode Field Functions 
      bool hasDictCode() const { return this->dictCode_ != nullptr;};
      void deleteDictCode() { this->dictCode_ = nullptr;};
      inline string getDictCode() const { DARABONBA_PTR_GET_DEFAULT(dictCode_, "") };
      inline Module& setDictCode(string dictCode) { DARABONBA_PTR_SET_VALUE(dictCode_, dictCode) };


      // dictLabel Field Functions 
      bool hasDictLabel() const { return this->dictLabel_ != nullptr;};
      void deleteDictLabel() { this->dictLabel_ = nullptr;};
      inline string getDictLabel() const { DARABONBA_PTR_GET_DEFAULT(dictLabel_, "") };
      inline Module& setDictLabel(string dictLabel) { DARABONBA_PTR_SET_VALUE(dictLabel_, dictLabel) };


      // dictType Field Functions 
      bool hasDictType() const { return this->dictType_ != nullptr;};
      void deleteDictType() { this->dictType_ = nullptr;};
      inline string getDictType() const { DARABONBA_PTR_GET_DEFAULT(dictType_, "") };
      inline Module& setDictType(string dictType) { DARABONBA_PTR_SET_VALUE(dictType_, dictType) };


      // dictValue Field Functions 
      bool hasDictValue() const { return this->dictValue_ != nullptr;};
      void deleteDictValue() { this->dictValue_ = nullptr;};
      inline string getDictValue() const { DARABONBA_PTR_GET_DEFAULT(dictValue_, "") };
      inline Module& setDictValue(string dictValue) { DARABONBA_PTR_SET_VALUE(dictValue_, dictValue) };


      // hasTemplates Field Functions 
      bool hasHasTemplates() const { return this->hasTemplates_ != nullptr;};
      void deleteHasTemplates() { this->hasTemplates_ = nullptr;};
      inline bool getHasTemplates() const { DARABONBA_PTR_GET_DEFAULT(hasTemplates_, false) };
      inline Module& setHasTemplates(bool hasTemplates) { DARABONBA_PTR_SET_VALUE(hasTemplates_, hasTemplates) };


      // sortOrder Field Functions 
      bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
      void deleteSortOrder() { this->sortOrder_ = nullptr;};
      inline int32_t getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, 0) };
      inline Module& setSortOrder(int32_t sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    protected:
      // Dictionary Code
      shared_ptr<string> dictCode_ {};
      // Dictionary label
      shared_ptr<string> dictLabel_ {};
      // Enumeration of template dictionary types
      shared_ptr<string> dictType_ {};
      // Dictionary value
      shared_ptr<string> dictValue_ {};
      // Indicates whether a template exists.
      shared_ptr<bool> hasTemplates_ {};
      // Sorting order. The default is descending.  
      // 
      // Enumeration values:  
      // 
      // ASC: ascending.  
      // 
      // DESC: descending.
      shared_ptr<int32_t> sortOrder_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->maxResults_ == nullptr && this->module_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr
        && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListAppTemplateDictsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline ListAppTemplateDictsResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAppTemplateDictsResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline ListAppTemplateDictsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ListAppTemplateDictsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline ListAppTemplateDictsResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline ListAppTemplateDictsResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAppTemplateDictsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<ListAppTemplateDictsResponseBody::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<ListAppTemplateDictsResponseBody::Module>) };
    inline vector<ListAppTemplateDictsResponseBody::Module> getModule() { DARABONBA_PTR_GET(module_, vector<ListAppTemplateDictsResponseBody::Module>) };
    inline ListAppTemplateDictsResponseBody& setModule(const vector<ListAppTemplateDictsResponseBody::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline ListAppTemplateDictsResponseBody& setModule(vector<ListAppTemplateDictsResponseBody::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAppTemplateDictsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppTemplateDictsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline ListAppTemplateDictsResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline ListAppTemplateDictsResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline ListAppTemplateDictsResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    // Detailed reason why access was denied.
    shared_ptr<string> accessDeniedDetail_ {};
    // is retry allowed
    shared_ptr<bool> allowRetry_ {};
    // application name; queries the application with this name
    shared_ptr<string> appName_ {};
    // dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // dynamic error message used to replace the `%s` placeholder in the **ErrMessage** response parameter.  
    // > If **ErrMessage** returns **The Value of Input Parameter %s is not valid** and **DynamicMessage** returns **DtsJobId**, it indicates that the request parameter **DtsJobId** is invalid.
    shared_ptr<string> dynamicMessage_ {};
    // faulty parameters
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    // Number of results per query.  
    // 
    // Value range: 10–100. Default Value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // response Data
    shared_ptr<vector<ListAppTemplateDictsResponseBody::Module>> module_ {};
    // Token for the start of the next query. It is empty when there is no next query.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // error code
    shared_ptr<string> rootErrorCode_ {};
    // abnormal message
    shared_ptr<string> rootErrorMsg_ {};
    // is processing synchronous
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
