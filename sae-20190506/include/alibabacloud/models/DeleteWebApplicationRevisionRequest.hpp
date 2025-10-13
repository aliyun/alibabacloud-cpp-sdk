// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWEBAPPLICATIONREVISIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWEBAPPLICATIONREVISIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DeleteWebApplicationRevisionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWebApplicationRevisionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWebApplicationRevisionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    DeleteWebApplicationRevisionRequest() = default ;
    DeleteWebApplicationRevisionRequest(const DeleteWebApplicationRevisionRequest &) = default ;
    DeleteWebApplicationRevisionRequest(DeleteWebApplicationRevisionRequest &&) = default ;
    DeleteWebApplicationRevisionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWebApplicationRevisionRequest() = default ;
    DeleteWebApplicationRevisionRequest& operator=(const DeleteWebApplicationRevisionRequest &) = default ;
    DeleteWebApplicationRevisionRequest& operator=(DeleteWebApplicationRevisionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespaceId_ == nullptr; };
    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline DeleteWebApplicationRevisionRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    // The namespace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
