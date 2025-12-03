// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTSRESPONSEBODYACLSACL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTSRESPONSEBODYACLSACL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAccessControlListsResponseBodyAclsAclTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeAccessControlListsResponseBodyAclsAcl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessControlListsResponseBodyAclsAcl& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclName, aclName_);
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessControlListsResponseBodyAclsAcl& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclName, aclName_);
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeAccessControlListsResponseBodyAclsAcl() = default ;
    DescribeAccessControlListsResponseBodyAclsAcl(const DescribeAccessControlListsResponseBodyAclsAcl &) = default ;
    DescribeAccessControlListsResponseBodyAclsAcl(DescribeAccessControlListsResponseBodyAclsAcl &&) = default ;
    DescribeAccessControlListsResponseBodyAclsAcl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessControlListsResponseBodyAclsAcl() = default ;
    DescribeAccessControlListsResponseBodyAclsAcl& operator=(const DescribeAccessControlListsResponseBodyAclsAcl &) = default ;
    DescribeAccessControlListsResponseBodyAclsAcl& operator=(DescribeAccessControlListsResponseBodyAclsAcl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclId_ == nullptr
        && return this->aclName_ == nullptr && return this->addressIPVersion_ == nullptr && return this->createTime_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tags_ == nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline DescribeAccessControlListsResponseBodyAclsAcl& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclName Field Functions 
    bool hasAclName() const { return this->aclName_ != nullptr;};
    void deleteAclName() { this->aclName_ = nullptr;};
    inline string aclName() const { DARABONBA_PTR_GET_DEFAULT(aclName_, "") };
    inline DescribeAccessControlListsResponseBodyAclsAcl& setAclName(string aclName) { DARABONBA_PTR_SET_VALUE(aclName_, aclName) };


    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string addressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline DescribeAccessControlListsResponseBodyAclsAcl& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeAccessControlListsResponseBodyAclsAcl& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeAccessControlListsResponseBodyAclsAcl& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeAccessControlListsResponseBodyAclsAclTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeAccessControlListsResponseBodyAclsAclTags) };
    inline Models::DescribeAccessControlListsResponseBodyAclsAclTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeAccessControlListsResponseBodyAclsAclTags) };
    inline DescribeAccessControlListsResponseBodyAclsAcl& setTags(const Models::DescribeAccessControlListsResponseBodyAclsAclTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeAccessControlListsResponseBodyAclsAcl& setTags(Models::DescribeAccessControlListsResponseBodyAclsAclTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ACL ID.
    std::shared_ptr<string> aclId_ = nullptr;
    // The ACL name.
    std::shared_ptr<string> aclName_ = nullptr;
    // The IP version that is used by the CLB instance associated with the ACL.
    std::shared_ptr<string> addressIPVersion_ = nullptr;
    // The time when the CLB instance was created. The time follows the `YYYY-MM-DDThh:mm:ssZ` format.
    std::shared_ptr<string> createTime_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The list of tags added to the network ACL. The value of this parameter must be a STRING list in the JSON format.
    std::shared_ptr<Models::DescribeAccessControlListsResponseBodyAclsAclTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
