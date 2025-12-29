// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHWEBAPPLICATIONREVISIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHWEBAPPLICATIONREVISIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PublishWebApplicationRevisionInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class PublishWebApplicationRevisionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishWebApplicationRevisionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, PublishWebApplicationRevisionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    PublishWebApplicationRevisionRequest() = default ;
    PublishWebApplicationRevisionRequest(const PublishWebApplicationRevisionRequest &) = default ;
    PublishWebApplicationRevisionRequest(PublishWebApplicationRevisionRequest &&) = default ;
    PublishWebApplicationRevisionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishWebApplicationRevisionRequest() = default ;
    PublishWebApplicationRevisionRequest& operator=(const PublishWebApplicationRevisionRequest &) = default ;
    PublishWebApplicationRevisionRequest& operator=(PublishWebApplicationRevisionRequest &&) = default ;
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
    inline PublishWebApplicationRevisionRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PublishWebApplicationRevisionInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, PublishWebApplicationRevisionInput) };
    inline PublishWebApplicationRevisionInput getBody() { DARABONBA_PTR_GET(body_, PublishWebApplicationRevisionInput) };
    inline PublishWebApplicationRevisionRequest& setBody(const PublishWebApplicationRevisionInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline PublishWebApplicationRevisionRequest& setBody(PublishWebApplicationRevisionInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The namespace ID.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    // The configurations of the version.
    // 
    // This parameter is required.
    shared_ptr<PublishWebApplicationRevisionInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
