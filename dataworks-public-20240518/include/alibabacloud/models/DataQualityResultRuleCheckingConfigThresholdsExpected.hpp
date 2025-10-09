// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAQUALITYRESULTRULECHECKINGCONFIGTHRESHOLDSEXPECTED_HPP_
#define ALIBABACLOUD_MODELS_DATAQUALITYRESULTRULECHECKINGCONFIGTHRESHOLDSEXPECTED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DataQualityResultRuleCheckingConfigThresholdsExpected : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataQualityResultRuleCheckingConfigThresholdsExpected& obj) { 
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DataQualityResultRuleCheckingConfigThresholdsExpected& obj) { 
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DataQualityResultRuleCheckingConfigThresholdsExpected() = default ;
    DataQualityResultRuleCheckingConfigThresholdsExpected(const DataQualityResultRuleCheckingConfigThresholdsExpected &) = default ;
    DataQualityResultRuleCheckingConfigThresholdsExpected(DataQualityResultRuleCheckingConfigThresholdsExpected &&) = default ;
    DataQualityResultRuleCheckingConfigThresholdsExpected(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataQualityResultRuleCheckingConfigThresholdsExpected() = default ;
    DataQualityResultRuleCheckingConfigThresholdsExpected& operator=(const DataQualityResultRuleCheckingConfigThresholdsExpected &) = default ;
    DataQualityResultRuleCheckingConfigThresholdsExpected& operator=(DataQualityResultRuleCheckingConfigThresholdsExpected &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operator_ != nullptr
        && this->value_ != nullptr; };
    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DataQualityResultRuleCheckingConfigThresholdsExpected& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DataQualityResultRuleCheckingConfigThresholdsExpected& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
