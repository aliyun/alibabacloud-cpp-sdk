// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEOVERVIEWRESPONSEBODYDATARISKOVERVIEW_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEOVERVIEWRESPONSEBODYDATARISKOVERVIEW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetResourceOverviewResponseBodyDataRiskOverview : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceOverviewResponseBodyDataRiskOverview& obj) { 
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(riskDetails, riskDetails_);
      DARABONBA_PTR_TO_JSON(riskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceOverviewResponseBodyDataRiskOverview& obj) { 
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(riskDetails, riskDetails_);
      DARABONBA_PTR_FROM_JSON(riskLevel, riskLevel_);
    };
    GetResourceOverviewResponseBodyDataRiskOverview() = default ;
    GetResourceOverviewResponseBodyDataRiskOverview(const GetResourceOverviewResponseBodyDataRiskOverview &) = default ;
    GetResourceOverviewResponseBodyDataRiskOverview(GetResourceOverviewResponseBodyDataRiskOverview &&) = default ;
    GetResourceOverviewResponseBodyDataRiskOverview(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceOverviewResponseBodyDataRiskOverview() = default ;
    GetResourceOverviewResponseBodyDataRiskOverview& operator=(const GetResourceOverviewResponseBodyDataRiskOverview &) = default ;
    GetResourceOverviewResponseBodyDataRiskOverview& operator=(GetResourceOverviewResponseBodyDataRiskOverview &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->riskDetails_ == nullptr && return this->riskLevel_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline GetResourceOverviewResponseBodyDataRiskOverview& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // riskDetails Field Functions 
    bool hasRiskDetails() const { return this->riskDetails_ != nullptr;};
    void deleteRiskDetails() { this->riskDetails_ = nullptr;};
    inline const vector<Models::GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails> & riskDetails() const { DARABONBA_PTR_GET_CONST(riskDetails_, vector<Models::GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails>) };
    inline vector<Models::GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails> riskDetails() { DARABONBA_PTR_GET(riskDetails_, vector<Models::GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails>) };
    inline GetResourceOverviewResponseBodyDataRiskOverview& setRiskDetails(const vector<Models::GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails> & riskDetails) { DARABONBA_PTR_SET_VALUE(riskDetails_, riskDetails) };
    inline GetResourceOverviewResponseBodyDataRiskOverview& setRiskDetails(vector<Models::GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails> && riskDetails) { DARABONBA_PTR_SET_RVALUE(riskDetails_, riskDetails) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline GetResourceOverviewResponseBodyDataRiskOverview& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    std::shared_ptr<string> count_ = nullptr;
    std::shared_ptr<vector<Models::GetResourceOverviewResponseBodyDataRiskOverviewRiskDetails>> riskDetails_ = nullptr;
    std::shared_ptr<string> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
