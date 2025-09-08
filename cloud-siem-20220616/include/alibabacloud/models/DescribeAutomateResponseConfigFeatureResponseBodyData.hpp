// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOMATERESPONSECONFIGFEATURERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOMATERESPONSECONFIGFEATURERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums.hpp>
#include <alibabacloud/models/DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAutomateResponseConfigFeatureResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutomateResponseConfigFeatureResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Feature, feature_);
      DARABONBA_PTR_TO_JSON(RightValueEnums, rightValueEnums_);
      DARABONBA_PTR_TO_JSON(SupportOperators, supportOperators_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutomateResponseConfigFeatureResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Feature, feature_);
      DARABONBA_PTR_FROM_JSON(RightValueEnums, rightValueEnums_);
      DARABONBA_PTR_FROM_JSON(SupportOperators, supportOperators_);
    };
    DescribeAutomateResponseConfigFeatureResponseBodyData() = default ;
    DescribeAutomateResponseConfigFeatureResponseBodyData(const DescribeAutomateResponseConfigFeatureResponseBodyData &) = default ;
    DescribeAutomateResponseConfigFeatureResponseBodyData(DescribeAutomateResponseConfigFeatureResponseBodyData &&) = default ;
    DescribeAutomateResponseConfigFeatureResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutomateResponseConfigFeatureResponseBodyData() = default ;
    DescribeAutomateResponseConfigFeatureResponseBodyData& operator=(const DescribeAutomateResponseConfigFeatureResponseBodyData &) = default ;
    DescribeAutomateResponseConfigFeatureResponseBodyData& operator=(DescribeAutomateResponseConfigFeatureResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataType_ != nullptr
        && this->feature_ != nullptr && this->rightValueEnums_ != nullptr && this->supportOperators_ != nullptr; };
    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DescribeAutomateResponseConfigFeatureResponseBodyData& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // feature Field Functions 
    bool hasFeature() const { return this->feature_ != nullptr;};
    void deleteFeature() { this->feature_ = nullptr;};
    inline string feature() const { DARABONBA_PTR_GET_DEFAULT(feature_, "") };
    inline DescribeAutomateResponseConfigFeatureResponseBodyData& setFeature(string feature) { DARABONBA_PTR_SET_VALUE(feature_, feature) };


    // rightValueEnums Field Functions 
    bool hasRightValueEnums() const { return this->rightValueEnums_ != nullptr;};
    void deleteRightValueEnums() { this->rightValueEnums_ = nullptr;};
    inline const vector<Models::DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums> & rightValueEnums() const { DARABONBA_PTR_GET_CONST(rightValueEnums_, vector<Models::DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums>) };
    inline vector<Models::DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums> rightValueEnums() { DARABONBA_PTR_GET(rightValueEnums_, vector<Models::DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums>) };
    inline DescribeAutomateResponseConfigFeatureResponseBodyData& setRightValueEnums(const vector<Models::DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums> & rightValueEnums) { DARABONBA_PTR_SET_VALUE(rightValueEnums_, rightValueEnums) };
    inline DescribeAutomateResponseConfigFeatureResponseBodyData& setRightValueEnums(vector<Models::DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums> && rightValueEnums) { DARABONBA_PTR_SET_RVALUE(rightValueEnums_, rightValueEnums) };


    // supportOperators Field Functions 
    bool hasSupportOperators() const { return this->supportOperators_ != nullptr;};
    void deleteSupportOperators() { this->supportOperators_ = nullptr;};
    inline const vector<Models::DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators> & supportOperators() const { DARABONBA_PTR_GET_CONST(supportOperators_, vector<Models::DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators>) };
    inline vector<Models::DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators> supportOperators() { DARABONBA_PTR_GET(supportOperators_, vector<Models::DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators>) };
    inline DescribeAutomateResponseConfigFeatureResponseBodyData& setSupportOperators(const vector<Models::DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators> & supportOperators) { DARABONBA_PTR_SET_VALUE(supportOperators_, supportOperators) };
    inline DescribeAutomateResponseConfigFeatureResponseBodyData& setSupportOperators(vector<Models::DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators> && supportOperators) { DARABONBA_PTR_SET_RVALUE(supportOperators_, supportOperators) };


  protected:
    // The data type of the condition field in the automated response rule.
    std::shared_ptr<string> dataType_ = nullptr;
    // The name of the condition field in the automated response rule.
    std::shared_ptr<string> feature_ = nullptr;
    // The enumerated values of the right operand for the field.
    std::shared_ptr<vector<Models::DescribeAutomateResponseConfigFeatureResponseBodyDataRightValueEnums>> rightValueEnums_ = nullptr;
    // The operators that are supported for the condition field.
    std::shared_ptr<vector<Models::DescribeAutomateResponseConfigFeatureResponseBodyDataSupportOperators>> supportOperators_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
