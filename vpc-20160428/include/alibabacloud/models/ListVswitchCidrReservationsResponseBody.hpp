// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVSWITCHCIDRRESERVATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVSWITCHCIDRRESERVATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListVSwitchCidrReservationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVSwitchCidrReservationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VSwitchCidrReservations, vSwitchCidrReservations_);
    };
    friend void from_json(const Darabonba::Json& j, ListVSwitchCidrReservationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VSwitchCidrReservations, vSwitchCidrReservations_);
    };
    ListVSwitchCidrReservationsResponseBody() = default ;
    ListVSwitchCidrReservationsResponseBody(const ListVSwitchCidrReservationsResponseBody &) = default ;
    ListVSwitchCidrReservationsResponseBody(ListVSwitchCidrReservationsResponseBody &&) = default ;
    ListVSwitchCidrReservationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVSwitchCidrReservationsResponseBody() = default ;
    ListVSwitchCidrReservationsResponseBody& operator=(const ListVSwitchCidrReservationsResponseBody &) = default ;
    ListVSwitchCidrReservationsResponseBody& operator=(ListVSwitchCidrReservationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->vSwitchCidrReservations_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListVSwitchCidrReservationsResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVSwitchCidrReservationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVSwitchCidrReservationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListVSwitchCidrReservationsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vSwitchCidrReservations Field Functions 
    bool hasVSwitchCidrReservations() const { return this->vSwitchCidrReservations_ != nullptr;};
    void deleteVSwitchCidrReservations() { this->vSwitchCidrReservations_ = nullptr;};
    inline const vector<ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations> & vSwitchCidrReservations() const { DARABONBA_PTR_GET_CONST(vSwitchCidrReservations_, vector<ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations>) };
    inline vector<ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations> vSwitchCidrReservations() { DARABONBA_PTR_GET(vSwitchCidrReservations_, vector<ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations>) };
    inline ListVSwitchCidrReservationsResponseBody& setVSwitchCidrReservations(const vector<ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations> & vSwitchCidrReservations) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservations_, vSwitchCidrReservations) };
    inline ListVSwitchCidrReservationsResponseBody& setVSwitchCidrReservations(vector<ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations> && vSwitchCidrReservations) { DARABONBA_PTR_SET_RVALUE(vSwitchCidrReservations_, vSwitchCidrReservations) };


  protected:
    // The number of entries to return per page.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value is the token that determines the start point of the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // A list of reserved CIDR blocks.
    std::shared_ptr<vector<ListVSwitchCidrReservationsResponseBodyVSwitchCidrReservations>> vSwitchCidrReservations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
