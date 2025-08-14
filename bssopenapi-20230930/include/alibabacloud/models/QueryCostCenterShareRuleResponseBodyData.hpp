// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOSTCENTERSHARERULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOSTCENTERSHARERULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryCostCenterShareRuleResponseBodyDataFromCostCenterShareRuleDetails.hpp>
#include <alibabacloud/models/QueryCostCenterShareRuleResponseBodyDataToCostCenterShareRuleDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class QueryCostCenterShareRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCostCenterShareRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FromCostCenterShareRuleDetails, fromCostCenterShareRuleDetails_);
      DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
      DARABONBA_PTR_TO_JSON(ShareRuleId, shareRuleId_);
      DARABONBA_PTR_TO_JSON(ShareRuleName, shareRuleName_);
      DARABONBA_PTR_TO_JSON(ShareRuleType, shareRuleType_);
      DARABONBA_PTR_TO_JSON(ToCostCenterShareRuleDetails, toCostCenterShareRuleDetails_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCostCenterShareRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FromCostCenterShareRuleDetails, fromCostCenterShareRuleDetails_);
      DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
      DARABONBA_PTR_FROM_JSON(ShareRuleId, shareRuleId_);
      DARABONBA_PTR_FROM_JSON(ShareRuleName, shareRuleName_);
      DARABONBA_PTR_FROM_JSON(ShareRuleType, shareRuleType_);
      DARABONBA_PTR_FROM_JSON(ToCostCenterShareRuleDetails, toCostCenterShareRuleDetails_);
    };
    QueryCostCenterShareRuleResponseBodyData() = default ;
    QueryCostCenterShareRuleResponseBodyData(const QueryCostCenterShareRuleResponseBodyData &) = default ;
    QueryCostCenterShareRuleResponseBodyData(QueryCostCenterShareRuleResponseBodyData &&) = default ;
    QueryCostCenterShareRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCostCenterShareRuleResponseBodyData() = default ;
    QueryCostCenterShareRuleResponseBodyData& operator=(const QueryCostCenterShareRuleResponseBodyData &) = default ;
    QueryCostCenterShareRuleResponseBodyData& operator=(QueryCostCenterShareRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fromCostCenterShareRuleDetails_ != nullptr
        && this->ownerAccountId_ != nullptr && this->shareRuleId_ != nullptr && this->shareRuleName_ != nullptr && this->shareRuleType_ != nullptr && this->toCostCenterShareRuleDetails_ != nullptr; };
    // fromCostCenterShareRuleDetails Field Functions 
    bool hasFromCostCenterShareRuleDetails() const { return this->fromCostCenterShareRuleDetails_ != nullptr;};
    void deleteFromCostCenterShareRuleDetails() { this->fromCostCenterShareRuleDetails_ = nullptr;};
    inline const vector<Models::QueryCostCenterShareRuleResponseBodyDataFromCostCenterShareRuleDetails> & fromCostCenterShareRuleDetails() const { DARABONBA_PTR_GET_CONST(fromCostCenterShareRuleDetails_, vector<Models::QueryCostCenterShareRuleResponseBodyDataFromCostCenterShareRuleDetails>) };
    inline vector<Models::QueryCostCenterShareRuleResponseBodyDataFromCostCenterShareRuleDetails> fromCostCenterShareRuleDetails() { DARABONBA_PTR_GET(fromCostCenterShareRuleDetails_, vector<Models::QueryCostCenterShareRuleResponseBodyDataFromCostCenterShareRuleDetails>) };
    inline QueryCostCenterShareRuleResponseBodyData& setFromCostCenterShareRuleDetails(const vector<Models::QueryCostCenterShareRuleResponseBodyDataFromCostCenterShareRuleDetails> & fromCostCenterShareRuleDetails) { DARABONBA_PTR_SET_VALUE(fromCostCenterShareRuleDetails_, fromCostCenterShareRuleDetails) };
    inline QueryCostCenterShareRuleResponseBodyData& setFromCostCenterShareRuleDetails(vector<Models::QueryCostCenterShareRuleResponseBodyDataFromCostCenterShareRuleDetails> && fromCostCenterShareRuleDetails) { DARABONBA_PTR_SET_RVALUE(fromCostCenterShareRuleDetails_, fromCostCenterShareRuleDetails) };


    // ownerAccountId Field Functions 
    bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
    void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
    inline int64_t ownerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
    inline QueryCostCenterShareRuleResponseBodyData& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


    // shareRuleId Field Functions 
    bool hasShareRuleId() const { return this->shareRuleId_ != nullptr;};
    void deleteShareRuleId() { this->shareRuleId_ = nullptr;};
    inline int64_t shareRuleId() const { DARABONBA_PTR_GET_DEFAULT(shareRuleId_, 0L) };
    inline QueryCostCenterShareRuleResponseBodyData& setShareRuleId(int64_t shareRuleId) { DARABONBA_PTR_SET_VALUE(shareRuleId_, shareRuleId) };


    // shareRuleName Field Functions 
    bool hasShareRuleName() const { return this->shareRuleName_ != nullptr;};
    void deleteShareRuleName() { this->shareRuleName_ = nullptr;};
    inline string shareRuleName() const { DARABONBA_PTR_GET_DEFAULT(shareRuleName_, "") };
    inline QueryCostCenterShareRuleResponseBodyData& setShareRuleName(string shareRuleName) { DARABONBA_PTR_SET_VALUE(shareRuleName_, shareRuleName) };


    // shareRuleType Field Functions 
    bool hasShareRuleType() const { return this->shareRuleType_ != nullptr;};
    void deleteShareRuleType() { this->shareRuleType_ = nullptr;};
    inline string shareRuleType() const { DARABONBA_PTR_GET_DEFAULT(shareRuleType_, "") };
    inline QueryCostCenterShareRuleResponseBodyData& setShareRuleType(string shareRuleType) { DARABONBA_PTR_SET_VALUE(shareRuleType_, shareRuleType) };


    // toCostCenterShareRuleDetails Field Functions 
    bool hasToCostCenterShareRuleDetails() const { return this->toCostCenterShareRuleDetails_ != nullptr;};
    void deleteToCostCenterShareRuleDetails() { this->toCostCenterShareRuleDetails_ = nullptr;};
    inline const vector<Models::QueryCostCenterShareRuleResponseBodyDataToCostCenterShareRuleDetails> & toCostCenterShareRuleDetails() const { DARABONBA_PTR_GET_CONST(toCostCenterShareRuleDetails_, vector<Models::QueryCostCenterShareRuleResponseBodyDataToCostCenterShareRuleDetails>) };
    inline vector<Models::QueryCostCenterShareRuleResponseBodyDataToCostCenterShareRuleDetails> toCostCenterShareRuleDetails() { DARABONBA_PTR_GET(toCostCenterShareRuleDetails_, vector<Models::QueryCostCenterShareRuleResponseBodyDataToCostCenterShareRuleDetails>) };
    inline QueryCostCenterShareRuleResponseBodyData& setToCostCenterShareRuleDetails(const vector<Models::QueryCostCenterShareRuleResponseBodyDataToCostCenterShareRuleDetails> & toCostCenterShareRuleDetails) { DARABONBA_PTR_SET_VALUE(toCostCenterShareRuleDetails_, toCostCenterShareRuleDetails) };
    inline QueryCostCenterShareRuleResponseBodyData& setToCostCenterShareRuleDetails(vector<Models::QueryCostCenterShareRuleResponseBodyDataToCostCenterShareRuleDetails> && toCostCenterShareRuleDetails) { DARABONBA_PTR_SET_RVALUE(toCostCenterShareRuleDetails_, toCostCenterShareRuleDetails) };


  protected:
    std::shared_ptr<vector<Models::QueryCostCenterShareRuleResponseBodyDataFromCostCenterShareRuleDetails>> fromCostCenterShareRuleDetails_ = nullptr;
    std::shared_ptr<int64_t> ownerAccountId_ = nullptr;
    std::shared_ptr<int64_t> shareRuleId_ = nullptr;
    std::shared_ptr<string> shareRuleName_ = nullptr;
    std::shared_ptr<string> shareRuleType_ = nullptr;
    std::shared_ptr<vector<Models::QueryCostCenterShareRuleResponseBodyDataToCostCenterShareRuleDetails>> toCostCenterShareRuleDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
