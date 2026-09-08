// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEKERNELVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEKERNELVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class UpgradeKernelVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeKernelVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KernelVersion, kernelVersion_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_TO_JSON(UpgradeTime, upgradeTime_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeKernelVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KernelVersion, kernelVersion_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_FROM_JSON(UpgradeTime, upgradeTime_);
    };
    UpgradeKernelVersionRequest() = default ;
    UpgradeKernelVersionRequest(const UpgradeKernelVersionRequest &) = default ;
    UpgradeKernelVersionRequest(UpgradeKernelVersionRequest &&) = default ;
    UpgradeKernelVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeKernelVersionRequest() = default ;
    UpgradeKernelVersionRequest& operator=(const UpgradeKernelVersionRequest &) = default ;
    UpgradeKernelVersionRequest& operator=(UpgradeKernelVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->kernelVersion_ == nullptr && this->lang_ == nullptr && this->productCode_ == nullptr && this->productId_ == nullptr && this->switchTime_ == nullptr
        && this->upgradeTime_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpgradeKernelVersionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // kernelVersion Field Functions 
    bool hasKernelVersion() const { return this->kernelVersion_ != nullptr;};
    void deleteKernelVersion() { this->kernelVersion_ = nullptr;};
    inline string getKernelVersion() const { DARABONBA_PTR_GET_DEFAULT(kernelVersion_, "") };
    inline UpgradeKernelVersionRequest& setKernelVersion(string kernelVersion) { DARABONBA_PTR_SET_VALUE(kernelVersion_, kernelVersion) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpgradeKernelVersionRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline UpgradeKernelVersionRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline UpgradeKernelVersionRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline int64_t getSwitchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, 0L) };
    inline UpgradeKernelVersionRequest& setSwitchTime(int64_t switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // upgradeTime Field Functions 
    bool hasUpgradeTime() const { return this->upgradeTime_ != nullptr;};
    void deleteUpgradeTime() { this->upgradeTime_ = nullptr;};
    inline string getUpgradeTime() const { DARABONBA_PTR_GET_DEFAULT(upgradeTime_, "") };
    inline UpgradeKernelVersionRequest& setUpgradeTime(string upgradeTime) { DARABONBA_PTR_SET_VALUE(upgradeTime_, upgradeTime) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> kernelVersion_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> productCode_ {};
    shared_ptr<int64_t> productId_ {};
    shared_ptr<int64_t> switchTime_ {};
    shared_ptr<string> upgradeTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
