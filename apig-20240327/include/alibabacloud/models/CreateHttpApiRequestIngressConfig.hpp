// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHTTPAPIREQUESTINGRESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEHTTPAPIREQUESTINGRESSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateHttpApiRequestIngressConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHttpApiRequestIngressConfig& obj) { 
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(ingressClass, ingressClass_);
      DARABONBA_PTR_TO_JSON(overrideIngressIp, overrideIngressIp_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(watchNamespace, watchNamespace_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHttpApiRequestIngressConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(ingressClass, ingressClass_);
      DARABONBA_PTR_FROM_JSON(overrideIngressIp, overrideIngressIp_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(watchNamespace, watchNamespace_);
    };
    CreateHttpApiRequestIngressConfig() = default ;
    CreateHttpApiRequestIngressConfig(const CreateHttpApiRequestIngressConfig &) = default ;
    CreateHttpApiRequestIngressConfig(CreateHttpApiRequestIngressConfig &&) = default ;
    CreateHttpApiRequestIngressConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHttpApiRequestIngressConfig() = default ;
    CreateHttpApiRequestIngressConfig& operator=(const CreateHttpApiRequestIngressConfig &) = default ;
    CreateHttpApiRequestIngressConfig& operator=(CreateHttpApiRequestIngressConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->environmentId_ != nullptr && this->ingressClass_ != nullptr && this->overrideIngressIp_ != nullptr && this->sourceId_ != nullptr && this->watchNamespace_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateHttpApiRequestIngressConfig& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline CreateHttpApiRequestIngressConfig& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // ingressClass Field Functions 
    bool hasIngressClass() const { return this->ingressClass_ != nullptr;};
    void deleteIngressClass() { this->ingressClass_ = nullptr;};
    inline string ingressClass() const { DARABONBA_PTR_GET_DEFAULT(ingressClass_, "") };
    inline CreateHttpApiRequestIngressConfig& setIngressClass(string ingressClass) { DARABONBA_PTR_SET_VALUE(ingressClass_, ingressClass) };


    // overrideIngressIp Field Functions 
    bool hasOverrideIngressIp() const { return this->overrideIngressIp_ != nullptr;};
    void deleteOverrideIngressIp() { this->overrideIngressIp_ = nullptr;};
    inline bool overrideIngressIp() const { DARABONBA_PTR_GET_DEFAULT(overrideIngressIp_, false) };
    inline CreateHttpApiRequestIngressConfig& setOverrideIngressIp(bool overrideIngressIp) { DARABONBA_PTR_SET_VALUE(overrideIngressIp_, overrideIngressIp) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline CreateHttpApiRequestIngressConfig& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // watchNamespace Field Functions 
    bool hasWatchNamespace() const { return this->watchNamespace_ != nullptr;};
    void deleteWatchNamespace() { this->watchNamespace_ = nullptr;};
    inline string watchNamespace() const { DARABONBA_PTR_GET_DEFAULT(watchNamespace_, "") };
    inline CreateHttpApiRequestIngressConfig& setWatchNamespace(string watchNamespace) { DARABONBA_PTR_SET_VALUE(watchNamespace_, watchNamespace) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    // The environment ID.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The Ingress Class for listening.
    std::shared_ptr<string> ingressClass_ = nullptr;
    // Specifies whether to update the address in Ingress Status.
    std::shared_ptr<bool> overrideIngressIp_ = nullptr;
    // The source ID.
    std::shared_ptr<string> sourceId_ = nullptr;
    // The namespace for listening.
    std::shared_ptr<string> watchNamespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
