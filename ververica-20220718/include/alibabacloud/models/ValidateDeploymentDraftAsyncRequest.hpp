// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEDEPLOYMENTDRAFTASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEDEPLOYMENTDRAFTASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DraftValidateParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class ValidateDeploymentDraftAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateDeploymentDraftAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateDeploymentDraftAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ValidateDeploymentDraftAsyncRequest() = default ;
    ValidateDeploymentDraftAsyncRequest(const ValidateDeploymentDraftAsyncRequest &) = default ;
    ValidateDeploymentDraftAsyncRequest(ValidateDeploymentDraftAsyncRequest &&) = default ;
    ValidateDeploymentDraftAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateDeploymentDraftAsyncRequest() = default ;
    ValidateDeploymentDraftAsyncRequest& operator=(const ValidateDeploymentDraftAsyncRequest &) = default ;
    ValidateDeploymentDraftAsyncRequest& operator=(ValidateDeploymentDraftAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DraftValidateParams & body() const { DARABONBA_PTR_GET_CONST(body_, DraftValidateParams) };
    inline DraftValidateParams body() { DARABONBA_PTR_GET(body_, DraftValidateParams) };
    inline ValidateDeploymentDraftAsyncRequest& setBody(const DraftValidateParams & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ValidateDeploymentDraftAsyncRequest& setBody(DraftValidateParams && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<DraftValidateParams> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
