// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELFEATUREFGFEATURERESPONSEBODYLOOKUPFEATURES_HPP_
#define ALIBABACLOUD_MODELS_GETMODELFEATUREFGFEATURERESPONSEBODYLOOKUPFEATURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class GetModelFeatureFGFeatureResponseBodyLookupFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelFeatureFGFeatureResponseBodyLookupFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(FeatureName, featureName_);
      DARABONBA_PTR_TO_JSON(KeyFeatureDomain, keyFeatureDomain_);
      DARABONBA_PTR_TO_JSON(KeyFeatureName, keyFeatureName_);
      DARABONBA_PTR_TO_JSON(MapFeatureDomain, mapFeatureDomain_);
      DARABONBA_PTR_TO_JSON(MapFeatureName, mapFeatureName_);
      DARABONBA_PTR_TO_JSON(ValueType, valueType_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelFeatureFGFeatureResponseBodyLookupFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(FeatureName, featureName_);
      DARABONBA_PTR_FROM_JSON(KeyFeatureDomain, keyFeatureDomain_);
      DARABONBA_PTR_FROM_JSON(KeyFeatureName, keyFeatureName_);
      DARABONBA_PTR_FROM_JSON(MapFeatureDomain, mapFeatureDomain_);
      DARABONBA_PTR_FROM_JSON(MapFeatureName, mapFeatureName_);
      DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
    };
    GetModelFeatureFGFeatureResponseBodyLookupFeatures() = default ;
    GetModelFeatureFGFeatureResponseBodyLookupFeatures(const GetModelFeatureFGFeatureResponseBodyLookupFeatures &) = default ;
    GetModelFeatureFGFeatureResponseBodyLookupFeatures(GetModelFeatureFGFeatureResponseBodyLookupFeatures &&) = default ;
    GetModelFeatureFGFeatureResponseBodyLookupFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelFeatureFGFeatureResponseBodyLookupFeatures() = default ;
    GetModelFeatureFGFeatureResponseBodyLookupFeatures& operator=(const GetModelFeatureFGFeatureResponseBodyLookupFeatures &) = default ;
    GetModelFeatureFGFeatureResponseBodyLookupFeatures& operator=(GetModelFeatureFGFeatureResponseBodyLookupFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultValue_ != nullptr
        && this->featureName_ != nullptr && this->keyFeatureDomain_ != nullptr && this->keyFeatureName_ != nullptr && this->mapFeatureDomain_ != nullptr && this->mapFeatureName_ != nullptr
        && this->valueType_ != nullptr; };
    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline GetModelFeatureFGFeatureResponseBodyLookupFeatures& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // featureName Field Functions 
    bool hasFeatureName() const { return this->featureName_ != nullptr;};
    void deleteFeatureName() { this->featureName_ = nullptr;};
    inline string featureName() const { DARABONBA_PTR_GET_DEFAULT(featureName_, "") };
    inline GetModelFeatureFGFeatureResponseBodyLookupFeatures& setFeatureName(string featureName) { DARABONBA_PTR_SET_VALUE(featureName_, featureName) };


    // keyFeatureDomain Field Functions 
    bool hasKeyFeatureDomain() const { return this->keyFeatureDomain_ != nullptr;};
    void deleteKeyFeatureDomain() { this->keyFeatureDomain_ = nullptr;};
    inline string keyFeatureDomain() const { DARABONBA_PTR_GET_DEFAULT(keyFeatureDomain_, "") };
    inline GetModelFeatureFGFeatureResponseBodyLookupFeatures& setKeyFeatureDomain(string keyFeatureDomain) { DARABONBA_PTR_SET_VALUE(keyFeatureDomain_, keyFeatureDomain) };


    // keyFeatureName Field Functions 
    bool hasKeyFeatureName() const { return this->keyFeatureName_ != nullptr;};
    void deleteKeyFeatureName() { this->keyFeatureName_ = nullptr;};
    inline string keyFeatureName() const { DARABONBA_PTR_GET_DEFAULT(keyFeatureName_, "") };
    inline GetModelFeatureFGFeatureResponseBodyLookupFeatures& setKeyFeatureName(string keyFeatureName) { DARABONBA_PTR_SET_VALUE(keyFeatureName_, keyFeatureName) };


    // mapFeatureDomain Field Functions 
    bool hasMapFeatureDomain() const { return this->mapFeatureDomain_ != nullptr;};
    void deleteMapFeatureDomain() { this->mapFeatureDomain_ = nullptr;};
    inline string mapFeatureDomain() const { DARABONBA_PTR_GET_DEFAULT(mapFeatureDomain_, "") };
    inline GetModelFeatureFGFeatureResponseBodyLookupFeatures& setMapFeatureDomain(string mapFeatureDomain) { DARABONBA_PTR_SET_VALUE(mapFeatureDomain_, mapFeatureDomain) };


    // mapFeatureName Field Functions 
    bool hasMapFeatureName() const { return this->mapFeatureName_ != nullptr;};
    void deleteMapFeatureName() { this->mapFeatureName_ = nullptr;};
    inline string mapFeatureName() const { DARABONBA_PTR_GET_DEFAULT(mapFeatureName_, "") };
    inline GetModelFeatureFGFeatureResponseBodyLookupFeatures& setMapFeatureName(string mapFeatureName) { DARABONBA_PTR_SET_VALUE(mapFeatureName_, mapFeatureName) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string valueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline GetModelFeatureFGFeatureResponseBodyLookupFeatures& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


  protected:
    std::shared_ptr<string> defaultValue_ = nullptr;
    std::shared_ptr<string> featureName_ = nullptr;
    std::shared_ptr<string> keyFeatureDomain_ = nullptr;
    std::shared_ptr<string> keyFeatureName_ = nullptr;
    std::shared_ptr<string> mapFeatureDomain_ = nullptr;
    std::shared_ptr<string> mapFeatureName_ = nullptr;
    std::shared_ptr<string> valueType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
