// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDEPLOYMENTTARGETV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDEPLOYMENTTARGETV2REQUEST_HPP_
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
  class UpdateDeploymentTargetV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDeploymentTargetV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDeploymentTargetV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateDeploymentTargetV2Request() = default ;
    UpdateDeploymentTargetV2Request(const UpdateDeploymentTargetV2Request &) = default ;
    UpdateDeploymentTargetV2Request(UpdateDeploymentTargetV2Request &&) = default ;
    UpdateDeploymentTargetV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDeploymentTargetV2Request() = default ;
    UpdateDeploymentTargetV2Request& operator=(const UpdateDeploymentTargetV2Request &) = default ;
    UpdateDeploymentTargetV2Request& operator=(UpdateDeploymentTargetV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Resource & body() const { DARABONBA_PTR_GET_CONST(body_, Resource) };
    inline Resource body() { DARABONBA_PTR_GET(body_, Resource) };
    inline UpdateDeploymentTargetV2Request& setBody(const Resource & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateDeploymentTargetV2Request& setBody(Resource && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<Resource> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
