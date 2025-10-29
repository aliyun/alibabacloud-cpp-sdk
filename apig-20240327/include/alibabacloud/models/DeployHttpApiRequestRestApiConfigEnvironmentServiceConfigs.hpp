// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYHTTPAPIREQUESTRESTAPICONFIGENVIRONMENTSERVICECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYHTTPAPIREQUESTRESTAPICONFIGENVIRONMENTSERVICECONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HttpApiBackendMatchConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(match, match_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(match, match_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(weight, weight_);
    };
    DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs() = default ;
    DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs(const DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs &) = default ;
    DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs(DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs &&) = default ;
    DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs() = default ;
    DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs& operator=(const DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs &) = default ;
    DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs& operator=(DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->match_ == nullptr
        && return this->port_ == nullptr && return this->protocol_ == nullptr && return this->serviceId_ == nullptr && return this->version_ == nullptr && return this->weight_ == nullptr; };
    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const Models::HttpApiBackendMatchConditions & match() const { DARABONBA_PTR_GET_CONST(match_, Models::HttpApiBackendMatchConditions) };
    inline Models::HttpApiBackendMatchConditions match() { DARABONBA_PTR_GET(match_, Models::HttpApiBackendMatchConditions) };
    inline DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs& setMatch(const Models::HttpApiBackendMatchConditions & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs& setMatch(Models::HttpApiBackendMatchConditions && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // Configuration of matching conditions related to API deployment.
    std::shared_ptr<Models::HttpApiBackendMatchConditions> match_ = nullptr;
    // Service port, do not provide for dynamic ports.
    std::shared_ptr<int32_t> port_ = nullptr;
    // Service protocol:
    // - HTTP.
    // - HTTPS.
    std::shared_ptr<string> protocol_ = nullptr;
    // Service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
    // Service version.
    std::shared_ptr<string> version_ = nullptr;
    // Weight, range [1,100], valid only in the by-ratio scenario.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
