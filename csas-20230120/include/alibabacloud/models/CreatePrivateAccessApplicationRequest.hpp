// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRIVATEACCESSAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRIVATEACCESSAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddressGroup.hpp>
#include <alibabacloud/models/HealthCheckConfig.hpp>
#include <alibabacloud/models/PAL7Config.hpp>
#include <alibabacloud/models/PAApplicationUnauthorizedAccessConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreatePrivateAccessApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrivateAccessApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressGroups, addressGroups_);
      DARABONBA_PTR_TO_JSON(Addresses, addresses_);
      DARABONBA_PTR_TO_JSON(BrowserAccessStatus, browserAccessStatus_);
      DARABONBA_PTR_TO_JSON(ConfigMode, configMode_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_TO_JSON(HealthCheckMode, healthCheckMode_);
      DARABONBA_PTR_TO_JSON(L7Config, l7Config_);
      DARABONBA_PTR_TO_JSON(L7ProxyDomainAutomaticPrefix, l7ProxyDomainAutomaticPrefix_);
      DARABONBA_PTR_TO_JSON(L7ProxyDomainCustom, l7ProxyDomainCustom_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PortRanges, portRanges_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TagIds, tagIds_);
      DARABONBA_PTR_TO_JSON(UnauthorizedAccessConfig, unauthorizedAccessConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrivateAccessApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressGroups, addressGroups_);
      DARABONBA_PTR_FROM_JSON(Addresses, addresses_);
      DARABONBA_PTR_FROM_JSON(BrowserAccessStatus, browserAccessStatus_);
      DARABONBA_PTR_FROM_JSON(ConfigMode, configMode_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_FROM_JSON(HealthCheckMode, healthCheckMode_);
      DARABONBA_PTR_FROM_JSON(L7Config, l7Config_);
      DARABONBA_PTR_FROM_JSON(L7ProxyDomainAutomaticPrefix, l7ProxyDomainAutomaticPrefix_);
      DARABONBA_PTR_FROM_JSON(L7ProxyDomainCustom, l7ProxyDomainCustom_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PortRanges, portRanges_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TagIds, tagIds_);
      DARABONBA_PTR_FROM_JSON(UnauthorizedAccessConfig, unauthorizedAccessConfig_);
    };
    CreatePrivateAccessApplicationRequest() = default ;
    CreatePrivateAccessApplicationRequest(const CreatePrivateAccessApplicationRequest &) = default ;
    CreatePrivateAccessApplicationRequest(CreatePrivateAccessApplicationRequest &&) = default ;
    CreatePrivateAccessApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrivateAccessApplicationRequest() = default ;
    CreatePrivateAccessApplicationRequest& operator=(const CreatePrivateAccessApplicationRequest &) = default ;
    CreatePrivateAccessApplicationRequest& operator=(CreatePrivateAccessApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PortRanges : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PortRanges& obj) { 
        DARABONBA_PTR_TO_JSON(Begin, begin_);
        DARABONBA_PTR_TO_JSON(End, end_);
      };
      friend void from_json(const Darabonba::Json& j, PortRanges& obj) { 
        DARABONBA_PTR_FROM_JSON(Begin, begin_);
        DARABONBA_PTR_FROM_JSON(End, end_);
      };
      PortRanges() = default ;
      PortRanges(const PortRanges &) = default ;
      PortRanges(PortRanges &&) = default ;
      PortRanges(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PortRanges() = default ;
      PortRanges& operator=(const PortRanges &) = default ;
      PortRanges& operator=(PortRanges &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->begin_ == nullptr
        && this->end_ == nullptr; };
      // begin Field Functions 
      bool hasBegin() const { return this->begin_ != nullptr;};
      void deleteBegin() { this->begin_ = nullptr;};
      inline int32_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0) };
      inline PortRanges& setBegin(int32_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


      // end Field Functions 
      bool hasEnd() const { return this->end_ != nullptr;};
      void deleteEnd() { this->end_ = nullptr;};
      inline int32_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
      inline PortRanges& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    protected:
      // The start port. The value must be less than or equal to the end port.
      // 
      // This parameter is required.
      shared_ptr<int32_t> begin_ {};
      // The end port. The value must be greater than or equal to the start port.
      // 
      // This parameter is required.
      shared_ptr<int32_t> end_ {};
    };

    virtual bool empty() const override { return this->addressGroups_ == nullptr
        && this->addresses_ == nullptr && this->browserAccessStatus_ == nullptr && this->configMode_ == nullptr && this->description_ == nullptr && this->healthCheckConfig_ == nullptr
        && this->healthCheckMode_ == nullptr && this->l7Config_ == nullptr && this->l7ProxyDomainAutomaticPrefix_ == nullptr && this->l7ProxyDomainCustom_ == nullptr && this->name_ == nullptr
        && this->portRanges_ == nullptr && this->protocol_ == nullptr && this->status_ == nullptr && this->tagIds_ == nullptr && this->unauthorizedAccessConfig_ == nullptr; };
    // addressGroups Field Functions 
    bool hasAddressGroups() const { return this->addressGroups_ != nullptr;};
    void deleteAddressGroups() { this->addressGroups_ = nullptr;};
    inline const vector<AddressGroup> & getAddressGroups() const { DARABONBA_PTR_GET_CONST(addressGroups_, vector<AddressGroup>) };
    inline vector<AddressGroup> getAddressGroups() { DARABONBA_PTR_GET(addressGroups_, vector<AddressGroup>) };
    inline CreatePrivateAccessApplicationRequest& setAddressGroups(const vector<AddressGroup> & addressGroups) { DARABONBA_PTR_SET_VALUE(addressGroups_, addressGroups) };
    inline CreatePrivateAccessApplicationRequest& setAddressGroups(vector<AddressGroup> && addressGroups) { DARABONBA_PTR_SET_RVALUE(addressGroups_, addressGroups) };


    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const vector<string> & getAddresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<string>) };
    inline vector<string> getAddresses() { DARABONBA_PTR_GET(addresses_, vector<string>) };
    inline CreatePrivateAccessApplicationRequest& setAddresses(const vector<string> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline CreatePrivateAccessApplicationRequest& setAddresses(vector<string> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // browserAccessStatus Field Functions 
    bool hasBrowserAccessStatus() const { return this->browserAccessStatus_ != nullptr;};
    void deleteBrowserAccessStatus() { this->browserAccessStatus_ = nullptr;};
    inline string getBrowserAccessStatus() const { DARABONBA_PTR_GET_DEFAULT(browserAccessStatus_, "") };
    inline CreatePrivateAccessApplicationRequest& setBrowserAccessStatus(string browserAccessStatus) { DARABONBA_PTR_SET_VALUE(browserAccessStatus_, browserAccessStatus) };


    // configMode Field Functions 
    bool hasConfigMode() const { return this->configMode_ != nullptr;};
    void deleteConfigMode() { this->configMode_ = nullptr;};
    inline string getConfigMode() const { DARABONBA_PTR_GET_DEFAULT(configMode_, "") };
    inline CreatePrivateAccessApplicationRequest& setConfigMode(string configMode) { DARABONBA_PTR_SET_VALUE(configMode_, configMode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePrivateAccessApplicationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // healthCheckConfig Field Functions 
    bool hasHealthCheckConfig() const { return this->healthCheckConfig_ != nullptr;};
    void deleteHealthCheckConfig() { this->healthCheckConfig_ = nullptr;};
    inline const HealthCheckConfig & getHealthCheckConfig() const { DARABONBA_PTR_GET_CONST(healthCheckConfig_, HealthCheckConfig) };
    inline HealthCheckConfig getHealthCheckConfig() { DARABONBA_PTR_GET(healthCheckConfig_, HealthCheckConfig) };
    inline CreatePrivateAccessApplicationRequest& setHealthCheckConfig(const HealthCheckConfig & healthCheckConfig) { DARABONBA_PTR_SET_VALUE(healthCheckConfig_, healthCheckConfig) };
    inline CreatePrivateAccessApplicationRequest& setHealthCheckConfig(HealthCheckConfig && healthCheckConfig) { DARABONBA_PTR_SET_RVALUE(healthCheckConfig_, healthCheckConfig) };


    // healthCheckMode Field Functions 
    bool hasHealthCheckMode() const { return this->healthCheckMode_ != nullptr;};
    void deleteHealthCheckMode() { this->healthCheckMode_ = nullptr;};
    inline string getHealthCheckMode() const { DARABONBA_PTR_GET_DEFAULT(healthCheckMode_, "") };
    inline CreatePrivateAccessApplicationRequest& setHealthCheckMode(string healthCheckMode) { DARABONBA_PTR_SET_VALUE(healthCheckMode_, healthCheckMode) };


    // l7Config Field Functions 
    bool hasL7Config() const { return this->l7Config_ != nullptr;};
    void deleteL7Config() { this->l7Config_ = nullptr;};
    inline const PAL7Config & getL7Config() const { DARABONBA_PTR_GET_CONST(l7Config_, PAL7Config) };
    inline PAL7Config getL7Config() { DARABONBA_PTR_GET(l7Config_, PAL7Config) };
    inline CreatePrivateAccessApplicationRequest& setL7Config(const PAL7Config & l7Config) { DARABONBA_PTR_SET_VALUE(l7Config_, l7Config) };
    inline CreatePrivateAccessApplicationRequest& setL7Config(PAL7Config && l7Config) { DARABONBA_PTR_SET_RVALUE(l7Config_, l7Config) };


    // l7ProxyDomainAutomaticPrefix Field Functions 
    bool hasL7ProxyDomainAutomaticPrefix() const { return this->l7ProxyDomainAutomaticPrefix_ != nullptr;};
    void deleteL7ProxyDomainAutomaticPrefix() { this->l7ProxyDomainAutomaticPrefix_ = nullptr;};
    inline string getL7ProxyDomainAutomaticPrefix() const { DARABONBA_PTR_GET_DEFAULT(l7ProxyDomainAutomaticPrefix_, "") };
    inline CreatePrivateAccessApplicationRequest& setL7ProxyDomainAutomaticPrefix(string l7ProxyDomainAutomaticPrefix) { DARABONBA_PTR_SET_VALUE(l7ProxyDomainAutomaticPrefix_, l7ProxyDomainAutomaticPrefix) };


    // l7ProxyDomainCustom Field Functions 
    bool hasL7ProxyDomainCustom() const { return this->l7ProxyDomainCustom_ != nullptr;};
    void deleteL7ProxyDomainCustom() { this->l7ProxyDomainCustom_ = nullptr;};
    inline string getL7ProxyDomainCustom() const { DARABONBA_PTR_GET_DEFAULT(l7ProxyDomainCustom_, "") };
    inline CreatePrivateAccessApplicationRequest& setL7ProxyDomainCustom(string l7ProxyDomainCustom) { DARABONBA_PTR_SET_VALUE(l7ProxyDomainCustom_, l7ProxyDomainCustom) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePrivateAccessApplicationRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // portRanges Field Functions 
    bool hasPortRanges() const { return this->portRanges_ != nullptr;};
    void deletePortRanges() { this->portRanges_ = nullptr;};
    inline const vector<CreatePrivateAccessApplicationRequest::PortRanges> & getPortRanges() const { DARABONBA_PTR_GET_CONST(portRanges_, vector<CreatePrivateAccessApplicationRequest::PortRanges>) };
    inline vector<CreatePrivateAccessApplicationRequest::PortRanges> getPortRanges() { DARABONBA_PTR_GET(portRanges_, vector<CreatePrivateAccessApplicationRequest::PortRanges>) };
    inline CreatePrivateAccessApplicationRequest& setPortRanges(const vector<CreatePrivateAccessApplicationRequest::PortRanges> & portRanges) { DARABONBA_PTR_SET_VALUE(portRanges_, portRanges) };
    inline CreatePrivateAccessApplicationRequest& setPortRanges(vector<CreatePrivateAccessApplicationRequest::PortRanges> && portRanges) { DARABONBA_PTR_SET_RVALUE(portRanges_, portRanges) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreatePrivateAccessApplicationRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreatePrivateAccessApplicationRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagIds Field Functions 
    bool hasTagIds() const { return this->tagIds_ != nullptr;};
    void deleteTagIds() { this->tagIds_ = nullptr;};
    inline const vector<string> & getTagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<string>) };
    inline vector<string> getTagIds() { DARABONBA_PTR_GET(tagIds_, vector<string>) };
    inline CreatePrivateAccessApplicationRequest& setTagIds(const vector<string> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
    inline CreatePrivateAccessApplicationRequest& setTagIds(vector<string> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


    // unauthorizedAccessConfig Field Functions 
    bool hasUnauthorizedAccessConfig() const { return this->unauthorizedAccessConfig_ != nullptr;};
    void deleteUnauthorizedAccessConfig() { this->unauthorizedAccessConfig_ = nullptr;};
    inline const PAApplicationUnauthorizedAccessConfig & getUnauthorizedAccessConfig() const { DARABONBA_PTR_GET_CONST(unauthorizedAccessConfig_, PAApplicationUnauthorizedAccessConfig) };
    inline PAApplicationUnauthorizedAccessConfig getUnauthorizedAccessConfig() { DARABONBA_PTR_GET(unauthorizedAccessConfig_, PAApplicationUnauthorizedAccessConfig) };
    inline CreatePrivateAccessApplicationRequest& setUnauthorizedAccessConfig(const PAApplicationUnauthorizedAccessConfig & unauthorizedAccessConfig) { DARABONBA_PTR_SET_VALUE(unauthorizedAccessConfig_, unauthorizedAccessConfig) };
    inline CreatePrivateAccessApplicationRequest& setUnauthorizedAccessConfig(PAApplicationUnauthorizedAccessConfig && unauthorizedAccessConfig) { DARABONBA_PTR_SET_RVALUE(unauthorizedAccessConfig_, unauthorizedAccessConfig) };


  protected:
    // The application address groups. This parameter is required when ConfigMode is set to Precise, and cannot be specified when ConfigMode is an empty string.
    shared_ptr<vector<AddressGroup>> addressGroups_ {};
    // The collection of private access application addresses. You can enter up to 1,000 private access application addresses.
    shared_ptr<vector<string>> addresses_ {};
    // The browser access status of the private access application. After you enable this feature, you can access private access applications without a client. Default value: **Disabled**. Valid values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    shared_ptr<string> browserAccessStatus_ {};
    // The configuration mode. Valid values:
    // * Empty string: Default mode.
    // * Precise: Precise mode.
    shared_ptr<string> configMode_ {};
    // The description of the private access application. The description must be 1 to 128 characters in length, and can contain Chinese characters, uppercase and lowercase letters, digits, periods (.), underscores (_), hyphens (-), and spaces.
    shared_ptr<string> description_ {};
    // The health check configuration. This parameter is required when HealthCheckMode is set to Continuous, and cannot be specified when HealthCheckMode is set to OnAccess.
    shared_ptr<HealthCheckConfig> healthCheckConfig_ {};
    // The health check mode. Valid values:
    // * OnAccess: Checks upon access without proactive probing.
    // * Continuous: Performs continuous checks and proactive probing based on the configurations in HealthCheckConfig.
    // If this parameter is not specified, the default value is OnAccess. When the application addresses include wildcard domain names or CIDR blocks, or when the number of application addresses exceeds 10, only OnAccess is supported.
    shared_ptr<string> healthCheckMode_ {};
    // The application configuration in browser access mode.
    shared_ptr<PAL7Config> l7Config_ {};
    // The prefix of the mapped proxy domain name in browser access mode. The prefix must be 3 to 20 characters in length, and can contain lowercase letters, digits, and hyphens (-).
    shared_ptr<string> l7ProxyDomainAutomaticPrefix_ {};
    // The custom proxy domain name in browser access mode. The value must be a valid domain name.
    shared_ptr<string> l7ProxyDomainCustom_ {};
    // The name of the private access application. The name must be 1 to 128 characters in length, and can contain Chinese characters, uppercase and lowercase letters, digits, periods (.), underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The collection of port ranges for the private access application. You can enter up to 65,535 port ranges. Multiple port ranges cannot be duplicate or overlap.
    shared_ptr<vector<CreatePrivateAccessApplicationRequest::PortRanges>> portRanges_ {};
    // The protocol of the private access application. Valid values:
    // - **All**: All protocols.
    // - **TCP**
    // - **UDP**
    // 
    // This parameter is required.
    shared_ptr<string> protocol_ {};
    // The status of the private access application. Valid values:
    // - **Enabled**: Enabled.
    // - **Disabled**: Disabled.
    // 
    // This parameter is required.
    shared_ptr<string> status_ {};
    // The collection of private access tag IDs. You can associate up to six custom private access tags with a single private access application.
    shared_ptr<vector<string>> tagIds_ {};
    // The configuration for unauthorized application access requests.
    shared_ptr<PAApplicationUnauthorizedAccessConfig> unauthorizedAccessConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
