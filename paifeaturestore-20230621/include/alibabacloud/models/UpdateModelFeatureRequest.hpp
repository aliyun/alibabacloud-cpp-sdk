// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELFEATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELFEATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateModelFeatureRequestFeatures.hpp>
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
    virtual bool empty() const override { this->features_ != nullptr
        && this->labelPriorityLevel_ != nullptr && this->labelTableId_ != nullptr && this->sequenceFeatureViewIds_ != nullptr; };
    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const vector<UpdateModelFeatureRequestFeatures> & features() const { DARABONBA_PTR_GET_CONST(features_, vector<UpdateModelFeatureRequestFeatures>) };
    inline vector<UpdateModelFeatureRequestFeatures> features() { DARABONBA_PTR_GET(features_, vector<UpdateModelFeatureRequestFeatures>) };
    inline UpdateModelFeatureRequest& setFeatures(const vector<UpdateModelFeatureRequestFeatures> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline UpdateModelFeatureRequest& setFeatures(vector<UpdateModelFeatureRequestFeatures> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // labelPriorityLevel Field Functions 
    bool hasLabelPriorityLevel() const { return this->labelPriorityLevel_ != nullptr;};
    void deleteLabelPriorityLevel() { this->labelPriorityLevel_ = nullptr;};
    inline int64_t labelPriorityLevel() const { DARABONBA_PTR_GET_DEFAULT(labelPriorityLevel_, 0L) };
    inline UpdateModelFeatureRequest& setLabelPriorityLevel(int64_t labelPriorityLevel) { DARABONBA_PTR_SET_VALUE(labelPriorityLevel_, labelPriorityLevel) };


    // labelTableId Field Functions 
    bool hasLabelTableId() const { return this->labelTableId_ != nullptr;};
    void deleteLabelTableId() { this->labelTableId_ = nullptr;};
    inline string labelTableId() const { DARABONBA_PTR_GET_DEFAULT(labelTableId_, "") };
    inline UpdateModelFeatureRequest& setLabelTableId(string labelTableId) { DARABONBA_PTR_SET_VALUE(labelTableId_, labelTableId) };


    // sequenceFeatureViewIds Field Functions 
    bool hasSequenceFeatureViewIds() const { return this->sequenceFeatureViewIds_ != nullptr;};
    void deleteSequenceFeatureViewIds() { this->sequenceFeatureViewIds_ = nullptr;};
    inline const vector<string> & sequenceFeatureViewIds() const { DARABONBA_PTR_GET_CONST(sequenceFeatureViewIds_, vector<string>) };
    inline vector<string> sequenceFeatureViewIds() { DARABONBA_PTR_GET(sequenceFeatureViewIds_, vector<string>) };
    inline UpdateModelFeatureRequest& setSequenceFeatureViewIds(const vector<string> & sequenceFeatureViewIds) { DARABONBA_PTR_SET_VALUE(sequenceFeatureViewIds_, sequenceFeatureViewIds) };
    inline UpdateModelFeatureRequest& setSequenceFeatureViewIds(vector<string> && sequenceFeatureViewIds) { DARABONBA_PTR_SET_RVALUE(sequenceFeatureViewIds_, sequenceFeatureViewIds) };


  protected:
    std::shared_ptr<vector<UpdateModelFeatureRequestFeatures>> features_ = nullptr;
    std::shared_ptr<int64_t> labelPriorityLevel_ = nullptr;
    std::shared_ptr<string> labelTableId_ = nullptr;
    std::shared_ptr<vector<string>> sequenceFeatureViewIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
