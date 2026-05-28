// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXECUTORGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXECUTORGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class CreateExecutorGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExecutorGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(AutoScale, autoScale_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CmsWorkspaceId, cmsWorkspaceId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IntegrationType, integrationType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(WorkerType, workerType_);
      DARABONBA_PTR_TO_JSON(Workers, workers_);
      DARABONBA_PTR_TO_JSON(XAttrs, XAttrs_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExecutorGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(AutoScale, autoScale_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CmsWorkspaceId, cmsWorkspaceId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IntegrationType, integrationType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(WorkerType, workerType_);
      DARABONBA_PTR_FROM_JSON(Workers, workers_);
      DARABONBA_PTR_FROM_JSON(XAttrs, XAttrs_);
    };
    CreateExecutorGroupRequest() = default ;
    CreateExecutorGroupRequest(const CreateExecutorGroupRequest &) = default ;
    CreateExecutorGroupRequest(CreateExecutorGroupRequest &&) = default ;
    CreateExecutorGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExecutorGroupRequest() = default ;
    CreateExecutorGroupRequest& operator=(const CreateExecutorGroupRequest &) = default ;
    CreateExecutorGroupRequest& operator=(CreateExecutorGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->authType_ == nullptr && this->autoScale_ == nullptr && this->clusterId_ == nullptr && this->cmsWorkspaceId_ == nullptr && this->description_ == nullptr
        && this->integrationType_ == nullptr && this->name_ == nullptr && this->network_ == nullptr && this->protocol_ == nullptr && this->workerType_ == nullptr
        && this->workers_ == nullptr && this->XAttrs_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline CreateExecutorGroupRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline CreateExecutorGroupRequest& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // autoScale Field Functions 
    bool hasAutoScale() const { return this->autoScale_ != nullptr;};
    void deleteAutoScale() { this->autoScale_ = nullptr;};
    inline bool getAutoScale() const { DARABONBA_PTR_GET_DEFAULT(autoScale_, false) };
    inline CreateExecutorGroupRequest& setAutoScale(bool autoScale) { DARABONBA_PTR_SET_VALUE(autoScale_, autoScale) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateExecutorGroupRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // cmsWorkspaceId Field Functions 
    bool hasCmsWorkspaceId() const { return this->cmsWorkspaceId_ != nullptr;};
    void deleteCmsWorkspaceId() { this->cmsWorkspaceId_ = nullptr;};
    inline string getCmsWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(cmsWorkspaceId_, "") };
    inline CreateExecutorGroupRequest& setCmsWorkspaceId(string cmsWorkspaceId) { DARABONBA_PTR_SET_VALUE(cmsWorkspaceId_, cmsWorkspaceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateExecutorGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // integrationType Field Functions 
    bool hasIntegrationType() const { return this->integrationType_ != nullptr;};
    void deleteIntegrationType() { this->integrationType_ = nullptr;};
    inline string getIntegrationType() const { DARABONBA_PTR_GET_DEFAULT(integrationType_, "") };
    inline CreateExecutorGroupRequest& setIntegrationType(string integrationType) { DARABONBA_PTR_SET_VALUE(integrationType_, integrationType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateExecutorGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline CreateExecutorGroupRequest& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateExecutorGroupRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // workerType Field Functions 
    bool hasWorkerType() const { return this->workerType_ != nullptr;};
    void deleteWorkerType() { this->workerType_ = nullptr;};
    inline string getWorkerType() const { DARABONBA_PTR_GET_DEFAULT(workerType_, "") };
    inline CreateExecutorGroupRequest& setWorkerType(string workerType) { DARABONBA_PTR_SET_VALUE(workerType_, workerType) };


    // workers Field Functions 
    bool hasWorkers() const { return this->workers_ != nullptr;};
    void deleteWorkers() { this->workers_ = nullptr;};
    inline string getWorkers() const { DARABONBA_PTR_GET_DEFAULT(workers_, "") };
    inline CreateExecutorGroupRequest& setWorkers(string workers) { DARABONBA_PTR_SET_VALUE(workers_, workers) };


    // XAttrs Field Functions 
    bool hasXAttrs() const { return this->XAttrs_ != nullptr;};
    void deleteXAttrs() { this->XAttrs_ = nullptr;};
    inline string getXAttrs() const { DARABONBA_PTR_GET_DEFAULT(XAttrs_, "") };
    inline CreateExecutorGroupRequest& setXAttrs(string XAttrs) { DARABONBA_PTR_SET_VALUE(XAttrs_, XAttrs) };


  protected:
    shared_ptr<string> apiKey_ {};
    shared_ptr<string> authType_ {};
    shared_ptr<bool> autoScale_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    shared_ptr<string> cmsWorkspaceId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> integrationType_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> network_ {};
    shared_ptr<string> protocol_ {};
    // This parameter is required.
    shared_ptr<string> workerType_ {};
    // This parameter is required.
    shared_ptr<string> workers_ {};
    shared_ptr<string> XAttrs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
