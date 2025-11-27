// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALGORITHMDEFINITION_HPP_
#define ALIBABACLOUD_MODELS_ALGORITHMDEFINITION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/TrainingSpecification.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class AlgorithmDefinition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlgorithmDefinition& obj) { 
      DARABONBA_PTR_TO_JSON(AlgorithmDefinitionId, algorithmDefinitionId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(TrainingSpecification, trainingSpecification_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, AlgorithmDefinition& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgorithmDefinitionId, algorithmDefinitionId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(TrainingSpecification, trainingSpecification_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    AlgorithmDefinition() = default ;
    AlgorithmDefinition(const AlgorithmDefinition &) = default ;
    AlgorithmDefinition(AlgorithmDefinition &&) = default ;
    AlgorithmDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlgorithmDefinition() = default ;
    AlgorithmDefinition& operator=(const AlgorithmDefinition &) = default ;
    AlgorithmDefinition& operator=(AlgorithmDefinition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithmDefinitionId_ == nullptr
        && return this->createTime_ == nullptr && return this->customLabels_ == nullptr && return this->description_ == nullptr && return this->name_ == nullptr && return this->ownerId_ == nullptr
        && return this->projectName_ == nullptr && return this->trainingSpecification_ == nullptr && return this->updateTime_ == nullptr; };
    // algorithmDefinitionId Field Functions 
    bool hasAlgorithmDefinitionId() const { return this->algorithmDefinitionId_ != nullptr;};
    void deleteAlgorithmDefinitionId() { this->algorithmDefinitionId_ = nullptr;};
    inline string algorithmDefinitionId() const { DARABONBA_PTR_GET_DEFAULT(algorithmDefinitionId_, "") };
    inline AlgorithmDefinition& setAlgorithmDefinitionId(string algorithmDefinitionId) { DARABONBA_PTR_SET_VALUE(algorithmDefinitionId_, algorithmDefinitionId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline AlgorithmDefinition& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline const vector<map<string, string>> & customLabels() const { DARABONBA_PTR_GET_CONST(customLabels_, vector<map<string, string>>) };
    inline vector<map<string, string>> customLabels() { DARABONBA_PTR_GET(customLabels_, vector<map<string, string>>) };
    inline AlgorithmDefinition& setCustomLabels(const vector<map<string, string>> & customLabels) { DARABONBA_PTR_SET_VALUE(customLabels_, customLabels) };
    inline AlgorithmDefinition& setCustomLabels(vector<map<string, string>> && customLabels) { DARABONBA_PTR_SET_RVALUE(customLabels_, customLabels) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AlgorithmDefinition& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AlgorithmDefinition& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline AlgorithmDefinition& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline AlgorithmDefinition& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // trainingSpecification Field Functions 
    bool hasTrainingSpecification() const { return this->trainingSpecification_ != nullptr;};
    void deleteTrainingSpecification() { this->trainingSpecification_ = nullptr;};
    inline const TrainingSpecification & trainingSpecification() const { DARABONBA_PTR_GET_CONST(trainingSpecification_, TrainingSpecification) };
    inline TrainingSpecification trainingSpecification() { DARABONBA_PTR_GET(trainingSpecification_, TrainingSpecification) };
    inline AlgorithmDefinition& setTrainingSpecification(const TrainingSpecification & trainingSpecification) { DARABONBA_PTR_SET_VALUE(trainingSpecification_, trainingSpecification) };
    inline AlgorithmDefinition& setTrainingSpecification(TrainingSpecification && trainingSpecification) { DARABONBA_PTR_SET_RVALUE(trainingSpecification_, trainingSpecification) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline AlgorithmDefinition& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> algorithmDefinitionId_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<vector<map<string, string>>> customLabels_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<TrainingSpecification> trainingSpecification_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
