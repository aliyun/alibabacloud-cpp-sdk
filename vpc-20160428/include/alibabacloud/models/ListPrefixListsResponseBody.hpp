// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPREFIXLISTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPREFIXLISTSRESPONSEBODY_HPP_
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
  class ListPrefixListsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrefixListsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PrefixLists, prefixLists_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrefixListsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PrefixLists, prefixLists_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPrefixListsResponseBody() = default ;
    ListPrefixListsResponseBody(const ListPrefixListsResponseBody &) = default ;
    ListPrefixListsResponseBody(ListPrefixListsResponseBody &&) = default ;
    ListPrefixListsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrefixListsResponseBody() = default ;
    ListPrefixListsResponseBody& operator=(const ListPrefixListsResponseBody &) = default ;
    ListPrefixListsResponseBody& operator=(ListPrefixListsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrefixLists : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrefixLists& obj) { 
        DARABONBA_PTR_TO_JSON(CidrBlocks, cidrBlocks_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_TO_JSON(MaxEntries, maxEntries_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(PrefixListDescription, prefixListDescription_);
        DARABONBA_PTR_TO_JSON(PrefixListId, prefixListId_);
        DARABONBA_PTR_TO_JSON(PrefixListName, prefixListName_);
        DARABONBA_PTR_TO_JSON(PrefixListStatus, prefixListStatus_);
        DARABONBA_PTR_TO_JSON(PrefixListType, prefixListType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ShareType, shareType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, PrefixLists& obj) { 
        DARABONBA_PTR_FROM_JSON(CidrBlocks, cidrBlocks_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_FROM_JSON(MaxEntries, maxEntries_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(PrefixListDescription, prefixListDescription_);
        DARABONBA_PTR_FROM_JSON(PrefixListId, prefixListId_);
        DARABONBA_PTR_FROM_JSON(PrefixListName, prefixListName_);
        DARABONBA_PTR_FROM_JSON(PrefixListStatus, prefixListStatus_);
        DARABONBA_PTR_FROM_JSON(PrefixListType, prefixListType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      PrefixLists() = default ;
      PrefixLists(const PrefixLists &) = default ;
      PrefixLists(PrefixLists &&) = default ;
      PrefixLists(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrefixLists() = default ;
      PrefixLists& operator=(const PrefixLists &) = default ;
      PrefixLists& operator=(PrefixLists &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->cidrBlocks_ == nullptr
        && this->creationTime_ == nullptr && this->ipVersion_ == nullptr && this->maxEntries_ == nullptr && this->ownerId_ == nullptr && this->prefixListDescription_ == nullptr
        && this->prefixListId_ == nullptr && this->prefixListName_ == nullptr && this->prefixListStatus_ == nullptr && this->prefixListType_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->shareType_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
      // cidrBlocks Field Functions 
      bool hasCidrBlocks() const { return this->cidrBlocks_ != nullptr;};
      void deleteCidrBlocks() { this->cidrBlocks_ = nullptr;};
      inline const vector<string> & getCidrBlocks() const { DARABONBA_PTR_GET_CONST(cidrBlocks_, vector<string>) };
      inline vector<string> getCidrBlocks() { DARABONBA_PTR_GET(cidrBlocks_, vector<string>) };
      inline PrefixLists& setCidrBlocks(const vector<string> & cidrBlocks) { DARABONBA_PTR_SET_VALUE(cidrBlocks_, cidrBlocks) };
      inline PrefixLists& setCidrBlocks(vector<string> && cidrBlocks) { DARABONBA_PTR_SET_RVALUE(cidrBlocks_, cidrBlocks) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline PrefixLists& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // ipVersion Field Functions 
      bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
      void deleteIpVersion() { this->ipVersion_ = nullptr;};
      inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
      inline PrefixLists& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


      // maxEntries Field Functions 
      bool hasMaxEntries() const { return this->maxEntries_ != nullptr;};
      void deleteMaxEntries() { this->maxEntries_ = nullptr;};
      inline int32_t getMaxEntries() const { DARABONBA_PTR_GET_DEFAULT(maxEntries_, 0) };
      inline PrefixLists& setMaxEntries(int32_t maxEntries) { DARABONBA_PTR_SET_VALUE(maxEntries_, maxEntries) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
      inline PrefixLists& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // prefixListDescription Field Functions 
      bool hasPrefixListDescription() const { return this->prefixListDescription_ != nullptr;};
      void deletePrefixListDescription() { this->prefixListDescription_ = nullptr;};
      inline string getPrefixListDescription() const { DARABONBA_PTR_GET_DEFAULT(prefixListDescription_, "") };
      inline PrefixLists& setPrefixListDescription(string prefixListDescription) { DARABONBA_PTR_SET_VALUE(prefixListDescription_, prefixListDescription) };


      // prefixListId Field Functions 
      bool hasPrefixListId() const { return this->prefixListId_ != nullptr;};
      void deletePrefixListId() { this->prefixListId_ = nullptr;};
      inline string getPrefixListId() const { DARABONBA_PTR_GET_DEFAULT(prefixListId_, "") };
      inline PrefixLists& setPrefixListId(string prefixListId) { DARABONBA_PTR_SET_VALUE(prefixListId_, prefixListId) };


      // prefixListName Field Functions 
      bool hasPrefixListName() const { return this->prefixListName_ != nullptr;};
      void deletePrefixListName() { this->prefixListName_ = nullptr;};
      inline string getPrefixListName() const { DARABONBA_PTR_GET_DEFAULT(prefixListName_, "") };
      inline PrefixLists& setPrefixListName(string prefixListName) { DARABONBA_PTR_SET_VALUE(prefixListName_, prefixListName) };


      // prefixListStatus Field Functions 
      bool hasPrefixListStatus() const { return this->prefixListStatus_ != nullptr;};
      void deletePrefixListStatus() { this->prefixListStatus_ = nullptr;};
      inline string getPrefixListStatus() const { DARABONBA_PTR_GET_DEFAULT(prefixListStatus_, "") };
      inline PrefixLists& setPrefixListStatus(string prefixListStatus) { DARABONBA_PTR_SET_VALUE(prefixListStatus_, prefixListStatus) };


      // prefixListType Field Functions 
      bool hasPrefixListType() const { return this->prefixListType_ != nullptr;};
      void deletePrefixListType() { this->prefixListType_ = nullptr;};
      inline string getPrefixListType() const { DARABONBA_PTR_GET_DEFAULT(prefixListType_, "") };
      inline PrefixLists& setPrefixListType(string prefixListType) { DARABONBA_PTR_SET_VALUE(prefixListType_, prefixListType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline PrefixLists& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline PrefixLists& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // shareType Field Functions 
      bool hasShareType() const { return this->shareType_ != nullptr;};
      void deleteShareType() { this->shareType_ = nullptr;};
      inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
      inline PrefixLists& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PrefixLists& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<PrefixLists::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<PrefixLists::Tags>) };
      inline vector<PrefixLists::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<PrefixLists::Tags>) };
      inline PrefixLists& setTags(const vector<PrefixLists::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline PrefixLists& setTags(vector<PrefixLists::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The CIDR block specified in the prefix list.
      shared_ptr<vector<string>> cidrBlocks_ {};
      // The time when the prefix list was created.
      shared_ptr<string> creationTime_ {};
      // The IP version of the prefix list. Valid values:
      // 
      // *   **IPV4**
      // *   **IPV6**
      shared_ptr<string> ipVersion_ {};
      // The maximum number of CIDR blocks that you can specify in the prefix list.
      shared_ptr<int32_t> maxEntries_ {};
      // The Alibaba Cloud account to which the prefix list belongs.
      shared_ptr<string> ownerId_ {};
      // The description of the prefix list.
      shared_ptr<string> prefixListDescription_ {};
      // The ID of the prefix list.
      shared_ptr<string> prefixListId_ {};
      // The name of the prefix list.
      shared_ptr<string> prefixListName_ {};
      // The status of the prefix list. Valid values:
      // 
      // *   **Created**
      // *   **Deleted**
      // *   **Modifying**
      // 
      // >  This parameter is the same as the **Status** parameter.
      shared_ptr<string> prefixListStatus_ {};
      // The type of the prefix list.
      shared_ptr<string> prefixListType_ {};
      // The region ID of the prefix list.
      shared_ptr<string> regionId_ {};
      // The ID of the resource group to which the prefix list belongs.
      shared_ptr<string> resourceGroupId_ {};
      // Indicates whether the prefix list is shared. Valid values:
      // 
      // *   **Shared**: The prefix list is shared.
      // *   If an empty value is returned, the prefix list is not shared.
      shared_ptr<string> shareType_ {};
      // The status of the prefix list. Valid values:
      // 
      // *   **Created**
      // *   **Deleted**
      // *   **Modifying**
      shared_ptr<string> status_ {};
      // The tags.
      shared_ptr<vector<PrefixLists::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->prefixLists_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListPrefixListsResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPrefixListsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // prefixLists Field Functions 
    bool hasPrefixLists() const { return this->prefixLists_ != nullptr;};
    void deletePrefixLists() { this->prefixLists_ = nullptr;};
    inline const vector<ListPrefixListsResponseBody::PrefixLists> & getPrefixLists() const { DARABONBA_PTR_GET_CONST(prefixLists_, vector<ListPrefixListsResponseBody::PrefixLists>) };
    inline vector<ListPrefixListsResponseBody::PrefixLists> getPrefixLists() { DARABONBA_PTR_GET(prefixLists_, vector<ListPrefixListsResponseBody::PrefixLists>) };
    inline ListPrefixListsResponseBody& setPrefixLists(const vector<ListPrefixListsResponseBody::PrefixLists> & prefixLists) { DARABONBA_PTR_SET_VALUE(prefixLists_, prefixLists) };
    inline ListPrefixListsResponseBody& setPrefixLists(vector<ListPrefixListsResponseBody::PrefixLists> && prefixLists) { DARABONBA_PTR_SET_RVALUE(prefixLists_, prefixLists) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrefixListsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListPrefixListsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries per page. Valid values: **1** to **100**. Default value: **20**.
    shared_ptr<int64_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value indicates the token that is used for the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The information about the prefix lists.
    shared_ptr<vector<ListPrefixListsResponseBody::PrefixLists>> prefixLists_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
