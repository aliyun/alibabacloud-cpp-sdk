// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELFEATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELFEATUREREQUEST_HPP_
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
  class UpdateModelFeatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelFeatureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(LabelPriorityLevel, labelPriorityLevel_);
      DARABONBA_PTR_TO_JSON(LabelTableId, labelTableId_);
      DARABONBA_PTR_TO_JSON(SequenceFeatureViewIds, sequenceFeatureViewIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelFeatureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(LabelPriorityLevel, labelPriorityLevel_);
      DARABONBA_PTR_FROM_JSON(LabelTableId, labelTableId_);
      DARABONBA_PTR_FROM_JSON(SequenceFeatureViewIds, sequenceFeatureViewIds_);
    };
    UpdateModelFeatureRequest() = default ;
    UpdateModelFeatureRequest(const UpdateModelFeatureRequest &) = default ;
    UpdateModelFeatureRequest(UpdateModelFeatureRequest &&) = default ;
    UpdateModelFeatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelFeatureRequest() = default ;
    UpdateModelFeatureRequest& operator=(const UpdateModelFeatureRequest &) = default ;
    UpdateModelFeatureRequest& operator=(UpdateModelFeatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Features : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Features& obj) { 
        DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
        DARABONBA_PTR_TO_JSON(FeatureViewId, featureViewId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Features& obj) { 
        DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
        DARABONBA_PTR_FROM_JSON(FeatureViewId, featureViewId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Features() = default ;
      Features(const Features &) = default ;
      Features(Features &&) = default ;
      Features(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Features() = default ;
      Features& operator=(const Features &) = default ;
      Features& operator=(Features &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->featureViewId_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
      // aliasName Field Functions 
      bool hasAliasName() const { return this->aliasName_ != nullptr;};
      void deleteAliasName() { this->aliasName_ = nullptr;};
      inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
      inline Features& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


      // featureViewId Field Functions 
      bool hasFeatureViewId() const { return this->featureViewId_ != nullptr;};
      void deleteFeatureViewId() { this->featureViewId_ = nullptr;};
      inline string getFeatureViewId() const { DARABONBA_PTR_GET_DEFAULT(featureViewId_, "") };
      inline Features& setFeatureViewId(string featureViewId) { DARABONBA_PTR_SET_VALUE(featureViewId_, featureViewId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Features& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Features& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> aliasName_ {};
      // This parameter is required.
      shared_ptr<string> featureViewId_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->features_ == nullptr
        && this->labelPriorityLevel_ == nullptr && this->labelTableId_ == nullptr && this->sequenceFeatureViewIds_ == nullptr; };
    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const vector<UpdateModelFeatureRequest::Features> & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, vector<UpdateModelFeatureRequest::Features>) };
    inline vector<UpdateModelFeatureRequest::Features> getFeatures() { DARABONBA_PTR_GET(features_, vector<UpdateModelFeatureRequest::Features>) };
    inline UpdateModelFeatureRequest& setFeatures(const vector<UpdateModelFeatureRequest::Features> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline UpdateModelFeatureRequest& setFeatures(vector<UpdateModelFeatureRequest::Features> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // labelPriorityLevel Field Functions 
    bool hasLabelPriorityLevel() const { return this->labelPriorityLevel_ != nullptr;};
    void deleteLabelPriorityLevel() { this->labelPriorityLevel_ = nullptr;};
    inline int64_t getLabelPriorityLevel() const { DARABONBA_PTR_GET_DEFAULT(labelPriorityLevel_, 0L) };
    inline UpdateModelFeatureRequest& setLabelPriorityLevel(int64_t labelPriorityLevel) { DARABONBA_PTR_SET_VALUE(labelPriorityLevel_, labelPriorityLevel) };


    // labelTableId Field Functions 
    bool hasLabelTableId() const { return this->labelTableId_ != nullptr;};
    void deleteLabelTableId() { this->labelTableId_ = nullptr;};
    inline string getLabelTableId() const { DARABONBA_PTR_GET_DEFAULT(labelTableId_, "") };
    inline UpdateModelFeatureRequest& setLabelTableId(string labelTableId) { DARABONBA_PTR_SET_VALUE(labelTableId_, labelTableId) };


    // sequenceFeatureViewIds Field Functions 
    bool hasSequenceFeatureViewIds() const { return this->sequenceFeatureViewIds_ != nullptr;};
    void deleteSequenceFeatureViewIds() { this->sequenceFeatureViewIds_ = nullptr;};
    inline const vector<string> & getSequenceFeatureViewIds() const { DARABONBA_PTR_GET_CONST(sequenceFeatureViewIds_, vector<string>) };
    inline vector<string> getSequenceFeatureViewIds() { DARABONBA_PTR_GET(sequenceFeatureViewIds_, vector<string>) };
    inline UpdateModelFeatureRequest& setSequenceFeatureViewIds(const vector<string> & sequenceFeatureViewIds) { DARABONBA_PTR_SET_VALUE(sequenceFeatureViewIds_, sequenceFeatureViewIds) };
    inline UpdateModelFeatureRequest& setSequenceFeatureViewIds(vector<string> && sequenceFeatureViewIds) { DARABONBA_PTR_SET_RVALUE(sequenceFeatureViewIds_, sequenceFeatureViewIds) };


  protected:
    shared_ptr<vector<UpdateModelFeatureRequest::Features>> features_ {};
    shared_ptr<int64_t> labelPriorityLevel_ {};
    shared_ptr<string> labelTableId_ {};
    shared_ptr<vector<string>> sequenceFeatureViewIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
