// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVPCPREFIXLISTASSOCIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVPCPREFIXLISTASSOCIATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation.hpp>
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
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->nextToken_ == nullptr && return this->prefixListAssociation_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline GetVpcPrefixListAssociationsResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetVpcPrefixListAssociationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // prefixListAssociation Field Functions 
    bool hasPrefixListAssociation() const { return this->prefixListAssociation_ != nullptr;};
    void deletePrefixListAssociation() { this->prefixListAssociation_ = nullptr;};
    inline const vector<GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation> & prefixListAssociation() const { DARABONBA_PTR_GET_CONST(prefixListAssociation_, vector<GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation>) };
    inline vector<GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation> prefixListAssociation() { DARABONBA_PTR_GET(prefixListAssociation_, vector<GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation>) };
    inline GetVpcPrefixListAssociationsResponseBody& setPrefixListAssociation(const vector<GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation> & prefixListAssociation) { DARABONBA_PTR_SET_VALUE(prefixListAssociation_, prefixListAssociation) };
    inline GetVpcPrefixListAssociationsResponseBody& setPrefixListAssociation(vector<GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation> && prefixListAssociation) { DARABONBA_PTR_SET_RVALUE(prefixListAssociation_, prefixListAssociation) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVpcPrefixListAssociationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetVpcPrefixListAssociationsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries.
    std::shared_ptr<int64_t> count_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value is used to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The information about the network instances that are associated with the prefix list.
    std::shared_ptr<vector<GetVpcPrefixListAssociationsResponseBodyPrefixListAssociation>> prefixListAssociation_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
