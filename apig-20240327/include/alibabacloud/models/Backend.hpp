// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BACKEND_HPP_
#define ALIBABACLOUD_MODELS_BACKEND_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HttpDubboTranscoder.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class Backend : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Backend& obj) { 
      DARABONBA_PTR_TO_JSON(enableSystemModels, enableSystemModels_);
      DARABONBA_PTR_TO_JSON(scene, scene_);
      DARABONBA_PTR_TO_JSON(services, services_);
    };
    friend void from_json(const Darabonba::Json& j, Backend& obj) { 
      DARABONBA_PTR_FROM_JSON(enableSystemModels, enableSystemModels_);
      DARABONBA_PTR_FROM_JSON(scene, scene_);
      DARABONBA_PTR_FROM_JSON(services, services_);
    };
    Backend() = default ;
    Backend(const Backend &) = default ;
    Backend(Backend &&) = default ;
    Backend(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Backend() = default ;
    Backend& operator=(const Backend &) = default ;
    Backend& operator=(Backend &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Services : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Services& obj) { 
        DARABONBA_PTR_TO_JSON(groupName, groupName_);
        DARABONBA_PTR_TO_JSON(httpDubboTranscoder, httpDubboTranscoder_);
        DARABONBA_PTR_TO_JSON(modelName, modelName_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(namespace, namespace_);
        DARABONBA_PTR_TO_JSON(port, port_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
        DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
        DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(version, version_);
        DARABONBA_PTR_TO_JSON(weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, Services& obj) { 
        DARABONBA_PTR_FROM_JSON(groupName, groupName_);
        DARABONBA_PTR_FROM_JSON(httpDubboTranscoder, httpDubboTranscoder_);
        DARABONBA_PTR_FROM_JSON(modelName, modelName_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(port, port_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(version, version_);
        DARABONBA_PTR_FROM_JSON(weight, weight_);
      };
      Services() = default ;
      Services(const Services &) = default ;
      Services(Services &&) = default ;
      Services(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Services() = default ;
      Services& operator=(const Services &) = default ;
      Services& operator=(Services &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupName_ == nullptr
        && this->httpDubboTranscoder_ == nullptr && this->modelName_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->port_ == nullptr
        && this->protocol_ == nullptr && this->serviceId_ == nullptr && this->sourceType_ == nullptr && this->version_ == nullptr && this->weight_ == nullptr; };
      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Services& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // httpDubboTranscoder Field Functions 
      bool hasHttpDubboTranscoder() const { return this->httpDubboTranscoder_ != nullptr;};
      void deleteHttpDubboTranscoder() { this->httpDubboTranscoder_ = nullptr;};
      inline const HttpDubboTranscoder & getHttpDubboTranscoder() const { DARABONBA_PTR_GET_CONST(httpDubboTranscoder_, HttpDubboTranscoder) };
      inline HttpDubboTranscoder getHttpDubboTranscoder() { DARABONBA_PTR_GET(httpDubboTranscoder_, HttpDubboTranscoder) };
      inline Services& setHttpDubboTranscoder(const HttpDubboTranscoder & httpDubboTranscoder) { DARABONBA_PTR_SET_VALUE(httpDubboTranscoder_, httpDubboTranscoder) };
      inline Services& setHttpDubboTranscoder(HttpDubboTranscoder && httpDubboTranscoder) { DARABONBA_PTR_SET_RVALUE(httpDubboTranscoder_, httpDubboTranscoder) };


      // modelName Field Functions 
      bool hasModelName() const { return this->modelName_ != nullptr;};
      void deleteModelName() { this->modelName_ = nullptr;};
      inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
      inline Services& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Services& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Services& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Services& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Services& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Services& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Services& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Services& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline Services& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      // The service group. Used in HTTP-to-Dubbo conversion scenarios.
      shared_ptr<string> groupName_ {};
      // The HTTP-to-Dubbo protocol conversion configuration. Only supported for SingleService MSE_NACOS DUBBO backends of HTTP APIs.
      shared_ptr<HttpDubboTranscoder> httpDubboTranscoder_ {};
      // The target model name. This field is shared by multiple existing model backend scenarios. The specific routing or model rewrite semantics are determined by the scene field. This field is required for the SemanticRouter scenario. If not specified in the AiAutoRouter scenario, the default model of the AI service is used.
      shared_ptr<string> modelName_ {};
      // The service name.
      shared_ptr<string> name_ {};
      // The service namespace. Used in HTTP-to-Dubbo conversion scenarios.
      shared_ptr<string> namespace_ {};
      // The service port. Do not specify this parameter for dynamic ports.
      shared_ptr<int32_t> port_ {};
      // The service protocol. Valid values: [HTTP, TCP, DUBBO]
      shared_ptr<string> protocol_ {};
      // The service ID.
      shared_ptr<string> serviceId_ {};
      // The service source type. Set this to MSE_NACOS for HTTP-to-Dubbo conversion scenarios.
      shared_ptr<string> sourceType_ {};
      // The service version.
      shared_ptr<string> version_ {};
      // The percentage value of the traffic ratio.
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->enableSystemModels_ == nullptr
        && this->scene_ == nullptr && this->services_ == nullptr; };
    // enableSystemModels Field Functions 
    bool hasEnableSystemModels() const { return this->enableSystemModels_ != nullptr;};
    void deleteEnableSystemModels() { this->enableSystemModels_ = nullptr;};
    inline bool getEnableSystemModels() const { DARABONBA_PTR_GET_DEFAULT(enableSystemModels_, false) };
    inline Backend& setEnableSystemModels(bool enableSystemModels) { DARABONBA_PTR_SET_VALUE(enableSystemModels_, enableSystemModels) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline Backend& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<Backend::Services> & getServices() const { DARABONBA_PTR_GET_CONST(services_, vector<Backend::Services>) };
    inline vector<Backend::Services> getServices() { DARABONBA_PTR_GET(services_, vector<Backend::Services>) };
    inline Backend& setServices(const vector<Backend::Services> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline Backend& setServices(vector<Backend::Services> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


  protected:
    // Specifies whether to enable gateway system models. This field is used to display the AiAutoRouter built-in routes generated by Model API deployConfigs. The general Route creation and update operations do not accept this field.
    shared_ptr<bool> enableSystemModels_ {};
    // The backend service scenario. Valid values: [Single, MultiServiceByRatio, MultiServiceByTag, Mock, Redirect]
    shared_ptr<string> scene_ {};
    // The backend service.
    shared_ptr<vector<Backend::Services>> services_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
