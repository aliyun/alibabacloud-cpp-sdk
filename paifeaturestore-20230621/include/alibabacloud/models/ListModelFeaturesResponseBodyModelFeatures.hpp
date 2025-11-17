// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELFEATURESRESPONSEBODYMODELFEATURES_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELFEATURESRESPONSEBODYMODELFEATURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListModelFeaturesResponseBodyModelFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelFeaturesResponseBodyModelFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(LabelTableName, labelTableName_);
      DARABONBA_PTR_TO_JSON(ModelFeatureId, modelFeatureId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelFeaturesResponseBodyModelFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(LabelTableName, labelTableName_);
      DARABONBA_PTR_FROM_JSON(ModelFeatureId, modelFeatureId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    ListModelFeaturesResponseBodyModelFeatures() = default ;
    ListModelFeaturesResponseBodyModelFeatures(const ListModelFeaturesResponseBodyModelFeatures &) = default ;
    ListModelFeaturesResponseBodyModelFeatures(ListModelFeaturesResponseBodyModelFeatures &&) = default ;
    ListModelFeaturesResponseBodyModelFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelFeaturesResponseBodyModelFeatures() = default ;
    ListModelFeaturesResponseBodyModelFeatures& operator=(const ListModelFeaturesResponseBodyModelFeatures &) = default ;
    ListModelFeaturesResponseBodyModelFeatures& operator=(ListModelFeaturesResponseBodyModelFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtCreateTime_ == nullptr
        && return this->gmtModifiedTime_ == nullptr && return this->labelTableName_ == nullptr && return this->modelFeatureId_ == nullptr && return this->name_ == nullptr && return this->owner_ == nullptr
        && return this->projectId_ == nullptr && return this->projectName_ == nullptr; };
    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListModelFeaturesResponseBodyModelFeatures& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline ListModelFeaturesResponseBodyModelFeatures& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // labelTableName Field Functions 
    bool hasLabelTableName() const { return this->labelTableName_ != nullptr;};
    void deleteLabelTableName() { this->labelTableName_ = nullptr;};
    inline string labelTableName() const { DARABONBA_PTR_GET_DEFAULT(labelTableName_, "") };
    inline ListModelFeaturesResponseBodyModelFeatures& setLabelTableName(string labelTableName) { DARABONBA_PTR_SET_VALUE(labelTableName_, labelTableName) };


    // modelFeatureId Field Functions 
    bool hasModelFeatureId() const { return this->modelFeatureId_ != nullptr;};
    void deleteModelFeatureId() { this->modelFeatureId_ = nullptr;};
    inline string modelFeatureId() const { DARABONBA_PTR_GET_DEFAULT(modelFeatureId_, "") };
    inline ListModelFeaturesResponseBodyModelFeatures& setModelFeatureId(string modelFeatureId) { DARABONBA_PTR_SET_VALUE(modelFeatureId_, modelFeatureId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListModelFeaturesResponseBodyModelFeatures& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListModelFeaturesResponseBodyModelFeatures& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ListModelFeaturesResponseBodyModelFeatures& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListModelFeaturesResponseBodyModelFeatures& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> labelTableName_ = nullptr;
    std::shared_ptr<string> modelFeatureId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
