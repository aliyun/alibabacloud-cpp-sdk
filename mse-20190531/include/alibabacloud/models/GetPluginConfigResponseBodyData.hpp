// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLUGINCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPLUGINCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPluginConfigResponseBodyDataGatewayConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetPluginConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPluginConfigResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetPluginConfigResponseBodyData& obj) { 
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
    GetPluginConfigResponseBodyData() = default ;
    GetPluginConfigResponseBodyData(const GetPluginConfigResponseBodyData &) = default ;
    GetPluginConfigResponseBodyData(GetPluginConfigResponseBodyData &&) = default ;
    GetPluginConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPluginConfigResponseBodyData() = default ;
    GetPluginConfigResponseBodyData& operator=(const GetPluginConfigResponseBodyData &) = default ;
    GetPluginConfigResponseBodyData& operator=(GetPluginConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->configCheck_ == nullptr && return this->configExample_ == nullptr && return this->domainConfigStartIndex_ == nullptr && return this->gatewayConfigList_ == nullptr && return this->gatewayConfigStartIndex_ == nullptr
        && return this->id_ == nullptr && return this->imageName_ == nullptr && return this->mode_ == nullptr && return this->name_ == nullptr && return this->phase_ == nullptr
        && return this->primaryUser_ == nullptr && return this->priority_ == nullptr && return this->publishState_ == nullptr && return this->readme_ == nullptr && return this->readmeEn_ == nullptr
        && return this->routeConfigStartIndex_ == nullptr && return this->status_ == nullptr && return this->summary_ == nullptr && return this->summaryEn_ == nullptr && return this->type_ == nullptr
        && return this->version_ == nullptr && return this->versionJson_ == nullptr && return this->wasmLang_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline int32_t category() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
    inline GetPluginConfigResponseBodyData& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // configCheck Field Functions 
    bool hasConfigCheck() const { return this->configCheck_ != nullptr;};
    void deleteConfigCheck() { this->configCheck_ = nullptr;};
    inline string configCheck() const { DARABONBA_PTR_GET_DEFAULT(configCheck_, "") };
    inline GetPluginConfigResponseBodyData& setConfigCheck(string configCheck) { DARABONBA_PTR_SET_VALUE(configCheck_, configCheck) };


    // configExample Field Functions 
    bool hasConfigExample() const { return this->configExample_ != nullptr;};
    void deleteConfigExample() { this->configExample_ = nullptr;};
    inline string configExample() const { DARABONBA_PTR_GET_DEFAULT(configExample_, "") };
    inline GetPluginConfigResponseBodyData& setConfigExample(string configExample) { DARABONBA_PTR_SET_VALUE(configExample_, configExample) };


    // domainConfigStartIndex Field Functions 
    bool hasDomainConfigStartIndex() const { return this->domainConfigStartIndex_ != nullptr;};
    void deleteDomainConfigStartIndex() { this->domainConfigStartIndex_ = nullptr;};
    inline int32_t domainConfigStartIndex() const { DARABONBA_PTR_GET_DEFAULT(domainConfigStartIndex_, 0) };
    inline GetPluginConfigResponseBodyData& setDomainConfigStartIndex(int32_t domainConfigStartIndex) { DARABONBA_PTR_SET_VALUE(domainConfigStartIndex_, domainConfigStartIndex) };


    // gatewayConfigList Field Functions 
    bool hasGatewayConfigList() const { return this->gatewayConfigList_ != nullptr;};
    void deleteGatewayConfigList() { this->gatewayConfigList_ = nullptr;};
    inline const vector<Models::GetPluginConfigResponseBodyDataGatewayConfigList> & gatewayConfigList() const { DARABONBA_PTR_GET_CONST(gatewayConfigList_, vector<Models::GetPluginConfigResponseBodyDataGatewayConfigList>) };
    inline vector<Models::GetPluginConfigResponseBodyDataGatewayConfigList> gatewayConfigList() { DARABONBA_PTR_GET(gatewayConfigList_, vector<Models::GetPluginConfigResponseBodyDataGatewayConfigList>) };
    inline GetPluginConfigResponseBodyData& setGatewayConfigList(const vector<Models::GetPluginConfigResponseBodyDataGatewayConfigList> & gatewayConfigList) { DARABONBA_PTR_SET_VALUE(gatewayConfigList_, gatewayConfigList) };
    inline GetPluginConfigResponseBodyData& setGatewayConfigList(vector<Models::GetPluginConfigResponseBodyDataGatewayConfigList> && gatewayConfigList) { DARABONBA_PTR_SET_RVALUE(gatewayConfigList_, gatewayConfigList) };


    // gatewayConfigStartIndex Field Functions 
    bool hasGatewayConfigStartIndex() const { return this->gatewayConfigStartIndex_ != nullptr;};
    void deleteGatewayConfigStartIndex() { this->gatewayConfigStartIndex_ = nullptr;};
    inline int32_t gatewayConfigStartIndex() const { DARABONBA_PTR_GET_DEFAULT(gatewayConfigStartIndex_, 0) };
    inline GetPluginConfigResponseBodyData& setGatewayConfigStartIndex(int32_t gatewayConfigStartIndex) { DARABONBA_PTR_SET_VALUE(gatewayConfigStartIndex_, gatewayConfigStartIndex) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetPluginConfigResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string imageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline GetPluginConfigResponseBodyData& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline int32_t mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
    inline GetPluginConfigResponseBodyData& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetPluginConfigResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline int32_t phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, 0) };
    inline GetPluginConfigResponseBodyData& setPhase(int32_t phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // primaryUser Field Functions 
    bool hasPrimaryUser() const { return this->primaryUser_ != nullptr;};
    void deletePrimaryUser() { this->primaryUser_ = nullptr;};
    inline string primaryUser() const { DARABONBA_PTR_GET_DEFAULT(primaryUser_, "") };
    inline GetPluginConfigResponseBodyData& setPrimaryUser(string primaryUser) { DARABONBA_PTR_SET_VALUE(primaryUser_, primaryUser) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetPluginConfigResponseBodyData& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // publishState Field Functions 
    bool hasPublishState() const { return this->publishState_ != nullptr;};
    void deletePublishState() { this->publishState_ = nullptr;};
    inline int32_t publishState() const { DARABONBA_PTR_GET_DEFAULT(publishState_, 0) };
    inline GetPluginConfigResponseBodyData& setPublishState(int32_t publishState) { DARABONBA_PTR_SET_VALUE(publishState_, publishState) };


    // readme Field Functions 
    bool hasReadme() const { return this->readme_ != nullptr;};
    void deleteReadme() { this->readme_ = nullptr;};
    inline string readme() const { DARABONBA_PTR_GET_DEFAULT(readme_, "") };
    inline GetPluginConfigResponseBodyData& setReadme(string readme) { DARABONBA_PTR_SET_VALUE(readme_, readme) };


    // readmeEn Field Functions 
    bool hasReadmeEn() const { return this->readmeEn_ != nullptr;};
    void deleteReadmeEn() { this->readmeEn_ = nullptr;};
    inline string readmeEn() const { DARABONBA_PTR_GET_DEFAULT(readmeEn_, "") };
    inline GetPluginConfigResponseBodyData& setReadmeEn(string readmeEn) { DARABONBA_PTR_SET_VALUE(readmeEn_, readmeEn) };


    // routeConfigStartIndex Field Functions 
    bool hasRouteConfigStartIndex() const { return this->routeConfigStartIndex_ != nullptr;};
    void deleteRouteConfigStartIndex() { this->routeConfigStartIndex_ = nullptr;};
    inline int32_t routeConfigStartIndex() const { DARABONBA_PTR_GET_DEFAULT(routeConfigStartIndex_, 0) };
    inline GetPluginConfigResponseBodyData& setRouteConfigStartIndex(int32_t routeConfigStartIndex) { DARABONBA_PTR_SET_VALUE(routeConfigStartIndex_, routeConfigStartIndex) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPluginConfigResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline GetPluginConfigResponseBodyData& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // summaryEn Field Functions 
    bool hasSummaryEn() const { return this->summaryEn_ != nullptr;};
    void deleteSummaryEn() { this->summaryEn_ = nullptr;};
    inline string summaryEn() const { DARABONBA_PTR_GET_DEFAULT(summaryEn_, "") };
    inline GetPluginConfigResponseBodyData& setSummaryEn(string summaryEn) { DARABONBA_PTR_SET_VALUE(summaryEn_, summaryEn) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline GetPluginConfigResponseBodyData& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetPluginConfigResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionJson Field Functions 
    bool hasVersionJson() const { return this->versionJson_ != nullptr;};
    void deleteVersionJson() { this->versionJson_ = nullptr;};
    inline string versionJson() const { DARABONBA_PTR_GET_DEFAULT(versionJson_, "") };
    inline GetPluginConfigResponseBodyData& setVersionJson(string versionJson) { DARABONBA_PTR_SET_VALUE(versionJson_, versionJson) };


    // wasmLang Field Functions 
    bool hasWasmLang() const { return this->wasmLang_ != nullptr;};
    void deleteWasmLang() { this->wasmLang_ = nullptr;};
    inline int32_t wasmLang() const { DARABONBA_PTR_GET_DEFAULT(wasmLang_, 0) };
    inline GetPluginConfigResponseBodyData& setWasmLang(int32_t wasmLang) { DARABONBA_PTR_SET_VALUE(wasmLang_, wasmLang) };


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
    std::shared_ptr<int32_t> category_ = nullptr;
    // The information about the plug-in configuration used for checking.
    std::shared_ptr<string> configCheck_ = nullptr;
    std::shared_ptr<string> configExample_ = nullptr;
    std::shared_ptr<int32_t> domainConfigStartIndex_ = nullptr;
    // The list of gateway plug-in configurations.
    std::shared_ptr<vector<Models::GetPluginConfigResponseBodyDataGatewayConfigList>> gatewayConfigList_ = nullptr;
    std::shared_ptr<int32_t> gatewayConfigStartIndex_ = nullptr;
    // The ID of the plug-in.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> imageName_ = nullptr;
    // The mode.
    std::shared_ptr<int32_t> mode_ = nullptr;
    // The name of the plug-in.
    std::shared_ptr<string> name_ = nullptr;
    // The execution stage of the plug-in. Valid values:
    // 
    // 0: default stage
    // 
    // 1: authorization stage
    // 
    // 2: authentication stage
    // 
    // 3: statistics stage
    std::shared_ptr<int32_t> phase_ = nullptr;
    // The ID of the creator.
    std::shared_ptr<string> primaryUser_ = nullptr;
    // The execution priority of the plug-in. A larger value indicates a higher priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The publish status.
    std::shared_ptr<int32_t> publishState_ = nullptr;
    // The description of the README file.
    std::shared_ptr<string> readme_ = nullptr;
    // The description of the README file that is edited in English.
    std::shared_ptr<string> readmeEn_ = nullptr;
    std::shared_ptr<int32_t> routeConfigStartIndex_ = nullptr;
    // Indicates whether the plug-in is enabled. Valid values:
    // 
    // 0: disabled
    // 
    // 1: enabled
    std::shared_ptr<string> status_ = nullptr;
    // The summary of the plug-in.
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> summaryEn_ = nullptr;
    // The type.
    std::shared_ptr<int32_t> type_ = nullptr;
    // The version of the plug-in.
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<string> versionJson_ = nullptr;
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
    std::shared_ptr<int32_t> wasmLang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
