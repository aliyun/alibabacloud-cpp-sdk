// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMCPSERVERREQUESTBACKENDCONFIGSERVICES_HPP_
#define ALIBABACLOUD_MODELS_CREATEMCPSERVERREQUESTBACKENDCONFIGSERVICES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateMcpServerRequestBackendConfigServices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMcpServerRequestBackendConfigServices& obj) { 
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMcpServerRequestBackendConfigServices& obj) { 
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(weight, weight_);
    };
    CreateMcpServerRequestBackendConfigServices() = default ;
    CreateMcpServerRequestBackendConfigServices(const CreateMcpServerRequestBackendConfigServices &) = default ;
    CreateMcpServerRequestBackendConfigServices(CreateMcpServerRequestBackendConfigServices &&) = default ;
    CreateMcpServerRequestBackendConfigServices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMcpServerRequestBackendConfigServices() = default ;
    CreateMcpServerRequestBackendConfigServices& operator=(const CreateMcpServerRequestBackendConfigServices &) = default ;
    CreateMcpServerRequestBackendConfigServices& operator=(CreateMcpServerRequestBackendConfigServices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->port_ == nullptr
        && return this->protocol_ == nullptr && return this->serviceId_ == nullptr && return this->version_ == nullptr && return this->weight_ == nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline CreateMcpServerRequestBackendConfigServices& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateMcpServerRequestBackendConfigServices& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateMcpServerRequestBackendConfigServices& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateMcpServerRequestBackendConfigServices& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline CreateMcpServerRequestBackendConfigServices& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The backend node port of the service.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The service protocol. Valid values:
    // 
    // *   HTTP
    // *   HTTPS
    std::shared_ptr<string> protocol_ = nullptr;
    // The service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The service version.
    std::shared_ptr<string> version_ = nullptr;
    // The weight.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
