// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELFEATUREFGFEATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELFEATUREFGFEATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateModelFeatureFGFeatureRequestLookupFeatures.hpp>
#include <alibabacloud/models/UpdateModelFeatureFGFeatureRequestRawFeatures.hpp>
#include <alibabacloud/models/UpdateModelFeatureFGFeatureRequestSequenceFeatures.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class UpdateModelFeatureFGFeatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelFeatureFGFeatureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LookupFeatures, lookupFeatures_);
      DARABONBA_PTR_TO_JSON(RawFeatures, rawFeatures_);
      DARABONBA_PTR_TO_JSON(Reserves, reserves_);
      DARABONBA_PTR_TO_JSON(SequenceFeatures, sequenceFeatures_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelFeatureFGFeatureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LookupFeatures, lookupFeatures_);
      DARABONBA_PTR_FROM_JSON(RawFeatures, rawFeatures_);
      DARABONBA_PTR_FROM_JSON(Reserves, reserves_);
      DARABONBA_PTR_FROM_JSON(SequenceFeatures, sequenceFeatures_);
    };
    UpdateModelFeatureFGFeatureRequest() = default ;
    UpdateModelFeatureFGFeatureRequest(const UpdateModelFeatureFGFeatureRequest &) = default ;
    UpdateModelFeatureFGFeatureRequest(UpdateModelFeatureFGFeatureRequest &&) = default ;
    UpdateModelFeatureFGFeatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelFeatureFGFeatureRequest() = default ;
    UpdateModelFeatureFGFeatureRequest& operator=(const UpdateModelFeatureFGFeatureRequest &) = default ;
    UpdateModelFeatureFGFeatureRequest& operator=(UpdateModelFeatureFGFeatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lookupFeatures_ == nullptr
        && return this->rawFeatures_ == nullptr && return this->reserves_ == nullptr && return this->sequenceFeatures_ == nullptr; };
    // lookupFeatures Field Functions 
    bool hasLookupFeatures() const { return this->lookupFeatures_ != nullptr;};
    void deleteLookupFeatures() { this->lookupFeatures_ = nullptr;};
    inline const vector<UpdateModelFeatureFGFeatureRequestLookupFeatures> & lookupFeatures() const { DARABONBA_PTR_GET_CONST(lookupFeatures_, vector<UpdateModelFeatureFGFeatureRequestLookupFeatures>) };
    inline vector<UpdateModelFeatureFGFeatureRequestLookupFeatures> lookupFeatures() { DARABONBA_PTR_GET(lookupFeatures_, vector<UpdateModelFeatureFGFeatureRequestLookupFeatures>) };
    inline UpdateModelFeatureFGFeatureRequest& setLookupFeatures(const vector<UpdateModelFeatureFGFeatureRequestLookupFeatures> & lookupFeatures) { DARABONBA_PTR_SET_VALUE(lookupFeatures_, lookupFeatures) };
    inline UpdateModelFeatureFGFeatureRequest& setLookupFeatures(vector<UpdateModelFeatureFGFeatureRequestLookupFeatures> && lookupFeatures) { DARABONBA_PTR_SET_RVALUE(lookupFeatures_, lookupFeatures) };


    // rawFeatures Field Functions 
    bool hasRawFeatures() const { return this->rawFeatures_ != nullptr;};
    void deleteRawFeatures() { this->rawFeatures_ = nullptr;};
    inline const vector<UpdateModelFeatureFGFeatureRequestRawFeatures> & rawFeatures() const { DARABONBA_PTR_GET_CONST(rawFeatures_, vector<UpdateModelFeatureFGFeatureRequestRawFeatures>) };
    inline vector<UpdateModelFeatureFGFeatureRequestRawFeatures> rawFeatures() { DARABONBA_PTR_GET(rawFeatures_, vector<UpdateModelFeatureFGFeatureRequestRawFeatures>) };
    inline UpdateModelFeatureFGFeatureRequest& setRawFeatures(const vector<UpdateModelFeatureFGFeatureRequestRawFeatures> & rawFeatures) { DARABONBA_PTR_SET_VALUE(rawFeatures_, rawFeatures) };
    inline UpdateModelFeatureFGFeatureRequest& setRawFeatures(vector<UpdateModelFeatureFGFeatureRequestRawFeatures> && rawFeatures) { DARABONBA_PTR_SET_RVALUE(rawFeatures_, rawFeatures) };


    // reserves Field Functions 
    bool hasReserves() const { return this->reserves_ != nullptr;};
    void deleteReserves() { this->reserves_ = nullptr;};
    inline const vector<string> & reserves() const { DARABONBA_PTR_GET_CONST(reserves_, vector<string>) };
    inline vector<string> reserves() { DARABONBA_PTR_GET(reserves_, vector<string>) };
    inline UpdateModelFeatureFGFeatureRequest& setReserves(const vector<string> & reserves) { DARABONBA_PTR_SET_VALUE(reserves_, reserves) };
    inline UpdateModelFeatureFGFeatureRequest& setReserves(vector<string> && reserves) { DARABONBA_PTR_SET_RVALUE(reserves_, reserves) };


    // sequenceFeatures Field Functions 
    bool hasSequenceFeatures() const { return this->sequenceFeatures_ != nullptr;};
    void deleteSequenceFeatures() { this->sequenceFeatures_ = nullptr;};
    inline const vector<UpdateModelFeatureFGFeatureRequestSequenceFeatures> & sequenceFeatures() const { DARABONBA_PTR_GET_CONST(sequenceFeatures_, vector<UpdateModelFeatureFGFeatureRequestSequenceFeatures>) };
    inline vector<UpdateModelFeatureFGFeatureRequestSequenceFeatures> sequenceFeatures() { DARABONBA_PTR_GET(sequenceFeatures_, vector<UpdateModelFeatureFGFeatureRequestSequenceFeatures>) };
    inline UpdateModelFeatureFGFeatureRequest& setSequenceFeatures(const vector<UpdateModelFeatureFGFeatureRequestSequenceFeatures> & sequenceFeatures) { DARABONBA_PTR_SET_VALUE(sequenceFeatures_, sequenceFeatures) };
    inline UpdateModelFeatureFGFeatureRequest& setSequenceFeatures(vector<UpdateModelFeatureFGFeatureRequestSequenceFeatures> && sequenceFeatures) { DARABONBA_PTR_SET_RVALUE(sequenceFeatures_, sequenceFeatures) };


  protected:
    std::shared_ptr<vector<UpdateModelFeatureFGFeatureRequestLookupFeatures>> lookupFeatures_ = nullptr;
    std::shared_ptr<vector<UpdateModelFeatureFGFeatureRequestRawFeatures>> rawFeatures_ = nullptr;
    std::shared_ptr<vector<string>> reserves_ = nullptr;
    std::shared_ptr<vector<UpdateModelFeatureFGFeatureRequestSequenceFeatures>> sequenceFeatures_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
