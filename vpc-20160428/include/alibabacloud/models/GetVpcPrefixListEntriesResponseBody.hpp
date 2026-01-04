// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPCPREFIXLISTENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVPCPREFIXLISTENTRIESRESPONSEBODY_HPP_
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
  class GetVpcPrefixListEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVpcPrefixListEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PrefixListEntry, prefixListEntry_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetVpcPrefixListEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PrefixListEntry, prefixListEntry_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetVpcPrefixListEntriesResponseBody() = default ;
    GetVpcPrefixListEntriesResponseBody(const GetVpcPrefixListEntriesResponseBody &) = default ;
    GetVpcPrefixListEntriesResponseBody(GetVpcPrefixListEntriesResponseBody &&) = default ;
    GetVpcPrefixListEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVpcPrefixListEntriesResponseBody() = default ;
    GetVpcPrefixListEntriesResponseBody& operator=(const GetVpcPrefixListEntriesResponseBody &) = default ;
    GetVpcPrefixListEntriesResponseBody& operator=(GetVpcPrefixListEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrefixListEntry : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrefixListEntry& obj) { 
        DARABONBA_PTR_TO_JSON(Cidr, cidr_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(PrefixListId, prefixListId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, PrefixListEntry& obj) { 
        DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(PrefixListId, prefixListId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      PrefixListEntry() = default ;
      PrefixListEntry(const PrefixListEntry &) = default ;
      PrefixListEntry(PrefixListEntry &&) = default ;
      PrefixListEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrefixListEntry() = default ;
      PrefixListEntry& operator=(const PrefixListEntry &) = default ;
      PrefixListEntry& operator=(PrefixListEntry &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cidr_ == nullptr
        && this->description_ == nullptr && this->prefixListId_ == nullptr && this->regionId_ == nullptr; };
      // cidr Field Functions 
      bool hasCidr() const { return this->cidr_ != nullptr;};
      void deleteCidr() { this->cidr_ = nullptr;};
      inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
      inline PrefixListEntry& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PrefixListEntry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // prefixListId Field Functions 
      bool hasPrefixListId() const { return this->prefixListId_ != nullptr;};
      void deletePrefixListId() { this->prefixListId_ = nullptr;};
      inline string getPrefixListId() const { DARABONBA_PTR_GET_DEFAULT(prefixListId_, "") };
      inline PrefixListEntry& setPrefixListId(string prefixListId) { DARABONBA_PTR_SET_VALUE(prefixListId_, prefixListId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline PrefixListEntry& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The CIDR blocks specified in the prefix list.
      shared_ptr<string> cidr_ {};
      // The description of the prefix list.
      shared_ptr<string> description_ {};
      // The ID of the prefix list.
      shared_ptr<string> prefixListId_ {};
      // The region ID of the prefix list.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->nextToken_ == nullptr && this->prefixListEntry_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline GetVpcPrefixListEntriesResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetVpcPrefixListEntriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // prefixListEntry Field Functions 
    bool hasPrefixListEntry() const { return this->prefixListEntry_ != nullptr;};
    void deletePrefixListEntry() { this->prefixListEntry_ = nullptr;};
    inline const vector<GetVpcPrefixListEntriesResponseBody::PrefixListEntry> & getPrefixListEntry() const { DARABONBA_PTR_GET_CONST(prefixListEntry_, vector<GetVpcPrefixListEntriesResponseBody::PrefixListEntry>) };
    inline vector<GetVpcPrefixListEntriesResponseBody::PrefixListEntry> getPrefixListEntry() { DARABONBA_PTR_GET(prefixListEntry_, vector<GetVpcPrefixListEntriesResponseBody::PrefixListEntry>) };
    inline GetVpcPrefixListEntriesResponseBody& setPrefixListEntry(const vector<GetVpcPrefixListEntriesResponseBody::PrefixListEntry> & prefixListEntry) { DARABONBA_PTR_SET_VALUE(prefixListEntry_, prefixListEntry) };
    inline GetVpcPrefixListEntriesResponseBody& setPrefixListEntry(vector<GetVpcPrefixListEntriesResponseBody::PrefixListEntry> && prefixListEntry) { DARABONBA_PTR_SET_RVALUE(prefixListEntry_, prefixListEntry) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVpcPrefixListEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetVpcPrefixListEntriesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries.
    shared_ptr<int64_t> count_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value indicates the token that is used for the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The information about the prefix list.
    shared_ptr<vector<GetVpcPrefixListEntriesResponseBody::PrefixListEntry>> prefixListEntry_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
