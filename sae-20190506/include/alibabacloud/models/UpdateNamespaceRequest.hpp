// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENAMESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENAMESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateNamespaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNamespaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableMicroRegistration, enableMicroRegistration_);
      DARABONBA_PTR_TO_JSON(NameSpaceShortId, nameSpaceShortId_);
      DARABONBA_PTR_TO_JSON(NamespaceDescription, namespaceDescription_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNamespaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableMicroRegistration, enableMicroRegistration_);
      DARABONBA_PTR_FROM_JSON(NameSpaceShortId, nameSpaceShortId_);
      DARABONBA_PTR_FROM_JSON(NamespaceDescription, namespaceDescription_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
    };
    UpdateNamespaceRequest() = default ;
    UpdateNamespaceRequest(const UpdateNamespaceRequest &) = default ;
    UpdateNamespaceRequest(UpdateNamespaceRequest &&) = default ;
    UpdateNamespaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNamespaceRequest() = default ;
    UpdateNamespaceRequest& operator=(const UpdateNamespaceRequest &) = default ;
    UpdateNamespaceRequest& operator=(UpdateNamespaceRequest &&) = default ;
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
    inline UpdateNamespaceRequest& setEnableMicroRegistration(bool enableMicroRegistration) { DARABONBA_PTR_SET_VALUE(enableMicroRegistration_, enableMicroRegistration) };


    // nameSpaceShortId Field Functions 
    bool hasNameSpaceShortId() const { return this->nameSpaceShortId_ != nullptr;};
    void deleteNameSpaceShortId() { this->nameSpaceShortId_ = nullptr;};
    inline string getNameSpaceShortId() const { DARABONBA_PTR_GET_DEFAULT(nameSpaceShortId_, "") };
    inline UpdateNamespaceRequest& setNameSpaceShortId(string nameSpaceShortId) { DARABONBA_PTR_SET_VALUE(nameSpaceShortId_, nameSpaceShortId) };


    // namespaceDescription Field Functions 
    bool hasNamespaceDescription() const { return this->namespaceDescription_ != nullptr;};
    void deleteNamespaceDescription() { this->namespaceDescription_ = nullptr;};
    inline string getNamespaceDescription() const { DARABONBA_PTR_GET_DEFAULT(namespaceDescription_, "") };
    inline UpdateNamespaceRequest& setNamespaceDescription(string namespaceDescription) { DARABONBA_PTR_SET_VALUE(namespaceDescription_, namespaceDescription) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline UpdateNamespaceRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline UpdateNamespaceRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


  protected:
    // Specifies whether to enable the built-in registry of SAE. Valid values:
    // - **true**
    // - **false**
    // 
    // If you set this parameter to true, a shared registry and related information are created for the namespace. After the shared registry is created, it cannot be disabled.
    shared_ptr<bool> enableMicroRegistration_ {};
    // The short namespace ID. You do not need to include the region ID. The value can contain only lowercase letters and digits and cannot exceed 20 characters in length. We recommend that you use this parameter.
    shared_ptr<string> nameSpaceShortId_ {};
    // The namespace description. The value cannot exceed 100 characters in length.
    shared_ptr<string> namespaceDescription_ {};
    // The long namespace ID. If you specify this parameter, it takes effect and NameSpaceShortId is ignored. This parameter is retained for backward compatibility. We recommend that you use the short namespace ID. The format is `<RegionId>:<NamespaceId>`. `NamespaceId` can contain only lowercase letters and digits, such as `cn-beijing:test`. The value cannot exceed 32 characters in length. For more information about the **RegionId** values supported by SAE, see [DescribeRegions](https://help.aliyun.com/document_detail/2834842.html).
    shared_ptr<string> namespaceId_ {};
    // The namespace name. The value cannot exceed 64 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
