// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPPORTEDMODULESRESPONSEBODYSUPPORTEDMODULERESPONSESUPPORTEDMODULES_HPP_
#define ALIBABACLOUD_MODELS_GETSUPPORTEDMODULESRESPONSEBODYSUPPORTEDMODULERESPONSESUPPORTEDMODULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules& obj) { 
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(ModuleDisp, moduleDisp_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules& obj) { 
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(ModuleDisp, moduleDisp_);
    };
    GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules() = default ;
    GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules(const GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules &) = default ;
    GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules(GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules &&) = default ;
    GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules() = default ;
    GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules& operator=(const GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules &) = default ;
    GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules& operator=(GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->module_ == nullptr
        && return this->moduleDisp_ == nullptr; };
    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string module() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // moduleDisp Field Functions 
    bool hasModuleDisp() const { return this->moduleDisp_ != nullptr;};
    void deleteModuleDisp() { this->moduleDisp_ = nullptr;};
    inline string moduleDisp() const { DARABONBA_PTR_GET_DEFAULT(moduleDisp_, "") };
    inline GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules& setModuleDisp(string moduleDisp) { DARABONBA_PTR_SET_VALUE(moduleDisp_, moduleDisp) };


  protected:
    // The code of the module. Valid values:
    // 
    // *   **HOST**: host
    // *   **CSPM**: configuration assessment
    // *   **SIEM**: CloudSiem
    // *   **TRIAL**: log audit
    std::shared_ptr<string> module_ = nullptr;
    // The display name of the module.
    std::shared_ptr<string> moduleDisp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
