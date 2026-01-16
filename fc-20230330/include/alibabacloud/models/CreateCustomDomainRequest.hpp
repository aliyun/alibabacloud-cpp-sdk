// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateCustomDomainInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CreateCustomDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateCustomDomainRequest() = default ;
    CreateCustomDomainRequest(const CreateCustomDomainRequest &) = default ;
    CreateCustomDomainRequest(CreateCustomDomainRequest &&) = default ;
    CreateCustomDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomDomainRequest() = default ;
    CreateCustomDomainRequest& operator=(const CreateCustomDomainRequest &) = default ;
    CreateCustomDomainRequest& operator=(CreateCustomDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateCustomDomainInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateCustomDomainInput) };
    inline CreateCustomDomainInput getBody() { DARABONBA_PTR_GET(body_, CreateCustomDomainInput) };
    inline CreateCustomDomainRequest& setBody(const CreateCustomDomainInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateCustomDomainRequest& setBody(CreateCustomDomainInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The information about the custom domain name.
    // 
    // This parameter is required.
    shared_ptr<CreateCustomDomainInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
