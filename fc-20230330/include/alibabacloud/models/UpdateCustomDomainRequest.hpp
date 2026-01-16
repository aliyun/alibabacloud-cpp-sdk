// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECUSTOMDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECUSTOMDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateCustomDomainInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class UpdateCustomDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCustomDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCustomDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateCustomDomainRequest() = default ;
    UpdateCustomDomainRequest(const UpdateCustomDomainRequest &) = default ;
    UpdateCustomDomainRequest(UpdateCustomDomainRequest &&) = default ;
    UpdateCustomDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCustomDomainRequest() = default ;
    UpdateCustomDomainRequest& operator=(const UpdateCustomDomainRequest &) = default ;
    UpdateCustomDomainRequest& operator=(UpdateCustomDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateCustomDomainInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateCustomDomainInput) };
    inline UpdateCustomDomainInput getBody() { DARABONBA_PTR_GET(body_, UpdateCustomDomainInput) };
    inline UpdateCustomDomainRequest& setBody(const UpdateCustomDomainInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateCustomDomainRequest& setBody(UpdateCustomDomainInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The information about the custom domain name.
    // 
    // This parameter is required.
    shared_ptr<UpdateCustomDomainInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
