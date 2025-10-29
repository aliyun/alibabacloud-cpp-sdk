// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAQUALITYRESULTRULECHECKINGCONFIGTHRESHOLDS_HPP_
#define ALIBABACLOUD_MODELS_DATAQUALITYRESULTRULECHECKINGCONFIGTHRESHOLDS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DataQualityResultRuleCheckingConfigThresholdsCritical.hpp>
#include <alibabacloud/models/DataQualityResultRuleCheckingConfigThresholdsExpected.hpp>
#include <alibabacloud/models/DataQualityResultRuleCheckingConfigThresholdsWarned.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DataQualityResultRuleCheckingConfigThresholds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataQualityResultRuleCheckingConfigThresholds& obj) { 
      DARABONBA_PTR_TO_JSON(Critical, critical_);
      DARABONBA_PTR_TO_JSON(Expected, expected_);
      DARABONBA_PTR_TO_JSON(Warned, warned_);
    };
    friend void from_json(const Darabonba::Json& j, DataQualityResultRuleCheckingConfigThresholds& obj) { 
      DARABONBA_PTR_FROM_JSON(Critical, critical_);
      DARABONBA_PTR_FROM_JSON(Expected, expected_);
      DARABONBA_PTR_FROM_JSON(Warned, warned_);
    };
    DataQualityResultRuleCheckingConfigThresholds() = default ;
    DataQualityResultRuleCheckingConfigThresholds(const DataQualityResultRuleCheckingConfigThresholds &) = default ;
    DataQualityResultRuleCheckingConfigThresholds(DataQualityResultRuleCheckingConfigThresholds &&) = default ;
    DataQualityResultRuleCheckingConfigThresholds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataQualityResultRuleCheckingConfigThresholds() = default ;
    DataQualityResultRuleCheckingConfigThresholds& operator=(const DataQualityResultRuleCheckingConfigThresholds &) = default ;
    DataQualityResultRuleCheckingConfigThresholds& operator=(DataQualityResultRuleCheckingConfigThresholds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->critical_ == nullptr
        && return this->expected_ == nullptr && return this->warned_ == nullptr; };
    // critical Field Functions 
    bool hasCritical() const { return this->critical_ != nullptr;};
    void deleteCritical() { this->critical_ = nullptr;};
    inline const Models::DataQualityResultRuleCheckingConfigThresholdsCritical & critical() const { DARABONBA_PTR_GET_CONST(critical_, Models::DataQualityResultRuleCheckingConfigThresholdsCritical) };
    inline Models::DataQualityResultRuleCheckingConfigThresholdsCritical critical() { DARABONBA_PTR_GET(critical_, Models::DataQualityResultRuleCheckingConfigThresholdsCritical) };
    inline DataQualityResultRuleCheckingConfigThresholds& setCritical(const Models::DataQualityResultRuleCheckingConfigThresholdsCritical & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
    inline DataQualityResultRuleCheckingConfigThresholds& setCritical(Models::DataQualityResultRuleCheckingConfigThresholdsCritical && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


    // expected Field Functions 
    bool hasExpected() const { return this->expected_ != nullptr;};
    void deleteExpected() { this->expected_ = nullptr;};
    inline const Models::DataQualityResultRuleCheckingConfigThresholdsExpected & expected() const { DARABONBA_PTR_GET_CONST(expected_, Models::DataQualityResultRuleCheckingConfigThresholdsExpected) };
    inline Models::DataQualityResultRuleCheckingConfigThresholdsExpected expected() { DARABONBA_PTR_GET(expected_, Models::DataQualityResultRuleCheckingConfigThresholdsExpected) };
    inline DataQualityResultRuleCheckingConfigThresholds& setExpected(const Models::DataQualityResultRuleCheckingConfigThresholdsExpected & expected) { DARABONBA_PTR_SET_VALUE(expected_, expected) };
    inline DataQualityResultRuleCheckingConfigThresholds& setExpected(Models::DataQualityResultRuleCheckingConfigThresholdsExpected && expected) { DARABONBA_PTR_SET_RVALUE(expected_, expected) };


    // warned Field Functions 
    bool hasWarned() const { return this->warned_ != nullptr;};
    void deleteWarned() { this->warned_ = nullptr;};
    inline const Models::DataQualityResultRuleCheckingConfigThresholdsWarned & warned() const { DARABONBA_PTR_GET_CONST(warned_, Models::DataQualityResultRuleCheckingConfigThresholdsWarned) };
    inline Models::DataQualityResultRuleCheckingConfigThresholdsWarned warned() { DARABONBA_PTR_GET(warned_, Models::DataQualityResultRuleCheckingConfigThresholdsWarned) };
    inline DataQualityResultRuleCheckingConfigThresholds& setWarned(const Models::DataQualityResultRuleCheckingConfigThresholdsWarned & warned) { DARABONBA_PTR_SET_VALUE(warned_, warned) };
    inline DataQualityResultRuleCheckingConfigThresholds& setWarned(Models::DataQualityResultRuleCheckingConfigThresholdsWarned && warned) { DARABONBA_PTR_SET_RVALUE(warned_, warned) };


  protected:
    std::shared_ptr<Models::DataQualityResultRuleCheckingConfigThresholdsCritical> critical_ = nullptr;
    std::shared_ptr<Models::DataQualityResultRuleCheckingConfigThresholdsExpected> expected_ = nullptr;
    std::shared_ptr<Models::DataQualityResultRuleCheckingConfigThresholdsWarned> warned_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
