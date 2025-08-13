// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLUGINSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPLUGINSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetPluginsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPluginsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ConfigCheck, configCheck_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MaxVersion, maxVersion_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NewVersionPublishingFlag, newVersionPublishingFlag_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(PrimaryUser, primaryUser_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(PublishState, publishState_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(SummaryEn, summaryEn_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(WasmFile, wasmFile_);
      DARABONBA_PTR_TO_JSON(WasmLang, wasmLang_);
    };
    friend void from_json(const Darabonba::Json& j, GetPluginsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ConfigCheck, configCheck_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MaxVersion, maxVersion_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NewVersionPublishingFlag, newVersionPublishingFlag_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(PrimaryUser, primaryUser_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(PublishState, publishState_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(SummaryEn, summaryEn_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(WasmFile, wasmFile_);
      DARABONBA_PTR_FROM_JSON(WasmLang, wasmLang_);
    };
    GetPluginsResponseBodyData() = default ;
    GetPluginsResponseBodyData(const GetPluginsResponseBodyData &) = default ;
    GetPluginsResponseBodyData(GetPluginsResponseBodyData &&) = default ;
    GetPluginsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPluginsResponseBodyData() = default ;
    GetPluginsResponseBodyData& operator=(const GetPluginsResponseBodyData &) = default ;
    GetPluginsResponseBodyData& operator=(GetPluginsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->configCheck_ != nullptr && this->id_ != nullptr && this->maxVersion_ != nullptr && this->mode_ != nullptr && this->name_ != nullptr
        && this->newVersionPublishingFlag_ != nullptr && this->phase_ != nullptr && this->primaryUser_ != nullptr && this->priority_ != nullptr && this->publishState_ != nullptr
        && this->status_ != nullptr && this->summary_ != nullptr && this->summaryEn_ != nullptr && this->version_ != nullptr && this->wasmFile_ != nullptr
        && this->wasmLang_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline int32_t category() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
    inline GetPluginsResponseBodyData& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // configCheck Field Functions 
    bool hasConfigCheck() const { return this->configCheck_ != nullptr;};
    void deleteConfigCheck() { this->configCheck_ = nullptr;};
    inline string configCheck() const { DARABONBA_PTR_GET_DEFAULT(configCheck_, "") };
    inline GetPluginsResponseBodyData& setConfigCheck(string configCheck) { DARABONBA_PTR_SET_VALUE(configCheck_, configCheck) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetPluginsResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // maxVersion Field Functions 
    bool hasMaxVersion() const { return this->maxVersion_ != nullptr;};
    void deleteMaxVersion() { this->maxVersion_ = nullptr;};
    inline string maxVersion() const { DARABONBA_PTR_GET_DEFAULT(maxVersion_, "") };
    inline GetPluginsResponseBodyData& setMaxVersion(string maxVersion) { DARABONBA_PTR_SET_VALUE(maxVersion_, maxVersion) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline int32_t mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
    inline GetPluginsResponseBodyData& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetPluginsResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // newVersionPublishingFlag Field Functions 
    bool hasNewVersionPublishingFlag() const { return this->newVersionPublishingFlag_ != nullptr;};
    void deleteNewVersionPublishingFlag() { this->newVersionPublishingFlag_ = nullptr;};
    inline bool newVersionPublishingFlag() const { DARABONBA_PTR_GET_DEFAULT(newVersionPublishingFlag_, false) };
    inline GetPluginsResponseBodyData& setNewVersionPublishingFlag(bool newVersionPublishingFlag) { DARABONBA_PTR_SET_VALUE(newVersionPublishingFlag_, newVersionPublishingFlag) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline int32_t phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, 0) };
    inline GetPluginsResponseBodyData& setPhase(int32_t phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // primaryUser Field Functions 
    bool hasPrimaryUser() const { return this->primaryUser_ != nullptr;};
    void deletePrimaryUser() { this->primaryUser_ = nullptr;};
    inline string primaryUser() const { DARABONBA_PTR_GET_DEFAULT(primaryUser_, "") };
    inline GetPluginsResponseBodyData& setPrimaryUser(string primaryUser) { DARABONBA_PTR_SET_VALUE(primaryUser_, primaryUser) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetPluginsResponseBodyData& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // publishState Field Functions 
    bool hasPublishState() const { return this->publishState_ != nullptr;};
    void deletePublishState() { this->publishState_ = nullptr;};
    inline int32_t publishState() const { DARABONBA_PTR_GET_DEFAULT(publishState_, 0) };
    inline GetPluginsResponseBodyData& setPublishState(int32_t publishState) { DARABONBA_PTR_SET_VALUE(publishState_, publishState) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPluginsResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline GetPluginsResponseBodyData& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // summaryEn Field Functions 
    bool hasSummaryEn() const { return this->summaryEn_ != nullptr;};
    void deleteSummaryEn() { this->summaryEn_ = nullptr;};
    inline string summaryEn() const { DARABONBA_PTR_GET_DEFAULT(summaryEn_, "") };
    inline GetPluginsResponseBodyData& setSummaryEn(string summaryEn) { DARABONBA_PTR_SET_VALUE(summaryEn_, summaryEn) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetPluginsResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // wasmFile Field Functions 
    bool hasWasmFile() const { return this->wasmFile_ != nullptr;};
    void deleteWasmFile() { this->wasmFile_ = nullptr;};
    inline string wasmFile() const { DARABONBA_PTR_GET_DEFAULT(wasmFile_, "") };
    inline GetPluginsResponseBodyData& setWasmFile(string wasmFile) { DARABONBA_PTR_SET_VALUE(wasmFile_, wasmFile) };


    // wasmLang Field Functions 
    bool hasWasmLang() const { return this->wasmLang_ != nullptr;};
    void deleteWasmLang() { this->wasmLang_ = nullptr;};
    inline int32_t wasmLang() const { DARABONBA_PTR_GET_DEFAULT(wasmLang_, 0) };
    inline GetPluginsResponseBodyData& setWasmLang(int32_t wasmLang) { DARABONBA_PTR_SET_VALUE(wasmLang_, wasmLang) };


  protected:
    // The type of the plug-in. Valid values:
    // 
    // 0: custom
    // 
    // 1: permission authorization
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
    // The ID of the plug-in.
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> maxVersion_ = nullptr;
    std::shared_ptr<int32_t> mode_ = nullptr;
    // The name of the plug-in.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> newVersionPublishingFlag_ = nullptr;
    // The execution stage of the plug-in.
    // 
    // *   0: default stage
    // *   1: authorization stage
    // *   2: authentication stage
    // *   3: statistics stage
    std::shared_ptr<int32_t> phase_ = nullptr;
    // The ID of the creator.
    std::shared_ptr<string> primaryUser_ = nullptr;
    // The execution priority of the plug-in. A larger value indicates a higher priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The publish status.
    std::shared_ptr<int32_t> publishState_ = nullptr;
    // Indicates whether the plug-in is enabled.
    // 
    // *   0: disabled
    // *   1: enabled
    std::shared_ptr<string> status_ = nullptr;
    // The summary of the plug-in.
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> summaryEn_ = nullptr;
    // The version of the plug-in.
    std::shared_ptr<string> version_ = nullptr;
    // The URL of the Object Storage Service (OSS) bucket that stores the WebAssembly plug-in.
    std::shared_ptr<string> wasmFile_ = nullptr;
    // The WebAssembly language. Valid values:
    // 
    // *   0: C++
    // *   1: TinyGo
    // *   2: Rust
    // *   3: AssemblyScript
    // *   4: Zig
    std::shared_ptr<int32_t> wasmLang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
