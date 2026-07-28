// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREGISTRYNAMESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREGISTRYNAMESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class CreateRegistryNamespaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRegistryNamespaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(acl, acl_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(maintainer, maintainer_);
      DARABONBA_PTR_TO_JSON(namespaceName, namespaceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRegistryNamespaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(acl, acl_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(maintainer, maintainer_);
      DARABONBA_PTR_FROM_JSON(namespaceName, namespaceName_);
    };
    CreateRegistryNamespaceRequest() = default ;
    CreateRegistryNamespaceRequest(const CreateRegistryNamespaceRequest &) = default ;
    CreateRegistryNamespaceRequest(CreateRegistryNamespaceRequest &&) = default ;
    CreateRegistryNamespaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRegistryNamespaceRequest() = default ;
    CreateRegistryNamespaceRequest& operator=(const CreateRegistryNamespaceRequest &) = default ;
    CreateRegistryNamespaceRequest& operator=(CreateRegistryNamespaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acl_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->maintainer_ == nullptr && this->namespaceName_ == nullptr; };
    // acl Field Functions 
    bool hasAcl() const { return this->acl_ != nullptr;};
    void deleteAcl() { this->acl_ = nullptr;};
    inline string getAcl() const { DARABONBA_PTR_GET_DEFAULT(acl_, "") };
    inline CreateRegistryNamespaceRequest& setAcl(string acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateRegistryNamespaceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRegistryNamespaceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // maintainer Field Functions 
    bool hasMaintainer() const { return this->maintainer_ != nullptr;};
    void deleteMaintainer() { this->maintainer_ = nullptr;};
    inline string getMaintainer() const { DARABONBA_PTR_GET_DEFAULT(maintainer_, "") };
    inline CreateRegistryNamespaceRequest& setMaintainer(string maintainer) { DARABONBA_PTR_SET_VALUE(maintainer_, maintainer) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline CreateRegistryNamespaceRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


  protected:
    // The access permission. Valid values:
    // 
    // - private: private access.
    shared_ptr<string> acl_ {};
    // The idempotence token. Format: [0-9a-zA-Z-]{1,64}. Use a UUID.
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // The workspace description.
    shared_ptr<string> description_ {};
    // The administrator name.
    shared_ptr<string> maintainer_ {};
    // The workspace name. The name must meet the following requirements:
    // 
    // - The name must be 3 to 63 characters in length.
    // - The name can contain uppercase and lowercase letters, digits, hyphens (-), and underscores (_), and cannot start or end with a hyphen.
    // - The name must be unique within the global workspace resources.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
