// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGATEVERIFYBILLINGPUBLICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYGATEVERIFYBILLINGPUBLICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class QueryGateVerifyBillingPublicResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGateVerifyBillingPublicResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AmountSum, amountSum_);
      DARABONBA_PTR_TO_JSON(SceneBillingList, sceneBillingList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGateVerifyBillingPublicResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AmountSum, amountSum_);
      DARABONBA_PTR_FROM_JSON(SceneBillingList, sceneBillingList_);
    };
    QueryGateVerifyBillingPublicResponseBodyData() = default ;
    QueryGateVerifyBillingPublicResponseBodyData(const QueryGateVerifyBillingPublicResponseBodyData &) = default ;
    QueryGateVerifyBillingPublicResponseBodyData(QueryGateVerifyBillingPublicResponseBodyData &&) = default ;
    QueryGateVerifyBillingPublicResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGateVerifyBillingPublicResponseBodyData() = default ;
    QueryGateVerifyBillingPublicResponseBodyData& operator=(const QueryGateVerifyBillingPublicResponseBodyData &) = default ;
    QueryGateVerifyBillingPublicResponseBodyData& operator=(QueryGateVerifyBillingPublicResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amountSum_ != nullptr
        && this->sceneBillingList_ != nullptr; };
    // amountSum Field Functions 
    bool hasAmountSum() const { return this->amountSum_ != nullptr;};
    void deleteAmountSum() { this->amountSum_ = nullptr;};
    inline string amountSum() const { DARABONBA_PTR_GET_DEFAULT(amountSum_, "") };
    inline QueryGateVerifyBillingPublicResponseBodyData& setAmountSum(string amountSum) { DARABONBA_PTR_SET_VALUE(amountSum_, amountSum) };


    // sceneBillingList Field Functions 
    bool hasSceneBillingList() const { return this->sceneBillingList_ != nullptr;};
    void deleteSceneBillingList() { this->sceneBillingList_ = nullptr;};
    inline const vector<Models::QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList> & sceneBillingList() const { DARABONBA_PTR_GET_CONST(sceneBillingList_, vector<Models::QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList>) };
    inline vector<Models::QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList> sceneBillingList() { DARABONBA_PTR_GET(sceneBillingList_, vector<Models::QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList>) };
    inline QueryGateVerifyBillingPublicResponseBodyData& setSceneBillingList(const vector<Models::QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList> & sceneBillingList) { DARABONBA_PTR_SET_VALUE(sceneBillingList_, sceneBillingList) };
    inline QueryGateVerifyBillingPublicResponseBodyData& setSceneBillingList(vector<Models::QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList> && sceneBillingList) { DARABONBA_PTR_SET_RVALUE(sceneBillingList_, sceneBillingList) };


  protected:
    // The fees generated for all verification services. Unitrogen: CNY.
    std::shared_ptr<string> amountSum_ = nullptr;
    // The details of fees.
    std::shared_ptr<vector<Models::QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList>> sceneBillingList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
