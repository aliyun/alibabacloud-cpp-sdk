// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPCPREFIXLISTENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVPCPREFIXLISTENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVpcPrefixListEntriesResponseBodyPrefixListEntry.hpp>
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
    virtual bool empty() const override { this->count_ != nullptr
        && this->nextToken_ != nullptr && this->prefixListEntry_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline GetVpcPrefixListEntriesResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetVpcPrefixListEntriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // prefixListEntry Field Functions 
    bool hasPrefixListEntry() const { return this->prefixListEntry_ != nullptr;};
    void deletePrefixListEntry() { this->prefixListEntry_ = nullptr;};
    inline const vector<GetVpcPrefixListEntriesResponseBodyPrefixListEntry> & prefixListEntry() const { DARABONBA_PTR_GET_CONST(prefixListEntry_, vector<GetVpcPrefixListEntriesResponseBodyPrefixListEntry>) };
    inline vector<GetVpcPrefixListEntriesResponseBodyPrefixListEntry> prefixListEntry() { DARABONBA_PTR_GET(prefixListEntry_, vector<GetVpcPrefixListEntriesResponseBodyPrefixListEntry>) };
    inline GetVpcPrefixListEntriesResponseBody& setPrefixListEntry(const vector<GetVpcPrefixListEntriesResponseBodyPrefixListEntry> & prefixListEntry) { DARABONBA_PTR_SET_VALUE(prefixListEntry_, prefixListEntry) };
    inline GetVpcPrefixListEntriesResponseBody& setPrefixListEntry(vector<GetVpcPrefixListEntriesResponseBodyPrefixListEntry> && prefixListEntry) { DARABONBA_PTR_SET_RVALUE(prefixListEntry_, prefixListEntry) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVpcPrefixListEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetVpcPrefixListEntriesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries.
    std::shared_ptr<int64_t> count_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value indicates the token that is used for the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The information about the prefix list.
    std::shared_ptr<vector<GetVpcPrefixListEntriesResponseBodyPrefixListEntry>> prefixListEntry_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
