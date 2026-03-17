// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDPISIGNATURESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDPISIGNATURESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ListDpiSignaturesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDpiSignaturesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DpiGroupId, dpiGroupId_);
      DARABONBA_PTR_TO_JSON(DpiSignatureIds, dpiSignatureIds_);
      DARABONBA_PTR_TO_JSON(DpiSignatureNames, dpiSignatureNames_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDpiSignaturesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DpiGroupId, dpiGroupId_);
      DARABONBA_PTR_FROM_JSON(DpiSignatureIds, dpiSignatureIds_);
      DARABONBA_PTR_FROM_JSON(DpiSignatureNames, dpiSignatureNames_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ListDpiSignaturesRequest() = default ;
    ListDpiSignaturesRequest(const ListDpiSignaturesRequest &) = default ;
    ListDpiSignaturesRequest(ListDpiSignaturesRequest &&) = default ;
    ListDpiSignaturesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDpiSignaturesRequest() = default ;
    ListDpiSignaturesRequest& operator=(const ListDpiSignaturesRequest &) = default ;
    ListDpiSignaturesRequest& operator=(ListDpiSignaturesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dpiGroupId_ == nullptr
        && this->dpiSignatureIds_ == nullptr && this->dpiSignatureNames_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // dpiGroupId Field Functions 
    bool hasDpiGroupId() const { return this->dpiGroupId_ != nullptr;};
    void deleteDpiGroupId() { this->dpiGroupId_ = nullptr;};
    inline string getDpiGroupId() const { DARABONBA_PTR_GET_DEFAULT(dpiGroupId_, "") };
    inline ListDpiSignaturesRequest& setDpiGroupId(string dpiGroupId) { DARABONBA_PTR_SET_VALUE(dpiGroupId_, dpiGroupId) };


    // dpiSignatureIds Field Functions 
    bool hasDpiSignatureIds() const { return this->dpiSignatureIds_ != nullptr;};
    void deleteDpiSignatureIds() { this->dpiSignatureIds_ = nullptr;};
    inline const vector<string> & getDpiSignatureIds() const { DARABONBA_PTR_GET_CONST(dpiSignatureIds_, vector<string>) };
    inline vector<string> getDpiSignatureIds() { DARABONBA_PTR_GET(dpiSignatureIds_, vector<string>) };
    inline ListDpiSignaturesRequest& setDpiSignatureIds(const vector<string> & dpiSignatureIds) { DARABONBA_PTR_SET_VALUE(dpiSignatureIds_, dpiSignatureIds) };
    inline ListDpiSignaturesRequest& setDpiSignatureIds(vector<string> && dpiSignatureIds) { DARABONBA_PTR_SET_RVALUE(dpiSignatureIds_, dpiSignatureIds) };


    // dpiSignatureNames Field Functions 
    bool hasDpiSignatureNames() const { return this->dpiSignatureNames_ != nullptr;};
    void deleteDpiSignatureNames() { this->dpiSignatureNames_ = nullptr;};
    inline const vector<string> & getDpiSignatureNames() const { DARABONBA_PTR_GET_CONST(dpiSignatureNames_, vector<string>) };
    inline vector<string> getDpiSignatureNames() { DARABONBA_PTR_GET(dpiSignatureNames_, vector<string>) };
    inline ListDpiSignaturesRequest& setDpiSignatureNames(const vector<string> & dpiSignatureNames) { DARABONBA_PTR_SET_VALUE(dpiSignatureNames_, dpiSignatureNames) };
    inline ListDpiSignaturesRequest& setDpiSignatureNames(vector<string> && dpiSignatureNames) { DARABONBA_PTR_SET_RVALUE(dpiSignatureNames_, dpiSignatureNames) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDpiSignaturesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDpiSignaturesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListDpiSignaturesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListDpiSignaturesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDpiSignaturesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListDpiSignaturesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListDpiSignaturesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the application group.
    shared_ptr<string> dpiGroupId_ {};
    shared_ptr<vector<string>> dpiSignatureIds_ {};
    shared_ptr<vector<string>> dpiSignatureNames_ {};
    // The number of entries to return on each page.
    // 
    // Valid values: **1** to **100**.
    // 
    // Default value: **20**.
    shared_ptr<int32_t> maxResults_ {};
    // The token used to query the next page.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region to which the application or application group belongs.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/69813.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
