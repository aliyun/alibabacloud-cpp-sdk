// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTINUEDEPLOYMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONTINUEDEPLOYMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeploymentContinueCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ContinueDeploymentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContinueDeploymentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ContinueDeploymentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ContinueDeploymentRequest() = default ;
    ContinueDeploymentRequest(const ContinueDeploymentRequest &) = default ;
    ContinueDeploymentRequest(ContinueDeploymentRequest &&) = default ;
    ContinueDeploymentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContinueDeploymentRequest() = default ;
    ContinueDeploymentRequest& operator=(const ContinueDeploymentRequest &) = default ;
    ContinueDeploymentRequest& operator=(ContinueDeploymentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeploymentContinueCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, DeploymentContinueCmd) };
    inline DeploymentContinueCmd getBody() { DARABONBA_PTR_GET(body_, DeploymentContinueCmd) };
    inline ContinueDeploymentRequest& setBody(const DeploymentContinueCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ContinueDeploymentRequest& setBody(DeploymentContinueCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<DeploymentContinueCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
