// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACLSRESPONSEBODYACLS_HPP_
#define ALIBABACLOUD_MODELS_LISTACLSRESPONSEBODYACLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAclsResponseBodyAclsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListAclsResponseBodyAcls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAclsResponseBodyAcls& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclName, aclName_);
      DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_TO_JSON(ConfigManagedEnabled, configManagedEnabled_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListAclsResponseBodyAcls& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclName, aclName_);
      DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_FROM_JSON(ConfigManagedEnabled, configManagedEnabled_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListAclsResponseBodyAcls() = default ;
    ListAclsResponseBodyAcls(const ListAclsResponseBodyAcls &) = default ;
    ListAclsResponseBodyAcls(ListAclsResponseBodyAcls &&) = default ;
    ListAclsResponseBodyAcls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAclsResponseBodyAcls() = default ;
    ListAclsResponseBodyAcls& operator=(const ListAclsResponseBodyAcls &) = default ;
    ListAclsResponseBodyAcls& operator=(ListAclsResponseBodyAcls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclId_ != nullptr
        && this->aclName_ != nullptr && this->aclStatus_ != nullptr && this->addressIPVersion_ != nullptr && this->configManagedEnabled_ != nullptr && this->createTime_ != nullptr
        && this->resourceGroupId_ != nullptr && this->tags_ != nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline ListAclsResponseBodyAcls& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclName Field Functions 
    bool hasAclName() const { return this->aclName_ != nullptr;};
    void deleteAclName() { this->aclName_ = nullptr;};
    inline string aclName() const { DARABONBA_PTR_GET_DEFAULT(aclName_, "") };
    inline ListAclsResponseBodyAcls& setAclName(string aclName) { DARABONBA_PTR_SET_VALUE(aclName_, aclName) };


    // aclStatus Field Functions 
    bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
    void deleteAclStatus() { this->aclStatus_ = nullptr;};
    inline string aclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
    inline ListAclsResponseBodyAcls& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string addressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline ListAclsResponseBodyAcls& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


    // configManagedEnabled Field Functions 
    bool hasConfigManagedEnabled() const { return this->configManagedEnabled_ != nullptr;};
    void deleteConfigManagedEnabled() { this->configManagedEnabled_ = nullptr;};
    inline bool configManagedEnabled() const { DARABONBA_PTR_GET_DEFAULT(configManagedEnabled_, false) };
    inline ListAclsResponseBodyAcls& setConfigManagedEnabled(bool configManagedEnabled) { DARABONBA_PTR_SET_VALUE(configManagedEnabled_, configManagedEnabled) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListAclsResponseBodyAcls& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListAclsResponseBodyAcls& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListAclsResponseBodyAclsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListAclsResponseBodyAclsTags>) };
    inline vector<Models::ListAclsResponseBodyAclsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListAclsResponseBodyAclsTags>) };
    inline ListAclsResponseBodyAcls& setTags(const vector<Models::ListAclsResponseBodyAclsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListAclsResponseBodyAcls& setTags(vector<Models::ListAclsResponseBodyAclsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ACL ID.
    std::shared_ptr<string> aclId_ = nullptr;
    // The name of the ACL.
    std::shared_ptr<string> aclName_ = nullptr;
    // The status of the ACL. Valid values:
    // 
    // *   **Creating**: The network ACL is being created.
    // *   **Available**: The network ACL is available.
    // *   **Configuring**
    std::shared_ptr<string> aclStatus_ = nullptr;
    // The IP version of the ACL. Only **IPv4** may be returned.
    std::shared_ptr<string> addressIPVersion_ = nullptr;
    // Indicates whether configuration management is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> configManagedEnabled_ = nullptr;
    // The time when the ACL was created. The follows the `YYYY-MM-DDThh:mm:ssZ` format.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListAclsResponseBodyAclsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
