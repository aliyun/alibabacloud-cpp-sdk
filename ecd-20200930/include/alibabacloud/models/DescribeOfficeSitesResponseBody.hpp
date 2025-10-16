// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOFFICESITESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOFFICESITESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOfficeSitesResponseBodyOfficeSites.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeOfficeSitesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOfficeSitesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OfficeSites, officeSites_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOfficeSitesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OfficeSites, officeSites_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeOfficeSitesResponseBody() = default ;
    DescribeOfficeSitesResponseBody(const DescribeOfficeSitesResponseBody &) = default ;
    DescribeOfficeSitesResponseBody(DescribeOfficeSitesResponseBody &&) = default ;
    DescribeOfficeSitesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOfficeSitesResponseBody() = default ;
    DescribeOfficeSitesResponseBody& operator=(const DescribeOfficeSitesResponseBody &) = default ;
    DescribeOfficeSitesResponseBody& operator=(DescribeOfficeSitesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->officeSites_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeOfficeSitesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officeSites Field Functions 
    bool hasOfficeSites() const { return this->officeSites_ != nullptr;};
    void deleteOfficeSites() { this->officeSites_ = nullptr;};
    inline const vector<DescribeOfficeSitesResponseBodyOfficeSites> & officeSites() const { DARABONBA_PTR_GET_CONST(officeSites_, vector<DescribeOfficeSitesResponseBodyOfficeSites>) };
    inline vector<DescribeOfficeSitesResponseBodyOfficeSites> officeSites() { DARABONBA_PTR_GET(officeSites_, vector<DescribeOfficeSitesResponseBodyOfficeSites>) };
    inline DescribeOfficeSitesResponseBody& setOfficeSites(const vector<DescribeOfficeSitesResponseBodyOfficeSites> & officeSites) { DARABONBA_PTR_SET_VALUE(officeSites_, officeSites) };
    inline DescribeOfficeSitesResponseBody& setOfficeSites(vector<DescribeOfficeSitesResponseBodyOfficeSites> && officeSites) { DARABONBA_PTR_SET_RVALUE(officeSites_, officeSites) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOfficeSitesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeOfficeSitesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The token that determines the start point of the next query. If this parameter is empty, all results are returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The office networks.
    std::shared_ptr<vector<DescribeOfficeSitesResponseBodyOfficeSites>> officeSites_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
