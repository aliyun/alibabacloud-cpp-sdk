// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHTTPAPIROUTEREQUESTBACKENDCONFIGSERVICES_HPP_
#define ALIBABACLOUD_MODELS_CREATEHTTPAPIROUTEREQUESTBACKENDCONFIGSERVICES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateHttpApiRouteRequestBackendConfigServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHttpApiRouteRequestBackendConfigServices& obj) { 
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHttpApiRouteRequestBackendConfigServices& obj) { 
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(weight, weight_);
    };
    CreateHttpApiRouteRequestBackendConfigServices() = default ;
    CreateHttpApiRouteRequestBackendConfigServices(const CreateHttpApiRouteRequestBackendConfigServices &) = default ;
    CreateHttpApiRouteRequestBackendConfigServices(CreateHttpApiRouteRequestBackendConfigServices &&) = default ;
    CreateHttpApiRouteRequestBackendConfigServices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHttpApiRouteRequestBackendConfigServices() = default ;
    CreateHttpApiRouteRequestBackendConfigServices& operator=(const CreateHttpApiRouteRequestBackendConfigServices &) = default ;
    CreateHttpApiRouteRequestBackendConfigServices& operator=(CreateHttpApiRouteRequestBackendConfigServices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->port_ != nullptr
        && this->protocol_ != nullptr && this->serviceId_ != nullptr && this->version_ != nullptr && this->weight_ != nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline CreateHttpApiRouteRequestBackendConfigServices& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateHttpApiRouteRequestBackendConfigServices& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateHttpApiRouteRequestBackendConfigServices& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateHttpApiRouteRequestBackendConfigServices& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline CreateHttpApiRouteRequestBackendConfigServices& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The service port. If you want to use a dynamic port, do not pass this parameter.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The protocol. Valid values:
    // 
    // *   HTTP
    // *   HTTPS
    std::shared_ptr<string> protocol_ = nullptr;
    // The service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The service version. Pass this parameter for tag-based routing.
    std::shared_ptr<string> version_ = nullptr;
    // The percentage value of traffic.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
