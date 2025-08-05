// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIPUBLISHREVISIONINFOCLOUDPRODUCTCONFIGCONTAINERSERVICECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIPUBLISHREVISIONINFOCLOUDPRODUCTCONFIGCONTAINERSERVICECONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayServiceId, gatewayServiceId_);
      DARABONBA_PTR_TO_JSON(match, match_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayServiceId, gatewayServiceId_);
      DARABONBA_PTR_FROM_JSON(match, match_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(weight, weight_);
    };
    HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs() = default ;
    HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs(const HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs &) = default ;
    HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs(HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs &&) = default ;
    HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs() = default ;
    HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs& operator=(const HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs &) = default ;
    HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs& operator=(HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gatewayServiceId_ != nullptr
        && this->match_ != nullptr && this->name_ != nullptr && this->namespace_ != nullptr && this->port_ != nullptr && this->protocol_ != nullptr
        && this->weight_ != nullptr; };
    // gatewayServiceId Field Functions 
    bool hasGatewayServiceId() const { return this->gatewayServiceId_ != nullptr;};
    void deleteGatewayServiceId() { this->gatewayServiceId_ = nullptr;};
    inline string gatewayServiceId() const { DARABONBA_PTR_GET_DEFAULT(gatewayServiceId_, "") };
    inline HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs& setGatewayServiceId(string gatewayServiceId) { DARABONBA_PTR_SET_VALUE(gatewayServiceId_, gatewayServiceId) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const Models::HttpApiBackendMatchConditions & match() const { DARABONBA_PTR_GET_CONST(match_, Models::HttpApiBackendMatchConditions) };
    inline Models::HttpApiBackendMatchConditions match() { DARABONBA_PTR_GET(match_, Models::HttpApiBackendMatchConditions) };
    inline HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs& setMatch(const Models::HttpApiBackendMatchConditions & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs& setMatch(Models::HttpApiBackendMatchConditions && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline string weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
    inline HttpApiPublishRevisionInfoCloudProductConfigContainerServiceConfigs& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<string> gatewayServiceId_ = nullptr;
    std::shared_ptr<Models::HttpApiBackendMatchConditions> match_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<int32_t> port_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<string> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
