// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELFEATURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMODELFEATURERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetModelFeatureResponseBodyFeatures.hpp>
#include <alibabacloud/models/GetModelFeatureResponseBodyRelations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class GetModelFeatureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelFeatureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExportTrainingSetTableScript, exportTrainingSetTableScript_);
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(LabelPriorityLevel, labelPriorityLevel_);
      DARABONBA_PTR_TO_JSON(LabelTableId, labelTableId_);
      DARABONBA_PTR_TO_JSON(LabelTableName, labelTableName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Relations, relations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrainingSetFGTable, trainingSetFGTable_);
      DARABONBA_PTR_TO_JSON(TrainingSetTable, trainingSetTable_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelFeatureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportTrainingSetTableScript, exportTrainingSetTableScript_);
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(LabelPriorityLevel, labelPriorityLevel_);
      DARABONBA_PTR_FROM_JSON(LabelTableId, labelTableId_);
      DARABONBA_PTR_FROM_JSON(LabelTableName, labelTableName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Relations, relations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrainingSetFGTable, trainingSetFGTable_);
      DARABONBA_PTR_FROM_JSON(TrainingSetTable, trainingSetTable_);
    };
    GetModelFeatureResponseBody() = default ;
    GetModelFeatureResponseBody(const GetModelFeatureResponseBody &) = default ;
    GetModelFeatureResponseBody(GetModelFeatureResponseBody &&) = default ;
    GetModelFeatureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelFeatureResponseBody() = default ;
    GetModelFeatureResponseBody& operator=(const GetModelFeatureResponseBody &) = default ;
    GetModelFeatureResponseBody& operator=(GetModelFeatureResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportTrainingSetTableScript_ == nullptr
        && return this->features_ == nullptr && return this->gmtCreateTime_ == nullptr && return this->gmtModifiedTime_ == nullptr && return this->labelPriorityLevel_ == nullptr && return this->labelTableId_ == nullptr
        && return this->labelTableName_ == nullptr && return this->name_ == nullptr && return this->owner_ == nullptr && return this->projectId_ == nullptr && return this->projectName_ == nullptr
        && return this->relations_ == nullptr && return this->requestId_ == nullptr && return this->trainingSetFGTable_ == nullptr && return this->trainingSetTable_ == nullptr; };
    // exportTrainingSetTableScript Field Functions 
    bool hasExportTrainingSetTableScript() const { return this->exportTrainingSetTableScript_ != nullptr;};
    void deleteExportTrainingSetTableScript() { this->exportTrainingSetTableScript_ = nullptr;};
    inline string exportTrainingSetTableScript() const { DARABONBA_PTR_GET_DEFAULT(exportTrainingSetTableScript_, "") };
    inline GetModelFeatureResponseBody& setExportTrainingSetTableScript(string exportTrainingSetTableScript) { DARABONBA_PTR_SET_VALUE(exportTrainingSetTableScript_, exportTrainingSetTableScript) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const vector<GetModelFeatureResponseBodyFeatures> & features() const { DARABONBA_PTR_GET_CONST(features_, vector<GetModelFeatureResponseBodyFeatures>) };
    inline vector<GetModelFeatureResponseBodyFeatures> features() { DARABONBA_PTR_GET(features_, vector<GetModelFeatureResponseBodyFeatures>) };
    inline GetModelFeatureResponseBody& setFeatures(const vector<GetModelFeatureResponseBodyFeatures> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline GetModelFeatureResponseBody& setFeatures(vector<GetModelFeatureResponseBodyFeatures> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetModelFeatureResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetModelFeatureResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // labelPriorityLevel Field Functions 
    bool hasLabelPriorityLevel() const { return this->labelPriorityLevel_ != nullptr;};
    void deleteLabelPriorityLevel() { this->labelPriorityLevel_ = nullptr;};
    inline int64_t labelPriorityLevel() const { DARABONBA_PTR_GET_DEFAULT(labelPriorityLevel_, 0L) };
    inline GetModelFeatureResponseBody& setLabelPriorityLevel(int64_t labelPriorityLevel) { DARABONBA_PTR_SET_VALUE(labelPriorityLevel_, labelPriorityLevel) };


    // labelTableId Field Functions 
    bool hasLabelTableId() const { return this->labelTableId_ != nullptr;};
    void deleteLabelTableId() { this->labelTableId_ = nullptr;};
    inline string labelTableId() const { DARABONBA_PTR_GET_DEFAULT(labelTableId_, "") };
    inline GetModelFeatureResponseBody& setLabelTableId(string labelTableId) { DARABONBA_PTR_SET_VALUE(labelTableId_, labelTableId) };


    // labelTableName Field Functions 
    bool hasLabelTableName() const { return this->labelTableName_ != nullptr;};
    void deleteLabelTableName() { this->labelTableName_ = nullptr;};
    inline string labelTableName() const { DARABONBA_PTR_GET_DEFAULT(labelTableName_, "") };
    inline GetModelFeatureResponseBody& setLabelTableName(string labelTableName) { DARABONBA_PTR_SET_VALUE(labelTableName_, labelTableName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetModelFeatureResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetModelFeatureResponseBody& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline GetModelFeatureResponseBody& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetModelFeatureResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // relations Field Functions 
    bool hasRelations() const { return this->relations_ != nullptr;};
    void deleteRelations() { this->relations_ = nullptr;};
    inline const GetModelFeatureResponseBodyRelations & relations() const { DARABONBA_PTR_GET_CONST(relations_, GetModelFeatureResponseBodyRelations) };
    inline GetModelFeatureResponseBodyRelations relations() { DARABONBA_PTR_GET(relations_, GetModelFeatureResponseBodyRelations) };
    inline GetModelFeatureResponseBody& setRelations(const GetModelFeatureResponseBodyRelations & relations) { DARABONBA_PTR_SET_VALUE(relations_, relations) };
    inline GetModelFeatureResponseBody& setRelations(GetModelFeatureResponseBodyRelations && relations) { DARABONBA_PTR_SET_RVALUE(relations_, relations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetModelFeatureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trainingSetFGTable Field Functions 
    bool hasTrainingSetFGTable() const { return this->trainingSetFGTable_ != nullptr;};
    void deleteTrainingSetFGTable() { this->trainingSetFGTable_ = nullptr;};
    inline string trainingSetFGTable() const { DARABONBA_PTR_GET_DEFAULT(trainingSetFGTable_, "") };
    inline GetModelFeatureResponseBody& setTrainingSetFGTable(string trainingSetFGTable) { DARABONBA_PTR_SET_VALUE(trainingSetFGTable_, trainingSetFGTable) };


    // trainingSetTable Field Functions 
    bool hasTrainingSetTable() const { return this->trainingSetTable_ != nullptr;};
    void deleteTrainingSetTable() { this->trainingSetTable_ = nullptr;};
    inline string trainingSetTable() const { DARABONBA_PTR_GET_DEFAULT(trainingSetTable_, "") };
    inline GetModelFeatureResponseBody& setTrainingSetTable(string trainingSetTable) { DARABONBA_PTR_SET_VALUE(trainingSetTable_, trainingSetTable) };


  protected:
    std::shared_ptr<string> exportTrainingSetTableScript_ = nullptr;
    std::shared_ptr<vector<GetModelFeatureResponseBodyFeatures>> features_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<int64_t> labelPriorityLevel_ = nullptr;
    std::shared_ptr<string> labelTableId_ = nullptr;
    std::shared_ptr<string> labelTableName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<GetModelFeatureResponseBodyRelations> relations_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> trainingSetFGTable_ = nullptr;
    std::shared_ptr<string> trainingSetTable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
