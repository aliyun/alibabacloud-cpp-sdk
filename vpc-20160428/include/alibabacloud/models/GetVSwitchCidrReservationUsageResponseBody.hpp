// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVSWITCHCIDRRESERVATIONUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVSWITCHCIDRRESERVATIONUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetVSwitchCidrReservationUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVSwitchCidrReservationUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CidrReservationUsages, cidrReservationUsages_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetVSwitchCidrReservationUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrReservationUsages, cidrReservationUsages_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetVSwitchCidrReservationUsageResponseBody() = default ;
    GetVSwitchCidrReservationUsageResponseBody(const GetVSwitchCidrReservationUsageResponseBody &) = default ;
    GetVSwitchCidrReservationUsageResponseBody(GetVSwitchCidrReservationUsageResponseBody &&) = default ;
    GetVSwitchCidrReservationUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVSwitchCidrReservationUsageResponseBody() = default ;
    GetVSwitchCidrReservationUsageResponseBody& operator=(const GetVSwitchCidrReservationUsageResponseBody &) = default ;
    GetVSwitchCidrReservationUsageResponseBody& operator=(GetVSwitchCidrReservationUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrReservationUsages_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // cidrReservationUsages Field Functions 
    bool hasCidrReservationUsages() const { return this->cidrReservationUsages_ != nullptr;};
    void deleteCidrReservationUsages() { this->cidrReservationUsages_ = nullptr;};
    inline const vector<GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages> & cidrReservationUsages() const { DARABONBA_PTR_GET_CONST(cidrReservationUsages_, vector<GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages>) };
    inline vector<GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages> cidrReservationUsages() { DARABONBA_PTR_GET(cidrReservationUsages_, vector<GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages>) };
    inline GetVSwitchCidrReservationUsageResponseBody& setCidrReservationUsages(const vector<GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages> & cidrReservationUsages) { DARABONBA_PTR_SET_VALUE(cidrReservationUsages_, cidrReservationUsages) };
    inline GetVSwitchCidrReservationUsageResponseBody& setCidrReservationUsages(vector<GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages> && cidrReservationUsages) { DARABONBA_PTR_SET_RVALUE(cidrReservationUsages_, cidrReservationUsages) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline GetVSwitchCidrReservationUsageResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetVSwitchCidrReservationUsageResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVSwitchCidrReservationUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetVSwitchCidrReservationUsageResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A list of reserved CIDR blocks that are in use.
    std::shared_ptr<vector<GetVSwitchCidrReservationUsageResponseBodyCidrReservationUsages>> cidrReservationUsages_ = nullptr;
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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
