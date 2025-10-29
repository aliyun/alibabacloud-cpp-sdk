// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYRULEREQUESTCHECKINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYRULEREQUESTCHECKINGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateDataQualityRuleRequestCheckingConfigThresholds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityRuleRequestCheckingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityRuleRequestCheckingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ReferencedSamplesFilter, referencedSamplesFilter_);
      DARABONBA_PTR_TO_JSON(Thresholds, thresholds_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityRuleRequestCheckingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ReferencedSamplesFilter, referencedSamplesFilter_);
      DARABONBA_PTR_FROM_JSON(Thresholds, thresholds_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateDataQualityRuleRequestCheckingConfig() = default ;
    UpdateDataQualityRuleRequestCheckingConfig(const UpdateDataQualityRuleRequestCheckingConfig &) = default ;
    UpdateDataQualityRuleRequestCheckingConfig(UpdateDataQualityRuleRequestCheckingConfig &&) = default ;
    UpdateDataQualityRuleRequestCheckingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityRuleRequestCheckingConfig() = default ;
    UpdateDataQualityRuleRequestCheckingConfig& operator=(const UpdateDataQualityRuleRequestCheckingConfig &) = default ;
    UpdateDataQualityRuleRequestCheckingConfig& operator=(UpdateDataQualityRuleRequestCheckingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->referencedSamplesFilter_ == nullptr
        && return this->thresholds_ == nullptr && return this->type_ == nullptr; };
    // referencedSamplesFilter Field Functions 
    bool hasReferencedSamplesFilter() const { return this->referencedSamplesFilter_ != nullptr;};
    void deleteReferencedSamplesFilter() { this->referencedSamplesFilter_ = nullptr;};
    inline string referencedSamplesFilter() const { DARABONBA_PTR_GET_DEFAULT(referencedSamplesFilter_, "") };
    inline UpdateDataQualityRuleRequestCheckingConfig& setReferencedSamplesFilter(string referencedSamplesFilter) { DARABONBA_PTR_SET_VALUE(referencedSamplesFilter_, referencedSamplesFilter) };


    // thresholds Field Functions 
    bool hasThresholds() const { return this->thresholds_ != nullptr;};
    void deleteThresholds() { this->thresholds_ = nullptr;};
    inline const Models::UpdateDataQualityRuleRequestCheckingConfigThresholds & thresholds() const { DARABONBA_PTR_GET_CONST(thresholds_, Models::UpdateDataQualityRuleRequestCheckingConfigThresholds) };
    inline Models::UpdateDataQualityRuleRequestCheckingConfigThresholds thresholds() { DARABONBA_PTR_GET(thresholds_, Models::UpdateDataQualityRuleRequestCheckingConfigThresholds) };
    inline UpdateDataQualityRuleRequestCheckingConfig& setThresholds(const Models::UpdateDataQualityRuleRequestCheckingConfigThresholds & thresholds) { DARABONBA_PTR_SET_VALUE(thresholds_, thresholds) };
    inline UpdateDataQualityRuleRequestCheckingConfig& setThresholds(Models::UpdateDataQualityRuleRequestCheckingConfigThresholds && thresholds) { DARABONBA_PTR_SET_RVALUE(thresholds_, thresholds) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateDataQualityRuleRequestCheckingConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The method that is used to query the referenced samples. To obtain some types of thresholds, you need to query reference values. In this example, an expression is used to specify the query method of referenced samples.
    std::shared_ptr<string> referencedSamplesFilter_ = nullptr;
    // The threshold settings.
    std::shared_ptr<Models::UpdateDataQualityRuleRequestCheckingConfigThresholds> thresholds_ = nullptr;
    // The threshold calculation method. Valid values:
    // 
    // *   Fixed
    // *   Fluctation
    // *   FluctationDiscreate
    // *   Auto
    // *   Average
    // *   Variance
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
