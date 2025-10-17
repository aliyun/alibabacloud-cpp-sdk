// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBRESOURCEGROUPREQUESTRAYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBRESOURCEGROUPREQUESTRAYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyDBResourceGroupRequestRayConfigAppConfig.hpp>
#include <vector>
#include <alibabacloud/models/ModifyDBResourceGroupRequestRayConfigStorageMounts.hpp>
#include <alibabacloud/models/ModifyDBResourceGroupRequestRayConfigWorkerGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyDBResourceGroupRequestRayConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBResourceGroupRequestRayConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AppConfig, appConfig_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(EnableUserEni, enableUserEni_);
      DARABONBA_PTR_TO_JSON(HeadAllocateUnit, headAllocateUnit_);
      DARABONBA_PTR_TO_JSON(HeadDiskCapacity, headDiskCapacity_);
      DARABONBA_PTR_TO_JSON(HeadSpec, headSpec_);
      DARABONBA_PTR_TO_JSON(HeadSpecType, headSpecType_);
      DARABONBA_PTR_TO_JSON(StorageMounts, storageMounts_);
      DARABONBA_PTR_TO_JSON(WorkerGroups, workerGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBResourceGroupRequestRayConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AppConfig, appConfig_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(EnableUserEni, enableUserEni_);
      DARABONBA_PTR_FROM_JSON(HeadAllocateUnit, headAllocateUnit_);
      DARABONBA_PTR_FROM_JSON(HeadDiskCapacity, headDiskCapacity_);
      DARABONBA_PTR_FROM_JSON(HeadSpec, headSpec_);
      DARABONBA_PTR_FROM_JSON(HeadSpecType, headSpecType_);
      DARABONBA_PTR_FROM_JSON(StorageMounts, storageMounts_);
      DARABONBA_PTR_FROM_JSON(WorkerGroups, workerGroups_);
    };
    ModifyDBResourceGroupRequestRayConfig() = default ;
    ModifyDBResourceGroupRequestRayConfig(const ModifyDBResourceGroupRequestRayConfig &) = default ;
    ModifyDBResourceGroupRequestRayConfig(ModifyDBResourceGroupRequestRayConfig &&) = default ;
    ModifyDBResourceGroupRequestRayConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBResourceGroupRequestRayConfig() = default ;
    ModifyDBResourceGroupRequestRayConfig& operator=(const ModifyDBResourceGroupRequestRayConfig &) = default ;
    ModifyDBResourceGroupRequestRayConfig& operator=(ModifyDBResourceGroupRequestRayConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appConfig_ == nullptr
        && return this->category_ == nullptr && return this->enableUserEni_ == nullptr && return this->headAllocateUnit_ == nullptr && return this->headDiskCapacity_ == nullptr && return this->headSpec_ == nullptr
        && return this->headSpecType_ == nullptr && return this->storageMounts_ == nullptr && return this->workerGroups_ == nullptr; };
    // appConfig Field Functions 
    bool hasAppConfig() const { return this->appConfig_ != nullptr;};
    void deleteAppConfig() { this->appConfig_ = nullptr;};
    inline const Models::ModifyDBResourceGroupRequestRayConfigAppConfig & appConfig() const { DARABONBA_PTR_GET_CONST(appConfig_, Models::ModifyDBResourceGroupRequestRayConfigAppConfig) };
    inline Models::ModifyDBResourceGroupRequestRayConfigAppConfig appConfig() { DARABONBA_PTR_GET(appConfig_, Models::ModifyDBResourceGroupRequestRayConfigAppConfig) };
    inline ModifyDBResourceGroupRequestRayConfig& setAppConfig(const Models::ModifyDBResourceGroupRequestRayConfigAppConfig & appConfig) { DARABONBA_PTR_SET_VALUE(appConfig_, appConfig) };
    inline ModifyDBResourceGroupRequestRayConfig& setAppConfig(Models::ModifyDBResourceGroupRequestRayConfigAppConfig && appConfig) { DARABONBA_PTR_SET_RVALUE(appConfig_, appConfig) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ModifyDBResourceGroupRequestRayConfig& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // enableUserEni Field Functions 
    bool hasEnableUserEni() const { return this->enableUserEni_ != nullptr;};
    void deleteEnableUserEni() { this->enableUserEni_ = nullptr;};
    inline bool enableUserEni() const { DARABONBA_PTR_GET_DEFAULT(enableUserEni_, false) };
    inline ModifyDBResourceGroupRequestRayConfig& setEnableUserEni(bool enableUserEni) { DARABONBA_PTR_SET_VALUE(enableUserEni_, enableUserEni) };


    // headAllocateUnit Field Functions 
    bool hasHeadAllocateUnit() const { return this->headAllocateUnit_ != nullptr;};
    void deleteHeadAllocateUnit() { this->headAllocateUnit_ = nullptr;};
    inline string headAllocateUnit() const { DARABONBA_PTR_GET_DEFAULT(headAllocateUnit_, "") };
    inline ModifyDBResourceGroupRequestRayConfig& setHeadAllocateUnit(string headAllocateUnit) { DARABONBA_PTR_SET_VALUE(headAllocateUnit_, headAllocateUnit) };


    // headDiskCapacity Field Functions 
    bool hasHeadDiskCapacity() const { return this->headDiskCapacity_ != nullptr;};
    void deleteHeadDiskCapacity() { this->headDiskCapacity_ = nullptr;};
    inline string headDiskCapacity() const { DARABONBA_PTR_GET_DEFAULT(headDiskCapacity_, "") };
    inline ModifyDBResourceGroupRequestRayConfig& setHeadDiskCapacity(string headDiskCapacity) { DARABONBA_PTR_SET_VALUE(headDiskCapacity_, headDiskCapacity) };


    // headSpec Field Functions 
    bool hasHeadSpec() const { return this->headSpec_ != nullptr;};
    void deleteHeadSpec() { this->headSpec_ = nullptr;};
    inline string headSpec() const { DARABONBA_PTR_GET_DEFAULT(headSpec_, "") };
    inline ModifyDBResourceGroupRequestRayConfig& setHeadSpec(string headSpec) { DARABONBA_PTR_SET_VALUE(headSpec_, headSpec) };


    // headSpecType Field Functions 
    bool hasHeadSpecType() const { return this->headSpecType_ != nullptr;};
    void deleteHeadSpecType() { this->headSpecType_ = nullptr;};
    inline string headSpecType() const { DARABONBA_PTR_GET_DEFAULT(headSpecType_, "") };
    inline ModifyDBResourceGroupRequestRayConfig& setHeadSpecType(string headSpecType) { DARABONBA_PTR_SET_VALUE(headSpecType_, headSpecType) };


    // storageMounts Field Functions 
    bool hasStorageMounts() const { return this->storageMounts_ != nullptr;};
    void deleteStorageMounts() { this->storageMounts_ = nullptr;};
    inline const vector<Models::ModifyDBResourceGroupRequestRayConfigStorageMounts> & storageMounts() const { DARABONBA_PTR_GET_CONST(storageMounts_, vector<Models::ModifyDBResourceGroupRequestRayConfigStorageMounts>) };
    inline vector<Models::ModifyDBResourceGroupRequestRayConfigStorageMounts> storageMounts() { DARABONBA_PTR_GET(storageMounts_, vector<Models::ModifyDBResourceGroupRequestRayConfigStorageMounts>) };
    inline ModifyDBResourceGroupRequestRayConfig& setStorageMounts(const vector<Models::ModifyDBResourceGroupRequestRayConfigStorageMounts> & storageMounts) { DARABONBA_PTR_SET_VALUE(storageMounts_, storageMounts) };
    inline ModifyDBResourceGroupRequestRayConfig& setStorageMounts(vector<Models::ModifyDBResourceGroupRequestRayConfigStorageMounts> && storageMounts) { DARABONBA_PTR_SET_RVALUE(storageMounts_, storageMounts) };


    // workerGroups Field Functions 
    bool hasWorkerGroups() const { return this->workerGroups_ != nullptr;};
    void deleteWorkerGroups() { this->workerGroups_ = nullptr;};
    inline const vector<Models::ModifyDBResourceGroupRequestRayConfigWorkerGroups> & workerGroups() const { DARABONBA_PTR_GET_CONST(workerGroups_, vector<Models::ModifyDBResourceGroupRequestRayConfigWorkerGroups>) };
    inline vector<Models::ModifyDBResourceGroupRequestRayConfigWorkerGroups> workerGroups() { DARABONBA_PTR_GET(workerGroups_, vector<Models::ModifyDBResourceGroupRequestRayConfigWorkerGroups>) };
    inline ModifyDBResourceGroupRequestRayConfig& setWorkerGroups(const vector<Models::ModifyDBResourceGroupRequestRayConfigWorkerGroups> & workerGroups) { DARABONBA_PTR_SET_VALUE(workerGroups_, workerGroups) };
    inline ModifyDBResourceGroupRequestRayConfig& setWorkerGroups(vector<Models::ModifyDBResourceGroupRequestRayConfigWorkerGroups> && workerGroups) { DARABONBA_PTR_SET_RVALUE(workerGroups_, workerGroups) };


  protected:
    std::shared_ptr<Models::ModifyDBResourceGroupRequestRayConfigAppConfig> appConfig_ = nullptr;
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<bool> enableUserEni_ = nullptr;
    std::shared_ptr<string> headAllocateUnit_ = nullptr;
    std::shared_ptr<string> headDiskCapacity_ = nullptr;
    std::shared_ptr<string> headSpec_ = nullptr;
    std::shared_ptr<string> headSpecType_ = nullptr;
    std::shared_ptr<vector<Models::ModifyDBResourceGroupRequestRayConfigStorageMounts>> storageMounts_ = nullptr;
    std::shared_ptr<vector<Models::ModifyDBResourceGroupRequestRayConfigWorkerGroups>> workerGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
