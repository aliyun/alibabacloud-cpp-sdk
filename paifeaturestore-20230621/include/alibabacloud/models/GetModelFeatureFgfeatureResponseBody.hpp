// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELFEATUREFGFEATURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMODELFEATUREFGFEATURERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetModelFeatureFGFeatureResponseBodyLookupFeatures.hpp>
#include <alibabacloud/models/GetModelFeatureFGFeatureResponseBodyRawFeatures.hpp>
#include <alibabacloud/models/GetModelFeatureFGFeatureResponseBodySequenceFeatures.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class GetModelFeatureFGFeatureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelFeatureFGFeatureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LookupFeatures, lookupFeatures_);
      DARABONBA_PTR_TO_JSON(RawFeatures, rawFeatures_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Reserves, reserves_);
      DARABONBA_PTR_TO_JSON(SequenceFeatures, sequenceFeatures_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelFeatureFGFeatureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LookupFeatures, lookupFeatures_);
      DARABONBA_PTR_FROM_JSON(RawFeatures, rawFeatures_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Reserves, reserves_);
      DARABONBA_PTR_FROM_JSON(SequenceFeatures, sequenceFeatures_);
    };
    GetModelFeatureFGFeatureResponseBody() = default ;
    GetModelFeatureFGFeatureResponseBody(const GetModelFeatureFGFeatureResponseBody &) = default ;
    GetModelFeatureFGFeatureResponseBody(GetModelFeatureFGFeatureResponseBody &&) = default ;
    GetModelFeatureFGFeatureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelFeatureFGFeatureResponseBody() = default ;
    GetModelFeatureFGFeatureResponseBody& operator=(const GetModelFeatureFGFeatureResponseBody &) = default ;
    GetModelFeatureFGFeatureResponseBody& operator=(GetModelFeatureFGFeatureResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lookupFeatures_ != nullptr
        && this->rawFeatures_ != nullptr && this->requestId_ != nullptr && this->reserves_ != nullptr && this->sequenceFeatures_ != nullptr; };
    // lookupFeatures Field Functions 
    bool hasLookupFeatures() const { return this->lookupFeatures_ != nullptr;};
    void deleteLookupFeatures() { this->lookupFeatures_ = nullptr;};
    inline const vector<GetModelFeatureFGFeatureResponseBodyLookupFeatures> & lookupFeatures() const { DARABONBA_PTR_GET_CONST(lookupFeatures_, vector<GetModelFeatureFGFeatureResponseBodyLookupFeatures>) };
    inline vector<GetModelFeatureFGFeatureResponseBodyLookupFeatures> lookupFeatures() { DARABONBA_PTR_GET(lookupFeatures_, vector<GetModelFeatureFGFeatureResponseBodyLookupFeatures>) };
    inline GetModelFeatureFGFeatureResponseBody& setLookupFeatures(const vector<GetModelFeatureFGFeatureResponseBodyLookupFeatures> & lookupFeatures) { DARABONBA_PTR_SET_VALUE(lookupFeatures_, lookupFeatures) };
    inline GetModelFeatureFGFeatureResponseBody& setLookupFeatures(vector<GetModelFeatureFGFeatureResponseBodyLookupFeatures> && lookupFeatures) { DARABONBA_PTR_SET_RVALUE(lookupFeatures_, lookupFeatures) };


    // rawFeatures Field Functions 
    bool hasRawFeatures() const { return this->rawFeatures_ != nullptr;};
    void deleteRawFeatures() { this->rawFeatures_ = nullptr;};
    inline const vector<GetModelFeatureFGFeatureResponseBodyRawFeatures> & rawFeatures() const { DARABONBA_PTR_GET_CONST(rawFeatures_, vector<GetModelFeatureFGFeatureResponseBodyRawFeatures>) };
    inline vector<GetModelFeatureFGFeatureResponseBodyRawFeatures> rawFeatures() { DARABONBA_PTR_GET(rawFeatures_, vector<GetModelFeatureFGFeatureResponseBodyRawFeatures>) };
    inline GetModelFeatureFGFeatureResponseBody& setRawFeatures(const vector<GetModelFeatureFGFeatureResponseBodyRawFeatures> & rawFeatures) { DARABONBA_PTR_SET_VALUE(rawFeatures_, rawFeatures) };
    inline GetModelFeatureFGFeatureResponseBody& setRawFeatures(vector<GetModelFeatureFGFeatureResponseBodyRawFeatures> && rawFeatures) { DARABONBA_PTR_SET_RVALUE(rawFeatures_, rawFeatures) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetModelFeatureFGFeatureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reserves Field Functions 
    bool hasReserves() const { return this->reserves_ != nullptr;};
    void deleteReserves() { this->reserves_ = nullptr;};
    inline const vector<string> & reserves() const { DARABONBA_PTR_GET_CONST(reserves_, vector<string>) };
    inline vector<string> reserves() { DARABONBA_PTR_GET(reserves_, vector<string>) };
    inline GetModelFeatureFGFeatureResponseBody& setReserves(const vector<string> & reserves) { DARABONBA_PTR_SET_VALUE(reserves_, reserves) };
    inline GetModelFeatureFGFeatureResponseBody& setReserves(vector<string> && reserves) { DARABONBA_PTR_SET_RVALUE(reserves_, reserves) };


    // sequenceFeatures Field Functions 
    bool hasSequenceFeatures() const { return this->sequenceFeatures_ != nullptr;};
    void deleteSequenceFeatures() { this->sequenceFeatures_ = nullptr;};
    inline const vector<GetModelFeatureFGFeatureResponseBodySequenceFeatures> & sequenceFeatures() const { DARABONBA_PTR_GET_CONST(sequenceFeatures_, vector<GetModelFeatureFGFeatureResponseBodySequenceFeatures>) };
    inline vector<GetModelFeatureFGFeatureResponseBodySequenceFeatures> sequenceFeatures() { DARABONBA_PTR_GET(sequenceFeatures_, vector<GetModelFeatureFGFeatureResponseBodySequenceFeatures>) };
    inline GetModelFeatureFGFeatureResponseBody& setSequenceFeatures(const vector<GetModelFeatureFGFeatureResponseBodySequenceFeatures> & sequenceFeatures) { DARABONBA_PTR_SET_VALUE(sequenceFeatures_, sequenceFeatures) };
    inline GetModelFeatureFGFeatureResponseBody& setSequenceFeatures(vector<GetModelFeatureFGFeatureResponseBodySequenceFeatures> && sequenceFeatures) { DARABONBA_PTR_SET_RVALUE(sequenceFeatures_, sequenceFeatures) };


  protected:
    std::shared_ptr<vector<GetModelFeatureFGFeatureResponseBodyLookupFeatures>> lookupFeatures_ = nullptr;
    std::shared_ptr<vector<GetModelFeatureFGFeatureResponseBodyRawFeatures>> rawFeatures_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<string>> reserves_ = nullptr;
    std::shared_ptr<vector<GetModelFeatureFGFeatureResponseBodySequenceFeatures>> sequenceFeatures_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
