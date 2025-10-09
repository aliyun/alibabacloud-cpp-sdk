// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYRULESRESPONSEBODYPAGINGINFODATAQUALITYRULESCHECKINGCONFIGTHRESHOLDS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYRULESRESPONSEBODYPAGINGINFODATAQUALITYRULESCHECKINGCONFIGTHRESHOLDS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsCritical.hpp>
#include <alibabacloud/models/ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsExpected.hpp>
#include <alibabacloud/models/ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsWarned.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholds& obj) { 
      DARABONBA_PTR_TO_JSON(Critical, critical_);
      DARABONBA_PTR_TO_JSON(Expected, expected_);
      DARABONBA_PTR_TO_JSON(Warned, warned_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholds& obj) { 
      DARABONBA_PTR_FROM_JSON(Critical, critical_);
      DARABONBA_PTR_FROM_JSON(Expected, expected_);
      DARABONBA_PTR_FROM_JSON(Warned, warned_);
    };
    ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholds() = default ;
    ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholds(const ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholds &) = default ;
    ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholds(ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholds &&) = default ;
    ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholds() = default ;
    ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholds& operator=(const ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholds &) = default ;
    ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholds& operator=(ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->critical_ != nullptr
        && this->expected_ != nullptr && this->warned_ != nullptr; };
    // critical Field Functions 
    bool hasCritical() const { return this->critical_ != nullptr;};
    void deleteCritical() { this->critical_ = nullptr;};
    inline const Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsCritical & critical() const { DARABONBA_PTR_GET_CONST(critical_, Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsCritical) };
    inline Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsCritical critical() { DARABONBA_PTR_GET(critical_, Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsCritical) };
    inline ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholds& setCritical(const Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsCritical & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
    inline ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholds& setCritical(Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsCritical && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


    // expected Field Functions 
    bool hasExpected() const { return this->expected_ != nullptr;};
    void deleteExpected() { this->expected_ = nullptr;};
    inline const Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsExpected & expected() const { DARABONBA_PTR_GET_CONST(expected_, Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsExpected) };
    inline Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsExpected expected() { DARABONBA_PTR_GET(expected_, Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsExpected) };
    inline ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholds& setExpected(const Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsExpected & expected) { DARABONBA_PTR_SET_VALUE(expected_, expected) };
    inline ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholds& setExpected(Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsExpected && expected) { DARABONBA_PTR_SET_RVALUE(expected_, expected) };


    // warned Field Functions 
    bool hasWarned() const { return this->warned_ != nullptr;};
    void deleteWarned() { this->warned_ = nullptr;};
    inline const Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsWarned & warned() const { DARABONBA_PTR_GET_CONST(warned_, Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsWarned) };
    inline Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsWarned warned() { DARABONBA_PTR_GET(warned_, Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsWarned) };
    inline ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholds& setWarned(const Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsWarned & warned) { DARABONBA_PTR_SET_VALUE(warned_, warned) };
    inline ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholds& setWarned(Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsWarned && warned) { DARABONBA_PTR_SET_RVALUE(warned_, warned) };


  protected:
    // The threshold settings for critical alerts.
    std::shared_ptr<Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsCritical> critical_ = nullptr;
    // The expected threshold setting.
    std::shared_ptr<Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsExpected> expected_ = nullptr;
    // The threshold settings for normal alerts.
    std::shared_ptr<Models::ListDataQualityRulesResponseBodyPagingInfoDataQualityRulesCheckingConfigThresholdsWarned> warned_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
