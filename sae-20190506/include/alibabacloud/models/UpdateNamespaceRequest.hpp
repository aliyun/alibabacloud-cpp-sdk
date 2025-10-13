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
        && return this->nameSpaceShortId_ == nullptr && return this->namespaceDescription_ == nullptr && return this->namespaceId_ == nullptr && return this->namespaceName_ == nullptr; };
    // enableMicroRegistration Field Functions 
    bool hasEnableMicroRegistration() const { return this->enableMicroRegistration_ != nullptr;};
    void deleteEnableMicroRegistration() { this->enableMicroRegistration_ = nullptr;};
    inline bool enableMicroRegistration() const { DARABONBA_PTR_GET_DEFAULT(enableMicroRegistration_, false) };
    inline UpdateNamespaceRequest& setEnableMicroRegistration(bool enableMicroRegistration) { DARABONBA_PTR_SET_VALUE(enableMicroRegistration_, enableMicroRegistration) };


    // nameSpaceShortId Field Functions 
    bool hasNameSpaceShortId() const { return this->nameSpaceShortId_ != nullptr;};
    void deleteNameSpaceShortId() { this->nameSpaceShortId_ = nullptr;};
    inline string nameSpaceShortId() const { DARABONBA_PTR_GET_DEFAULT(nameSpaceShortId_, "") };
    inline UpdateNamespaceRequest& setNameSpaceShortId(string nameSpaceShortId) { DARABONBA_PTR_SET_VALUE(nameSpaceShortId_, nameSpaceShortId) };


    // namespaceDescription Field Functions 
    bool hasNamespaceDescription() const { return this->namespaceDescription_ != nullptr;};
    void deleteNamespaceDescription() { this->namespaceDescription_ = nullptr;};
    inline string namespaceDescription() const { DARABONBA_PTR_GET_DEFAULT(namespaceDescription_, "") };
    inline UpdateNamespaceRequest& setNamespaceDescription(string namespaceDescription) { DARABONBA_PTR_SET_VALUE(namespaceDescription_, namespaceDescription) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline UpdateNamespaceRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline UpdateNamespaceRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


  protected:
    // Indicates whether to enable SAE built-in registry:
    // 
    // *   **true**
    // *   **false**
    // 
    // If you set this parameter to true, a shared registry is created for the namespace. The registry cannot be disabled after it is created.
    std::shared_ptr<bool> enableMicroRegistration_ = nullptr;
    // The short ID of the namespace. You do not need to specify a region ID. We recommend that you configure this parameter. The value of this parameter can be up to 20 characters in length and can contain only lowercase letters and digits.
    std::shared_ptr<string> nameSpaceShortId_ = nullptr;
    // The description of the namespace. The description cannot exceed 100 characters in length.
    std::shared_ptr<string> namespaceDescription_ = nullptr;
    // The long ID of the namespace. If you configure this parameter, the long ID take effects and the value of the NameSpaceShortId parameter is ignored. To ensure compatibility, we recommend that you specify a short namespace ID. A long namespace ID follows the `<RegionId>:<NamespaceId>` format. The `NamespaceId` variable can contain only lowercase letters and digits. Example: `cn-beijing:test`. The value of the Namespaceid variable cannot exceed 32 characters in length. For more information about **RegionId**, you can call the [DescribeRegions](https://help.aliyun.com/document_detail/2834842.html) operation to obtain the IDs of regions supported by SAE.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The name of the namespace. The name cannot exceed 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
