// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYAPPLICATION_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYAPPLICATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class GetApplicationResponseBodyApplication : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBodyApplication& obj) { 
      DARABONBA_PTR_TO_JSON(AppDescription, appDescription_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BaseAppId, baseAppId_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(IsStateful, isStateful_);
      DARABONBA_PTR_TO_JSON(Mem, mem_);
      DARABONBA_PTR_TO_JSON(MseEnabled, mseEnabled_);
      DARABONBA_PTR_TO_JSON(MseNamespaceId, mseNamespaceId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(ProgrammingLanguage, programmingLanguage_);
      DARABONBA_PTR_TO_JSON(RunningInstances, runningInstances_);
      DARABONBA_PTR_TO_JSON(ScaleRuleEnabled, scaleRuleEnabled_);
      DARABONBA_PTR_TO_JSON(ScaleRuleType, scaleRuleType_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBodyApplication& obj) { 
      DARABONBA_PTR_FROM_JSON(AppDescription, appDescription_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BaseAppId, baseAppId_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(IsStateful, isStateful_);
      DARABONBA_PTR_FROM_JSON(Mem, mem_);
      DARABONBA_PTR_FROM_JSON(MseEnabled, mseEnabled_);
      DARABONBA_PTR_FROM_JSON(MseNamespaceId, mseNamespaceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(ProgrammingLanguage, programmingLanguage_);
      DARABONBA_PTR_FROM_JSON(RunningInstances, runningInstances_);
      DARABONBA_PTR_FROM_JSON(ScaleRuleEnabled, scaleRuleEnabled_);
      DARABONBA_PTR_FROM_JSON(ScaleRuleType, scaleRuleType_);
    };
    GetApplicationResponseBodyApplication() = default ;
    GetApplicationResponseBodyApplication(const GetApplicationResponseBodyApplication &) = default ;
    GetApplicationResponseBodyApplication(GetApplicationResponseBodyApplication &&) = default ;
    GetApplicationResponseBodyApplication(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBodyApplication() = default ;
    GetApplicationResponseBodyApplication& operator=(const GetApplicationResponseBodyApplication &) = default ;
    GetApplicationResponseBodyApplication& operator=(GetApplicationResponseBodyApplication &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appDescription_ != nullptr
        && this->appId_ != nullptr && this->appName_ != nullptr && this->baseAppId_ != nullptr && this->cpu_ != nullptr && this->instances_ != nullptr
        && this->isStateful_ != nullptr && this->mem_ != nullptr && this->mseEnabled_ != nullptr && this->mseNamespaceId_ != nullptr && this->namespaceId_ != nullptr
        && this->programmingLanguage_ != nullptr && this->runningInstances_ != nullptr && this->scaleRuleEnabled_ != nullptr && this->scaleRuleType_ != nullptr; };
    // appDescription Field Functions 
    bool hasAppDescription() const { return this->appDescription_ != nullptr;};
    void deleteAppDescription() { this->appDescription_ = nullptr;};
    inline string appDescription() const { DARABONBA_PTR_GET_DEFAULT(appDescription_, "") };
    inline GetApplicationResponseBodyApplication& setAppDescription(string appDescription) { DARABONBA_PTR_SET_VALUE(appDescription_, appDescription) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetApplicationResponseBodyApplication& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetApplicationResponseBodyApplication& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // baseAppId Field Functions 
    bool hasBaseAppId() const { return this->baseAppId_ != nullptr;};
    void deleteBaseAppId() { this->baseAppId_ = nullptr;};
    inline string baseAppId() const { DARABONBA_PTR_GET_DEFAULT(baseAppId_, "") };
    inline GetApplicationResponseBodyApplication& setBaseAppId(string baseAppId) { DARABONBA_PTR_SET_VALUE(baseAppId_, baseAppId) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline GetApplicationResponseBodyApplication& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline int32_t instances() const { DARABONBA_PTR_GET_DEFAULT(instances_, 0) };
    inline GetApplicationResponseBodyApplication& setInstances(int32_t instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };


    // isStateful Field Functions 
    bool hasIsStateful() const { return this->isStateful_ != nullptr;};
    void deleteIsStateful() { this->isStateful_ = nullptr;};
    inline bool isStateful() const { DARABONBA_PTR_GET_DEFAULT(isStateful_, false) };
    inline GetApplicationResponseBodyApplication& setIsStateful(bool isStateful) { DARABONBA_PTR_SET_VALUE(isStateful_, isStateful) };


    // mem Field Functions 
    bool hasMem() const { return this->mem_ != nullptr;};
    void deleteMem() { this->mem_ = nullptr;};
    inline int32_t mem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
    inline GetApplicationResponseBodyApplication& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


    // mseEnabled Field Functions 
    bool hasMseEnabled() const { return this->mseEnabled_ != nullptr;};
    void deleteMseEnabled() { this->mseEnabled_ = nullptr;};
    inline bool mseEnabled() const { DARABONBA_PTR_GET_DEFAULT(mseEnabled_, false) };
    inline GetApplicationResponseBodyApplication& setMseEnabled(bool mseEnabled) { DARABONBA_PTR_SET_VALUE(mseEnabled_, mseEnabled) };


    // mseNamespaceId Field Functions 
    bool hasMseNamespaceId() const { return this->mseNamespaceId_ != nullptr;};
    void deleteMseNamespaceId() { this->mseNamespaceId_ = nullptr;};
    inline string mseNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(mseNamespaceId_, "") };
    inline GetApplicationResponseBodyApplication& setMseNamespaceId(string mseNamespaceId) { DARABONBA_PTR_SET_VALUE(mseNamespaceId_, mseNamespaceId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline GetApplicationResponseBodyApplication& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // programmingLanguage Field Functions 
    bool hasProgrammingLanguage() const { return this->programmingLanguage_ != nullptr;};
    void deleteProgrammingLanguage() { this->programmingLanguage_ = nullptr;};
    inline string programmingLanguage() const { DARABONBA_PTR_GET_DEFAULT(programmingLanguage_, "") };
    inline GetApplicationResponseBodyApplication& setProgrammingLanguage(string programmingLanguage) { DARABONBA_PTR_SET_VALUE(programmingLanguage_, programmingLanguage) };


    // runningInstances Field Functions 
    bool hasRunningInstances() const { return this->runningInstances_ != nullptr;};
    void deleteRunningInstances() { this->runningInstances_ = nullptr;};
    inline int32_t runningInstances() const { DARABONBA_PTR_GET_DEFAULT(runningInstances_, 0) };
    inline GetApplicationResponseBodyApplication& setRunningInstances(int32_t runningInstances) { DARABONBA_PTR_SET_VALUE(runningInstances_, runningInstances) };


    // scaleRuleEnabled Field Functions 
    bool hasScaleRuleEnabled() const { return this->scaleRuleEnabled_ != nullptr;};
    void deleteScaleRuleEnabled() { this->scaleRuleEnabled_ = nullptr;};
    inline string scaleRuleEnabled() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleEnabled_, "") };
    inline GetApplicationResponseBodyApplication& setScaleRuleEnabled(string scaleRuleEnabled) { DARABONBA_PTR_SET_VALUE(scaleRuleEnabled_, scaleRuleEnabled) };


    // scaleRuleType Field Functions 
    bool hasScaleRuleType() const { return this->scaleRuleType_ != nullptr;};
    void deleteScaleRuleType() { this->scaleRuleType_ = nullptr;};
    inline string scaleRuleType() const { DARABONBA_PTR_GET_DEFAULT(scaleRuleType_, "") };
    inline GetApplicationResponseBodyApplication& setScaleRuleType(string scaleRuleType) { DARABONBA_PTR_SET_VALUE(scaleRuleType_, scaleRuleType) };


  protected:
    // The description of the application.
    std::shared_ptr<string> appDescription_ = nullptr;
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The application name.
    std::shared_ptr<string> appName_ = nullptr;
    // The ID of the basic application.
    std::shared_ptr<string> baseAppId_ = nullptr;
    // The CPU specifications that are required for each instance. Unit: millicores. This parameter cannot be set to 0. Valid values:
    // 
    // *   **500**
    // *   **1000**
    // *   **2000**
    // *   **4000**
    // *   **8000**
    // *   **12000**
    // *   **16000**
    // *   **32000**
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The number of application instances.
    std::shared_ptr<int32_t> instances_ = nullptr;
    std::shared_ptr<bool> isStateful_ = nullptr;
    // The memory size that is required by each instance. Unit: MB. This parameter cannot be set to 0. The values of this parameter correspond to the values of the Cpu parameter:
    // 
    // *   This parameter is set to **1024** if the Cpu parameter is set to 500 or 1000.
    // *   This parameter is set to **2048** if the Cpu parameter is set to 500, 1000, or 2000.
    // *   This parameter is set to **4096** if the Cpu parameter is set to 1000, 2000, or 4000.
    // *   This parameter is set to **8192** if the Cpu parameter is set to 2000, 4000, or 8000.
    // *   This parameter is set to **12288** if the Cpu parameter is set to 12000.
    // *   This parameter is set to **16384** if the Cpu parameter is set to 4000, 8000, or 16000.
    // *   This parameter is set to **24576** if the Cpu parameter is set to 12000.
    // *   This parameter is set to **32768** if the Cpu parameter is set to 16000.
    // *   This parameter is set to **65536** if the Cpu parameter is set to 8000, 16000, or 32000.
    // *   This parameter is set to **131072** if the Cpu parameter is set to 32000.
    std::shared_ptr<int32_t> mem_ = nullptr;
    // Specifies whether to enable WebAssembly Filter. Valid values:
    // 
    // *   true: enables this parameter.
    // *   false: disables this parameter.
    std::shared_ptr<bool> mseEnabled_ = nullptr;
    // The ID of the namespace to which the MSE instance belongs.
    std::shared_ptr<string> mseNamespaceId_ = nullptr;
    // The namespace ID.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The programming language that is used to create the application. Valid values:
    // 
    // *   **java** :Java.
    // *   **php**: PHP.
    // *   **other**: other programming languages, such as Python, C++, Go, .NET, and Node.js
    std::shared_ptr<string> programmingLanguage_ = nullptr;
    // The number of application instances that are running.
    std::shared_ptr<int32_t> runningInstances_ = nullptr;
    // Indicates whether the auto scaling policy is enabled. Valid values:
    // 
    // *   **true**: The auto scaling policy is enabled.
    // *   **false**: The auto scaling policy is disabled.
    std::shared_ptr<string> scaleRuleEnabled_ = nullptr;
    // The type of the auto scaling policy. Valid values:
    // 
    // *   **timing**: a scheduled auto scaling policy.
    // *   **metric**: a metric-based auto scaling policy.
    // *   **mix**: a hybrid auto scaling policy.
    std::shared_ptr<string> scaleRuleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
