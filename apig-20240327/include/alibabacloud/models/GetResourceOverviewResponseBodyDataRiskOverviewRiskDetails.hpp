// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEOVERVIEWRESPONSEBODYDATARISKOVERVIEWRISKDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEOVERVIEWRESPONSEBODYDATARISKOVERVIEWRISKDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(gatewayName, gatewayName_);
      DARABONBA_PTR_TO_JSON(riskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(riskNames, riskNames_);
      DARABONBA_PTR_TO_JSON(score, score_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(gatewayName, gatewayName_);
      DARABONBA_PTR_FROM_JSON(riskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(riskNames, riskNames_);
      DARABONBA_PTR_FROM_JSON(score, score_);
    };
    GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails() = default ;
    GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails(const GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails &) = default ;
    GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails(GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails &&) = default ;
    GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails() = default ;
    GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails& operator=(const GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails &) = default ;
    GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails& operator=(GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayId_ == nullptr
        && return this->gatewayName_ == nullptr && return this->riskLevel_ == nullptr && return this->riskNames_ == nullptr && return this->score_ == nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayName Field Functions 
    bool hasGatewayName() const { return this->gatewayName_ != nullptr;};
    void deleteGatewayName() { this->gatewayName_ = nullptr;};
    inline string gatewayName() const { DARABONBA_PTR_GET_DEFAULT(gatewayName_, "") };
    inline GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails& setGatewayName(string gatewayName) { DARABONBA_PTR_SET_VALUE(gatewayName_, gatewayName) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // riskNames Field Functions 
    bool hasRiskNames() const { return this->riskNames_ != nullptr;};
    void deleteRiskNames() { this->riskNames_ = nullptr;};
    inline const vector<string> & riskNames() const { DARABONBA_PTR_GET_CONST(riskNames_, vector<string>) };
    inline vector<string> riskNames() { DARABONBA_PTR_GET(riskNames_, vector<string>) };
    inline GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails& setRiskNames(const vector<string> & riskNames) { DARABONBA_PTR_SET_VALUE(riskNames_, riskNames) };
    inline GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails& setRiskNames(vector<string> && riskNames) { DARABONBA_PTR_SET_RVALUE(riskNames_, riskNames) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline string score() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
    inline GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


  protected:
    std::shared_ptr<string> gatewayId_ = nullptr;
    std::shared_ptr<string> gatewayName_ = nullptr;
    std::shared_ptr<string> riskLevel_ = nullptr;
    std::shared_ptr<vector<string>> riskNames_ = nullptr;
    std::shared_ptr<string> score_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
