// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACESRESPONSEBODYDATANAMESPACES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACESRESPONSEBODYDATANAMESPACES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeNamespacesResponseBodyDataNamespaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespacesResponseBodyDataNamespaces& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_TO_JSON(AddressServerHost, addressServerHost_);
      DARABONBA_PTR_TO_JSON(NameSpaceShortId, nameSpaceShortId_);
      DARABONBA_PTR_TO_JSON(NamespaceDescription, namespaceDescription_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespacesResponseBodyDataNamespaces& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_FROM_JSON(AddressServerHost, addressServerHost_);
      DARABONBA_PTR_FROM_JSON(NameSpaceShortId, nameSpaceShortId_);
      DARABONBA_PTR_FROM_JSON(NamespaceDescription, namespaceDescription_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    DescribeNamespacesResponseBodyDataNamespaces() = default ;
    DescribeNamespacesResponseBodyDataNamespaces(const DescribeNamespacesResponseBodyDataNamespaces &) = default ;
    DescribeNamespacesResponseBodyDataNamespaces(DescribeNamespacesResponseBodyDataNamespaces &&) = default ;
    DescribeNamespacesResponseBodyDataNamespaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespacesResponseBodyDataNamespaces() = default ;
    DescribeNamespacesResponseBodyDataNamespaces& operator=(const DescribeNamespacesResponseBodyDataNamespaces &) = default ;
    DescribeNamespacesResponseBodyDataNamespaces& operator=(DescribeNamespacesResponseBodyDataNamespaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessKey_ == nullptr
        && return this->addressServerHost_ == nullptr && return this->nameSpaceShortId_ == nullptr && return this->namespaceDescription_ == nullptr && return this->namespaceId_ == nullptr && return this->namespaceName_ == nullptr
        && return this->regionId_ == nullptr && return this->secretKey_ == nullptr && return this->tenantId_ == nullptr; };
    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline string accessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
    inline DescribeNamespacesResponseBodyDataNamespaces& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


    // addressServerHost Field Functions 
    bool hasAddressServerHost() const { return this->addressServerHost_ != nullptr;};
    void deleteAddressServerHost() { this->addressServerHost_ = nullptr;};
    inline string addressServerHost() const { DARABONBA_PTR_GET_DEFAULT(addressServerHost_, "") };
    inline DescribeNamespacesResponseBodyDataNamespaces& setAddressServerHost(string addressServerHost) { DARABONBA_PTR_SET_VALUE(addressServerHost_, addressServerHost) };


    // nameSpaceShortId Field Functions 
    bool hasNameSpaceShortId() const { return this->nameSpaceShortId_ != nullptr;};
    void deleteNameSpaceShortId() { this->nameSpaceShortId_ = nullptr;};
    inline string nameSpaceShortId() const { DARABONBA_PTR_GET_DEFAULT(nameSpaceShortId_, "") };
    inline DescribeNamespacesResponseBodyDataNamespaces& setNameSpaceShortId(string nameSpaceShortId) { DARABONBA_PTR_SET_VALUE(nameSpaceShortId_, nameSpaceShortId) };


    // namespaceDescription Field Functions 
    bool hasNamespaceDescription() const { return this->namespaceDescription_ != nullptr;};
    void deleteNamespaceDescription() { this->namespaceDescription_ = nullptr;};
    inline string namespaceDescription() const { DARABONBA_PTR_GET_DEFAULT(namespaceDescription_, "") };
    inline DescribeNamespacesResponseBodyDataNamespaces& setNamespaceDescription(string namespaceDescription) { DARABONBA_PTR_SET_VALUE(namespaceDescription_, namespaceDescription) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline DescribeNamespacesResponseBodyDataNamespaces& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline DescribeNamespacesResponseBodyDataNamespaces& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeNamespacesResponseBodyDataNamespaces& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // secretKey Field Functions 
    bool hasSecretKey() const { return this->secretKey_ != nullptr;};
    void deleteSecretKey() { this->secretKey_ = nullptr;};
    inline string secretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
    inline DescribeNamespacesResponseBodyDataNamespaces& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DescribeNamespacesResponseBodyDataNamespaces& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The ACM-specific AccessKey ID. It can be used to manage data in an Application Configuration Management (ACM) namespace. For more information, see [Differences between Alibaba Cloud AccessKey and ACM-specific AccessKey](https://help.aliyun.com/document_detail/68941.html).
    std::shared_ptr<string> accessKey_ = nullptr;
    // The endpoint of the host.
    std::shared_ptr<string> addressServerHost_ = nullptr;
    // The short ID of the namespace.
    std::shared_ptr<string> nameSpaceShortId_ = nullptr;
    // The description of the namespace.
    std::shared_ptr<string> namespaceDescription_ = nullptr;
    // The ID of the namespace. You cannot query, modify, or delete the default namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> namespaceName_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ACM-specific AccessKey secret. It can be used to manage data in an ACM namespace. For more information, see [Differences between Alibaba Cloud AccessKey and ACM-specific AccessKey](https://help.aliyun.com/document_detail/68941.html).
    std::shared_ptr<string> secretKey_ = nullptr;
    // The tenant ID.
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
