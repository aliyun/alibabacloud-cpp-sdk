// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENTERPOLICYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENTERPOLICYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCenterPolicyListResponseBodyDescribePolicyGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeCenterPolicyListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenterPolicyListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DescribePolicyGroups, describePolicyGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenterPolicyListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DescribePolicyGroups, describePolicyGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCenterPolicyListResponseBody() = default ;
    DescribeCenterPolicyListResponseBody(const DescribeCenterPolicyListResponseBody &) = default ;
    DescribeCenterPolicyListResponseBody(DescribeCenterPolicyListResponseBody &&) = default ;
    DescribeCenterPolicyListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenterPolicyListResponseBody() = default ;
    DescribeCenterPolicyListResponseBody& operator=(const DescribeCenterPolicyListResponseBody &) = default ;
    DescribeCenterPolicyListResponseBody& operator=(DescribeCenterPolicyListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->describePolicyGroups_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // describePolicyGroups Field Functions 
    bool hasDescribePolicyGroups() const { return this->describePolicyGroups_ != nullptr;};
    void deleteDescribePolicyGroups() { this->describePolicyGroups_ = nullptr;};
    inline const vector<DescribeCenterPolicyListResponseBodyDescribePolicyGroups> & describePolicyGroups() const { DARABONBA_PTR_GET_CONST(describePolicyGroups_, vector<DescribeCenterPolicyListResponseBodyDescribePolicyGroups>) };
    inline vector<DescribeCenterPolicyListResponseBodyDescribePolicyGroups> describePolicyGroups() { DARABONBA_PTR_GET(describePolicyGroups_, vector<DescribeCenterPolicyListResponseBodyDescribePolicyGroups>) };
    inline DescribeCenterPolicyListResponseBody& setDescribePolicyGroups(const vector<DescribeCenterPolicyListResponseBodyDescribePolicyGroups> & describePolicyGroups) { DARABONBA_PTR_SET_VALUE(describePolicyGroups_, describePolicyGroups) };
    inline DescribeCenterPolicyListResponseBody& setDescribePolicyGroups(vector<DescribeCenterPolicyListResponseBodyDescribePolicyGroups> && describePolicyGroups) { DARABONBA_PTR_SET_RVALUE(describePolicyGroups_, describePolicyGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCenterPolicyListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCenterPolicyListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cloud computer policies.
    std::shared_ptr<vector<DescribeCenterPolicyListResponseBodyDescribePolicyGroups>> describePolicyGroups_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
