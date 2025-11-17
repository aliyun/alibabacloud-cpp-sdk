// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELFEATUREFGFEATURERESPONSEBODYSEQUENCEFEATURES_HPP_
#define ALIBABACLOUD_MODELS_GETMODELFEATUREFGFEATURERESPONSEBODYSEQUENCEFEATURES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class GetModelFeatureFGFeatureResponseBodySequenceFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelFeatureFGFeatureResponseBodySequenceFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeDelim, attributeDelim_);
      DARABONBA_PTR_TO_JSON(FeatureName, featureName_);
      DARABONBA_PTR_TO_JSON(SequenceDelim, sequenceDelim_);
      DARABONBA_PTR_TO_JSON(SequenceLength, sequenceLength_);
      DARABONBA_PTR_TO_JSON(SubFeatures, subFeatures_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelFeatureFGFeatureResponseBodySequenceFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeDelim, attributeDelim_);
      DARABONBA_PTR_FROM_JSON(FeatureName, featureName_);
      DARABONBA_PTR_FROM_JSON(SequenceDelim, sequenceDelim_);
      DARABONBA_PTR_FROM_JSON(SequenceLength, sequenceLength_);
      DARABONBA_PTR_FROM_JSON(SubFeatures, subFeatures_);
    };
    GetModelFeatureFGFeatureResponseBodySequenceFeatures() = default ;
    GetModelFeatureFGFeatureResponseBodySequenceFeatures(const GetModelFeatureFGFeatureResponseBodySequenceFeatures &) = default ;
    GetModelFeatureFGFeatureResponseBodySequenceFeatures(GetModelFeatureFGFeatureResponseBodySequenceFeatures &&) = default ;
    GetModelFeatureFGFeatureResponseBodySequenceFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelFeatureFGFeatureResponseBodySequenceFeatures() = default ;
    GetModelFeatureFGFeatureResponseBodySequenceFeatures& operator=(const GetModelFeatureFGFeatureResponseBodySequenceFeatures &) = default ;
    GetModelFeatureFGFeatureResponseBodySequenceFeatures& operator=(GetModelFeatureFGFeatureResponseBodySequenceFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributeDelim_ == nullptr
        && return this->featureName_ == nullptr && return this->sequenceDelim_ == nullptr && return this->sequenceLength_ == nullptr && return this->subFeatures_ == nullptr; };
    // attributeDelim Field Functions 
    bool hasAttributeDelim() const { return this->attributeDelim_ != nullptr;};
    void deleteAttributeDelim() { this->attributeDelim_ = nullptr;};
    inline string attributeDelim() const { DARABONBA_PTR_GET_DEFAULT(attributeDelim_, "") };
    inline GetModelFeatureFGFeatureResponseBodySequenceFeatures& setAttributeDelim(string attributeDelim) { DARABONBA_PTR_SET_VALUE(attributeDelim_, attributeDelim) };


    // featureName Field Functions 
    bool hasFeatureName() const { return this->featureName_ != nullptr;};
    void deleteFeatureName() { this->featureName_ = nullptr;};
    inline string featureName() const { DARABONBA_PTR_GET_DEFAULT(featureName_, "") };
    inline GetModelFeatureFGFeatureResponseBodySequenceFeatures& setFeatureName(string featureName) { DARABONBA_PTR_SET_VALUE(featureName_, featureName) };


    // sequenceDelim Field Functions 
    bool hasSequenceDelim() const { return this->sequenceDelim_ != nullptr;};
    void deleteSequenceDelim() { this->sequenceDelim_ = nullptr;};
    inline string sequenceDelim() const { DARABONBA_PTR_GET_DEFAULT(sequenceDelim_, "") };
    inline GetModelFeatureFGFeatureResponseBodySequenceFeatures& setSequenceDelim(string sequenceDelim) { DARABONBA_PTR_SET_VALUE(sequenceDelim_, sequenceDelim) };


    // sequenceLength Field Functions 
    bool hasSequenceLength() const { return this->sequenceLength_ != nullptr;};
    void deleteSequenceLength() { this->sequenceLength_ = nullptr;};
    inline int64_t sequenceLength() const { DARABONBA_PTR_GET_DEFAULT(sequenceLength_, 0L) };
    inline GetModelFeatureFGFeatureResponseBodySequenceFeatures& setSequenceLength(int64_t sequenceLength) { DARABONBA_PTR_SET_VALUE(sequenceLength_, sequenceLength) };


    // subFeatures Field Functions 
    bool hasSubFeatures() const { return this->subFeatures_ != nullptr;};
    void deleteSubFeatures() { this->subFeatures_ = nullptr;};
    inline const vector<Models::GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures> & subFeatures() const { DARABONBA_PTR_GET_CONST(subFeatures_, vector<Models::GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures>) };
    inline vector<Models::GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures> subFeatures() { DARABONBA_PTR_GET(subFeatures_, vector<Models::GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures>) };
    inline GetModelFeatureFGFeatureResponseBodySequenceFeatures& setSubFeatures(const vector<Models::GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures> & subFeatures) { DARABONBA_PTR_SET_VALUE(subFeatures_, subFeatures) };
    inline GetModelFeatureFGFeatureResponseBodySequenceFeatures& setSubFeatures(vector<Models::GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures> && subFeatures) { DARABONBA_PTR_SET_RVALUE(subFeatures_, subFeatures) };


  protected:
    std::shared_ptr<string> attributeDelim_ = nullptr;
    std::shared_ptr<string> featureName_ = nullptr;
    std::shared_ptr<string> sequenceDelim_ = nullptr;
    std::shared_ptr<int64_t> sequenceLength_ = nullptr;
    std::shared_ptr<vector<Models::GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures>> subFeatures_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
