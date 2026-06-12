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
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->option_ == nullptr && this->parameters_ == nullptr && this->regionId_ == nullptr && this->serviceInstanceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ContinueDeployServiceInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ContinueDeployServiceInstanceRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const vector<string> & getOption() const { DARABONBA_PTR_GET_CONST(option_, vector<string>) };
    inline vector<string> getOption() { DARABONBA_PTR_GET(option_, vector<string>) };
    inline ContinueDeployServiceInstanceRequest& setOption(const vector<string> & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline ContinueDeployServiceInstanceRequest& setOption(vector<string> && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ContinueDeployServiceInstanceRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ContinueDeployServiceInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string getServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline ContinueDeployServiceInstanceRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


  protected:
    // A client token that is used to ensure the idempotence of the request. Generate a unique value for this parameter from your client. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. A dry run checks items such as permissions and the instance status. Valid values:
    // 
    // - true: performs a dry run to check the request. The service instance is not deployed.
    // 
    // - false: sends a regular request. If the request passes the check, the service instance is deployed.
    shared_ptr<bool> dryRun_ {};
    // The recreation options.
    shared_ptr<vector<string>> option_ {};
    // The configuration parameters of the service instance.
    shared_ptr<string> parameters_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the service instance.
    // 
    // This parameter is required.
    shared_ptr<string> serviceInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
