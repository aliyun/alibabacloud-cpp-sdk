// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYCUSTOMSCRAPEJOBRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYCUSTOMSCRAPEJOBRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyCustomScrapeJobRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyCustomScrapeJobRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(customScrapeJobRules, customScrapeJobRules_);
      DARABONBA_PTR_TO_JSON(policyId, policyId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyCustomScrapeJobRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(customScrapeJobRules, customScrapeJobRules_);
      DARABONBA_PTR_FROM_JSON(policyId, policyId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListIntegrationPolicyCustomScrapeJobRulesResponseBody() = default ;
    ListIntegrationPolicyCustomScrapeJobRulesResponseBody(const ListIntegrationPolicyCustomScrapeJobRulesResponseBody &) = default ;
    ListIntegrationPolicyCustomScrapeJobRulesResponseBody(ListIntegrationPolicyCustomScrapeJobRulesResponseBody &&) = default ;
    ListIntegrationPolicyCustomScrapeJobRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyCustomScrapeJobRulesResponseBody() = default ;
    ListIntegrationPolicyCustomScrapeJobRulesResponseBody& operator=(const ListIntegrationPolicyCustomScrapeJobRulesResponseBody &) = default ;
    ListIntegrationPolicyCustomScrapeJobRulesResponseBody& operator=(ListIntegrationPolicyCustomScrapeJobRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->customScrapeJobRules_ != nullptr && this->policyId_ != nullptr && this->requestId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // customScrapeJobRules Field Functions 
    bool hasCustomScrapeJobRules() const { return this->customScrapeJobRules_ != nullptr;};
    void deleteCustomScrapeJobRules() { this->customScrapeJobRules_ = nullptr;};
    inline const vector<ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules> & customScrapeJobRules() const { DARABONBA_PTR_GET_CONST(customScrapeJobRules_, vector<ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules>) };
    inline vector<ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules> customScrapeJobRules() { DARABONBA_PTR_GET(customScrapeJobRules_, vector<ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules>) };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBody& setCustomScrapeJobRules(const vector<ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules> & customScrapeJobRules) { DARABONBA_PTR_SET_VALUE(customScrapeJobRules_, customScrapeJobRules) };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBody& setCustomScrapeJobRules(vector<ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules> && customScrapeJobRules) { DARABONBA_PTR_SET_RVALUE(customScrapeJobRules_, customScrapeJobRules) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBody& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntegrationPolicyCustomScrapeJobRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<vector<ListIntegrationPolicyCustomScrapeJobRulesResponseBodyCustomScrapeJobRules>> customScrapeJobRules_ = nullptr;
    std::shared_ptr<string> policyId_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
