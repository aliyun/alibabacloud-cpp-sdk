// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEPLOYMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEPLOYMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class CreateDeploymentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeploymentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentId, deploymentId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeploymentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentId, deploymentId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDeploymentResponseBody() = default ;
    CreateDeploymentResponseBody(const CreateDeploymentResponseBody &) = default ;
    CreateDeploymentResponseBody(CreateDeploymentResponseBody &&) = default ;
    CreateDeploymentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeploymentResponseBody() = default ;
    CreateDeploymentResponseBody& operator=(const CreateDeploymentResponseBody &) = default ;
    CreateDeploymentResponseBody& operator=(CreateDeploymentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentId_ == nullptr
        && this->requestId_ == nullptr; };
    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline string getDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
    inline CreateDeploymentResponseBody& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDeploymentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> deploymentId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
