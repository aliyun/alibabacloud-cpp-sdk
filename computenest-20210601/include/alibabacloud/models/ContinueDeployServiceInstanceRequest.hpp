// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTINUEDEPLOYSERVICEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONTINUEDEPLOYSERVICEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ContinueDeployServiceInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContinueDeployServiceInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ContinueDeployServiceInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    ContinueDeployServiceInstanceRequest() = default ;
    ContinueDeployServiceInstanceRequest(const ContinueDeployServiceInstanceRequest &) = default ;
    ContinueDeployServiceInstanceRequest(ContinueDeployServiceInstanceRequest &&) = default ;
    ContinueDeployServiceInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContinueDeployServiceInstanceRequest() = default ;
    ContinueDeployServiceInstanceRequest& operator=(const ContinueDeployServiceInstanceRequest &) = default ;
    ContinueDeployServiceInstanceRequest& operator=(ContinueDeployServiceInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->option_ != nullptr && this->parameters_ != nullptr && this->regionId_ != nullptr && this->serviceInstanceId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ContinueDeployServiceInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ContinueDeployServiceInstanceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const vector<string> & option() const { DARABONBA_PTR_GET_CONST(option_, vector<string>) };
    inline vector<string> option() { DARABONBA_PTR_GET(option_, vector<string>) };
    inline ContinueDeployServiceInstanceRequest& setOption(const vector<string> & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline ContinueDeployServiceInstanceRequest& setOption(vector<string> && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ContinueDeployServiceInstanceRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ContinueDeployServiceInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline ContinueDeployServiceInstanceRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run for the request to check information such as the permissions and instance status. Valid values:
    // 
    // *   true: performs a dry run for the request, but does not create a service instance.
    // *   false: performs a dry run for the request, and creates a service instance if the request passes the dry run.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The options that the system adopts when the system continues to create the service instance.
    std::shared_ptr<vector<string>> option_ = nullptr;
    // The parameters configured for the service instance.
    std::shared_ptr<string> parameters_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the service instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
