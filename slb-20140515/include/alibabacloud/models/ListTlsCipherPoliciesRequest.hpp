// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTLSCIPHERPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTLSCIPHERPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class ListTLSCipherPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTLSCipherPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IncludeListener, includeListener_);
      DARABONBA_PTR_TO_JSON(MaxItems, maxItems_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TLSCipherPolicyId, TLSCipherPolicyId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTLSCipherPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IncludeListener, includeListener_);
      DARABONBA_PTR_FROM_JSON(MaxItems, maxItems_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TLSCipherPolicyId, TLSCipherPolicyId_);
    };
    ListTLSCipherPoliciesRequest() = default ;
    ListTLSCipherPoliciesRequest(const ListTLSCipherPoliciesRequest &) = default ;
    ListTLSCipherPoliciesRequest(ListTLSCipherPoliciesRequest &&) = default ;
    ListTLSCipherPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTLSCipherPoliciesRequest() = default ;
    ListTLSCipherPoliciesRequest& operator=(const ListTLSCipherPoliciesRequest &) = default ;
    ListTLSCipherPoliciesRequest& operator=(ListTLSCipherPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->includeListener_ == nullptr
        && return this->maxItems_ == nullptr && return this->name_ == nullptr && return this->nextToken_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->TLSCipherPolicyId_ == nullptr; };
    // includeListener Field Functions 
    bool hasIncludeListener() const { return this->includeListener_ != nullptr;};
    void deleteIncludeListener() { this->includeListener_ = nullptr;};
    inline bool includeListener() const { DARABONBA_PTR_GET_DEFAULT(includeListener_, false) };
    inline ListTLSCipherPoliciesRequest& setIncludeListener(bool includeListener) { DARABONBA_PTR_SET_VALUE(includeListener_, includeListener) };


    // maxItems Field Functions 
    bool hasMaxItems() const { return this->maxItems_ != nullptr;};
    void deleteMaxItems() { this->maxItems_ = nullptr;};
    inline int32_t maxItems() const { DARABONBA_PTR_GET_DEFAULT(maxItems_, 0) };
    inline ListTLSCipherPoliciesRequest& setMaxItems(int32_t maxItems) { DARABONBA_PTR_SET_VALUE(maxItems_, maxItems) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTLSCipherPoliciesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTLSCipherPoliciesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListTLSCipherPoliciesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListTLSCipherPoliciesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTLSCipherPoliciesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListTLSCipherPoliciesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListTLSCipherPoliciesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // TLSCipherPolicyId Field Functions 
    bool hasTLSCipherPolicyId() const { return this->TLSCipherPolicyId_ != nullptr;};
    void deleteTLSCipherPolicyId() { this->TLSCipherPolicyId_ = nullptr;};
    inline string TLSCipherPolicyId() const { DARABONBA_PTR_GET_DEFAULT(TLSCipherPolicyId_, "") };
    inline ListTLSCipherPoliciesRequest& setTLSCipherPolicyId(string TLSCipherPolicyId) { DARABONBA_PTR_SET_VALUE(TLSCipherPolicyId_, TLSCipherPolicyId) };


  protected:
    // Specifies whether to return the information about the associated listeners. Valid values:
    // 
    // *   **true**: returns the information about the associated listeners.
    // *   **false** (default): does not return the information about the associated listeners.
    std::shared_ptr<bool> includeListener_ = nullptr;
    // The maximum number of TLS policies to be queried in this call. Valid values: **1** to **100**. If you do not set this parameter, the default value **20** is used.
    std::shared_ptr<int32_t> maxItems_ = nullptr;
    // The name of the TLS policy. The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    std::shared_ptr<string> name_ = nullptr;
    // The token that is used for the next query. Valid values:
    // 
    // *   If this is your first query or no next query is to be sent, ignore this parameter.
    // *   If a next query is to be sent, set the value to the value of NextToken that is returned from the last call.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region where the Classic Load Balancer (CLB) instance is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the TLS policy.
    std::shared_ptr<string> TLSCipherPolicyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
