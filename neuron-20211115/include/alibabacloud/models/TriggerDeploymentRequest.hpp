// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERDEPLOYMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERDEPLOYMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeploymentTriggerCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class TriggerDeploymentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerDeploymentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerDeploymentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    TriggerDeploymentRequest() = default ;
    TriggerDeploymentRequest(const TriggerDeploymentRequest &) = default ;
    TriggerDeploymentRequest(TriggerDeploymentRequest &&) = default ;
    TriggerDeploymentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerDeploymentRequest() = default ;
    TriggerDeploymentRequest& operator=(const TriggerDeploymentRequest &) = default ;
    TriggerDeploymentRequest& operator=(TriggerDeploymentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeploymentTriggerCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, DeploymentTriggerCmd) };
    inline DeploymentTriggerCmd getBody() { DARABONBA_PTR_GET(body_, DeploymentTriggerCmd) };
    inline TriggerDeploymentRequest& setBody(const DeploymentTriggerCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline TriggerDeploymentRequest& setBody(DeploymentTriggerCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<DeploymentTriggerCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
