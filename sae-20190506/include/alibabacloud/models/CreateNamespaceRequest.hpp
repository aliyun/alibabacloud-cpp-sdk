// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENAMESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENAMESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateNamespaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNamespaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableMicroRegistration, enableMicroRegistration_);
      DARABONBA_PTR_TO_JSON(NameSpaceShortId, nameSpaceShortId_);
      DARABONBA_PTR_TO_JSON(NamespaceDescription, namespaceDescription_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNamespaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableMicroRegistration, enableMicroRegistration_);
      DARABONBA_PTR_FROM_JSON(NameSpaceShortId, nameSpaceShortId_);
      DARABONBA_PTR_FROM_JSON(NamespaceDescription, namespaceDescription_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
    };
    CreateNamespaceRequest() = default ;
    CreateNamespaceRequest(const CreateNamespaceRequest &) = default ;
    CreateNamespaceRequest(CreateNamespaceRequest &&) = default ;
    CreateNamespaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNamespaceRequest() = default ;
    CreateNamespaceRequest& operator=(const CreateNamespaceRequest &) = default ;
    CreateNamespaceRequest& operator=(CreateNamespaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableMicroRegistration_ == nullptr
        && this->nameSpaceShortId_ == nullptr && this->namespaceDescription_ == nullptr && this->namespaceId_ == nullptr && this->namespaceName_ == nullptr; };
    // enableMicroRegistration Field Functions 
    bool hasEnableMicroRegistration() const { return this->enableMicroRegistration_ != nullptr;};
    void deleteEnableMicroRegistration() { this->enableMicroRegistration_ = nullptr;};
    inline bool getEnableMicroRegistration() const { DARABONBA_PTR_GET_DEFAULT(enableMicroRegistration_, false) };
    inline CreateNamespaceRequest& setEnableMicroRegistration(bool enableMicroRegistration) { DARABONBA_PTR_SET_VALUE(enableMicroRegistration_, enableMicroRegistration) };


    // nameSpaceShortId Field Functions 
    bool hasNameSpaceShortId() const { return this->nameSpaceShortId_ != nullptr;};
    void deleteNameSpaceShortId() { this->nameSpaceShortId_ = nullptr;};
    inline string getNameSpaceShortId() const { DARABONBA_PTR_GET_DEFAULT(nameSpaceShortId_, "") };
    inline CreateNamespaceRequest& setNameSpaceShortId(string nameSpaceShortId) { DARABONBA_PTR_SET_VALUE(nameSpaceShortId_, nameSpaceShortId) };


    // namespaceDescription Field Functions 
    bool hasNamespaceDescription() const { return this->namespaceDescription_ != nullptr;};
    void deleteNamespaceDescription() { this->namespaceDescription_ = nullptr;};
    inline string getNamespaceDescription() const { DARABONBA_PTR_GET_DEFAULT(namespaceDescription_, "") };
    inline CreateNamespaceRequest& setNamespaceDescription(string namespaceDescription) { DARABONBA_PTR_SET_VALUE(namespaceDescription_, namespaceDescription) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline CreateNamespaceRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline CreateNamespaceRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


  protected:
    // Indicates whether to enable SAE built-in registry:
    // 
    // *   **true**
    // *   **false**
    // 
    // Default value: true. If you do not use the built-in registry, you can set this parameter to false to accelerate the creation of a namespace.
    shared_ptr<bool> enableMicroRegistration_ {};
    // The trace ID that is used to query the details of the request.
    shared_ptr<string> nameSpaceShortId_ {};
    // The message returned for the operation.
    shared_ptr<string> namespaceDescription_ {};
    // The data returned.
    shared_ptr<string> namespaceId_ {};
    // The ID of the request.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
