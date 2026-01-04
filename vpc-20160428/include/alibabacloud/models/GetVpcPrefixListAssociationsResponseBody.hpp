// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPCPREFIXLISTASSOCIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVPCPREFIXLISTASSOCIATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetVpcPrefixListAssociationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpcPrefixListAssociationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PrefixListAssociation, prefixListAssociation_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpcPrefixListAssociationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PrefixListAssociation, prefixListAssociation_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetVpcPrefixListAssociationsResponseBody() = default ;
    GetVpcPrefixListAssociationsResponseBody(const GetVpcPrefixListAssociationsResponseBody &) = default ;
    GetVpcPrefixListAssociationsResponseBody(GetVpcPrefixListAssociationsResponseBody &&) = default ;
    GetVpcPrefixListAssociationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpcPrefixListAssociationsResponseBody() = default ;
    GetVpcPrefixListAssociationsResponseBody& operator=(const GetVpcPrefixListAssociationsResponseBody &) = default ;
    GetVpcPrefixListAssociationsResponseBody& operator=(GetVpcPrefixListAssociationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrefixListAssociation : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrefixListAssociation& obj) { 
        DARABONBA_PTR_TO_JSON(CidrList, cidrList_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(PrefixListId, prefixListId_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(ResourceUid, resourceUid_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, PrefixListAssociation& obj) { 
        DARABONBA_PTR_FROM_JSON(CidrList, cidrList_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(PrefixListId, prefixListId_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(ResourceUid, resourceUid_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      PrefixListAssociation() = default ;
      PrefixListAssociation(const PrefixListAssociation &) = default ;
      PrefixListAssociation(PrefixListAssociation &&) = default ;
      PrefixListAssociation(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrefixListAssociation() = default ;
      PrefixListAssociation& operator=(const PrefixListAssociation &) = default ;
      PrefixListAssociation& operator=(PrefixListAssociation &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cidrList_ == nullptr
        && this->ownerId_ == nullptr && this->prefixListId_ == nullptr && this->reason_ == nullptr && this->regionId_ == nullptr && this->resourceId_ == nullptr
        && this->resourceType_ == nullptr && this->resourceUid_ == nullptr && this->status_ == nullptr; };
      // cidrList Field Functions 
      bool hasCidrList() const { return this->cidrList_ != nullptr;};
      void deleteCidrList() { this->cidrList_ = nullptr;};
      inline string getCidrList() const { DARABONBA_PTR_GET_DEFAULT(cidrList_, "") };
      inline PrefixListAssociation& setCidrList(string cidrList) { DARABONBA_PTR_SET_VALUE(cidrList_, cidrList) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
      inline PrefixListAssociation& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // prefixListId Field Functions 
      bool hasPrefixListId() const { return this->prefixListId_ != nullptr;};
      void deletePrefixListId() { this->prefixListId_ = nullptr;};
      inline string getPrefixListId() const { DARABONBA_PTR_GET_DEFAULT(prefixListId_, "") };
      inline PrefixListAssociation& setPrefixListId(string prefixListId) { DARABONBA_PTR_SET_VALUE(prefixListId_, prefixListId) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline PrefixListAssociation& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline PrefixListAssociation& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline PrefixListAssociation& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline PrefixListAssociation& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // resourceUid Field Functions 
      bool hasResourceUid() const { return this->resourceUid_ != nullptr;};
      void deleteResourceUid() { this->resourceUid_ = nullptr;};
      inline string getResourceUid() const { DARABONBA_PTR_GET_DEFAULT(resourceUid_, "") };
      inline PrefixListAssociation& setResourceUid(string resourceUid) { DARABONBA_PTR_SET_VALUE(resourceUid_, resourceUid) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PrefixListAssociation& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // List of CIDR addresses where the prefix list is effective in the currently associated resources.
      shared_ptr<string> cidrList_ {};
      // The ID of the Alibaba Cloud account to which the prefix list belongs.
      shared_ptr<string> ownerId_ {};
      // The prefix list ID.
      shared_ptr<string> prefixListId_ {};
      // The reason why the association failed.
      shared_ptr<string> reason_ {};
      // The region ID of the prefix list.
      shared_ptr<string> regionId_ {};
      // The ID of the associated resource.
      shared_ptr<string> resourceId_ {};
      // The type of the associated resource. Valid values:
      // 
      // *   **vpcRouteTable**: virtual private cloud (VPC) route table.
      // *   **trRouteTable**: route table of a transit router.
      shared_ptr<string> resourceType_ {};
      // The ID of the Alibaba Cloud account to which the resource associated with the prefix list belongs.
      shared_ptr<string> resourceUid_ {};
      // The status of the prefix list. Valid values:
      // 
      // *   **Created**
      // *   **ModifyFailed**
      // *   **Creating**
      // *   **Modifying**
      // *   **Deleting**
      // *   **Deleted**
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->nextToken_ == nullptr && this->prefixListAssociation_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline GetVpcPrefixListAssociationsResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetVpcPrefixListAssociationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // prefixListAssociation Field Functions 
    bool hasPrefixListAssociation() const { return this->prefixListAssociation_ != nullptr;};
    void deletePrefixListAssociation() { this->prefixListAssociation_ = nullptr;};
    inline const vector<GetVpcPrefixListAssociationsResponseBody::PrefixListAssociation> & getPrefixListAssociation() const { DARABONBA_PTR_GET_CONST(prefixListAssociation_, vector<GetVpcPrefixListAssociationsResponseBody::PrefixListAssociation>) };
    inline vector<GetVpcPrefixListAssociationsResponseBody::PrefixListAssociation> getPrefixListAssociation() { DARABONBA_PTR_GET(prefixListAssociation_, vector<GetVpcPrefixListAssociationsResponseBody::PrefixListAssociation>) };
    inline GetVpcPrefixListAssociationsResponseBody& setPrefixListAssociation(const vector<GetVpcPrefixListAssociationsResponseBody::PrefixListAssociation> & prefixListAssociation) { DARABONBA_PTR_SET_VALUE(prefixListAssociation_, prefixListAssociation) };
    inline GetVpcPrefixListAssociationsResponseBody& setPrefixListAssociation(vector<GetVpcPrefixListAssociationsResponseBody::PrefixListAssociation> && prefixListAssociation) { DARABONBA_PTR_SET_RVALUE(prefixListAssociation_, prefixListAssociation) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVpcPrefixListAssociationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetVpcPrefixListAssociationsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries.
    shared_ptr<int64_t> count_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value is used to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The information about the network instances that are associated with the prefix list.
    shared_ptr<vector<GetVpcPrefixListAssociationsResponseBody::PrefixListAssociation>> prefixListAssociation_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
