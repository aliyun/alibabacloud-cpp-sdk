// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELFEATURESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELFEATURESRESPONSEBODY_HPP_
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
  class ListModelFeaturesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelFeaturesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ModelFeatures, modelFeatures_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelFeaturesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelFeatures, modelFeatures_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListModelFeaturesResponseBody() = default ;
    ListModelFeaturesResponseBody(const ListModelFeaturesResponseBody &) = default ;
    ListModelFeaturesResponseBody(ListModelFeaturesResponseBody &&) = default ;
    ListModelFeaturesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelFeaturesResponseBody() = default ;
    ListModelFeaturesResponseBody& operator=(const ListModelFeaturesResponseBody &) = default ;
    ListModelFeaturesResponseBody& operator=(ListModelFeaturesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModelFeatures : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModelFeatures& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(LabelTableName, labelTableName_);
        DARABONBA_PTR_TO_JSON(ModelFeatureId, modelFeatureId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      };
      friend void from_json(const Darabonba::Json& j, ModelFeatures& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(LabelTableName, labelTableName_);
        DARABONBA_PTR_FROM_JSON(ModelFeatureId, modelFeatureId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      };
      ModelFeatures() = default ;
      ModelFeatures(const ModelFeatures &) = default ;
      ModelFeatures(ModelFeatures &&) = default ;
      ModelFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModelFeatures() = default ;
      ModelFeatures& operator=(const ModelFeatures &) = default ;
      ModelFeatures& operator=(ModelFeatures &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gmtCreateTime_ == nullptr
        && this->gmtModifiedTime_ == nullptr && this->labelTableName_ == nullptr && this->modelFeatureId_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr
        && this->projectId_ == nullptr && this->projectName_ == nullptr; };
      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline ModelFeatures& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline ModelFeatures& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // labelTableName Field Functions 
      bool hasLabelTableName() const { return this->labelTableName_ != nullptr;};
      void deleteLabelTableName() { this->labelTableName_ = nullptr;};
      inline string getLabelTableName() const { DARABONBA_PTR_GET_DEFAULT(labelTableName_, "") };
      inline ModelFeatures& setLabelTableName(string labelTableName) { DARABONBA_PTR_SET_VALUE(labelTableName_, labelTableName) };


      // modelFeatureId Field Functions 
      bool hasModelFeatureId() const { return this->modelFeatureId_ != nullptr;};
      void deleteModelFeatureId() { this->modelFeatureId_ = nullptr;};
      inline string getModelFeatureId() const { DARABONBA_PTR_GET_DEFAULT(modelFeatureId_, "") };
      inline ModelFeatures& setModelFeatureId(string modelFeatureId) { DARABONBA_PTR_SET_VALUE(modelFeatureId_, modelFeatureId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ModelFeatures& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline ModelFeatures& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline ModelFeatures& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline ModelFeatures& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    protected:
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<string> gmtModifiedTime_ {};
      shared_ptr<string> labelTableName_ {};
      shared_ptr<string> modelFeatureId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> owner_ {};
      shared_ptr<string> projectId_ {};
      shared_ptr<string> projectName_ {};
    };

    virtual bool empty() const override { return this->modelFeatures_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // modelFeatures Field Functions 
    bool hasModelFeatures() const { return this->modelFeatures_ != nullptr;};
    void deleteModelFeatures() { this->modelFeatures_ = nullptr;};
    inline const vector<ListModelFeaturesResponseBody::ModelFeatures> & getModelFeatures() const { DARABONBA_PTR_GET_CONST(modelFeatures_, vector<ListModelFeaturesResponseBody::ModelFeatures>) };
    inline vector<ListModelFeaturesResponseBody::ModelFeatures> getModelFeatures() { DARABONBA_PTR_GET(modelFeatures_, vector<ListModelFeaturesResponseBody::ModelFeatures>) };
    inline ListModelFeaturesResponseBody& setModelFeatures(const vector<ListModelFeaturesResponseBody::ModelFeatures> & modelFeatures) { DARABONBA_PTR_SET_VALUE(modelFeatures_, modelFeatures) };
    inline ListModelFeaturesResponseBody& setModelFeatures(vector<ListModelFeaturesResponseBody::ModelFeatures> && modelFeatures) { DARABONBA_PTR_SET_RVALUE(modelFeatures_, modelFeatures) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListModelFeaturesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListModelFeaturesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListModelFeaturesResponseBody::ModelFeatures>> modelFeatures_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
