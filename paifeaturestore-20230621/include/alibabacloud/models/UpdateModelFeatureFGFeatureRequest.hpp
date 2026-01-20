// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELFEATUREFGFEATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELFEATUREFGFEATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class SequenceFeatures : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SequenceFeatures& obj) { 
        DARABONBA_PTR_TO_JSON(AttributeDelim, attributeDelim_);
        DARABONBA_PTR_TO_JSON(FeatureName, featureName_);
        DARABONBA_PTR_TO_JSON(SequenceDelim, sequenceDelim_);
        DARABONBA_PTR_TO_JSON(SequenceLength, sequenceLength_);
        DARABONBA_PTR_TO_JSON(SubFeatures, subFeatures_);
      };
      friend void from_json(const Darabonba::Json& j, SequenceFeatures& obj) { 
        DARABONBA_PTR_FROM_JSON(AttributeDelim, attributeDelim_);
        DARABONBA_PTR_FROM_JSON(FeatureName, featureName_);
        DARABONBA_PTR_FROM_JSON(SequenceDelim, sequenceDelim_);
        DARABONBA_PTR_FROM_JSON(SequenceLength, sequenceLength_);
        DARABONBA_PTR_FROM_JSON(SubFeatures, subFeatures_);
      };
      SequenceFeatures() = default ;
      SequenceFeatures(const SequenceFeatures &) = default ;
      SequenceFeatures(SequenceFeatures &&) = default ;
      SequenceFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SequenceFeatures() = default ;
      SequenceFeatures& operator=(const SequenceFeatures &) = default ;
      SequenceFeatures& operator=(SequenceFeatures &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubFeatures : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubFeatures& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_TO_JSON(FeatureDomain, featureDomain_);
          DARABONBA_PTR_TO_JSON(FeatureName, featureName_);
          DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
          DARABONBA_PTR_TO_JSON(InputFeatureName, inputFeatureName_);
          DARABONBA_PTR_TO_JSON(ValueType, valueType_);
        };
        friend void from_json(const Darabonba::Json& j, SubFeatures& obj) { 
          DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_FROM_JSON(FeatureDomain, featureDomain_);
          DARABONBA_PTR_FROM_JSON(FeatureName, featureName_);
          DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
          DARABONBA_PTR_FROM_JSON(InputFeatureName, inputFeatureName_);
          DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
        };
        SubFeatures() = default ;
        SubFeatures(const SubFeatures &) = default ;
        SubFeatures(SubFeatures &&) = default ;
        SubFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubFeatures() = default ;
        SubFeatures& operator=(const SubFeatures &) = default ;
        SubFeatures& operator=(SubFeatures &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->featureDomain_ == nullptr && this->featureName_ == nullptr && this->featureType_ == nullptr && this->inputFeatureName_ == nullptr && this->valueType_ == nullptr; };
        // defaultValue Field Functions 
        bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
        void deleteDefaultValue() { this->defaultValue_ = nullptr;};
        inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
        inline SubFeatures& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


        // featureDomain Field Functions 
        bool hasFeatureDomain() const { return this->featureDomain_ != nullptr;};
        void deleteFeatureDomain() { this->featureDomain_ = nullptr;};
        inline string getFeatureDomain() const { DARABONBA_PTR_GET_DEFAULT(featureDomain_, "") };
        inline SubFeatures& setFeatureDomain(string featureDomain) { DARABONBA_PTR_SET_VALUE(featureDomain_, featureDomain) };


        // featureName Field Functions 
        bool hasFeatureName() const { return this->featureName_ != nullptr;};
        void deleteFeatureName() { this->featureName_ = nullptr;};
        inline string getFeatureName() const { DARABONBA_PTR_GET_DEFAULT(featureName_, "") };
        inline SubFeatures& setFeatureName(string featureName) { DARABONBA_PTR_SET_VALUE(featureName_, featureName) };


        // featureType Field Functions 
        bool hasFeatureType() const { return this->featureType_ != nullptr;};
        void deleteFeatureType() { this->featureType_ = nullptr;};
        inline string getFeatureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, "") };
        inline SubFeatures& setFeatureType(string featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


        // inputFeatureName Field Functions 
        bool hasInputFeatureName() const { return this->inputFeatureName_ != nullptr;};
        void deleteInputFeatureName() { this->inputFeatureName_ = nullptr;};
        inline string getInputFeatureName() const { DARABONBA_PTR_GET_DEFAULT(inputFeatureName_, "") };
        inline SubFeatures& setInputFeatureName(string inputFeatureName) { DARABONBA_PTR_SET_VALUE(inputFeatureName_, inputFeatureName) };


        // valueType Field Functions 
        bool hasValueType() const { return this->valueType_ != nullptr;};
        void deleteValueType() { this->valueType_ = nullptr;};
        inline string getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
        inline SubFeatures& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


      protected:
        // This parameter is required.
        shared_ptr<string> defaultValue_ {};
        // This parameter is required.
        shared_ptr<string> featureDomain_ {};
        // This parameter is required.
        shared_ptr<string> featureName_ {};
        // This parameter is required.
        shared_ptr<string> featureType_ {};
        // This parameter is required.
        shared_ptr<string> inputFeatureName_ {};
        // This parameter is required.
        shared_ptr<string> valueType_ {};
      };

      virtual bool empty() const override { return this->attributeDelim_ == nullptr
        && this->featureName_ == nullptr && this->sequenceDelim_ == nullptr && this->sequenceLength_ == nullptr && this->subFeatures_ == nullptr; };
      // attributeDelim Field Functions 
      bool hasAttributeDelim() const { return this->attributeDelim_ != nullptr;};
      void deleteAttributeDelim() { this->attributeDelim_ = nullptr;};
      inline string getAttributeDelim() const { DARABONBA_PTR_GET_DEFAULT(attributeDelim_, "") };
      inline SequenceFeatures& setAttributeDelim(string attributeDelim) { DARABONBA_PTR_SET_VALUE(attributeDelim_, attributeDelim) };


      // featureName Field Functions 
      bool hasFeatureName() const { return this->featureName_ != nullptr;};
      void deleteFeatureName() { this->featureName_ = nullptr;};
      inline string getFeatureName() const { DARABONBA_PTR_GET_DEFAULT(featureName_, "") };
      inline SequenceFeatures& setFeatureName(string featureName) { DARABONBA_PTR_SET_VALUE(featureName_, featureName) };


      // sequenceDelim Field Functions 
      bool hasSequenceDelim() const { return this->sequenceDelim_ != nullptr;};
      void deleteSequenceDelim() { this->sequenceDelim_ = nullptr;};
      inline string getSequenceDelim() const { DARABONBA_PTR_GET_DEFAULT(sequenceDelim_, "") };
      inline SequenceFeatures& setSequenceDelim(string sequenceDelim) { DARABONBA_PTR_SET_VALUE(sequenceDelim_, sequenceDelim) };


      // sequenceLength Field Functions 
      bool hasSequenceLength() const { return this->sequenceLength_ != nullptr;};
      void deleteSequenceLength() { this->sequenceLength_ = nullptr;};
      inline int64_t getSequenceLength() const { DARABONBA_PTR_GET_DEFAULT(sequenceLength_, 0L) };
      inline SequenceFeatures& setSequenceLength(int64_t sequenceLength) { DARABONBA_PTR_SET_VALUE(sequenceLength_, sequenceLength) };


      // subFeatures Field Functions 
      bool hasSubFeatures() const { return this->subFeatures_ != nullptr;};
      void deleteSubFeatures() { this->subFeatures_ = nullptr;};
      inline const vector<SequenceFeatures::SubFeatures> & getSubFeatures() const { DARABONBA_PTR_GET_CONST(subFeatures_, vector<SequenceFeatures::SubFeatures>) };
      inline vector<SequenceFeatures::SubFeatures> getSubFeatures() { DARABONBA_PTR_GET(subFeatures_, vector<SequenceFeatures::SubFeatures>) };
      inline SequenceFeatures& setSubFeatures(const vector<SequenceFeatures::SubFeatures> & subFeatures) { DARABONBA_PTR_SET_VALUE(subFeatures_, subFeatures) };
      inline SequenceFeatures& setSubFeatures(vector<SequenceFeatures::SubFeatures> && subFeatures) { DARABONBA_PTR_SET_RVALUE(subFeatures_, subFeatures) };


    protected:
      // This parameter is required.
      shared_ptr<string> attributeDelim_ {};
      // This parameter is required.
      shared_ptr<string> featureName_ {};
      // This parameter is required.
      shared_ptr<string> sequenceDelim_ {};
      // This parameter is required.
      shared_ptr<int64_t> sequenceLength_ {};
      shared_ptr<vector<SequenceFeatures::SubFeatures>> subFeatures_ {};
    };

    class RawFeatures : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RawFeatures& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
        DARABONBA_PTR_TO_JSON(FeatureDomain, featureDomain_);
        DARABONBA_PTR_TO_JSON(FeatureName, featureName_);
        DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
        DARABONBA_PTR_TO_JSON(InputFeatureName, inputFeatureName_);
        DARABONBA_PTR_TO_JSON(ValueType, valueType_);
      };
      friend void from_json(const Darabonba::Json& j, RawFeatures& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
        DARABONBA_PTR_FROM_JSON(FeatureDomain, featureDomain_);
        DARABONBA_PTR_FROM_JSON(FeatureName, featureName_);
        DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
        DARABONBA_PTR_FROM_JSON(InputFeatureName, inputFeatureName_);
        DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
      };
      RawFeatures() = default ;
      RawFeatures(const RawFeatures &) = default ;
      RawFeatures(RawFeatures &&) = default ;
      RawFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RawFeatures() = default ;
      RawFeatures& operator=(const RawFeatures &) = default ;
      RawFeatures& operator=(RawFeatures &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->featureDomain_ == nullptr && this->featureName_ == nullptr && this->featureType_ == nullptr && this->inputFeatureName_ == nullptr && this->valueType_ == nullptr; };
      // defaultValue Field Functions 
      bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
      void deleteDefaultValue() { this->defaultValue_ = nullptr;};
      inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
      inline RawFeatures& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


      // featureDomain Field Functions 
      bool hasFeatureDomain() const { return this->featureDomain_ != nullptr;};
      void deleteFeatureDomain() { this->featureDomain_ = nullptr;};
      inline string getFeatureDomain() const { DARABONBA_PTR_GET_DEFAULT(featureDomain_, "") };
      inline RawFeatures& setFeatureDomain(string featureDomain) { DARABONBA_PTR_SET_VALUE(featureDomain_, featureDomain) };


      // featureName Field Functions 
      bool hasFeatureName() const { return this->featureName_ != nullptr;};
      void deleteFeatureName() { this->featureName_ = nullptr;};
      inline string getFeatureName() const { DARABONBA_PTR_GET_DEFAULT(featureName_, "") };
      inline RawFeatures& setFeatureName(string featureName) { DARABONBA_PTR_SET_VALUE(featureName_, featureName) };


      // featureType Field Functions 
      bool hasFeatureType() const { return this->featureType_ != nullptr;};
      void deleteFeatureType() { this->featureType_ = nullptr;};
      inline string getFeatureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, "") };
      inline RawFeatures& setFeatureType(string featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


      // inputFeatureName Field Functions 
      bool hasInputFeatureName() const { return this->inputFeatureName_ != nullptr;};
      void deleteInputFeatureName() { this->inputFeatureName_ = nullptr;};
      inline string getInputFeatureName() const { DARABONBA_PTR_GET_DEFAULT(inputFeatureName_, "") };
      inline RawFeatures& setInputFeatureName(string inputFeatureName) { DARABONBA_PTR_SET_VALUE(inputFeatureName_, inputFeatureName) };


      // valueType Field Functions 
      bool hasValueType() const { return this->valueType_ != nullptr;};
      void deleteValueType() { this->valueType_ = nullptr;};
      inline string getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
      inline RawFeatures& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


    protected:
      // This parameter is required.
      shared_ptr<string> defaultValue_ {};
      // This parameter is required.
      shared_ptr<string> featureDomain_ {};
      // This parameter is required.
      shared_ptr<string> featureName_ {};
      // This parameter is required.
      shared_ptr<string> featureType_ {};
      // This parameter is required.
      shared_ptr<string> inputFeatureName_ {};
      // This parameter is required.
      shared_ptr<string> valueType_ {};
    };

    class LookupFeatures : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LookupFeatures& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
        DARABONBA_PTR_TO_JSON(FeatureName, featureName_);
        DARABONBA_PTR_TO_JSON(KeyFeatureDomain, keyFeatureDomain_);
        DARABONBA_PTR_TO_JSON(KeyFeatureName, keyFeatureName_);
        DARABONBA_PTR_TO_JSON(MapFeatureDomain, mapFeatureDomain_);
        DARABONBA_PTR_TO_JSON(MapFeatureName, mapFeatureName_);
        DARABONBA_PTR_TO_JSON(ValueType, valueType_);
      };
      friend void from_json(const Darabonba::Json& j, LookupFeatures& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
        DARABONBA_PTR_FROM_JSON(FeatureName, featureName_);
        DARABONBA_PTR_FROM_JSON(KeyFeatureDomain, keyFeatureDomain_);
        DARABONBA_PTR_FROM_JSON(KeyFeatureName, keyFeatureName_);
        DARABONBA_PTR_FROM_JSON(MapFeatureDomain, mapFeatureDomain_);
        DARABONBA_PTR_FROM_JSON(MapFeatureName, mapFeatureName_);
        DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
      };
      LookupFeatures() = default ;
      LookupFeatures(const LookupFeatures &) = default ;
      LookupFeatures(LookupFeatures &&) = default ;
      LookupFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LookupFeatures() = default ;
      LookupFeatures& operator=(const LookupFeatures &) = default ;
      LookupFeatures& operator=(LookupFeatures &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->featureName_ == nullptr && this->keyFeatureDomain_ == nullptr && this->keyFeatureName_ == nullptr && this->mapFeatureDomain_ == nullptr && this->mapFeatureName_ == nullptr
        && this->valueType_ == nullptr; };
      // defaultValue Field Functions 
      bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
      void deleteDefaultValue() { this->defaultValue_ = nullptr;};
      inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
      inline LookupFeatures& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


      // featureName Field Functions 
      bool hasFeatureName() const { return this->featureName_ != nullptr;};
      void deleteFeatureName() { this->featureName_ = nullptr;};
      inline string getFeatureName() const { DARABONBA_PTR_GET_DEFAULT(featureName_, "") };
      inline LookupFeatures& setFeatureName(string featureName) { DARABONBA_PTR_SET_VALUE(featureName_, featureName) };


      // keyFeatureDomain Field Functions 
      bool hasKeyFeatureDomain() const { return this->keyFeatureDomain_ != nullptr;};
      void deleteKeyFeatureDomain() { this->keyFeatureDomain_ = nullptr;};
      inline string getKeyFeatureDomain() const { DARABONBA_PTR_GET_DEFAULT(keyFeatureDomain_, "") };
      inline LookupFeatures& setKeyFeatureDomain(string keyFeatureDomain) { DARABONBA_PTR_SET_VALUE(keyFeatureDomain_, keyFeatureDomain) };


      // keyFeatureName Field Functions 
      bool hasKeyFeatureName() const { return this->keyFeatureName_ != nullptr;};
      void deleteKeyFeatureName() { this->keyFeatureName_ = nullptr;};
      inline string getKeyFeatureName() const { DARABONBA_PTR_GET_DEFAULT(keyFeatureName_, "") };
      inline LookupFeatures& setKeyFeatureName(string keyFeatureName) { DARABONBA_PTR_SET_VALUE(keyFeatureName_, keyFeatureName) };


      // mapFeatureDomain Field Functions 
      bool hasMapFeatureDomain() const { return this->mapFeatureDomain_ != nullptr;};
      void deleteMapFeatureDomain() { this->mapFeatureDomain_ = nullptr;};
      inline string getMapFeatureDomain() const { DARABONBA_PTR_GET_DEFAULT(mapFeatureDomain_, "") };
      inline LookupFeatures& setMapFeatureDomain(string mapFeatureDomain) { DARABONBA_PTR_SET_VALUE(mapFeatureDomain_, mapFeatureDomain) };


      // mapFeatureName Field Functions 
      bool hasMapFeatureName() const { return this->mapFeatureName_ != nullptr;};
      void deleteMapFeatureName() { this->mapFeatureName_ = nullptr;};
      inline string getMapFeatureName() const { DARABONBA_PTR_GET_DEFAULT(mapFeatureName_, "") };
      inline LookupFeatures& setMapFeatureName(string mapFeatureName) { DARABONBA_PTR_SET_VALUE(mapFeatureName_, mapFeatureName) };


      // valueType Field Functions 
      bool hasValueType() const { return this->valueType_ != nullptr;};
      void deleteValueType() { this->valueType_ = nullptr;};
      inline string getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
      inline LookupFeatures& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


    protected:
      // This parameter is required.
      shared_ptr<string> defaultValue_ {};
      // This parameter is required.
      shared_ptr<string> featureName_ {};
      // This parameter is required.
      shared_ptr<string> keyFeatureDomain_ {};
      // This parameter is required.
      shared_ptr<string> keyFeatureName_ {};
      // This parameter is required.
      shared_ptr<string> mapFeatureDomain_ {};
      // This parameter is required.
      shared_ptr<string> mapFeatureName_ {};
      // This parameter is required.
      shared_ptr<string> valueType_ {};
    };

    virtual bool empty() const override { return this->lookupFeatures_ == nullptr
        && this->rawFeatures_ == nullptr && this->reserves_ == nullptr && this->sequenceFeatures_ == nullptr; };
    // lookupFeatures Field Functions 
    bool hasLookupFeatures() const { return this->lookupFeatures_ != nullptr;};
    void deleteLookupFeatures() { this->lookupFeatures_ = nullptr;};
    inline const vector<UpdateModelFeatureFGFeatureRequest::LookupFeatures> & getLookupFeatures() const { DARABONBA_PTR_GET_CONST(lookupFeatures_, vector<UpdateModelFeatureFGFeatureRequest::LookupFeatures>) };
    inline vector<UpdateModelFeatureFGFeatureRequest::LookupFeatures> getLookupFeatures() { DARABONBA_PTR_GET(lookupFeatures_, vector<UpdateModelFeatureFGFeatureRequest::LookupFeatures>) };
    inline UpdateModelFeatureFGFeatureRequest& setLookupFeatures(const vector<UpdateModelFeatureFGFeatureRequest::LookupFeatures> & lookupFeatures) { DARABONBA_PTR_SET_VALUE(lookupFeatures_, lookupFeatures) };
    inline UpdateModelFeatureFGFeatureRequest& setLookupFeatures(vector<UpdateModelFeatureFGFeatureRequest::LookupFeatures> && lookupFeatures) { DARABONBA_PTR_SET_RVALUE(lookupFeatures_, lookupFeatures) };


    // rawFeatures Field Functions 
    bool hasRawFeatures() const { return this->rawFeatures_ != nullptr;};
    void deleteRawFeatures() { this->rawFeatures_ = nullptr;};
    inline const vector<UpdateModelFeatureFGFeatureRequest::RawFeatures> & getRawFeatures() const { DARABONBA_PTR_GET_CONST(rawFeatures_, vector<UpdateModelFeatureFGFeatureRequest::RawFeatures>) };
    inline vector<UpdateModelFeatureFGFeatureRequest::RawFeatures> getRawFeatures() { DARABONBA_PTR_GET(rawFeatures_, vector<UpdateModelFeatureFGFeatureRequest::RawFeatures>) };
    inline UpdateModelFeatureFGFeatureRequest& setRawFeatures(const vector<UpdateModelFeatureFGFeatureRequest::RawFeatures> & rawFeatures) { DARABONBA_PTR_SET_VALUE(rawFeatures_, rawFeatures) };
    inline UpdateModelFeatureFGFeatureRequest& setRawFeatures(vector<UpdateModelFeatureFGFeatureRequest::RawFeatures> && rawFeatures) { DARABONBA_PTR_SET_RVALUE(rawFeatures_, rawFeatures) };


    // reserves Field Functions 
    bool hasReserves() const { return this->reserves_ != nullptr;};
    void deleteReserves() { this->reserves_ = nullptr;};
    inline const vector<string> & getReserves() const { DARABONBA_PTR_GET_CONST(reserves_, vector<string>) };
    inline vector<string> getReserves() { DARABONBA_PTR_GET(reserves_, vector<string>) };
    inline UpdateModelFeatureFGFeatureRequest& setReserves(const vector<string> & reserves) { DARABONBA_PTR_SET_VALUE(reserves_, reserves) };
    inline UpdateModelFeatureFGFeatureRequest& setReserves(vector<string> && reserves) { DARABONBA_PTR_SET_RVALUE(reserves_, reserves) };


    // sequenceFeatures Field Functions 
    bool hasSequenceFeatures() const { return this->sequenceFeatures_ != nullptr;};
    void deleteSequenceFeatures() { this->sequenceFeatures_ = nullptr;};
    inline const vector<UpdateModelFeatureFGFeatureRequest::SequenceFeatures> & getSequenceFeatures() const { DARABONBA_PTR_GET_CONST(sequenceFeatures_, vector<UpdateModelFeatureFGFeatureRequest::SequenceFeatures>) };
    inline vector<UpdateModelFeatureFGFeatureRequest::SequenceFeatures> getSequenceFeatures() { DARABONBA_PTR_GET(sequenceFeatures_, vector<UpdateModelFeatureFGFeatureRequest::SequenceFeatures>) };
    inline UpdateModelFeatureFGFeatureRequest& setSequenceFeatures(const vector<UpdateModelFeatureFGFeatureRequest::SequenceFeatures> & sequenceFeatures) { DARABONBA_PTR_SET_VALUE(sequenceFeatures_, sequenceFeatures) };
    inline UpdateModelFeatureFGFeatureRequest& setSequenceFeatures(vector<UpdateModelFeatureFGFeatureRequest::SequenceFeatures> && sequenceFeatures) { DARABONBA_PTR_SET_RVALUE(sequenceFeatures_, sequenceFeatures) };


  protected:
    shared_ptr<vector<UpdateModelFeatureFGFeatureRequest::LookupFeatures>> lookupFeatures_ {};
    shared_ptr<vector<UpdateModelFeatureFGFeatureRequest::RawFeatures>> rawFeatures_ {};
    shared_ptr<vector<string>> reserves_ {};
    shared_ptr<vector<UpdateModelFeatureFGFeatureRequest::SequenceFeatures>> sequenceFeatures_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
