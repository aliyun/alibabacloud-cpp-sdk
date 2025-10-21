// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDEPLOYMENTTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDEPLOYMENTTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResourceSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class UpdateDeploymentTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDeploymentTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDeploymentTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateDeploymentTargetRequest() = default ;
    UpdateDeploymentTargetRequest(const UpdateDeploymentTargetRequest &) = default ;
    UpdateDeploymentTargetRequest(UpdateDeploymentTargetRequest &&) = default ;
    UpdateDeploymentTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDeploymentTargetRequest() = default ;
    UpdateDeploymentTargetRequest& operator=(const UpdateDeploymentTargetRequest &) = default ;
    UpdateDeploymentTargetRequest& operator=(UpdateDeploymentTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ResourceSpec & body() const { DARABONBA_PTR_GET_CONST(body_, ResourceSpec) };
    inline ResourceSpec body() { DARABONBA_PTR_GET(body_, ResourceSpec) };
    inline UpdateDeploymentTargetRequest& setBody(const ResourceSpec & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateDeploymentTargetRequest& setBody(ResourceSpec && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<ResourceSpec> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
