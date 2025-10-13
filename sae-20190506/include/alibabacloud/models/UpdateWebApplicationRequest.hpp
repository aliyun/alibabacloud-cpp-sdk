// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWEBAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWEBAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateWebApplicationInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateWebApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWebApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWebApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateWebApplicationRequest() = default ;
    UpdateWebApplicationRequest(const UpdateWebApplicationRequest &) = default ;
    UpdateWebApplicationRequest(UpdateWebApplicationRequest &&) = default ;
    UpdateWebApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWebApplicationRequest() = default ;
    UpdateWebApplicationRequest& operator=(const UpdateWebApplicationRequest &) = default ;
    UpdateWebApplicationRequest& operator=(UpdateWebApplicationRequest &&) = default ;
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
    inline UpdateWebApplicationRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateWebApplicationInput & body() const { DARABONBA_PTR_GET_CONST(body_, UpdateWebApplicationInput) };
    inline UpdateWebApplicationInput body() { DARABONBA_PTR_GET(body_, UpdateWebApplicationInput) };
    inline UpdateWebApplicationRequest& setBody(const UpdateWebApplicationInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateWebApplicationRequest& setBody(UpdateWebApplicationInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The namespace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // Updates the information about a web application.
    // 
    // This parameter is required.
    std::shared_ptr<UpdateWebApplicationInput> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
