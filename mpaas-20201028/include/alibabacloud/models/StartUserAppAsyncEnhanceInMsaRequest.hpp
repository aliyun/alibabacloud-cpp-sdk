// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTUSERAPPASYNCENHANCEINMSAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTUSERAPPASYNCENHANCEINMSAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class StartUserAppAsyncEnhanceInMsaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartUserAppAsyncEnhanceInMsaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApkProtector, apkProtector_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AssetsFileList, assetsFileList_);
      DARABONBA_PTR_TO_JSON(Classes, classes_);
      DARABONBA_PTR_TO_JSON(DalvikDebugger, dalvikDebugger_);
      DARABONBA_PTR_TO_JSON(EmulatorEnvironment, emulatorEnvironment_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(JavaHook, javaHook_);
      DARABONBA_PTR_TO_JSON(MemoryDump, memoryDump_);
      DARABONBA_PTR_TO_JSON(NativeDebugger, nativeDebugger_);
      DARABONBA_PTR_TO_JSON(NativeHook, nativeHook_);
      DARABONBA_PTR_TO_JSON(PackageTampered, packageTampered_);
      DARABONBA_PTR_TO_JSON(Root, root_);
      DARABONBA_PTR_TO_JSON(RunMode, runMode_);
      DARABONBA_PTR_TO_JSON(SoFileList, soFileList_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TotalSwitch, totalSwitch_);
      DARABONBA_PTR_TO_JSON(UseAShield, useAShield_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, StartUserAppAsyncEnhanceInMsaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApkProtector, apkProtector_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AssetsFileList, assetsFileList_);
      DARABONBA_PTR_FROM_JSON(Classes, classes_);
      DARABONBA_PTR_FROM_JSON(DalvikDebugger, dalvikDebugger_);
      DARABONBA_PTR_FROM_JSON(EmulatorEnvironment, emulatorEnvironment_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(JavaHook, javaHook_);
      DARABONBA_PTR_FROM_JSON(MemoryDump, memoryDump_);
      DARABONBA_PTR_FROM_JSON(NativeDebugger, nativeDebugger_);
      DARABONBA_PTR_FROM_JSON(NativeHook, nativeHook_);
      DARABONBA_PTR_FROM_JSON(PackageTampered, packageTampered_);
      DARABONBA_PTR_FROM_JSON(Root, root_);
      DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
      DARABONBA_PTR_FROM_JSON(SoFileList, soFileList_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TotalSwitch, totalSwitch_);
      DARABONBA_PTR_FROM_JSON(UseAShield, useAShield_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    StartUserAppAsyncEnhanceInMsaRequest() = default ;
    StartUserAppAsyncEnhanceInMsaRequest(const StartUserAppAsyncEnhanceInMsaRequest &) = default ;
    StartUserAppAsyncEnhanceInMsaRequest(StartUserAppAsyncEnhanceInMsaRequest &&) = default ;
    StartUserAppAsyncEnhanceInMsaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartUserAppAsyncEnhanceInMsaRequest() = default ;
    StartUserAppAsyncEnhanceInMsaRequest& operator=(const StartUserAppAsyncEnhanceInMsaRequest &) = default ;
    StartUserAppAsyncEnhanceInMsaRequest& operator=(StartUserAppAsyncEnhanceInMsaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apkProtector_ == nullptr
        && return this->appId_ == nullptr && return this->assetsFileList_ == nullptr && return this->classes_ == nullptr && return this->dalvikDebugger_ == nullptr && return this->emulatorEnvironment_ == nullptr
        && return this->id_ == nullptr && return this->javaHook_ == nullptr && return this->memoryDump_ == nullptr && return this->nativeDebugger_ == nullptr && return this->nativeHook_ == nullptr
        && return this->packageTampered_ == nullptr && return this->root_ == nullptr && return this->runMode_ == nullptr && return this->soFileList_ == nullptr && return this->taskType_ == nullptr
        && return this->tenantId_ == nullptr && return this->totalSwitch_ == nullptr && return this->useAShield_ == nullptr && return this->workspaceId_ == nullptr; };
    // apkProtector Field Functions 
    bool hasApkProtector() const { return this->apkProtector_ != nullptr;};
    void deleteApkProtector() { this->apkProtector_ = nullptr;};
    inline bool apkProtector() const { DARABONBA_PTR_GET_DEFAULT(apkProtector_, false) };
    inline StartUserAppAsyncEnhanceInMsaRequest& setApkProtector(bool apkProtector) { DARABONBA_PTR_SET_VALUE(apkProtector_, apkProtector) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartUserAppAsyncEnhanceInMsaRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // assetsFileList Field Functions 
    bool hasAssetsFileList() const { return this->assetsFileList_ != nullptr;};
    void deleteAssetsFileList() { this->assetsFileList_ = nullptr;};
    inline string assetsFileList() const { DARABONBA_PTR_GET_DEFAULT(assetsFileList_, "") };
    inline StartUserAppAsyncEnhanceInMsaRequest& setAssetsFileList(string assetsFileList) { DARABONBA_PTR_SET_VALUE(assetsFileList_, assetsFileList) };


    // classes Field Functions 
    bool hasClasses() const { return this->classes_ != nullptr;};
    void deleteClasses() { this->classes_ = nullptr;};
    inline string classes() const { DARABONBA_PTR_GET_DEFAULT(classes_, "") };
    inline StartUserAppAsyncEnhanceInMsaRequest& setClasses(string classes) { DARABONBA_PTR_SET_VALUE(classes_, classes) };


    // dalvikDebugger Field Functions 
    bool hasDalvikDebugger() const { return this->dalvikDebugger_ != nullptr;};
    void deleteDalvikDebugger() { this->dalvikDebugger_ = nullptr;};
    inline int32_t dalvikDebugger() const { DARABONBA_PTR_GET_DEFAULT(dalvikDebugger_, 0) };
    inline StartUserAppAsyncEnhanceInMsaRequest& setDalvikDebugger(int32_t dalvikDebugger) { DARABONBA_PTR_SET_VALUE(dalvikDebugger_, dalvikDebugger) };


    // emulatorEnvironment Field Functions 
    bool hasEmulatorEnvironment() const { return this->emulatorEnvironment_ != nullptr;};
    void deleteEmulatorEnvironment() { this->emulatorEnvironment_ = nullptr;};
    inline int32_t emulatorEnvironment() const { DARABONBA_PTR_GET_DEFAULT(emulatorEnvironment_, 0) };
    inline StartUserAppAsyncEnhanceInMsaRequest& setEmulatorEnvironment(int32_t emulatorEnvironment) { DARABONBA_PTR_SET_VALUE(emulatorEnvironment_, emulatorEnvironment) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline StartUserAppAsyncEnhanceInMsaRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // javaHook Field Functions 
    bool hasJavaHook() const { return this->javaHook_ != nullptr;};
    void deleteJavaHook() { this->javaHook_ = nullptr;};
    inline int32_t javaHook() const { DARABONBA_PTR_GET_DEFAULT(javaHook_, 0) };
    inline StartUserAppAsyncEnhanceInMsaRequest& setJavaHook(int32_t javaHook) { DARABONBA_PTR_SET_VALUE(javaHook_, javaHook) };


    // memoryDump Field Functions 
    bool hasMemoryDump() const { return this->memoryDump_ != nullptr;};
    void deleteMemoryDump() { this->memoryDump_ = nullptr;};
    inline int32_t memoryDump() const { DARABONBA_PTR_GET_DEFAULT(memoryDump_, 0) };
    inline StartUserAppAsyncEnhanceInMsaRequest& setMemoryDump(int32_t memoryDump) { DARABONBA_PTR_SET_VALUE(memoryDump_, memoryDump) };


    // nativeDebugger Field Functions 
    bool hasNativeDebugger() const { return this->nativeDebugger_ != nullptr;};
    void deleteNativeDebugger() { this->nativeDebugger_ = nullptr;};
    inline int32_t nativeDebugger() const { DARABONBA_PTR_GET_DEFAULT(nativeDebugger_, 0) };
    inline StartUserAppAsyncEnhanceInMsaRequest& setNativeDebugger(int32_t nativeDebugger) { DARABONBA_PTR_SET_VALUE(nativeDebugger_, nativeDebugger) };


    // nativeHook Field Functions 
    bool hasNativeHook() const { return this->nativeHook_ != nullptr;};
    void deleteNativeHook() { this->nativeHook_ = nullptr;};
    inline int32_t nativeHook() const { DARABONBA_PTR_GET_DEFAULT(nativeHook_, 0) };
    inline StartUserAppAsyncEnhanceInMsaRequest& setNativeHook(int32_t nativeHook) { DARABONBA_PTR_SET_VALUE(nativeHook_, nativeHook) };


    // packageTampered Field Functions 
    bool hasPackageTampered() const { return this->packageTampered_ != nullptr;};
    void deletePackageTampered() { this->packageTampered_ = nullptr;};
    inline int32_t packageTampered() const { DARABONBA_PTR_GET_DEFAULT(packageTampered_, 0) };
    inline StartUserAppAsyncEnhanceInMsaRequest& setPackageTampered(int32_t packageTampered) { DARABONBA_PTR_SET_VALUE(packageTampered_, packageTampered) };


    // root Field Functions 
    bool hasRoot() const { return this->root_ != nullptr;};
    void deleteRoot() { this->root_ = nullptr;};
    inline int32_t root() const { DARABONBA_PTR_GET_DEFAULT(root_, 0) };
    inline StartUserAppAsyncEnhanceInMsaRequest& setRoot(int32_t root) { DARABONBA_PTR_SET_VALUE(root_, root) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline string runMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
    inline StartUserAppAsyncEnhanceInMsaRequest& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


    // soFileList Field Functions 
    bool hasSoFileList() const { return this->soFileList_ != nullptr;};
    void deleteSoFileList() { this->soFileList_ = nullptr;};
    inline string soFileList() const { DARABONBA_PTR_GET_DEFAULT(soFileList_, "") };
    inline StartUserAppAsyncEnhanceInMsaRequest& setSoFileList(string soFileList) { DARABONBA_PTR_SET_VALUE(soFileList_, soFileList) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline StartUserAppAsyncEnhanceInMsaRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline StartUserAppAsyncEnhanceInMsaRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // totalSwitch Field Functions 
    bool hasTotalSwitch() const { return this->totalSwitch_ != nullptr;};
    void deleteTotalSwitch() { this->totalSwitch_ = nullptr;};
    inline bool totalSwitch() const { DARABONBA_PTR_GET_DEFAULT(totalSwitch_, false) };
    inline StartUserAppAsyncEnhanceInMsaRequest& setTotalSwitch(bool totalSwitch) { DARABONBA_PTR_SET_VALUE(totalSwitch_, totalSwitch) };


    // useAShield Field Functions 
    bool hasUseAShield() const { return this->useAShield_ != nullptr;};
    void deleteUseAShield() { this->useAShield_ = nullptr;};
    inline bool useAShield() const { DARABONBA_PTR_GET_DEFAULT(useAShield_, false) };
    inline StartUserAppAsyncEnhanceInMsaRequest& setUseAShield(bool useAShield) { DARABONBA_PTR_SET_VALUE(useAShield_, useAShield) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline StartUserAppAsyncEnhanceInMsaRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<bool> apkProtector_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> assetsFileList_ = nullptr;
    std::shared_ptr<string> classes_ = nullptr;
    std::shared_ptr<int32_t> dalvikDebugger_ = nullptr;
    std::shared_ptr<int32_t> emulatorEnvironment_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int32_t> javaHook_ = nullptr;
    std::shared_ptr<int32_t> memoryDump_ = nullptr;
    std::shared_ptr<int32_t> nativeDebugger_ = nullptr;
    std::shared_ptr<int32_t> nativeHook_ = nullptr;
    std::shared_ptr<int32_t> packageTampered_ = nullptr;
    std::shared_ptr<int32_t> root_ = nullptr;
    std::shared_ptr<string> runMode_ = nullptr;
    std::shared_ptr<string> soFileList_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<bool> totalSwitch_ = nullptr;
    std::shared_ptr<bool> useAShield_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
