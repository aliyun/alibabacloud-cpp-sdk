// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEPLOYMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEPLOYMENTREQUEST_HPP_
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
  class CreateDeploymentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeploymentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeploymentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateDeploymentRequest() = default ;
    CreateDeploymentRequest(const CreateDeploymentRequest &) = default ;
    CreateDeploymentRequest(CreateDeploymentRequest &&) = default ;
    CreateDeploymentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeploymentRequest() = default ;
    CreateDeploymentRequest& operator=(const CreateDeploymentRequest &) = default ;
    CreateDeploymentRequest& operator=(CreateDeploymentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Deployment & body() const { DARABONBA_PTR_GET_CONST(body_, Deployment) };
    inline Deployment body() { DARABONBA_PTR_GET(body_, Deployment) };
    inline CreateDeploymentRequest& setBody(const Deployment & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateDeploymentRequest& setBody(Deployment && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The content of the deployment.
    // 
    // This parameter is required.
    std::shared_ptr<Deployment> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
