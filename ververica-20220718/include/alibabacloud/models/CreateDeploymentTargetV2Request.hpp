// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEPLOYMENTTARGETV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEPLOYMENTTARGETV2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Resource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class CreateDeploymentTargetV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeploymentTargetV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(deploymentTargetName, deploymentTargetName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeploymentTargetV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(deploymentTargetName, deploymentTargetName_);
    };
    CreateDeploymentTargetV2Request() = default ;
    CreateDeploymentTargetV2Request(const CreateDeploymentTargetV2Request &) = default ;
    CreateDeploymentTargetV2Request(CreateDeploymentTargetV2Request &&) = default ;
    CreateDeploymentTargetV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeploymentTargetV2Request() = default ;
    CreateDeploymentTargetV2Request& operator=(const CreateDeploymentTargetV2Request &) = default ;
    CreateDeploymentTargetV2Request& operator=(CreateDeploymentTargetV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->deploymentTargetName_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Resource & body() const { DARABONBA_PTR_GET_CONST(body_, Resource) };
    inline Resource body() { DARABONBA_PTR_GET(body_, Resource) };
    inline CreateDeploymentTargetV2Request& setBody(const Resource & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateDeploymentTargetV2Request& setBody(Resource && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // deploymentTargetName Field Functions 
    bool hasDeploymentTargetName() const { return this->deploymentTargetName_ != nullptr;};
    void deleteDeploymentTargetName() { this->deploymentTargetName_ = nullptr;};
    inline string deploymentTargetName() const { DARABONBA_PTR_GET_DEFAULT(deploymentTargetName_, "") };
    inline CreateDeploymentTargetV2Request& setDeploymentTargetName(string deploymentTargetName) { DARABONBA_PTR_SET_VALUE(deploymentTargetName_, deploymentTargetName) };


  protected:
    std::shared_ptr<Resource> body_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deploymentTargetName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
