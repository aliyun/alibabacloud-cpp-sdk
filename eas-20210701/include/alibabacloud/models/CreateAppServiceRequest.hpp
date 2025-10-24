// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateAppServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_ANY_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceSpec, serviceSpec_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_ANY_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceSpec, serviceSpec_);
    };
    CreateAppServiceRequest() = default ;
    CreateAppServiceRequest(const CreateAppServiceRequest &) = default ;
    CreateAppServiceRequest(CreateAppServiceRequest &&) = default ;
    CreateAppServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppServiceRequest() = default ;
    CreateAppServiceRequest& operator=(const CreateAppServiceRequest &) = default ;
    CreateAppServiceRequest& operator=(CreateAppServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->quotaId_ == nullptr
        && return this->workspaceId_ == nullptr && return this->appType_ == nullptr && return this->appVersion_ == nullptr && return this->config_ == nullptr && return this->replicas_ == nullptr
        && return this->serviceName_ == nullptr && return this->serviceSpec_ == nullptr; };
    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string quotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline CreateAppServiceRequest& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateAppServiceRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline CreateAppServiceRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline CreateAppServiceRequest& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline     const Darabonba::Json & config() const { DARABONBA_GET(config_) };
    Darabonba::Json & config() { DARABONBA_GET(config_) };
    inline CreateAppServiceRequest& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
    inline CreateAppServiceRequest& setConfig(Darabonba::Json & config) { DARABONBA_SET_RVALUE(config_, config) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t replicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline CreateAppServiceRequest& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline CreateAppServiceRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceSpec Field Functions 
    bool hasServiceSpec() const { return this->serviceSpec_ != nullptr;};
    void deleteServiceSpec() { this->serviceSpec_ = nullptr;};
    inline string serviceSpec() const { DARABONBA_PTR_GET_DEFAULT(serviceSpec_, "") };
    inline CreateAppServiceRequest& setServiceSpec(string serviceSpec) { DARABONBA_PTR_SET_VALUE(serviceSpec_, serviceSpec) };


  protected:
    // The quota ID.
    std::shared_ptr<string> quotaId_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
    // The application service type.
    // 
    // Valid values:
    // 
    // *   LLM
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // This parameter is required.
    std::shared_ptr<string> appType_ = nullptr;
    // The application version.
    std::shared_ptr<string> appVersion_ = nullptr;
    // The additional configurations that are required for service deployment.
    Darabonba::Json config_ = nullptr;
    // The number of instances.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> replicas_ = nullptr;
    // The service name.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The service specifications. Valid values:
    // 
    // *   llama_7b_fp16
    // *   llama_7b_int8
    // *   llama_13b_fp16
    // *   llama_7b_int8
    // *   chatglm_6b_fp16
    // *   chatglm_6b_int8
    // *   chatglm2_6b_fp16
    // *   baichuan_7b_int8
    // *   baichuan_13b_fp16
    // *   baichuan_7b_fp16
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceSpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
