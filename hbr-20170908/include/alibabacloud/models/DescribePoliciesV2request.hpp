// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICIESV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICIESV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribePoliciesV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePoliciesV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePoliciesV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
    };
    DescribePoliciesV2Request() = default ;
    DescribePoliciesV2Request(const DescribePoliciesV2Request &) = default ;
    DescribePoliciesV2Request(DescribePoliciesV2Request &&) = default ;
    DescribePoliciesV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePoliciesV2Request() = default ;
    DescribePoliciesV2Request& operator=(const DescribePoliciesV2Request &) = default ;
    DescribePoliciesV2Request& operator=(DescribePoliciesV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->policyId_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribePoliciesV2Request& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePoliciesV2Request& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DescribePoliciesV2Request& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


  protected:
    // The number of results for each query.
    // 
    // Valid values: 10 to 100. Default value: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that is used to obtain the next page of backup policies.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the backup policy.
    std::shared_ptr<string> policyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
