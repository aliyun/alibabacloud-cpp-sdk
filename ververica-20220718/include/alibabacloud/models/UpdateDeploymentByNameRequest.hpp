// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDEPLOYMENTBYNAMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDEPLOYMENTBYNAMEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Deployment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class UpdateDeploymentByNameRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDeploymentByNameRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(deploymentName, deploymentName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDeploymentByNameRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(deploymentName, deploymentName_);
    };
    UpdateDeploymentByNameRequest() = default ;
    UpdateDeploymentByNameRequest(const UpdateDeploymentByNameRequest &) = default ;
    UpdateDeploymentByNameRequest(UpdateDeploymentByNameRequest &&) = default ;
    UpdateDeploymentByNameRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDeploymentByNameRequest() = default ;
    UpdateDeploymentByNameRequest& operator=(const UpdateDeploymentByNameRequest &) = default ;
    UpdateDeploymentByNameRequest& operator=(UpdateDeploymentByNameRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && this->deploymentName_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Deployment & getBody() const { DARABONBA_PTR_GET_CONST(body_, Deployment) };
    inline Deployment getBody() { DARABONBA_PTR_GET(body_, Deployment) };
    inline UpdateDeploymentByNameRequest& setBody(const Deployment & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateDeploymentByNameRequest& setBody(Deployment && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // deploymentName Field Functions 
    bool hasDeploymentName() const { return this->deploymentName_ != nullptr;};
    void deleteDeploymentName() { this->deploymentName_ = nullptr;};
    inline string getDeploymentName() const { DARABONBA_PTR_GET_DEFAULT(deploymentName_, "") };
    inline UpdateDeploymentByNameRequest& setDeploymentName(string deploymentName) { DARABONBA_PTR_SET_VALUE(deploymentName_, deploymentName) };


  protected:
    // The collection of fields to update. Partial updates are supported.
    // 
    // This parameter is required.
    shared_ptr<Deployment> body_ {};
    // The deployment job name.
    // 
    // This parameter is required.
    shared_ptr<string> deploymentName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
