// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYRULETEMPLATERESPONSEBODYDATAQUALITYRULETEMPLATECHECKINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYRULETEMPLATERESPONSEBODYDATAQUALITYRULETEMPLATECHECKINGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplateCheckingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplateCheckingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ReferencedSamplesFilter, referencedSamplesFilter_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplateCheckingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ReferencedSamplesFilter, referencedSamplesFilter_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplateCheckingConfig() = default ;
    GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplateCheckingConfig(const GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplateCheckingConfig &) = default ;
    GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplateCheckingConfig(GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplateCheckingConfig &&) = default ;
    GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplateCheckingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplateCheckingConfig() = default ;
    GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplateCheckingConfig& operator=(const GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplateCheckingConfig &) = default ;
    GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplateCheckingConfig& operator=(GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplateCheckingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->referencedSamplesFilter_ != nullptr
        && this->type_ != nullptr; };
    // referencedSamplesFilter Field Functions 
    bool hasReferencedSamplesFilter() const { return this->referencedSamplesFilter_ != nullptr;};
    void deleteReferencedSamplesFilter() { this->referencedSamplesFilter_ = nullptr;};
    inline string referencedSamplesFilter() const { DARABONBA_PTR_GET_DEFAULT(referencedSamplesFilter_, "") };
    inline GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplateCheckingConfig& setReferencedSamplesFilter(string referencedSamplesFilter) { DARABONBA_PTR_SET_VALUE(referencedSamplesFilter_, referencedSamplesFilter) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDataQualityRuleTemplateResponseBodyDataQualityRuleTemplateCheckingConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The method that is used to query the referenced samples. To obtain some types of thresholds, you need to query reference samples and perform aggregate operations on the reference values. In this example, an expression is used to indicate the query method of referenced samples.
    std::shared_ptr<string> referencedSamplesFilter_ = nullptr;
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
