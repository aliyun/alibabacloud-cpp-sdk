// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKRISKSTATISTICSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKRISKSTATISTICSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCheckRiskStatisticsResponseBodyDataSubStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckRiskStatisticsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckRiskStatisticsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(HighWarningCount, highWarningCount_);
      DARABONBA_PTR_TO_JSON(LowWarningCount, lowWarningCount_);
      DARABONBA_PTR_TO_JSON(MediumWarningCount, mediumWarningCount_);
      DARABONBA_PTR_TO_JSON(PassCount, passCount_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(SubStatistics, subStatistics_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckRiskStatisticsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(HighWarningCount, highWarningCount_);
      DARABONBA_PTR_FROM_JSON(LowWarningCount, lowWarningCount_);
      DARABONBA_PTR_FROM_JSON(MediumWarningCount, mediumWarningCount_);
      DARABONBA_PTR_FROM_JSON(PassCount, passCount_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(SubStatistics, subStatistics_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetCheckRiskStatisticsResponseBodyData() = default ;
    GetCheckRiskStatisticsResponseBodyData(const GetCheckRiskStatisticsResponseBodyData &) = default ;
    GetCheckRiskStatisticsResponseBodyData(GetCheckRiskStatisticsResponseBodyData &&) = default ;
    GetCheckRiskStatisticsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckRiskStatisticsResponseBodyData() = default ;
    GetCheckRiskStatisticsResponseBodyData& operator=(const GetCheckRiskStatisticsResponseBodyData &) = default ;
    GetCheckRiskStatisticsResponseBodyData& operator=(GetCheckRiskStatisticsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->highWarningCount_ == nullptr
        && return this->lowWarningCount_ == nullptr && return this->mediumWarningCount_ == nullptr && return this->passCount_ == nullptr && return this->sceneName_ == nullptr && return this->subStatistics_ == nullptr
        && return this->totalCount_ == nullptr; };
    // highWarningCount Field Functions 
    bool hasHighWarningCount() const { return this->highWarningCount_ != nullptr;};
    void deleteHighWarningCount() { this->highWarningCount_ = nullptr;};
    inline int32_t highWarningCount() const { DARABONBA_PTR_GET_DEFAULT(highWarningCount_, 0) };
    inline GetCheckRiskStatisticsResponseBodyData& setHighWarningCount(int32_t highWarningCount) { DARABONBA_PTR_SET_VALUE(highWarningCount_, highWarningCount) };


    // lowWarningCount Field Functions 
    bool hasLowWarningCount() const { return this->lowWarningCount_ != nullptr;};
    void deleteLowWarningCount() { this->lowWarningCount_ = nullptr;};
    inline int32_t lowWarningCount() const { DARABONBA_PTR_GET_DEFAULT(lowWarningCount_, 0) };
    inline GetCheckRiskStatisticsResponseBodyData& setLowWarningCount(int32_t lowWarningCount) { DARABONBA_PTR_SET_VALUE(lowWarningCount_, lowWarningCount) };


    // mediumWarningCount Field Functions 
    bool hasMediumWarningCount() const { return this->mediumWarningCount_ != nullptr;};
    void deleteMediumWarningCount() { this->mediumWarningCount_ = nullptr;};
    inline int32_t mediumWarningCount() const { DARABONBA_PTR_GET_DEFAULT(mediumWarningCount_, 0) };
    inline GetCheckRiskStatisticsResponseBodyData& setMediumWarningCount(int32_t mediumWarningCount) { DARABONBA_PTR_SET_VALUE(mediumWarningCount_, mediumWarningCount) };


    // passCount Field Functions 
    bool hasPassCount() const { return this->passCount_ != nullptr;};
    void deletePassCount() { this->passCount_ = nullptr;};
    inline int32_t passCount() const { DARABONBA_PTR_GET_DEFAULT(passCount_, 0) };
    inline GetCheckRiskStatisticsResponseBodyData& setPassCount(int32_t passCount) { DARABONBA_PTR_SET_VALUE(passCount_, passCount) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline GetCheckRiskStatisticsResponseBodyData& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // subStatistics Field Functions 
    bool hasSubStatistics() const { return this->subStatistics_ != nullptr;};
    void deleteSubStatistics() { this->subStatistics_ = nullptr;};
    inline const vector<Models::GetCheckRiskStatisticsResponseBodyDataSubStatistics> & subStatistics() const { DARABONBA_PTR_GET_CONST(subStatistics_, vector<Models::GetCheckRiskStatisticsResponseBodyDataSubStatistics>) };
    inline vector<Models::GetCheckRiskStatisticsResponseBodyDataSubStatistics> subStatistics() { DARABONBA_PTR_GET(subStatistics_, vector<Models::GetCheckRiskStatisticsResponseBodyDataSubStatistics>) };
    inline GetCheckRiskStatisticsResponseBodyData& setSubStatistics(const vector<Models::GetCheckRiskStatisticsResponseBodyDataSubStatistics> & subStatistics) { DARABONBA_PTR_SET_VALUE(subStatistics_, subStatistics) };
    inline GetCheckRiskStatisticsResponseBodyData& setSubStatistics(vector<Models::GetCheckRiskStatisticsResponseBodyDataSubStatistics> && subStatistics) { DARABONBA_PTR_SET_RVALUE(subStatistics_, subStatistics) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetCheckRiskStatisticsResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of high-risk items.
    std::shared_ptr<int32_t> highWarningCount_ = nullptr;
    // The number of low-risk items.
    std::shared_ptr<int32_t> lowWarningCount_ = nullptr;
    // The number of medium-risk items.
    std::shared_ptr<int32_t> mediumWarningCount_ = nullptr;
    // The number of passed check items.
    std::shared_ptr<int32_t> passCount_ = nullptr;
    // The name of the risk scenario.
    std::shared_ptr<string> sceneName_ = nullptr;
    // The statistics on check items that are used in the risk scenario by baseline type.
    std::shared_ptr<vector<Models::GetCheckRiskStatisticsResponseBodyDataSubStatistics>> subStatistics_ = nullptr;
    // The total number of check items.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
