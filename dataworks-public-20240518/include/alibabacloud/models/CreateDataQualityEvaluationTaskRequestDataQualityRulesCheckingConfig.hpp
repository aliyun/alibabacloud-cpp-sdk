// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYEVALUATIONTASKREQUESTDATAQUALITYRULESCHECKINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYEVALUATIONTASKREQUESTDATAQUALITYRULESCHECKINGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ReferencedSamplesFilter, referencedSamplesFilter_);
      DARABONBA_PTR_TO_JSON(Thresholds, thresholds_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ReferencedSamplesFilter, referencedSamplesFilter_);
      DARABONBA_PTR_FROM_JSON(Thresholds, thresholds_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig() = default ;
    CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig(const CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig &) = default ;
    CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig(CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig &&) = default ;
    CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig() = default ;
    CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig& operator=(const CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig &) = default ;
    CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig& operator=(CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig &&) = default ;
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
    inline CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig& setReferencedSamplesFilter(string referencedSamplesFilter) { DARABONBA_PTR_SET_VALUE(referencedSamplesFilter_, referencedSamplesFilter) };


    // thresholds Field Functions 
    bool hasThresholds() const { return this->thresholds_ != nullptr;};
    void deleteThresholds() { this->thresholds_ = nullptr;};
    inline const Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds & thresholds() const { DARABONBA_PTR_GET_CONST(thresholds_, Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds) };
    inline Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds thresholds() { DARABONBA_PTR_GET(thresholds_, Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds) };
    inline CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig& setThresholds(const Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds & thresholds) { DARABONBA_PTR_SET_VALUE(thresholds_, thresholds) };
    inline CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig& setThresholds(Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds && thresholds) { DARABONBA_PTR_SET_RVALUE(thresholds_, thresholds) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The method that is used to query the referenced samples. To obtain specific types of thresholds, you must query reference values. In this example, an expression is used to specify the query method of referenced samples.
    std::shared_ptr<string> referencedSamplesFilter_ = nullptr;
    // The threshold settings.
    std::shared_ptr<Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfigThresholds> thresholds_ = nullptr;
    // The threshold calculation method. Valid values:
    // 
    // *   Fixed
    // *   Fluctation
    // *   FluctationDiscreate
    // *   Auto
    // *   Average
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
