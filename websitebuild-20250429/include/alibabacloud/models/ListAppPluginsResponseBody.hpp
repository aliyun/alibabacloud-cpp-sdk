// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPPLUGINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPPLUGINSRESPONSEBODY_HPP_
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
  class ListAppPluginsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppPluginsResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListAppPluginsResponseBody& obj) { 
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
    ListAppPluginsResponseBody() = default ;
    ListAppPluginsResponseBody(const ListAppPluginsResponseBody &) = default ;
    ListAppPluginsResponseBody(ListAppPluginsResponseBody &&) = default ;
    ListAppPluginsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppPluginsResponseBody() = default ;
    ListAppPluginsResponseBody& operator=(const ListAppPluginsResponseBody &) = default ;
    ListAppPluginsResponseBody& operator=(ListAppPluginsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(ConfigItems, configItems_);
        DARABONBA_PTR_TO_JSON(Desc, desc_);
        DARABONBA_PTR_TO_JSON(Display, display_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(Env, env_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(Hooks, hooks_);
        DARABONBA_PTR_TO_JSON(Icon, icon_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SkillHeader, skillHeader_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(ConfigItems, configItems_);
        DARABONBA_PTR_FROM_JSON(Desc, desc_);
        DARABONBA_PTR_FROM_JSON(Display, display_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(Env, env_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(Hooks, hooks_);
        DARABONBA_PTR_FROM_JSON(Icon, icon_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IsDeleted, isDeleted_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SkillHeader, skillHeader_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
      virtual bool empty() const override { return this->code_ == nullptr
        && this->configItems_ == nullptr && this->desc_ == nullptr && this->display_ == nullptr && this->enabled_ == nullptr && this->env_ == nullptr
        && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->hooks_ == nullptr && this->icon_ == nullptr && this->id_ == nullptr
        && this->isDeleted_ == nullptr && this->name_ == nullptr && this->skillHeader_ == nullptr && this->tags_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Module& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // configItems Field Functions 
      bool hasConfigItems() const { return this->configItems_ != nullptr;};
      void deleteConfigItems() { this->configItems_ = nullptr;};
      inline string getConfigItems() const { DARABONBA_PTR_GET_DEFAULT(configItems_, "") };
      inline Module& setConfigItems(string configItems) { DARABONBA_PTR_SET_VALUE(configItems_, configItems) };


      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
      inline Module& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // display Field Functions 
      bool hasDisplay() const { return this->display_ != nullptr;};
      void deleteDisplay() { this->display_ = nullptr;};
      inline int32_t getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, 0) };
      inline Module& setDisplay(int32_t display) { DARABONBA_PTR_SET_VALUE(display_, display) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline int32_t getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, 0) };
      inline Module& setEnabled(int32_t enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
      inline Module& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline Module& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline Module& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // hooks Field Functions 
      bool hasHooks() const { return this->hooks_ != nullptr;};
      void deleteHooks() { this->hooks_ = nullptr;};
      inline string getHooks() const { DARABONBA_PTR_GET_DEFAULT(hooks_, "") };
      inline Module& setHooks(string hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };


      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
      inline Module& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Module& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isDeleted Field Functions 
      bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
      void deleteIsDeleted() { this->isDeleted_ = nullptr;};
      inline int32_t getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, 0) };
      inline Module& setIsDeleted(int32_t isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Module& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // skillHeader Field Functions 
      bool hasSkillHeader() const { return this->skillHeader_ != nullptr;};
      void deleteSkillHeader() { this->skillHeader_ = nullptr;};
      inline string getSkillHeader() const { DARABONBA_PTR_GET_DEFAULT(skillHeader_, "") };
      inline Module& setSkillHeader(string skillHeader) { DARABONBA_PTR_SET_VALUE(skillHeader_, skillHeader) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
      inline Module& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    protected:
      // plugin code
      shared_ptr<string> code_ {};
      // Configuration form in React JSON Schema format
      shared_ptr<string> configItems_ {};
      // plugin Description
      shared_ptr<string> desc_ {};
      // Image display. Valid values:  
      // 
      // - **0** (None): Do not display.  
      // - **1** (Always): Always display.
      shared_ptr<int32_t> display_ {};
      // Indicates whether scheduled delivery of resource snapshots is enabled.  
      // 
      // Valid values:  
      // - true: Enabled.  
      // - false: Shutdown.
      shared_ptr<int32_t> enabled_ {};
      // environment
      shared_ptr<string> env_ {};
      // Creation Time
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
      shared_ptr<string> gmtCreateTime_ {};
      // Updated At
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
      shared_ptr<string> gmtModifiedTime_ {};
      // hook definitions
      shared_ptr<string> hooks_ {};
      // plugin Description
      shared_ptr<string> icon_ {};
      // primary key
      shared_ptr<int64_t> id_ {};
      // Indicates whether the item has been deleted: 0—No, 1—Yes
      shared_ptr<int32_t> isDeleted_ {};
      // plugin Name
      shared_ptr<string> name_ {};
      // skill header, used by the model for selection
      shared_ptr<string> skillHeader_ {};
      // Categorization label
      shared_ptr<string> tags_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->maxResults_ == nullptr && this->module_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr
        && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListAppPluginsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline ListAppPluginsResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListAppPluginsResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline ListAppPluginsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ListAppPluginsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline ListAppPluginsResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline ListAppPluginsResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAppPluginsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<ListAppPluginsResponseBody::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<ListAppPluginsResponseBody::Module>) };
    inline vector<ListAppPluginsResponseBody::Module> getModule() { DARABONBA_PTR_GET(module_, vector<ListAppPluginsResponseBody::Module>) };
    inline ListAppPluginsResponseBody& setModule(const vector<ListAppPluginsResponseBody::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline ListAppPluginsResponseBody& setModule(vector<ListAppPluginsResponseBody::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAppPluginsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppPluginsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline ListAppPluginsResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline ListAppPluginsResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline ListAppPluginsResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    // Detailed reason for access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // Indicates whether retry is allowed
    shared_ptr<bool> allowRetry_ {};
    // Application name. Query the application with this name.
    shared_ptr<string> appName_ {};
    // Dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // Dynamic error message used to replace the `%s` placeholder in the **ErrMessage** error message.  
    // > If **ErrMessage** returns **The Value of Input Parameter %s is not valid** and **DynamicMessage** returns **DtsJobId**, it indicates that the provided request parameter **DtsJobId** is invalid.
    shared_ptr<string> dynamicMessage_ {};
    // Returned error parameters
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    // Number of results per query.  
    // 
    // Value range: 10 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // Returned object.
    shared_ptr<vector<ListAppPluginsResponseBody::Module>> module_ {};
    // Token for starting the next query. It is empty if there is no next query.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Error code
    shared_ptr<string> rootErrorCode_ {};
    // Abnormal message
    shared_ptr<string> rootErrorMsg_ {};
    // Reserved parameter.
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
