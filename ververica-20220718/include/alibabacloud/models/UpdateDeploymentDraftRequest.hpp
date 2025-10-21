// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDEPLOYMENTDRAFTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDEPLOYMENTDRAFTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeploymentDraft.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class UpdateDeploymentDraftRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDeploymentDraftRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDeploymentDraftRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateDeploymentDraftRequest() = default ;
    UpdateDeploymentDraftRequest(const UpdateDeploymentDraftRequest &) = default ;
    UpdateDeploymentDraftRequest(UpdateDeploymentDraftRequest &&) = default ;
    UpdateDeploymentDraftRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDeploymentDraftRequest() = default ;
    UpdateDeploymentDraftRequest& operator=(const UpdateDeploymentDraftRequest &) = default ;
    UpdateDeploymentDraftRequest& operator=(UpdateDeploymentDraftRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeploymentDraft & body() const { DARABONBA_PTR_GET_CONST(body_, DeploymentDraft) };
    inline DeploymentDraft body() { DARABONBA_PTR_GET(body_, DeploymentDraft) };
    inline UpdateDeploymentDraftRequest& setBody(const DeploymentDraft & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateDeploymentDraftRequest& setBody(DeploymentDraft && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    std::shared_ptr<DeploymentDraft> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
