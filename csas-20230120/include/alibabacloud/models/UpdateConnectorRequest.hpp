// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONNECTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONNECTORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateConnectorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConnectorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccelerateStatus, accelerateStatus_);
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SwitchStatus, switchStatus_);
      DARABONBA_PTR_TO_JSON(VipCidr, vipCidr_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConnectorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccelerateStatus, accelerateStatus_);
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SwitchStatus, switchStatus_);
      DARABONBA_PTR_FROM_JSON(VipCidr, vipCidr_);
    };
    UpdateConnectorRequest() = default ;
    UpdateConnectorRequest(const UpdateConnectorRequest &) = default ;
    UpdateConnectorRequest(UpdateConnectorRequest &&) = default ;
    UpdateConnectorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConnectorRequest() = default ;
    UpdateConnectorRequest& operator=(const UpdateConnectorRequest &) = default ;
    UpdateConnectorRequest& operator=(UpdateConnectorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accelerateStatus_ == nullptr
        && this->connectorId_ == nullptr && this->name_ == nullptr && this->switchStatus_ == nullptr && this->vipCidr_ == nullptr; };
    // accelerateStatus Field Functions 
    bool hasAccelerateStatus() const { return this->accelerateStatus_ != nullptr;};
    void deleteAccelerateStatus() { this->accelerateStatus_ = nullptr;};
    inline string getAccelerateStatus() const { DARABONBA_PTR_GET_DEFAULT(accelerateStatus_, "") };
    inline UpdateConnectorRequest& setAccelerateStatus(string accelerateStatus) { DARABONBA_PTR_SET_VALUE(accelerateStatus_, accelerateStatus) };


    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline UpdateConnectorRequest& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateConnectorRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // switchStatus Field Functions 
    bool hasSwitchStatus() const { return this->switchStatus_ != nullptr;};
    void deleteSwitchStatus() { this->switchStatus_ = nullptr;};
    inline string getSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(switchStatus_, "") };
    inline UpdateConnectorRequest& setSwitchStatus(string switchStatus) { DARABONBA_PTR_SET_VALUE(switchStatus_, switchStatus) };


    // vipCidr Field Functions 
    bool hasVipCidr() const { return this->vipCidr_ != nullptr;};
    void deleteVipCidr() { this->vipCidr_ = nullptr;};
    inline string getVipCidr() const { DARABONBA_PTR_GET_DEFAULT(vipCidr_, "") };
    inline UpdateConnectorRequest& setVipCidr(string vipCidr) { DARABONBA_PTR_SET_VALUE(vipCidr_, vipCidr) };


  protected:
    // Specifies whether to enable Global Accelerator. Valid values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    shared_ptr<string> accelerateStatus_ {};
    // The Connector ID. You can obtain the value by calling [ListConnectors](~~ListConnectors~~).
    // 
    // This parameter is required.
    shared_ptr<string> connectorId_ {};
    // The Connector name. The name must be 1 to 128 characters in length and can contain Chinese characters, letters, digits, periods (.), underscores (_), and hyphens (-).
    shared_ptr<string> name_ {};
    // The instance status of the Connector. Valid values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Shutdown.
    shared_ptr<string> switchStatus_ {};
    // The CIDR block of the virtual IP address.
    shared_ptr<string> vipCidr_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
