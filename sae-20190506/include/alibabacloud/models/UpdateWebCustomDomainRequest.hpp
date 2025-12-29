// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWEBCUSTOMDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWEBCUSTOMDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateWebCustomDomainInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateWebCustomDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWebCustomDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWebCustomDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateWebCustomDomainRequest() = default ;
    UpdateWebCustomDomainRequest(const UpdateWebCustomDomainRequest &) = default ;
    UpdateWebCustomDomainRequest(UpdateWebCustomDomainRequest &&) = default ;
    UpdateWebCustomDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWebCustomDomainRequest() = default ;
    UpdateWebCustomDomainRequest& operator=(const UpdateWebCustomDomainRequest &) = default ;
    UpdateWebCustomDomainRequest& operator=(UpdateWebCustomDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespaceId_ == nullptr
        && this->body_ == nullptr; };
    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline UpdateWebCustomDomainRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateWebCustomDomainInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateWebCustomDomainInput) };
    inline UpdateWebCustomDomainInput getBody() { DARABONBA_PTR_GET(body_, UpdateWebCustomDomainInput) };
    inline UpdateWebCustomDomainRequest& setBody(const UpdateWebCustomDomainInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateWebCustomDomainRequest& setBody(UpdateWebCustomDomainInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The namespace ID.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    // The information about the custom domain name.
    // 
    // This parameter is required.
    shared_ptr<UpdateWebCustomDomainInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
