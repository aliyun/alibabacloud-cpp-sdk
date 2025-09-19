// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODULECONFIGSTATUSRESPONSEBODYDATAMODULECONFIGRESULTS_HPP_
#define ALIBABACLOUD_MODELS_GETMODULECONFIGSTATUSRESPONSEBODYDATAMODULECONFIGRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetModuleConfigStatusResponseBodyDataModuleConfigResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModuleConfigStatusResponseBodyDataModuleConfigResults& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_TO_JSON(Pass, pass_);
    };
    friend void from_json(const Darabonba::Json& j, GetModuleConfigStatusResponseBodyDataModuleConfigResults& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
      DARABONBA_PTR_FROM_JSON(Pass, pass_);
    };
    GetModuleConfigStatusResponseBodyDataModuleConfigResults() = default ;
    GetModuleConfigStatusResponseBodyDataModuleConfigResults(const GetModuleConfigStatusResponseBodyDataModuleConfigResults &) = default ;
    GetModuleConfigStatusResponseBodyDataModuleConfigResults(GetModuleConfigStatusResponseBodyDataModuleConfigResults &&) = default ;
    GetModuleConfigStatusResponseBodyDataModuleConfigResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModuleConfigStatusResponseBodyDataModuleConfigResults() = default ;
    GetModuleConfigStatusResponseBodyDataModuleConfigResults& operator=(const GetModuleConfigStatusResponseBodyDataModuleConfigResults &) = default ;
    GetModuleConfigStatusResponseBodyDataModuleConfigResults& operator=(GetModuleConfigStatusResponseBodyDataModuleConfigResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->moduleName_ != nullptr
        && this->pass_ != nullptr; };
    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline GetModuleConfigStatusResponseBodyDataModuleConfigResults& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


    // pass Field Functions 
    bool hasPass() const { return this->pass_ != nullptr;};
    void deletePass() { this->pass_ = nullptr;};
    inline bool pass() const { DARABONBA_PTR_GET_DEFAULT(pass_, false) };
    inline GetModuleConfigStatusResponseBodyDataModuleConfigResults& setPass(bool pass) { DARABONBA_PTR_SET_VALUE(pass_, pass) };


  protected:
    // The name of the check item. Valid values:
    // 
    // *   **Ransom**: The anti-ransomware policy is enabled.
    // *   **WebLock**: The web tamper proofing feature is enabled.
    // *   **Rasp**: Applications are added to the application protection feature.
    // *   **Image**: The container images that can be scanned are specified.
    // *   **Virus**: The periodic virus scan policy is enabled.
    std::shared_ptr<string> moduleName_ = nullptr;
    // Indicates whether the service module passed the status check. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> pass_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
