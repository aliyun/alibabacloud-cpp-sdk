// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWEBAPPLICATIONSCALINGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWEBAPPLICATIONSCALINGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateWebApplicationScalingConfigInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateWebApplicationScalingConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWebApplicationScalingConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWebApplicationScalingConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateWebApplicationScalingConfigRequest() = default ;
    UpdateWebApplicationScalingConfigRequest(const UpdateWebApplicationScalingConfigRequest &) = default ;
    UpdateWebApplicationScalingConfigRequest(UpdateWebApplicationScalingConfigRequest &&) = default ;
    UpdateWebApplicationScalingConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWebApplicationScalingConfigRequest() = default ;
    UpdateWebApplicationScalingConfigRequest& operator=(const UpdateWebApplicationScalingConfigRequest &) = default ;
    UpdateWebApplicationScalingConfigRequest& operator=(UpdateWebApplicationScalingConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespaceId_ == nullptr
        && return this->body_ == nullptr; };
    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline UpdateWebApplicationScalingConfigRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateWebApplicationScalingConfigInput & body() const { DARABONBA_PTR_GET_CONST(body_, UpdateWebApplicationScalingConfigInput) };
    inline UpdateWebApplicationScalingConfigInput body() { DARABONBA_PTR_GET(body_, UpdateWebApplicationScalingConfigInput) };
    inline UpdateWebApplicationScalingConfigRequest& setBody(const UpdateWebApplicationScalingConfigInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateWebApplicationScalingConfigRequest& setBody(UpdateWebApplicationScalingConfigInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The namespace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The information about scaling configurations.
    // 
    // This parameter is required.
    std::shared_ptr<UpdateWebApplicationScalingConfigInput> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
