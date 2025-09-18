// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELFEATUREFGFEATURERESPONSEBODYSEQUENCEFEATURESSUBFEATURES_HPP_
#define ALIBABACLOUD_MODELS_GETMODELFEATUREFGFEATURERESPONSEBODYSEQUENCEFEATURESSUBFEATURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(FeatureDomain, featureDomain_);
      DARABONBA_PTR_TO_JSON(FeatureName, featureName_);
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(InputFeatureName, inputFeatureName_);
      DARABONBA_PTR_TO_JSON(ValueType, valueType_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(FeatureDomain, featureDomain_);
      DARABONBA_PTR_FROM_JSON(FeatureName, featureName_);
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(InputFeatureName, inputFeatureName_);
      DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
    };
    GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures() = default ;
    GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures(const GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures &) = default ;
    GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures(GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures &&) = default ;
    GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures() = default ;
    GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures& operator=(const GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures &) = default ;
    GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures& operator=(GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultValue_ != nullptr
        && this->featureDomain_ != nullptr && this->featureName_ != nullptr && this->featureType_ != nullptr && this->inputFeatureName_ != nullptr && this->valueType_ != nullptr; };
    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // featureDomain Field Functions 
    bool hasFeatureDomain() const { return this->featureDomain_ != nullptr;};
    void deleteFeatureDomain() { this->featureDomain_ = nullptr;};
    inline string featureDomain() const { DARABONBA_PTR_GET_DEFAULT(featureDomain_, "") };
    inline GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures& setFeatureDomain(string featureDomain) { DARABONBA_PTR_SET_VALUE(featureDomain_, featureDomain) };


    // featureName Field Functions 
    bool hasFeatureName() const { return this->featureName_ != nullptr;};
    void deleteFeatureName() { this->featureName_ = nullptr;};
    inline string featureName() const { DARABONBA_PTR_GET_DEFAULT(featureName_, "") };
    inline GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures& setFeatureName(string featureName) { DARABONBA_PTR_SET_VALUE(featureName_, featureName) };


    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline string featureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, "") };
    inline GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures& setFeatureType(string featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // inputFeatureName Field Functions 
    bool hasInputFeatureName() const { return this->inputFeatureName_ != nullptr;};
    void deleteInputFeatureName() { this->inputFeatureName_ = nullptr;};
    inline string inputFeatureName() const { DARABONBA_PTR_GET_DEFAULT(inputFeatureName_, "") };
    inline GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures& setInputFeatureName(string inputFeatureName) { DARABONBA_PTR_SET_VALUE(inputFeatureName_, inputFeatureName) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string valueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


  protected:
    std::shared_ptr<string> defaultValue_ = nullptr;
    std::shared_ptr<string> featureDomain_ = nullptr;
    std::shared_ptr<string> featureName_ = nullptr;
    std::shared_ptr<string> featureType_ = nullptr;
    std::shared_ptr<string> inputFeatureName_ = nullptr;
    std::shared_ptr<string> valueType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
