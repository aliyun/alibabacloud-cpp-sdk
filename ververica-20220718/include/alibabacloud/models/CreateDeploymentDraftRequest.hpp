// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEPLOYMENTDRAFTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEPLOYMENTDRAFTREQUEST_HPP_
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
  class CreateDeploymentDraftRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeploymentDraftRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeploymentDraftRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateDeploymentDraftRequest() = default ;
    CreateDeploymentDraftRequest(const CreateDeploymentDraftRequest &) = default ;
    CreateDeploymentDraftRequest(CreateDeploymentDraftRequest &&) = default ;
    CreateDeploymentDraftRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeploymentDraftRequest() = default ;
    CreateDeploymentDraftRequest& operator=(const CreateDeploymentDraftRequest &) = default ;
    CreateDeploymentDraftRequest& operator=(CreateDeploymentDraftRequest &&) = default ;
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
    inline CreateDeploymentDraftRequest& setBody(const DeploymentDraft & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateDeploymentDraftRequest& setBody(DeploymentDraft && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    std::shared_ptr<DeploymentDraft> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
