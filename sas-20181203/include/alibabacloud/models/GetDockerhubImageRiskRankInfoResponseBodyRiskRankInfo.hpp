// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCKERHUBIMAGERISKRANKINFORESPONSEBODYRISKRANKINFO_HPP_
#define ALIBABACLOUD_MODELS_GETDOCKERHUBIMAGERISKRANKINFORESPONSEBODYRISKRANKINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline.hpp>
#include <alibabacloud/models/GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoVulAsap.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Baseline, baseline_);
      DARABONBA_PTR_TO_JSON(VulAsap, vulAsap_);
    };
    friend void from_json(const Darabonba::Json& j, GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Baseline, baseline_);
      DARABONBA_PTR_FROM_JSON(VulAsap, vulAsap_);
    };
    GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo() = default ;
    GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo(const GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo &) = default ;
    GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo(GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo &&) = default ;
    GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo() = default ;
    GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo& operator=(const GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo &) = default ;
    GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo& operator=(GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseline_ != nullptr
        && this->vulAsap_ != nullptr; };
    // baseline Field Functions 
    bool hasBaseline() const { return this->baseline_ != nullptr;};
    void deleteBaseline() { this->baseline_ = nullptr;};
    inline const vector<Models::GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline> & baseline() const { DARABONBA_PTR_GET_CONST(baseline_, vector<Models::GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline>) };
    inline vector<Models::GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline> baseline() { DARABONBA_PTR_GET(baseline_, vector<Models::GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline>) };
    inline GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo& setBaseline(const vector<Models::GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline> & baseline) { DARABONBA_PTR_SET_VALUE(baseline_, baseline) };
    inline GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo& setBaseline(vector<Models::GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline> && baseline) { DARABONBA_PTR_SET_RVALUE(baseline_, baseline) };


    // vulAsap Field Functions 
    bool hasVulAsap() const { return this->vulAsap_ != nullptr;};
    void deleteVulAsap() { this->vulAsap_ = nullptr;};
    inline const vector<Models::GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoVulAsap> & vulAsap() const { DARABONBA_PTR_GET_CONST(vulAsap_, vector<Models::GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoVulAsap>) };
    inline vector<Models::GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoVulAsap> vulAsap() { DARABONBA_PTR_GET(vulAsap_, vector<Models::GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoVulAsap>) };
    inline GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo& setVulAsap(const vector<Models::GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoVulAsap> & vulAsap) { DARABONBA_PTR_SET_VALUE(vulAsap_, vulAsap) };
    inline GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfo& setVulAsap(vector<Models::GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoVulAsap> && vulAsap) { DARABONBA_PTR_SET_RVALUE(vulAsap_, vulAsap) };


  protected:
    // The baseline risks.
    std::shared_ptr<vector<Models::GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoBaseline>> baseline_ = nullptr;
    // The risk information of high-risk vulnerabilities.
    std::shared_ptr<vector<Models::GetDockerhubImageRiskRankInfoResponseBodyRiskRankInfoVulAsap>> vulAsap_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
