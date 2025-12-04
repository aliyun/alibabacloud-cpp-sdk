// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGOVERNANCEMETRICSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETGOVERNANCEMETRICSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetGovernanceMetricsResponseBodyDataGovernanceMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetGovernanceMetricsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGovernanceMetricsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(GovernanceMetrics, governanceMetrics_);
    };
    friend void from_json(const Darabonba::Json& j, GetGovernanceMetricsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(GovernanceMetrics, governanceMetrics_);
    };
    GetGovernanceMetricsResponseBodyData() = default ;
    GetGovernanceMetricsResponseBodyData(const GetGovernanceMetricsResponseBodyData &) = default ;
    GetGovernanceMetricsResponseBodyData(GetGovernanceMetricsResponseBodyData &&) = default ;
    GetGovernanceMetricsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGovernanceMetricsResponseBodyData() = default ;
    GetGovernanceMetricsResponseBodyData& operator=(const GetGovernanceMetricsResponseBodyData &) = default ;
    GetGovernanceMetricsResponseBodyData& operator=(GetGovernanceMetricsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->governanceMetrics_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetGovernanceMetricsResponseBodyData& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // governanceMetrics Field Functions 
    bool hasGovernanceMetrics() const { return this->governanceMetrics_ != nullptr;};
    void deleteGovernanceMetrics() { this->governanceMetrics_ = nullptr;};
    inline const vector<Models::GetGovernanceMetricsResponseBodyDataGovernanceMetrics> & governanceMetrics() const { DARABONBA_PTR_GET_CONST(governanceMetrics_, vector<Models::GetGovernanceMetricsResponseBodyDataGovernanceMetrics>) };
    inline vector<Models::GetGovernanceMetricsResponseBodyDataGovernanceMetrics> governanceMetrics() { DARABONBA_PTR_GET(governanceMetrics_, vector<Models::GetGovernanceMetricsResponseBodyDataGovernanceMetrics>) };
    inline GetGovernanceMetricsResponseBodyData& setGovernanceMetrics(const vector<Models::GetGovernanceMetricsResponseBodyDataGovernanceMetrics> & governanceMetrics) { DARABONBA_PTR_SET_VALUE(governanceMetrics_, governanceMetrics) };
    inline GetGovernanceMetricsResponseBodyData& setGovernanceMetrics(vector<Models::GetGovernanceMetricsResponseBodyDataGovernanceMetrics> && governanceMetrics) { DARABONBA_PTR_SET_RVALUE(governanceMetrics_, governanceMetrics) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
    std::shared_ptr<vector<Models::GetGovernanceMetricsResponseBodyDataGovernanceMetrics>> governanceMetrics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
