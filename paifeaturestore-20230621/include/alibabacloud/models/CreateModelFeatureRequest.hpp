// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELFEATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELFEATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateModelFeatureRequestFeatures.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class CreateModelFeatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelFeatureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(LabelPriorityLevel, labelPriorityLevel_);
      DARABONBA_PTR_TO_JSON(LabelTableId, labelTableId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SequenceFeatureViewIds, sequenceFeatureViewIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelFeatureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(LabelPriorityLevel, labelPriorityLevel_);
      DARABONBA_PTR_FROM_JSON(LabelTableId, labelTableId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SequenceFeatureViewIds, sequenceFeatureViewIds_);
    };
    CreateModelFeatureRequest() = default ;
    CreateModelFeatureRequest(const CreateModelFeatureRequest &) = default ;
    CreateModelFeatureRequest(CreateModelFeatureRequest &&) = default ;
    CreateModelFeatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelFeatureRequest() = default ;
    CreateModelFeatureRequest& operator=(const CreateModelFeatureRequest &) = default ;
    CreateModelFeatureRequest& operator=(CreateModelFeatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->features_ != nullptr
        && this->labelPriorityLevel_ != nullptr && this->labelTableId_ != nullptr && this->name_ != nullptr && this->projectId_ != nullptr && this->sequenceFeatureViewIds_ != nullptr; };
    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const vector<CreateModelFeatureRequestFeatures> & features() const { DARABONBA_PTR_GET_CONST(features_, vector<CreateModelFeatureRequestFeatures>) };
    inline vector<CreateModelFeatureRequestFeatures> features() { DARABONBA_PTR_GET(features_, vector<CreateModelFeatureRequestFeatures>) };
    inline CreateModelFeatureRequest& setFeatures(const vector<CreateModelFeatureRequestFeatures> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline CreateModelFeatureRequest& setFeatures(vector<CreateModelFeatureRequestFeatures> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // labelPriorityLevel Field Functions 
    bool hasLabelPriorityLevel() const { return this->labelPriorityLevel_ != nullptr;};
    void deleteLabelPriorityLevel() { this->labelPriorityLevel_ = nullptr;};
    inline int64_t labelPriorityLevel() const { DARABONBA_PTR_GET_DEFAULT(labelPriorityLevel_, 0L) };
    inline CreateModelFeatureRequest& setLabelPriorityLevel(int64_t labelPriorityLevel) { DARABONBA_PTR_SET_VALUE(labelPriorityLevel_, labelPriorityLevel) };


    // labelTableId Field Functions 
    bool hasLabelTableId() const { return this->labelTableId_ != nullptr;};
    void deleteLabelTableId() { this->labelTableId_ = nullptr;};
    inline string labelTableId() const { DARABONBA_PTR_GET_DEFAULT(labelTableId_, "") };
    inline CreateModelFeatureRequest& setLabelTableId(string labelTableId) { DARABONBA_PTR_SET_VALUE(labelTableId_, labelTableId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateModelFeatureRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline CreateModelFeatureRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // sequenceFeatureViewIds Field Functions 
    bool hasSequenceFeatureViewIds() const { return this->sequenceFeatureViewIds_ != nullptr;};
    void deleteSequenceFeatureViewIds() { this->sequenceFeatureViewIds_ = nullptr;};
    inline const vector<string> & sequenceFeatureViewIds() const { DARABONBA_PTR_GET_CONST(sequenceFeatureViewIds_, vector<string>) };
    inline vector<string> sequenceFeatureViewIds() { DARABONBA_PTR_GET(sequenceFeatureViewIds_, vector<string>) };
    inline CreateModelFeatureRequest& setSequenceFeatureViewIds(const vector<string> & sequenceFeatureViewIds) { DARABONBA_PTR_SET_VALUE(sequenceFeatureViewIds_, sequenceFeatureViewIds) };
    inline CreateModelFeatureRequest& setSequenceFeatureViewIds(vector<string> && sequenceFeatureViewIds) { DARABONBA_PTR_SET_RVALUE(sequenceFeatureViewIds_, sequenceFeatureViewIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<CreateModelFeatureRequestFeatures>> features_ = nullptr;
    std::shared_ptr<int64_t> labelPriorityLevel_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> labelTableId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<vector<string>> sequenceFeatureViewIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
