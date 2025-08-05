// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLV2ROUTEPOLICYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLV2ROUTEPOLICYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTrFirewallV2RoutePolicyListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrFirewallV2RoutePolicyListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TrFirewallRoutePolicies, trFirewallRoutePolicies_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrFirewallV2RoutePolicyListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TrFirewallRoutePolicies, trFirewallRoutePolicies_);
    };
    DescribeTrFirewallV2RoutePolicyListResponseBody() = default ;
    DescribeTrFirewallV2RoutePolicyListResponseBody(const DescribeTrFirewallV2RoutePolicyListResponseBody &) = default ;
    DescribeTrFirewallV2RoutePolicyListResponseBody(DescribeTrFirewallV2RoutePolicyListResponseBody &&) = default ;
    DescribeTrFirewallV2RoutePolicyListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrFirewallV2RoutePolicyListResponseBody() = default ;
    DescribeTrFirewallV2RoutePolicyListResponseBody& operator=(const DescribeTrFirewallV2RoutePolicyListResponseBody &) = default ;
    DescribeTrFirewallV2RoutePolicyListResponseBody& operator=(DescribeTrFirewallV2RoutePolicyListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->totalCount_ != nullptr && this->trFirewallRoutePolicies_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTrFirewallV2RoutePolicyListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeTrFirewallV2RoutePolicyListResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // trFirewallRoutePolicies Field Functions 
    bool hasTrFirewallRoutePolicies() const { return this->trFirewallRoutePolicies_ != nullptr;};
    void deleteTrFirewallRoutePolicies() { this->trFirewallRoutePolicies_ = nullptr;};
    inline const vector<DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies> & trFirewallRoutePolicies() const { DARABONBA_PTR_GET_CONST(trFirewallRoutePolicies_, vector<DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies>) };
    inline vector<DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies> trFirewallRoutePolicies() { DARABONBA_PTR_GET(trFirewallRoutePolicies_, vector<DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies>) };
    inline DescribeTrFirewallV2RoutePolicyListResponseBody& setTrFirewallRoutePolicies(const vector<DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies> & trFirewallRoutePolicies) { DARABONBA_PTR_SET_VALUE(trFirewallRoutePolicies_, trFirewallRoutePolicies) };
    inline DescribeTrFirewallV2RoutePolicyListResponseBody& setTrFirewallRoutePolicies(vector<DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies> && trFirewallRoutePolicies) { DARABONBA_PTR_SET_RVALUE(trFirewallRoutePolicies_, trFirewallRoutePolicies) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
    // The routing policies.
    std::shared_ptr<vector<DescribeTrFirewallV2RoutePolicyListResponseBodyTrFirewallRoutePolicies>> trFirewallRoutePolicies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
