// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVULCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVULCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyVulConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVulConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVulConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ModifyVulConfigRequest() = default ;
    ModifyVulConfigRequest(const ModifyVulConfigRequest &) = default ;
    ModifyVulConfigRequest(ModifyVulConfigRequest &&) = default ;
    ModifyVulConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVulConfigRequest() = default ;
    ModifyVulConfigRequest& operator=(const ModifyVulConfigRequest &) = default ;
    ModifyVulConfigRequest& operator=(ModifyVulConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->config_ == nullptr && this->type_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyVulConfigRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ModifyVulConfigRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifyVulConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The client token that is used to ensure the idempotence of the request. Different requests should use different tokens. The token supports only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to enable or disable vulnerability detection. Valid values:
    // 
    // - **on**: Enable vulnerability detection.
    // - **off**: Disable vulnerability detection.
    // 
    // > If the type is set to real risk, valid values:
    // > - **real**: Real risk vulnerabilities.
    // > - **all**: All vulnerabilities.
    shared_ptr<string> config_ {};
    // The type of vulnerability to modify. Valid values:
    // 
    // - **cve**: Linux software vulnerability
    // - **sys**: Windows system vulnerability
    // - **cms**: Web-CMS vulnerability
    // - **emg**: emergency vulnerability
    // - **app**: application vulnerability
    // - **yum**: YUM/APT source configuration
    // - **scanMode**: real risk
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
