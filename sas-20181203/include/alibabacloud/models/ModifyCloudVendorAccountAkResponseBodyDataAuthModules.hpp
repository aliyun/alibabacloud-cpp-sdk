// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDVENDORACCOUNTAKRESPONSEBODYDATAAUTHMODULES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDVENDORACCOUNTAKRESPONSEBODYDATAAUTHMODULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyCloudVendorAccountAKResponseBodyDataAuthModules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudVendorAccountAKResponseBodyDataAuthModules& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(ModuleAssetType, moduleAssetType_);
      DARABONBA_PTR_TO_JSON(ModuleDisp, moduleDisp_);
      DARABONBA_PTR_TO_JSON(ModuleServiceStatus, moduleServiceStatus_);
      DARABONBA_PTR_TO_JSON(ModuleStatement, moduleStatement_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudVendorAccountAKResponseBodyDataAuthModules& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(ModuleAssetType, moduleAssetType_);
      DARABONBA_PTR_FROM_JSON(ModuleDisp, moduleDisp_);
      DARABONBA_PTR_FROM_JSON(ModuleServiceStatus, moduleServiceStatus_);
      DARABONBA_PTR_FROM_JSON(ModuleStatement, moduleStatement_);
    };
    ModifyCloudVendorAccountAKResponseBodyDataAuthModules() = default ;
    ModifyCloudVendorAccountAKResponseBodyDataAuthModules(const ModifyCloudVendorAccountAKResponseBodyDataAuthModules &) = default ;
    ModifyCloudVendorAccountAKResponseBodyDataAuthModules(ModifyCloudVendorAccountAKResponseBodyDataAuthModules &&) = default ;
    ModifyCloudVendorAccountAKResponseBodyDataAuthModules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudVendorAccountAKResponseBodyDataAuthModules() = default ;
    ModifyCloudVendorAccountAKResponseBodyDataAuthModules& operator=(const ModifyCloudVendorAccountAKResponseBodyDataAuthModules &) = default ;
    ModifyCloudVendorAccountAKResponseBodyDataAuthModules& operator=(ModifyCloudVendorAccountAKResponseBodyDataAuthModules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && return this->module_ == nullptr && return this->moduleAssetType_ == nullptr && return this->moduleDisp_ == nullptr && return this->moduleServiceStatus_ == nullptr && return this->moduleStatement_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ModifyCloudVendorAccountAKResponseBodyDataAuthModules& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string module() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline ModifyCloudVendorAccountAKResponseBodyDataAuthModules& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // moduleAssetType Field Functions 
    bool hasModuleAssetType() const { return this->moduleAssetType_ != nullptr;};
    void deleteModuleAssetType() { this->moduleAssetType_ = nullptr;};
    inline string moduleAssetType() const { DARABONBA_PTR_GET_DEFAULT(moduleAssetType_, "") };
    inline ModifyCloudVendorAccountAKResponseBodyDataAuthModules& setModuleAssetType(string moduleAssetType) { DARABONBA_PTR_SET_VALUE(moduleAssetType_, moduleAssetType) };


    // moduleDisp Field Functions 
    bool hasModuleDisp() const { return this->moduleDisp_ != nullptr;};
    void deleteModuleDisp() { this->moduleDisp_ = nullptr;};
    inline string moduleDisp() const { DARABONBA_PTR_GET_DEFAULT(moduleDisp_, "") };
    inline ModifyCloudVendorAccountAKResponseBodyDataAuthModules& setModuleDisp(string moduleDisp) { DARABONBA_PTR_SET_VALUE(moduleDisp_, moduleDisp) };


    // moduleServiceStatus Field Functions 
    bool hasModuleServiceStatus() const { return this->moduleServiceStatus_ != nullptr;};
    void deleteModuleServiceStatus() { this->moduleServiceStatus_ = nullptr;};
    inline int32_t moduleServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(moduleServiceStatus_, 0) };
    inline ModifyCloudVendorAccountAKResponseBodyDataAuthModules& setModuleServiceStatus(int32_t moduleServiceStatus) { DARABONBA_PTR_SET_VALUE(moduleServiceStatus_, moduleServiceStatus) };


    // moduleStatement Field Functions 
    bool hasModuleStatement() const { return this->moduleStatement_ != nullptr;};
    void deleteModuleStatement() { this->moduleStatement_ = nullptr;};
    inline string moduleStatement() const { DARABONBA_PTR_GET_DEFAULT(moduleStatement_, "") };
    inline ModifyCloudVendorAccountAKResponseBodyDataAuthModules& setModuleStatement(string moduleStatement) { DARABONBA_PTR_SET_VALUE(moduleStatement_, moduleStatement) };


  protected:
    // The error message of the module.
    std::shared_ptr<string> message_ = nullptr;
    // The code of the module. Valid values:
    // 
    // *   **HOST**: host.
    // *   **CSPM**: configuration assessment.
    // *   **SIEM**: CTDR.
    // *   **TRIAL**: log audit.
    std::shared_ptr<string> module_ = nullptr;
    // The type of the cloud asset that is associated with the module.
    std::shared_ptr<string> moduleAssetType_ = nullptr;
    // The display name of the module.
    std::shared_ptr<string> moduleDisp_ = nullptr;
    // The service status of the module. Valid values:
    // 
    // *   **0**: being used.
    // *   **1**: exception occurred.
    // *   **2**: being validated.
    // *   **3**: validation timed out.
    std::shared_ptr<int32_t> moduleServiceStatus_ = nullptr;
    // The permission description of the module.
    std::shared_ptr<string> moduleStatement_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
