// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCGRANTRULESTOECRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCGRANTRULESTOECRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpcGrantRulesToEcrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcGrantRulesToEcrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GrantRuleModels, grantRuleModels_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcGrantRulesToEcrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GrantRuleModels, grantRuleModels_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVpcGrantRulesToEcrResponseBody() = default ;
    DescribeVpcGrantRulesToEcrResponseBody(const DescribeVpcGrantRulesToEcrResponseBody &) = default ;
    DescribeVpcGrantRulesToEcrResponseBody(DescribeVpcGrantRulesToEcrResponseBody &&) = default ;
    DescribeVpcGrantRulesToEcrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcGrantRulesToEcrResponseBody() = default ;
    DescribeVpcGrantRulesToEcrResponseBody& operator=(const DescribeVpcGrantRulesToEcrResponseBody &) = default ;
    DescribeVpcGrantRulesToEcrResponseBody& operator=(DescribeVpcGrantRulesToEcrResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->grantRuleModels_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // grantRuleModels Field Functions 
    bool hasGrantRuleModels() const { return this->grantRuleModels_ != nullptr;};
    void deleteGrantRuleModels() { this->grantRuleModels_ = nullptr;};
    inline const vector<DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels> & grantRuleModels() const { DARABONBA_PTR_GET_CONST(grantRuleModels_, vector<DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels>) };
    inline vector<DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels> grantRuleModels() { DARABONBA_PTR_GET(grantRuleModels_, vector<DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels>) };
    inline DescribeVpcGrantRulesToEcrResponseBody& setGrantRuleModels(const vector<DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels> & grantRuleModels) { DARABONBA_PTR_SET_VALUE(grantRuleModels_, grantRuleModels) };
    inline DescribeVpcGrantRulesToEcrResponseBody& setGrantRuleModels(vector<DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels> && grantRuleModels) { DARABONBA_PTR_SET_RVALUE(grantRuleModels_, grantRuleModels) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeVpcGrantRulesToEcrResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcGrantRulesToEcrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeVpcGrantRulesToEcrResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The authorization information.
    std::shared_ptr<vector<DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels>> grantRuleModels_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, there is no next page.
    // *   ****
    std::shared_ptr<string> nextToken_ = nullptr;
    // The unique ID that Alibaba Cloud generates for the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of instances queried. If you specify the MaxResults and NextToken request parameters to perform a paged query, the value of the TotalCount response parameter is invalid.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
