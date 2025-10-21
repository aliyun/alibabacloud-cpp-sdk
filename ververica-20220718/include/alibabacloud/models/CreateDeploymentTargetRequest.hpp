// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEPLOYMENTTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEPLOYMENTTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResourceSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class CreateDeploymentTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeploymentTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(deploymentTargetName, deploymentTargetName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeploymentTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(deploymentTargetName, deploymentTargetName_);
    };
    CreateDeploymentTargetRequest() = default ;
    CreateDeploymentTargetRequest(const CreateDeploymentTargetRequest &) = default ;
    CreateDeploymentTargetRequest(CreateDeploymentTargetRequest &&) = default ;
    CreateDeploymentTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeploymentTargetRequest() = default ;
    CreateDeploymentTargetRequest& operator=(const CreateDeploymentTargetRequest &) = default ;
    CreateDeploymentTargetRequest& operator=(CreateDeploymentTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->deploymentTargetName_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ResourceSpec & body() const { DARABONBA_PTR_GET_CONST(body_, ResourceSpec) };
    inline ResourceSpec body() { DARABONBA_PTR_GET(body_, ResourceSpec) };
    inline CreateDeploymentTargetRequest& setBody(const ResourceSpec & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateDeploymentTargetRequest& setBody(ResourceSpec && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // deploymentTargetName Field Functions 
    bool hasDeploymentTargetName() const { return this->deploymentTargetName_ != nullptr;};
    void deleteDeploymentTargetName() { this->deploymentTargetName_ = nullptr;};
    inline string deploymentTargetName() const { DARABONBA_PTR_GET_DEFAULT(deploymentTargetName_, "") };
    inline CreateDeploymentTargetRequest& setDeploymentTargetName(string deploymentTargetName) { DARABONBA_PTR_SET_VALUE(deploymentTargetName_, deploymentTargetName) };


  protected:
    std::shared_ptr<ResourceSpec> body_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deploymentTargetName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
