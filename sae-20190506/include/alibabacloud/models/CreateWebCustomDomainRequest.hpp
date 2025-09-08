// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWEBCUSTOMDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWEBCUSTOMDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWebCustomDomainInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateWebCustomDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWebCustomDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWebCustomDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateWebCustomDomainRequest() = default ;
    CreateWebCustomDomainRequest(const CreateWebCustomDomainRequest &) = default ;
    CreateWebCustomDomainRequest(CreateWebCustomDomainRequest &&) = default ;
    CreateWebCustomDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWebCustomDomainRequest() = default ;
    CreateWebCustomDomainRequest& operator=(const CreateWebCustomDomainRequest &) = default ;
    CreateWebCustomDomainRequest& operator=(CreateWebCustomDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->namespaceId_ != nullptr
        && this->body_ != nullptr; };
    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline CreateWebCustomDomainRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateWebCustomDomainInput & body() const { DARABONBA_PTR_GET_CONST(body_, CreateWebCustomDomainInput) };
    inline CreateWebCustomDomainInput body() { DARABONBA_PTR_GET(body_, CreateWebCustomDomainInput) };
    inline CreateWebCustomDomainRequest& setBody(const CreateWebCustomDomainInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateWebCustomDomainRequest& setBody(CreateWebCustomDomainInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The namespace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The information about custom domain name.
    // 
    // This parameter is required.
    std::shared_ptr<CreateWebCustomDomainInput> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
