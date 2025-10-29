// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYRESULTSRESPONSEBODYPAGINGINFODATAQUALITYRESULTSRULECHECKINGCONFIGTHRESHOLDS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYRESULTSRESPONSEBODYPAGINGINFODATAQUALITYRESULTSRULECHECKINGCONFIGTHRESHOLDS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsCritical.hpp>
#include <alibabacloud/models/ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsExpected.hpp>
#include <alibabacloud/models/ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsWarned.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholds& obj) { 
      DARABONBA_PTR_TO_JSON(Critical, critical_);
      DARABONBA_PTR_TO_JSON(Expected, expected_);
      DARABONBA_PTR_TO_JSON(Warned, warned_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholds& obj) { 
      DARABONBA_PTR_FROM_JSON(Critical, critical_);
      DARABONBA_PTR_FROM_JSON(Expected, expected_);
      DARABONBA_PTR_FROM_JSON(Warned, warned_);
    };
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholds() = default ;
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholds(const ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholds &) = default ;
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholds(ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholds &&) = default ;
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholds() = default ;
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholds& operator=(const ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholds &) = default ;
    ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholds& operator=(ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->critical_ == nullptr
        && return this->expected_ == nullptr && return this->warned_ == nullptr; };
    // critical Field Functions 
    bool hasCritical() const { return this->critical_ != nullptr;};
    void deleteCritical() { this->critical_ = nullptr;};
    inline const Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsCritical & critical() const { DARABONBA_PTR_GET_CONST(critical_, Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsCritical) };
    inline Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsCritical critical() { DARABONBA_PTR_GET(critical_, Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsCritical) };
    inline ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholds& setCritical(const Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsCritical & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
    inline ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholds& setCritical(Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsCritical && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


    // expected Field Functions 
    bool hasExpected() const { return this->expected_ != nullptr;};
    void deleteExpected() { this->expected_ = nullptr;};
    inline const Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsExpected & expected() const { DARABONBA_PTR_GET_CONST(expected_, Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsExpected) };
    inline Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsExpected expected() { DARABONBA_PTR_GET(expected_, Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsExpected) };
    inline ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholds& setExpected(const Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsExpected & expected) { DARABONBA_PTR_SET_VALUE(expected_, expected) };
    inline ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholds& setExpected(Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsExpected && expected) { DARABONBA_PTR_SET_RVALUE(expected_, expected) };


    // warned Field Functions 
    bool hasWarned() const { return this->warned_ != nullptr;};
    void deleteWarned() { this->warned_ = nullptr;};
    inline const Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsWarned & warned() const { DARABONBA_PTR_GET_CONST(warned_, Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsWarned) };
    inline Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsWarned warned() { DARABONBA_PTR_GET(warned_, Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsWarned) };
    inline ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholds& setWarned(const Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsWarned & warned) { DARABONBA_PTR_SET_VALUE(warned_, warned) };
    inline ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholds& setWarned(Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsWarned && warned) { DARABONBA_PTR_SET_RVALUE(warned_, warned) };


  protected:
    // The threshold settings for critical alerts.
    std::shared_ptr<Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsCritical> critical_ = nullptr;
    // The expected threshold setting.
    std::shared_ptr<Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsExpected> expected_ = nullptr;
    // The threshold settings for normal alerts.
    std::shared_ptr<Models::ListDataQualityResultsResponseBodyPagingInfoDataQualityResultsRuleCheckingConfigThresholdsWarned> warned_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
