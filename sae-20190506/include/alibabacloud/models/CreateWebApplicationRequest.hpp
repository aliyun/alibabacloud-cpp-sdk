// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWEBAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWEBAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWebApplicationInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateWebApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWebApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWebApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateWebApplicationRequest() = default ;
    CreateWebApplicationRequest(const CreateWebApplicationRequest &) = default ;
    CreateWebApplicationRequest(CreateWebApplicationRequest &&) = default ;
    CreateWebApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWebApplicationRequest() = default ;
    CreateWebApplicationRequest& operator=(const CreateWebApplicationRequest &) = default ;
    CreateWebApplicationRequest& operator=(CreateWebApplicationRequest &&) = default ;
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
    inline CreateWebApplicationRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateWebApplicationInput & body() const { DARABONBA_PTR_GET_CONST(body_, CreateWebApplicationInput) };
    inline CreateWebApplicationInput body() { DARABONBA_PTR_GET(body_, CreateWebApplicationInput) };
    inline CreateWebApplicationRequest& setBody(const CreateWebApplicationInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateWebApplicationRequest& setBody(CreateWebApplicationInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The namespace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The information about the application.
    // 
    // This parameter is required.
    std::shared_ptr<CreateWebApplicationInput> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
