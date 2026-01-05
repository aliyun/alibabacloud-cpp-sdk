// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEPLOYMENTSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEPLOYMENTSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateDeploymentSetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeploymentSetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeploymentSetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDeploymentSetResponseBody() = default ;
    CreateDeploymentSetResponseBody(const CreateDeploymentSetResponseBody &) = default ;
    CreateDeploymentSetResponseBody(CreateDeploymentSetResponseBody &&) = default ;
    CreateDeploymentSetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeploymentSetResponseBody() = default ;
    CreateDeploymentSetResponseBody& operator=(const CreateDeploymentSetResponseBody &) = default ;
    CreateDeploymentSetResponseBody& operator=(CreateDeploymentSetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentSetId_ == nullptr
        && this->requestId_ == nullptr; };
    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline CreateDeploymentSetResponseBody& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDeploymentSetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the deployment set.
    shared_ptr<string> deploymentSetId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
