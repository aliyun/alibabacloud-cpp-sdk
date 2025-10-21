// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYDEPLOYMENTDRAFTASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYDEPLOYMENTDRAFTASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DraftDeployParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class DeployDeploymentDraftAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployDeploymentDraftAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeployDeploymentDraftAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeployDeploymentDraftAsyncRequest() = default ;
    DeployDeploymentDraftAsyncRequest(const DeployDeploymentDraftAsyncRequest &) = default ;
    DeployDeploymentDraftAsyncRequest(DeployDeploymentDraftAsyncRequest &&) = default ;
    DeployDeploymentDraftAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployDeploymentDraftAsyncRequest() = default ;
    DeployDeploymentDraftAsyncRequest& operator=(const DeployDeploymentDraftAsyncRequest &) = default ;
    DeployDeploymentDraftAsyncRequest& operator=(DeployDeploymentDraftAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DraftDeployParams & body() const { DARABONBA_PTR_GET_CONST(body_, DraftDeployParams) };
    inline DraftDeployParams body() { DARABONBA_PTR_GET(body_, DraftDeployParams) };
    inline DeployDeploymentDraftAsyncRequest& setBody(const DraftDeployParams & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeployDeploymentDraftAsyncRequest& setBody(DraftDeployParams && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    std::shared_ptr<DraftDeployParams> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
