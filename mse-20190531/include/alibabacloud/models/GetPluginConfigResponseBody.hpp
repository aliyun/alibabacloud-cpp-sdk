// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLUGINCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPLUGINCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetPluginConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPluginConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetPluginConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetPluginConfigResponseBody() = default ;
    GetPluginConfigResponseBody(const GetPluginConfigResponseBody &) = default ;
    GetPluginConfigResponseBody(GetPluginConfigResponseBody &&) = default ;
    GetPluginConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPluginConfigResponseBody() = default ;
    GetPluginConfigResponseBody& operator=(const GetPluginConfigResponseBody &) = default ;
    GetPluginConfigResponseBody& operator=(GetPluginConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(ConfigCheck, configCheck_);
        DARABONBA_PTR_TO_JSON(ConfigExample, configExample_);
        DARABONBA_PTR_TO_JSON(DomainConfigStartIndex, domainConfigStartIndex_);
        DARABONBA_PTR_TO_JSON(GatewayConfigList, gatewayConfigList_);
        DARABONBA_PTR_TO_JSON(GatewayConfigStartIndex, gatewayConfigStartIndex_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Phase, phase_);
        DARABONBA_PTR_TO_JSON(PrimaryUser, primaryUser_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(PublishState, publishState_);
        DARABONBA_PTR_TO_JSON(Readme, readme_);
        DARABONBA_PTR_TO_JSON(ReadmeEn, readmeEn_);
        DARABONBA_PTR_TO_JSON(RouteConfigStartIndex, routeConfigStartIndex_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_PTR_TO_JSON(SummaryEn, summaryEn_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(VersionJson, versionJson_);
        DARABONBA_PTR_TO_JSON(WasmLang, wasmLang_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(ConfigCheck, configCheck_);
        DARABONBA_PTR_FROM_JSON(ConfigExample, configExample_);
        DARABONBA_PTR_FROM_JSON(DomainConfigStartIndex, domainConfigStartIndex_);
        DARABONBA_PTR_FROM_JSON(GatewayConfigList, gatewayConfigList_);
        DARABONBA_PTR_FROM_JSON(GatewayConfigStartIndex, gatewayConfigStartIndex_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Phase, phase_);
        DARABONBA_PTR_FROM_JSON(PrimaryUser, primaryUser_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(PublishState, publishState_);
        DARABONBA_PTR_FROM_JSON(Readme, readme_);
        DARABONBA_PTR_FROM_JSON(ReadmeEn, readmeEn_);
        DARABONBA_PTR_FROM_JSON(RouteConfigStartIndex, routeConfigStartIndex_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_PTR_FROM_JSON(SummaryEn, summaryEn_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(VersionJson, versionJson_);
        DARABONBA_PTR_FROM_JSON(WasmLang, wasmLang_);
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
      class GatewayConfigList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GatewayConfigList& obj) { 
          DARABONBA_PTR_TO_JSON(Config, config_);
          DARABONBA_PTR_TO_JSON(ConfigLevel, configLevel_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
          DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
        };
        friend void from_json(const Darabonba::Json& j, GatewayConfigList& obj) { 
          DARABONBA_PTR_FROM_JSON(Config, config_);
          DARABONBA_PTR_FROM_JSON(ConfigLevel, configLevel_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
          DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
        };
        GatewayConfigList() = default ;
        GatewayConfigList(const GatewayConfigList &) = default ;
        GatewayConfigList(GatewayConfigList &&) = default ;
        GatewayConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GatewayConfigList() = default ;
        GatewayConfigList& operator=(const GatewayConfigList &) = default ;
        GatewayConfigList& operator=(GatewayConfigList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ResourceList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResourceList& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, ResourceList& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          ResourceList() = default ;
          ResourceList(const ResourceList &) = default ;
          ResourceList(ResourceList &&) = default ;
          ResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResourceList() = default ;
          ResourceList& operator=(const ResourceList &) = default ;
          ResourceList& operator=(ResourceList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline ResourceList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ResourceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->config_ == nullptr
        && this->configLevel_ == nullptr && this->enable_ == nullptr && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->pluginId_ == nullptr && this->resourceList_ == nullptr; };
        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
        inline GatewayConfigList& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


        // configLevel Field Functions 
        bool hasConfigLevel() const { return this->configLevel_ != nullptr;};
        void deleteConfigLevel() { this->configLevel_ = nullptr;};
        inline int32_t getConfigLevel() const { DARABONBA_PTR_GET_DEFAULT(configLevel_, 0) };
        inline GatewayConfigList& setConfigLevel(int32_t configLevel) { DARABONBA_PTR_SET_VALUE(configLevel_, configLevel) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline GatewayConfigList& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
        inline GatewayConfigList& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // gatewayUniqueId Field Functions 
        bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
        void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
        inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
        inline GatewayConfigList& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline GatewayConfigList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline GatewayConfigList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline GatewayConfigList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // pluginId Field Functions 
        bool hasPluginId() const { return this->pluginId_ != nullptr;};
        void deletePluginId() { this->pluginId_ = nullptr;};
        inline int64_t getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, 0L) };
        inline GatewayConfigList& setPluginId(int64_t pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


        // resourceList Field Functions 
        bool hasResourceList() const { return this->resourceList_ != nullptr;};
        void deleteResourceList() { this->resourceList_ = nullptr;};
        inline const vector<GatewayConfigList::ResourceList> & getResourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<GatewayConfigList::ResourceList>) };
        inline vector<GatewayConfigList::ResourceList> getResourceList() { DARABONBA_PTR_GET(resourceList_, vector<GatewayConfigList::ResourceList>) };
        inline GatewayConfigList& setResourceList(const vector<GatewayConfigList::ResourceList> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
        inline GatewayConfigList& setResourceList(vector<GatewayConfigList::ResourceList> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


      protected:
        // The plug-in configuration.
        shared_ptr<string> config_ {};
        // The application scope of the plug-in. Valid values:
        // 
        // 0: global
        // 
        // 1: domain names
        // 
        // 2: routes
        shared_ptr<int32_t> configLevel_ {};
        // Indicates whether the plug-in is enabled.
        shared_ptr<bool> enable_ {};
        // The ID of the gateway.
        shared_ptr<int64_t> gatewayId_ {};
        // The unique ID of the gateway.
        shared_ptr<string> gatewayUniqueId_ {};
        // The creation time.
        shared_ptr<string> gmtCreate_ {};
        // The update time.
        shared_ptr<string> gmtModified_ {};
        // The ID of the plug-in configuration.
        shared_ptr<int64_t> id_ {};
        // The ID of the gateway plug-in.
        shared_ptr<int64_t> pluginId_ {};
        shared_ptr<vector<GatewayConfigList::ResourceList>> resourceList_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->configCheck_ == nullptr && this->configExample_ == nullptr && this->domainConfigStartIndex_ == nullptr && this->gatewayConfigList_ == nullptr && this->gatewayConfigStartIndex_ == nullptr
        && this->id_ == nullptr && this->imageName_ == nullptr && this->mode_ == nullptr && this->name_ == nullptr && this->phase_ == nullptr
        && this->primaryUser_ == nullptr && this->priority_ == nullptr && this->publishState_ == nullptr && this->readme_ == nullptr && this->readmeEn_ == nullptr
        && this->routeConfigStartIndex_ == nullptr && this->status_ == nullptr && this->summary_ == nullptr && this->summaryEn_ == nullptr && this->type_ == nullptr
        && this->version_ == nullptr && this->versionJson_ == nullptr && this->wasmLang_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline int32_t getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
      inline Data& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // configCheck Field Functions 
      bool hasConfigCheck() const { return this->configCheck_ != nullptr;};
      void deleteConfigCheck() { this->configCheck_ = nullptr;};
      inline string getConfigCheck() const { DARABONBA_PTR_GET_DEFAULT(configCheck_, "") };
      inline Data& setConfigCheck(string configCheck) { DARABONBA_PTR_SET_VALUE(configCheck_, configCheck) };


      // configExample Field Functions 
      bool hasConfigExample() const { return this->configExample_ != nullptr;};
      void deleteConfigExample() { this->configExample_ = nullptr;};
      inline string getConfigExample() const { DARABONBA_PTR_GET_DEFAULT(configExample_, "") };
      inline Data& setConfigExample(string configExample) { DARABONBA_PTR_SET_VALUE(configExample_, configExample) };


      // domainConfigStartIndex Field Functions 
      bool hasDomainConfigStartIndex() const { return this->domainConfigStartIndex_ != nullptr;};
      void deleteDomainConfigStartIndex() { this->domainConfigStartIndex_ = nullptr;};
      inline int32_t getDomainConfigStartIndex() const { DARABONBA_PTR_GET_DEFAULT(domainConfigStartIndex_, 0) };
      inline Data& setDomainConfigStartIndex(int32_t domainConfigStartIndex) { DARABONBA_PTR_SET_VALUE(domainConfigStartIndex_, domainConfigStartIndex) };


      // gatewayConfigList Field Functions 
      bool hasGatewayConfigList() const { return this->gatewayConfigList_ != nullptr;};
      void deleteGatewayConfigList() { this->gatewayConfigList_ = nullptr;};
      inline const vector<Data::GatewayConfigList> & getGatewayConfigList() const { DARABONBA_PTR_GET_CONST(gatewayConfigList_, vector<Data::GatewayConfigList>) };
      inline vector<Data::GatewayConfigList> getGatewayConfigList() { DARABONBA_PTR_GET(gatewayConfigList_, vector<Data::GatewayConfigList>) };
      inline Data& setGatewayConfigList(const vector<Data::GatewayConfigList> & gatewayConfigList) { DARABONBA_PTR_SET_VALUE(gatewayConfigList_, gatewayConfigList) };
      inline Data& setGatewayConfigList(vector<Data::GatewayConfigList> && gatewayConfigList) { DARABONBA_PTR_SET_RVALUE(gatewayConfigList_, gatewayConfigList) };


      // gatewayConfigStartIndex Field Functions 
      bool hasGatewayConfigStartIndex() const { return this->gatewayConfigStartIndex_ != nullptr;};
      void deleteGatewayConfigStartIndex() { this->gatewayConfigStartIndex_ = nullptr;};
      inline int32_t getGatewayConfigStartIndex() const { DARABONBA_PTR_GET_DEFAULT(gatewayConfigStartIndex_, 0) };
      inline Data& setGatewayConfigStartIndex(int32_t gatewayConfigStartIndex) { DARABONBA_PTR_SET_VALUE(gatewayConfigStartIndex_, gatewayConfigStartIndex) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // imageName Field Functions 
      bool hasImageName() const { return this->imageName_ != nullptr;};
      void deleteImageName() { this->imageName_ = nullptr;};
      inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
      inline Data& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline int32_t getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
      inline Data& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // phase Field Functions 
      bool hasPhase() const { return this->phase_ != nullptr;};
      void deletePhase() { this->phase_ = nullptr;};
      inline int32_t getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, 0) };
      inline Data& setPhase(int32_t phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


      // primaryUser Field Functions 
      bool hasPrimaryUser() const { return this->primaryUser_ != nullptr;};
      void deletePrimaryUser() { this->primaryUser_ = nullptr;};
      inline string getPrimaryUser() const { DARABONBA_PTR_GET_DEFAULT(primaryUser_, "") };
      inline Data& setPrimaryUser(string primaryUser) { DARABONBA_PTR_SET_VALUE(primaryUser_, primaryUser) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline Data& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // publishState Field Functions 
      bool hasPublishState() const { return this->publishState_ != nullptr;};
      void deletePublishState() { this->publishState_ = nullptr;};
      inline int32_t getPublishState() const { DARABONBA_PTR_GET_DEFAULT(publishState_, 0) };
      inline Data& setPublishState(int32_t publishState) { DARABONBA_PTR_SET_VALUE(publishState_, publishState) };


      // readme Field Functions 
      bool hasReadme() const { return this->readme_ != nullptr;};
      void deleteReadme() { this->readme_ = nullptr;};
      inline string getReadme() const { DARABONBA_PTR_GET_DEFAULT(readme_, "") };
      inline Data& setReadme(string readme) { DARABONBA_PTR_SET_VALUE(readme_, readme) };


      // readmeEn Field Functions 
      bool hasReadmeEn() const { return this->readmeEn_ != nullptr;};
      void deleteReadmeEn() { this->readmeEn_ = nullptr;};
      inline string getReadmeEn() const { DARABONBA_PTR_GET_DEFAULT(readmeEn_, "") };
      inline Data& setReadmeEn(string readmeEn) { DARABONBA_PTR_SET_VALUE(readmeEn_, readmeEn) };


      // routeConfigStartIndex Field Functions 
      bool hasRouteConfigStartIndex() const { return this->routeConfigStartIndex_ != nullptr;};
      void deleteRouteConfigStartIndex() { this->routeConfigStartIndex_ = nullptr;};
      inline int32_t getRouteConfigStartIndex() const { DARABONBA_PTR_GET_DEFAULT(routeConfigStartIndex_, 0) };
      inline Data& setRouteConfigStartIndex(int32_t routeConfigStartIndex) { DARABONBA_PTR_SET_VALUE(routeConfigStartIndex_, routeConfigStartIndex) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Data& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // summaryEn Field Functions 
      bool hasSummaryEn() const { return this->summaryEn_ != nullptr;};
      void deleteSummaryEn() { this->summaryEn_ = nullptr;};
      inline string getSummaryEn() const { DARABONBA_PTR_GET_DEFAULT(summaryEn_, "") };
      inline Data& setSummaryEn(string summaryEn) { DARABONBA_PTR_SET_VALUE(summaryEn_, summaryEn) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline Data& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // versionJson Field Functions 
      bool hasVersionJson() const { return this->versionJson_ != nullptr;};
      void deleteVersionJson() { this->versionJson_ = nullptr;};
      inline string getVersionJson() const { DARABONBA_PTR_GET_DEFAULT(versionJson_, "") };
      inline Data& setVersionJson(string versionJson) { DARABONBA_PTR_SET_VALUE(versionJson_, versionJson) };


      // wasmLang Field Functions 
      bool hasWasmLang() const { return this->wasmLang_ != nullptr;};
      void deleteWasmLang() { this->wasmLang_ = nullptr;};
      inline int32_t getWasmLang() const { DARABONBA_PTR_GET_DEFAULT(wasmLang_, 0) };
      inline Data& setWasmLang(int32_t wasmLang) { DARABONBA_PTR_SET_VALUE(wasmLang_, wasmLang) };


    protected:
      // The category of the plug-in. Valid values:
      // 
      // 0: user-defined
      // 
      // 1: permission authentication
      // 
      // 2: security protection
      // 
      // 3: transmission protocol
      // 
      // 4: traffic control
      // 
      // 5: traffic observation
      shared_ptr<int32_t> category_ {};
      // The information about the plug-in configuration used for checking.
      shared_ptr<string> configCheck_ {};
      shared_ptr<string> configExample_ {};
      shared_ptr<int32_t> domainConfigStartIndex_ {};
      // The list of gateway plug-in configurations.
      shared_ptr<vector<Data::GatewayConfigList>> gatewayConfigList_ {};
      shared_ptr<int32_t> gatewayConfigStartIndex_ {};
      // The ID of the plug-in.
      shared_ptr<int64_t> id_ {};
      // The name of the image.
      shared_ptr<string> imageName_ {};
      // The mode.
      shared_ptr<int32_t> mode_ {};
      // The name of the plug-in.
      shared_ptr<string> name_ {};
      // The execution stage of the plug-in. Valid values:
      // 
      // 0: default stage
      // 
      // 1: authorization stage
      // 
      // 2: authentication stage
      // 
      // 3: statistics stage
      shared_ptr<int32_t> phase_ {};
      // The ID of the creator.
      shared_ptr<string> primaryUser_ {};
      // The execution priority of the plug-in. A larger value indicates a higher priority.
      shared_ptr<int32_t> priority_ {};
      // The publish status.
      shared_ptr<int32_t> publishState_ {};
      // The description of the README file.
      shared_ptr<string> readme_ {};
      // The description of the README file that is edited in English.
      shared_ptr<string> readmeEn_ {};
      shared_ptr<int32_t> routeConfigStartIndex_ {};
      // Indicates whether the plug-in is enabled. Valid values:
      // 
      // 0: disabled
      // 
      // 1: enabled
      shared_ptr<string> status_ {};
      // The summary of the plug-in.
      shared_ptr<string> summary_ {};
      shared_ptr<string> summaryEn_ {};
      // The type.
      shared_ptr<int32_t> type_ {};
      // The version of the plug-in.
      shared_ptr<string> version_ {};
      shared_ptr<string> versionJson_ {};
      // The WebAssembly language. Valid values:
      // 
      // 0: C++
      // 
      // 1: TinyGo
      // 
      // 2: Rust
      // 
      // 3: AssemblyScript
      // 
      // 4: Zig
      shared_ptr<int32_t> wasmLang_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetPluginConfigResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPluginConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPluginConfigResponseBody::Data) };
    inline GetPluginConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPluginConfigResponseBody::Data) };
    inline GetPluginConfigResponseBody& setData(const GetPluginConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPluginConfigResponseBody& setData(GetPluginConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetPluginConfigResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetPluginConfigResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetPluginConfigResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetPluginConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPluginConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPluginConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPluginConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<int32_t> code_ {};
    // The returned data.
    shared_ptr<GetPluginConfigResponseBody::Data> data_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message.
    shared_ptr<string> dynamicMessage_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
