// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPPORTEDMODULESRESPONSEBODYSUPPORTEDMODULERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETSUPPORTEDMODULESRESPONSEBODYSUPPORTEDMODULERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSupportedModulesResponseBodySupportedModuleResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupportedModulesResponseBodySupportedModuleResponse& obj) { 
      DARABONBA_PTR_TO_JSON(SupportedModules, supportedModules_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupportedModulesResponseBodySupportedModuleResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportedModules, supportedModules_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    GetSupportedModulesResponseBodySupportedModuleResponse() = default ;
    GetSupportedModulesResponseBodySupportedModuleResponse(const GetSupportedModulesResponseBodySupportedModuleResponse &) = default ;
    GetSupportedModulesResponseBodySupportedModuleResponse(GetSupportedModulesResponseBodySupportedModuleResponse &&) = default ;
    GetSupportedModulesResponseBodySupportedModuleResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupportedModulesResponseBodySupportedModuleResponse() = default ;
    GetSupportedModulesResponseBodySupportedModuleResponse& operator=(const GetSupportedModulesResponseBodySupportedModuleResponse &) = default ;
    GetSupportedModulesResponseBodySupportedModuleResponse& operator=(GetSupportedModulesResponseBodySupportedModuleResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportedModules_ != nullptr
        && this->vendor_ != nullptr; };
    // supportedModules Field Functions 
    bool hasSupportedModules() const { return this->supportedModules_ != nullptr;};
    void deleteSupportedModules() { this->supportedModules_ = nullptr;};
    inline const vector<Models::GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules> & supportedModules() const { DARABONBA_PTR_GET_CONST(supportedModules_, vector<Models::GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules>) };
    inline vector<Models::GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules> supportedModules() { DARABONBA_PTR_GET(supportedModules_, vector<Models::GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules>) };
    inline GetSupportedModulesResponseBodySupportedModuleResponse& setSupportedModules(const vector<Models::GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules> & supportedModules) { DARABONBA_PTR_SET_VALUE(supportedModules_, supportedModules) };
    inline GetSupportedModulesResponseBodySupportedModuleResponse& setSupportedModules(vector<Models::GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules> && supportedModules) { DARABONBA_PTR_SET_RVALUE(supportedModules_, supportedModules) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline GetSupportedModulesResponseBodySupportedModuleResponse& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The modules supported by the cloud service provider.
    std::shared_ptr<vector<Models::GetSupportedModulesResponseBodySupportedModuleResponseSupportedModules>> supportedModules_ = nullptr;
    // The cloud service provider. Valid values:
    // 
    // *   **Tencent**: Tencent Cloud
    // *   **HUAWEICLOUD**:Huawei Cloud
    // *   **Azure**: Microsoft Azure
    // *   **AWS**: Amazon Web Services (AWS)
    std::shared_ptr<string> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
