// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRUMAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppList, appList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppList, appList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRumAppsResponseBody() = default ;
    GetRumAppsResponseBody(const GetRumAppsResponseBody &) = default ;
    GetRumAppsResponseBody(GetRumAppsResponseBody &&) = default ;
    GetRumAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumAppsResponseBody() = default ;
    GetRumAppsResponseBody& operator=(const GetRumAppsResponseBody &) = default ;
    GetRumAppsResponseBody& operator=(GetRumAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppList& obj) { 
        DARABONBA_PTR_TO_JSON(AppType, appType_);
        DARABONBA_ANY_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(IsSubscription, isSubscription_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NickName, nickName_);
        DARABONBA_PTR_TO_JSON(PackageName, packageName_);
        DARABONBA_PTR_TO_JSON(Pid, pid_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ServiceDomainConfigs, serviceDomainConfigs_);
        DARABONBA_PTR_TO_JSON(SlsLogstore, slsLogstore_);
        DARABONBA_PTR_TO_JSON(SlsProject, slsProject_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, AppList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppType, appType_);
        DARABONBA_ANY_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(IsSubscription, isSubscription_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NickName, nickName_);
        DARABONBA_PTR_FROM_JSON(PackageName, packageName_);
        DARABONBA_PTR_FROM_JSON(Pid, pid_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ServiceDomainConfigs, serviceDomainConfigs_);
        DARABONBA_PTR_FROM_JSON(SlsLogstore, slsLogstore_);
        DARABONBA_PTR_FROM_JSON(SlsProject, slsProject_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      AppList() = default ;
      AppList(const AppList &) = default ;
      AppList(AppList &&) = default ;
      AppList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppList() = default ;
      AppList& operator=(const AppList &) = default ;
      AppList& operator=(AppList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key. The tag key can be up to 128 characters in length. It cannot start with aliyun or acs: and cannot contain http:// or https://.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class ServiceDomainConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServiceDomainConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(PropagatorTypes, propagatorTypes_);
          DARABONBA_PTR_TO_JSON(Tracing, tracing_);
        };
        friend void from_json(const Darabonba::Json& j, ServiceDomainConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(PropagatorTypes, propagatorTypes_);
          DARABONBA_PTR_FROM_JSON(Tracing, tracing_);
        };
        ServiceDomainConfigs() = default ;
        ServiceDomainConfigs(const ServiceDomainConfigs &) = default ;
        ServiceDomainConfigs(ServiceDomainConfigs &&) = default ;
        ServiceDomainConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ServiceDomainConfigs() = default ;
        ServiceDomainConfigs& operator=(const ServiceDomainConfigs &) = default ;
        ServiceDomainConfigs& operator=(ServiceDomainConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->domain_ == nullptr && this->propagatorTypes_ == nullptr && this->tracing_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ServiceDomainConfigs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline ServiceDomainConfigs& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // propagatorTypes Field Functions 
        bool hasPropagatorTypes() const { return this->propagatorTypes_ != nullptr;};
        void deletePropagatorTypes() { this->propagatorTypes_ = nullptr;};
        inline const vector<string> & getPropagatorTypes() const { DARABONBA_PTR_GET_CONST(propagatorTypes_, vector<string>) };
        inline vector<string> getPropagatorTypes() { DARABONBA_PTR_GET(propagatorTypes_, vector<string>) };
        inline ServiceDomainConfigs& setPropagatorTypes(const vector<string> & propagatorTypes) { DARABONBA_PTR_SET_VALUE(propagatorTypes_, propagatorTypes) };
        inline ServiceDomainConfigs& setPropagatorTypes(vector<string> && propagatorTypes) { DARABONBA_PTR_SET_RVALUE(propagatorTypes_, propagatorTypes) };


        // tracing Field Functions 
        bool hasTracing() const { return this->tracing_ != nullptr;};
        void deleteTracing() { this->tracing_ = nullptr;};
        inline string getTracing() const { DARABONBA_PTR_GET_DEFAULT(tracing_, "") };
        inline ServiceDomainConfigs& setTracing(string tracing) { DARABONBA_PTR_SET_VALUE(tracing_, tracing) };


      protected:
        // The description.
        shared_ptr<string> description_ {};
        // The domain name or IP address.
        shared_ptr<string> domain_ {};
        // The trace propagation protocols. This parameter is required if the tracing analysis feature is enabled.
        shared_ptr<vector<string>> propagatorTypes_ {};
        // Indicates whether the tracing analysis feature is enabled. To enable the tracing analysis feature, you must activate Managed Service for OpenTelemetry. Valid values:
        // 
        // *   `true`: enables the tracing analysis feature. If you enable the tracing analysis feature, related headers are inserted into requests for the domain name.
        // *   `false`: disables the tracing analysis feature.
        shared_ptr<string> tracing_ {};
      };

      virtual bool empty() const override { return this->appType_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->endpoint_ == nullptr && this->isSubscription_ == nullptr && this->name_ == nullptr
        && this->nickName_ == nullptr && this->packageName_ == nullptr && this->pid_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->serviceDomainConfigs_ == nullptr && this->slsLogstore_ == nullptr && this->slsProject_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->type_ == nullptr; };
      // appType Field Functions 
      bool hasAppType() const { return this->appType_ != nullptr;};
      void deleteAppType() { this->appType_ = nullptr;};
      inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
      inline AppList& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline       const Darabonba::Json & getCreateTime() const { DARABONBA_GET(createTime_) };
      Darabonba::Json & getCreateTime() { DARABONBA_GET(createTime_) };
      inline AppList& setCreateTime(const Darabonba::Json & createTime) { DARABONBA_SET_VALUE(createTime_, createTime) };
      inline AppList& setCreateTime(Darabonba::Json && createTime) { DARABONBA_SET_RVALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AppList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline AppList& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // isSubscription Field Functions 
      bool hasIsSubscription() const { return this->isSubscription_ != nullptr;};
      void deleteIsSubscription() { this->isSubscription_ = nullptr;};
      inline bool getIsSubscription() const { DARABONBA_PTR_GET_DEFAULT(isSubscription_, false) };
      inline AppList& setIsSubscription(bool isSubscription) { DARABONBA_PTR_SET_VALUE(isSubscription_, isSubscription) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline AppList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nickName Field Functions 
      bool hasNickName() const { return this->nickName_ != nullptr;};
      void deleteNickName() { this->nickName_ = nullptr;};
      inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
      inline AppList& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


      // packageName Field Functions 
      bool hasPackageName() const { return this->packageName_ != nullptr;};
      void deletePackageName() { this->packageName_ = nullptr;};
      inline string getPackageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
      inline AppList& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


      // pid Field Functions 
      bool hasPid() const { return this->pid_ != nullptr;};
      void deletePid() { this->pid_ = nullptr;};
      inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
      inline AppList& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AppList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline AppList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // serviceDomainConfigs Field Functions 
      bool hasServiceDomainConfigs() const { return this->serviceDomainConfigs_ != nullptr;};
      void deleteServiceDomainConfigs() { this->serviceDomainConfigs_ = nullptr;};
      inline const vector<AppList::ServiceDomainConfigs> & getServiceDomainConfigs() const { DARABONBA_PTR_GET_CONST(serviceDomainConfigs_, vector<AppList::ServiceDomainConfigs>) };
      inline vector<AppList::ServiceDomainConfigs> getServiceDomainConfigs() { DARABONBA_PTR_GET(serviceDomainConfigs_, vector<AppList::ServiceDomainConfigs>) };
      inline AppList& setServiceDomainConfigs(const vector<AppList::ServiceDomainConfigs> & serviceDomainConfigs) { DARABONBA_PTR_SET_VALUE(serviceDomainConfigs_, serviceDomainConfigs) };
      inline AppList& setServiceDomainConfigs(vector<AppList::ServiceDomainConfigs> && serviceDomainConfigs) { DARABONBA_PTR_SET_RVALUE(serviceDomainConfigs_, serviceDomainConfigs) };


      // slsLogstore Field Functions 
      bool hasSlsLogstore() const { return this->slsLogstore_ != nullptr;};
      void deleteSlsLogstore() { this->slsLogstore_ = nullptr;};
      inline string getSlsLogstore() const { DARABONBA_PTR_GET_DEFAULT(slsLogstore_, "") };
      inline AppList& setSlsLogstore(string slsLogstore) { DARABONBA_PTR_SET_VALUE(slsLogstore_, slsLogstore) };


      // slsProject Field Functions 
      bool hasSlsProject() const { return this->slsProject_ != nullptr;};
      void deleteSlsProject() { this->slsProject_ = nullptr;};
      inline string getSlsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
      inline AppList& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AppList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<AppList::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<AppList::Tags>) };
      inline vector<AppList::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<AppList::Tags>) };
      inline AppList& setTags(const vector<AppList::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline AppList& setTags(vector<AppList::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AppList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The application type. Valid values: web, miniapp, ios, and android.
      shared_ptr<string> appType_ {};
      // The time when the application was created. The value is a timestamp.
      Darabonba::Json createTime_ {};
      // The description of the application.
      shared_ptr<string> description_ {};
      // The endpoint that is used to report application data.
      shared_ptr<string> endpoint_ {};
      // Indicates whether the application is subscribed. Valid values: true and false.
      shared_ptr<bool> isSubscription_ {};
      // The application name.
      shared_ptr<string> name_ {};
      // The alias of the application.
      shared_ptr<string> nickName_ {};
      // The package name of the Android application.
      shared_ptr<string> packageName_ {};
      // The application ID.
      shared_ptr<string> pid_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The list of service domain configurations. Only mobile applications are supported.
      shared_ptr<vector<AppList::ServiceDomainConfigs>> serviceDomainConfigs_ {};
      // The name of the Simple Log Service Logstore that stores application data.
      shared_ptr<string> slsLogstore_ {};
      // The name of the Simple Log Service project that stores application data.
      shared_ptr<string> slsProject_ {};
      // The status of the application. Valid values: created, running, and stopped.
      shared_ptr<string> status_ {};
      // The tags.
      shared_ptr<vector<AppList::Tags>> tags_ {};
      // The type of the application. Valid value: RUM.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->appList_ == nullptr
        && this->code_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // appList Field Functions 
    bool hasAppList() const { return this->appList_ != nullptr;};
    void deleteAppList() { this->appList_ = nullptr;};
    inline const vector<GetRumAppsResponseBody::AppList> & getAppList() const { DARABONBA_PTR_GET_CONST(appList_, vector<GetRumAppsResponseBody::AppList>) };
    inline vector<GetRumAppsResponseBody::AppList> getAppList() { DARABONBA_PTR_GET(appList_, vector<GetRumAppsResponseBody::AppList>) };
    inline GetRumAppsResponseBody& setAppList(const vector<GetRumAppsResponseBody::AppList> & appList) { DARABONBA_PTR_SET_VALUE(appList_, appList) };
    inline GetRumAppsResponseBody& setAppList(vector<GetRumAppsResponseBody::AppList> && appList) { DARABONBA_PTR_SET_RVALUE(appList_, appList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetRumAppsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetRumAppsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRumAppsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRumAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRumAppsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The queried applications.
    shared_ptr<vector<GetRumAppsResponseBody::AppList>> appList_ {};
    // The response code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
