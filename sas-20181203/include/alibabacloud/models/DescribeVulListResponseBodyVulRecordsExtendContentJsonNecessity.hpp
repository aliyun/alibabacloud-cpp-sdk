// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULLISTRESPONSEBODYVULRECORDSEXTENDCONTENTJSONNECESSITY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULLISTRESPONSEBODYVULRECORDSEXTENDCONTENTJSONNECESSITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity& obj) { 
      DARABONBA_PTR_TO_JSON(Assets_factor, assetsFactor_);
      DARABONBA_PTR_TO_JSON(Cvss_factor, cvssFactor_);
      DARABONBA_PTR_TO_JSON(Enviroment_factor, enviromentFactor_);
      DARABONBA_PTR_TO_JSON(Is_calc, isCalc_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Time_factor, timeFactor_);
      DARABONBA_PTR_TO_JSON(Total_score, totalScore_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity& obj) { 
      DARABONBA_PTR_FROM_JSON(Assets_factor, assetsFactor_);
      DARABONBA_PTR_FROM_JSON(Cvss_factor, cvssFactor_);
      DARABONBA_PTR_FROM_JSON(Enviroment_factor, enviromentFactor_);
      DARABONBA_PTR_FROM_JSON(Is_calc, isCalc_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Time_factor, timeFactor_);
      DARABONBA_PTR_FROM_JSON(Total_score, totalScore_);
    };
    DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity() = default ;
    DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity(const DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity &) = default ;
    DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity(DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity &&) = default ;
    DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity() = default ;
    DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity& operator=(const DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity &) = default ;
    DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity& operator=(DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetsFactor_ == nullptr
        && return this->cvssFactor_ == nullptr && return this->enviromentFactor_ == nullptr && return this->isCalc_ == nullptr && return this->status_ == nullptr && return this->timeFactor_ == nullptr
        && return this->totalScore_ == nullptr; };
    // assetsFactor Field Functions 
    bool hasAssetsFactor() const { return this->assetsFactor_ != nullptr;};
    void deleteAssetsFactor() { this->assetsFactor_ = nullptr;};
    inline string assetsFactor() const { DARABONBA_PTR_GET_DEFAULT(assetsFactor_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity& setAssetsFactor(string assetsFactor) { DARABONBA_PTR_SET_VALUE(assetsFactor_, assetsFactor) };


    // cvssFactor Field Functions 
    bool hasCvssFactor() const { return this->cvssFactor_ != nullptr;};
    void deleteCvssFactor() { this->cvssFactor_ = nullptr;};
    inline string cvssFactor() const { DARABONBA_PTR_GET_DEFAULT(cvssFactor_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity& setCvssFactor(string cvssFactor) { DARABONBA_PTR_SET_VALUE(cvssFactor_, cvssFactor) };


    // enviromentFactor Field Functions 
    bool hasEnviromentFactor() const { return this->enviromentFactor_ != nullptr;};
    void deleteEnviromentFactor() { this->enviromentFactor_ = nullptr;};
    inline string enviromentFactor() const { DARABONBA_PTR_GET_DEFAULT(enviromentFactor_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity& setEnviromentFactor(string enviromentFactor) { DARABONBA_PTR_SET_VALUE(enviromentFactor_, enviromentFactor) };


    // isCalc Field Functions 
    bool hasIsCalc() const { return this->isCalc_ != nullptr;};
    void deleteIsCalc() { this->isCalc_ = nullptr;};
    inline string isCalc() const { DARABONBA_PTR_GET_DEFAULT(isCalc_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity& setIsCalc(string isCalc) { DARABONBA_PTR_SET_VALUE(isCalc_, isCalc) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeFactor Field Functions 
    bool hasTimeFactor() const { return this->timeFactor_ != nullptr;};
    void deleteTimeFactor() { this->timeFactor_ = nullptr;};
    inline string timeFactor() const { DARABONBA_PTR_GET_DEFAULT(timeFactor_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity& setTimeFactor(string timeFactor) { DARABONBA_PTR_SET_VALUE(timeFactor_, timeFactor) };


    // totalScore Field Functions 
    bool hasTotalScore() const { return this->totalScore_ != nullptr;};
    void deleteTotalScore() { this->totalScore_ = nullptr;};
    inline string totalScore() const { DARABONBA_PTR_GET_DEFAULT(totalScore_, "") };
    inline DescribeVulListResponseBodyVulRecordsExtendContentJsonNecessity& setTotalScore(string totalScore) { DARABONBA_PTR_SET_VALUE(totalScore_, totalScore) };


  protected:
    // The asset importance score. Valid values:
    // 
    // *   **2**: important asset.
    // *   **1**: common asset.
    // *   **0**: test asset.
    std::shared_ptr<string> assetsFactor_ = nullptr;
    // The Common Vulnerability Scoring System (CVSS) score.
    std::shared_ptr<string> cvssFactor_ = nullptr;
    // The environment score.
    std::shared_ptr<string> enviromentFactor_ = nullptr;
    // Indicates whether the vulnerability priority score is calculated. Valid values:
    // 
    // *   **0**: no.
    // *   **1**: yes.
    std::shared_ptr<string> isCalc_ = nullptr;
    // The status of the vulnerability priority score. Valid values:
    // 
    // *   **none**: No score is generated.
    // *   **pending**: The score is pending calculation.
    // *   **normal**: The calculation is normal.
    std::shared_ptr<string> status_ = nullptr;
    // The time score.
    std::shared_ptr<string> timeFactor_ = nullptr;
    // The vulnerability priority score.
    // 
    // The following list describes scores and related fixing suggestions:
    // 
    // *   If the score is from **13.5 to 15**, the vulnerability is a high-risk vulnerability. You must fix the vulnerability at the earliest opportunity.
    // *   If the score is **greater than or equal to 7 but less than 13.5**, the vulnerability is a medium-risk vulnerability. You can fix the vulnerability at your convenience.
    // *   If the score is **less than 7**, the vulnerability is a low-risk vulnerability. You can ignore the vulnerability.
    std::shared_ptr<string> totalScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
