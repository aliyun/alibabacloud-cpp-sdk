// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAccessControlListAttributeResponseBodyAclEntrys.hpp>
#include <alibabacloud/models/DescribeAccessControlListAttributeResponseBodyRelatedListeners.hpp>
#include <alibabacloud/models/DescribeAccessControlListAttributeResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeAccessControlListAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessControlListAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclEntrys, aclEntrys_);
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclName, aclName_);
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(RelatedListeners, relatedListeners_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TotalAclEntry, totalAclEntry_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessControlListAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclEntrys, aclEntrys_);
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclName, aclName_);
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(RelatedListeners, relatedListeners_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TotalAclEntry, totalAclEntry_);
    };
    DescribeAccessControlListAttributeResponseBody() = default ;
    DescribeAccessControlListAttributeResponseBody(const DescribeAccessControlListAttributeResponseBody &) = default ;
    DescribeAccessControlListAttributeResponseBody(DescribeAccessControlListAttributeResponseBody &&) = default ;
    DescribeAccessControlListAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessControlListAttributeResponseBody() = default ;
    DescribeAccessControlListAttributeResponseBody& operator=(const DescribeAccessControlListAttributeResponseBody &) = default ;
    DescribeAccessControlListAttributeResponseBody& operator=(DescribeAccessControlListAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclEntrys_ == nullptr
        && return this->aclId_ == nullptr && return this->aclName_ == nullptr && return this->addressIPVersion_ == nullptr && return this->createTime_ == nullptr && return this->relatedListeners_ == nullptr
        && return this->requestId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tags_ == nullptr && return this->totalAclEntry_ == nullptr; };
    // aclEntrys Field Functions 
    bool hasAclEntrys() const { return this->aclEntrys_ != nullptr;};
    void deleteAclEntrys() { this->aclEntrys_ = nullptr;};
    inline const DescribeAccessControlListAttributeResponseBodyAclEntrys & aclEntrys() const { DARABONBA_PTR_GET_CONST(aclEntrys_, DescribeAccessControlListAttributeResponseBodyAclEntrys) };
    inline DescribeAccessControlListAttributeResponseBodyAclEntrys aclEntrys() { DARABONBA_PTR_GET(aclEntrys_, DescribeAccessControlListAttributeResponseBodyAclEntrys) };
    inline DescribeAccessControlListAttributeResponseBody& setAclEntrys(const DescribeAccessControlListAttributeResponseBodyAclEntrys & aclEntrys) { DARABONBA_PTR_SET_VALUE(aclEntrys_, aclEntrys) };
    inline DescribeAccessControlListAttributeResponseBody& setAclEntrys(DescribeAccessControlListAttributeResponseBodyAclEntrys && aclEntrys) { DARABONBA_PTR_SET_RVALUE(aclEntrys_, aclEntrys) };


    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline DescribeAccessControlListAttributeResponseBody& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclName Field Functions 
    bool hasAclName() const { return this->aclName_ != nullptr;};
    void deleteAclName() { this->aclName_ = nullptr;};
    inline string aclName() const { DARABONBA_PTR_GET_DEFAULT(aclName_, "") };
    inline DescribeAccessControlListAttributeResponseBody& setAclName(string aclName) { DARABONBA_PTR_SET_VALUE(aclName_, aclName) };


    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string addressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline DescribeAccessControlListAttributeResponseBody& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeAccessControlListAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // relatedListeners Field Functions 
    bool hasRelatedListeners() const { return this->relatedListeners_ != nullptr;};
    void deleteRelatedListeners() { this->relatedListeners_ = nullptr;};
    inline const DescribeAccessControlListAttributeResponseBodyRelatedListeners & relatedListeners() const { DARABONBA_PTR_GET_CONST(relatedListeners_, DescribeAccessControlListAttributeResponseBodyRelatedListeners) };
    inline DescribeAccessControlListAttributeResponseBodyRelatedListeners relatedListeners() { DARABONBA_PTR_GET(relatedListeners_, DescribeAccessControlListAttributeResponseBodyRelatedListeners) };
    inline DescribeAccessControlListAttributeResponseBody& setRelatedListeners(const DescribeAccessControlListAttributeResponseBodyRelatedListeners & relatedListeners) { DARABONBA_PTR_SET_VALUE(relatedListeners_, relatedListeners) };
    inline DescribeAccessControlListAttributeResponseBody& setRelatedListeners(DescribeAccessControlListAttributeResponseBodyRelatedListeners && relatedListeners) { DARABONBA_PTR_SET_RVALUE(relatedListeners_, relatedListeners) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccessControlListAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeAccessControlListAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeAccessControlListAttributeResponseBodyTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeAccessControlListAttributeResponseBodyTags) };
    inline DescribeAccessControlListAttributeResponseBodyTags tags() { DARABONBA_PTR_GET(tags_, DescribeAccessControlListAttributeResponseBodyTags) };
    inline DescribeAccessControlListAttributeResponseBody& setTags(const DescribeAccessControlListAttributeResponseBodyTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeAccessControlListAttributeResponseBody& setTags(DescribeAccessControlListAttributeResponseBodyTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // totalAclEntry Field Functions 
    bool hasTotalAclEntry() const { return this->totalAclEntry_ != nullptr;};
    void deleteTotalAclEntry() { this->totalAclEntry_ = nullptr;};
    inline int32_t totalAclEntry() const { DARABONBA_PTR_GET_DEFAULT(totalAclEntry_, 0) };
    inline DescribeAccessControlListAttributeResponseBody& setTotalAclEntry(int32_t totalAclEntry) { DARABONBA_PTR_SET_VALUE(totalAclEntry_, totalAclEntry) };


  protected:
    // The information about the access control policy.
    std::shared_ptr<DescribeAccessControlListAttributeResponseBodyAclEntrys> aclEntrys_ = nullptr;
    // The ACL ID.
    std::shared_ptr<string> aclId_ = nullptr;
    // The ACL name.
    std::shared_ptr<string> aclName_ = nullptr;
    // The IP version. Valid values: **ipv4** and **ipv6**.
    std::shared_ptr<string> addressIPVersion_ = nullptr;
    // The time when the ACL was created. The time follows the `YYYY-MM-DDThh:mm:ssZ` format.
    std::shared_ptr<string> createTime_ = nullptr;
    // The listeners with which the ACL is associated.
    std::shared_ptr<DescribeAccessControlListAttributeResponseBodyRelatedListeners> relatedListeners_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags added to the ACL.
    std::shared_ptr<DescribeAccessControlListAttributeResponseBodyTags> tags_ = nullptr;
    // The total number of ACL entries.
    std::shared_ptr<int32_t> totalAclEntry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
