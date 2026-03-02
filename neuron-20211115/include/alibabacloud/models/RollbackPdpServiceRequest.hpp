// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROLLBACKPDPSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ROLLBACKPDPSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeploymentRollbackCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class RollbackPdpServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RollbackPdpServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, RollbackPdpServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    RollbackPdpServiceRequest() = default ;
    RollbackPdpServiceRequest(const RollbackPdpServiceRequest &) = default ;
    RollbackPdpServiceRequest(RollbackPdpServiceRequest &&) = default ;
    RollbackPdpServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RollbackPdpServiceRequest() = default ;
    RollbackPdpServiceRequest& operator=(const RollbackPdpServiceRequest &) = default ;
    RollbackPdpServiceRequest& operator=(RollbackPdpServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeploymentRollbackCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, DeploymentRollbackCmd) };
    inline DeploymentRollbackCmd getBody() { DARABONBA_PTR_GET(body_, DeploymentRollbackCmd) };
    inline RollbackPdpServiceRequest& setBody(const DeploymentRollbackCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline RollbackPdpServiceRequest& setBody(DeploymentRollbackCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<DeploymentRollbackCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
