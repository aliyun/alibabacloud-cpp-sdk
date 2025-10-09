// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYRULERESPONSEBODYDATAQUALITYRULECHECKINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYRULERESPONSEBODYDATAQUALITYRULECHECKINGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ReferencedSamplesFilter, referencedSamplesFilter_);
      DARABONBA_PTR_TO_JSON(Thresholds, thresholds_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ReferencedSamplesFilter, referencedSamplesFilter_);
      DARABONBA_PTR_FROM_JSON(Thresholds, thresholds_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfig() = default ;
    GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfig(const GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfig &) = default ;
    GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfig(GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfig &&) = default ;
    GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfig() = default ;
    GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfig& operator=(const GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfig &) = default ;
    GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfig& operator=(GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->referencedSamplesFilter_ != nullptr
        && this->thresholds_ != nullptr && this->type_ != nullptr; };
    // referencedSamplesFilter Field Functions 
    bool hasReferencedSamplesFilter() const { return this->referencedSamplesFilter_ != nullptr;};
    void deleteReferencedSamplesFilter() { this->referencedSamplesFilter_ = nullptr;};
    inline string referencedSamplesFilter() const { DARABONBA_PTR_GET_DEFAULT(referencedSamplesFilter_, "") };
    inline GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfig& setReferencedSamplesFilter(string referencedSamplesFilter) { DARABONBA_PTR_SET_VALUE(referencedSamplesFilter_, referencedSamplesFilter) };


    // thresholds Field Functions 
    bool hasThresholds() const { return this->thresholds_ != nullptr;};
    void deleteThresholds() { this->thresholds_ = nullptr;};
    inline const Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds & thresholds() const { DARABONBA_PTR_GET_CONST(thresholds_, Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds) };
    inline Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds thresholds() { DARABONBA_PTR_GET(thresholds_, Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds) };
    inline GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfig& setThresholds(const Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds & thresholds) { DARABONBA_PTR_SET_VALUE(thresholds_, thresholds) };
    inline GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfig& setThresholds(Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds && thresholds) { DARABONBA_PTR_SET_RVALUE(thresholds_, thresholds) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The method that is used to query the referenced samples. To obtain some types of thresholds, you need to query reference values. In this example, an expression is used to indicate the query method of referenced samples.
    std::shared_ptr<string> referencedSamplesFilter_ = nullptr;
    // The threshold settings.
    std::shared_ptr<Models::GetDataQualityRuleResponseBodyDataQualityRuleCheckingConfigThresholds> thresholds_ = nullptr;
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
