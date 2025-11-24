// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEMESHEDITIONPARTIALLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEMESHEDITIONPARTIALLYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpgradeMeshEditionPartiallyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeMeshEditionPartiallyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ASMGatewayContinue, ASMGatewayContinue_);
      DARABONBA_PTR_TO_JSON(ExpectedVersion, expectedVersion_);
      DARABONBA_PTR_TO_JSON(PreCheck, preCheck_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_TO_JSON(SwitchToPro, switchToPro_);
      DARABONBA_PTR_TO_JSON(UpgradeGatewayRecords, upgradeGatewayRecords_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeMeshEditionPartiallyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ASMGatewayContinue, ASMGatewayContinue_);
      DARABONBA_PTR_FROM_JSON(ExpectedVersion, expectedVersion_);
      DARABONBA_PTR_FROM_JSON(PreCheck, preCheck_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_FROM_JSON(SwitchToPro, switchToPro_);
      DARABONBA_PTR_FROM_JSON(UpgradeGatewayRecords, upgradeGatewayRecords_);
    };
    UpgradeMeshEditionPartiallyRequest() = default ;
    UpgradeMeshEditionPartiallyRequest(const UpgradeMeshEditionPartiallyRequest &) = default ;
    UpgradeMeshEditionPartiallyRequest(UpgradeMeshEditionPartiallyRequest &&) = default ;
    UpgradeMeshEditionPartiallyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeMeshEditionPartiallyRequest() = default ;
    UpgradeMeshEditionPartiallyRequest& operator=(const UpgradeMeshEditionPartiallyRequest &) = default ;
    UpgradeMeshEditionPartiallyRequest& operator=(UpgradeMeshEditionPartiallyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ASMGatewayContinue_ == nullptr
        && return this->expectedVersion_ == nullptr && return this->preCheck_ == nullptr && return this->serviceMeshId_ == nullptr && return this->switchToPro_ == nullptr && return this->upgradeGatewayRecords_ == nullptr; };
    // ASMGatewayContinue Field Functions 
    bool hasASMGatewayContinue() const { return this->ASMGatewayContinue_ != nullptr;};
    void deleteASMGatewayContinue() { this->ASMGatewayContinue_ = nullptr;};
    inline bool ASMGatewayContinue() const { DARABONBA_PTR_GET_DEFAULT(ASMGatewayContinue_, false) };
    inline UpgradeMeshEditionPartiallyRequest& setASMGatewayContinue(bool ASMGatewayContinue) { DARABONBA_PTR_SET_VALUE(ASMGatewayContinue_, ASMGatewayContinue) };


    // expectedVersion Field Functions 
    bool hasExpectedVersion() const { return this->expectedVersion_ != nullptr;};
    void deleteExpectedVersion() { this->expectedVersion_ = nullptr;};
    inline string expectedVersion() const { DARABONBA_PTR_GET_DEFAULT(expectedVersion_, "") };
    inline UpgradeMeshEditionPartiallyRequest& setExpectedVersion(string expectedVersion) { DARABONBA_PTR_SET_VALUE(expectedVersion_, expectedVersion) };


    // preCheck Field Functions 
    bool hasPreCheck() const { return this->preCheck_ != nullptr;};
    void deletePreCheck() { this->preCheck_ = nullptr;};
    inline bool preCheck() const { DARABONBA_PTR_GET_DEFAULT(preCheck_, false) };
    inline UpgradeMeshEditionPartiallyRequest& setPreCheck(bool preCheck) { DARABONBA_PTR_SET_VALUE(preCheck_, preCheck) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline UpgradeMeshEditionPartiallyRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


    // switchToPro Field Functions 
    bool hasSwitchToPro() const { return this->switchToPro_ != nullptr;};
    void deleteSwitchToPro() { this->switchToPro_ = nullptr;};
    inline bool switchToPro() const { DARABONBA_PTR_GET_DEFAULT(switchToPro_, false) };
    inline UpgradeMeshEditionPartiallyRequest& setSwitchToPro(bool switchToPro) { DARABONBA_PTR_SET_VALUE(switchToPro_, switchToPro) };


    // upgradeGatewayRecords Field Functions 
    bool hasUpgradeGatewayRecords() const { return this->upgradeGatewayRecords_ != nullptr;};
    void deleteUpgradeGatewayRecords() { this->upgradeGatewayRecords_ = nullptr;};
    inline string upgradeGatewayRecords() const { DARABONBA_PTR_GET_DEFAULT(upgradeGatewayRecords_, "") };
    inline UpgradeMeshEditionPartiallyRequest& setUpgradeGatewayRecords(string upgradeGatewayRecords) { DARABONBA_PTR_SET_VALUE(upgradeGatewayRecords_, upgradeGatewayRecords) };


  protected:
    // Specifies whether to upgrade the ASM gateways for the ASM instance. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> ASMGatewayContinue_ = nullptr;
    // The expected version that desired to be upgraded to.
    std::shared_ptr<string> expectedVersion_ = nullptr;
    // Specifies whether to perform an upgrade check. If the value of this parameter is set to true, only the upgrade check is performed and the ASM instance is not upgraded.
    std::shared_ptr<bool> preCheck_ = nullptr;
    // The ASM instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
    // Specifies whether to upgrade the ASM instance to Professional Edition. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> switchToPro_ = nullptr;
    // Specifies the ASM gateways to be upgraded. Separate multiple ASM gateways with commas (,).
    std::shared_ptr<string> upgradeGatewayRecords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
