// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYPROJECTS_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYPROJECTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListProjectsResponseBodyProjects : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsResponseBodyProjects& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FeatureEntityCount, featureEntityCount_);
      DARABONBA_PTR_TO_JSON(FeatureViewCount, featureViewCount_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(ModelCount, modelCount_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OfflineDatasourceId, offlineDatasourceId_);
      DARABONBA_PTR_TO_JSON(OfflineDatasourceName, offlineDatasourceName_);
      DARABONBA_PTR_TO_JSON(OfflineDatasourceType, offlineDatasourceType_);
      DARABONBA_PTR_TO_JSON(OfflineLifecycle, offlineLifecycle_);
      DARABONBA_PTR_TO_JSON(OnlineDatasourceId, onlineDatasourceId_);
      DARABONBA_PTR_TO_JSON(OnlineDatasourceName, onlineDatasourceName_);
      DARABONBA_PTR_TO_JSON(OnlineDatasourceType, onlineDatasourceType_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsResponseBodyProjects& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FeatureEntityCount, featureEntityCount_);
      DARABONBA_PTR_FROM_JSON(FeatureViewCount, featureViewCount_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(ModelCount, modelCount_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OfflineDatasourceId, offlineDatasourceId_);
      DARABONBA_PTR_FROM_JSON(OfflineDatasourceName, offlineDatasourceName_);
      DARABONBA_PTR_FROM_JSON(OfflineDatasourceType, offlineDatasourceType_);
      DARABONBA_PTR_FROM_JSON(OfflineLifecycle, offlineLifecycle_);
      DARABONBA_PTR_FROM_JSON(OnlineDatasourceId, onlineDatasourceId_);
      DARABONBA_PTR_FROM_JSON(OnlineDatasourceName, onlineDatasourceName_);
      DARABONBA_PTR_FROM_JSON(OnlineDatasourceType, onlineDatasourceType_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ListProjectsResponseBodyProjects() = default ;
    ListProjectsResponseBodyProjects(const ListProjectsResponseBodyProjects &) = default ;
    ListProjectsResponseBodyProjects(ListProjectsResponseBodyProjects &&) = default ;
    ListProjectsResponseBodyProjects(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsResponseBodyProjects() = default ;
    ListProjectsResponseBodyProjects& operator=(const ListProjectsResponseBodyProjects &) = default ;
    ListProjectsResponseBodyProjects& operator=(ListProjectsResponseBodyProjects &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->featureEntityCount_ == nullptr && return this->featureViewCount_ == nullptr && return this->gmtCreateTime_ == nullptr && return this->gmtModifiedTime_ == nullptr && return this->modelCount_ == nullptr
        && return this->name_ == nullptr && return this->offlineDatasourceId_ == nullptr && return this->offlineDatasourceName_ == nullptr && return this->offlineDatasourceType_ == nullptr && return this->offlineLifecycle_ == nullptr
        && return this->onlineDatasourceId_ == nullptr && return this->onlineDatasourceName_ == nullptr && return this->onlineDatasourceType_ == nullptr && return this->owner_ == nullptr && return this->projectId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListProjectsResponseBodyProjects& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // featureEntityCount Field Functions 
    bool hasFeatureEntityCount() const { return this->featureEntityCount_ != nullptr;};
    void deleteFeatureEntityCount() { this->featureEntityCount_ = nullptr;};
    inline int32_t featureEntityCount() const { DARABONBA_PTR_GET_DEFAULT(featureEntityCount_, 0) };
    inline ListProjectsResponseBodyProjects& setFeatureEntityCount(int32_t featureEntityCount) { DARABONBA_PTR_SET_VALUE(featureEntityCount_, featureEntityCount) };


    // featureViewCount Field Functions 
    bool hasFeatureViewCount() const { return this->featureViewCount_ != nullptr;};
    void deleteFeatureViewCount() { this->featureViewCount_ = nullptr;};
    inline int32_t featureViewCount() const { DARABONBA_PTR_GET_DEFAULT(featureViewCount_, 0) };
    inline ListProjectsResponseBodyProjects& setFeatureViewCount(int32_t featureViewCount) { DARABONBA_PTR_SET_VALUE(featureViewCount_, featureViewCount) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListProjectsResponseBodyProjects& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline ListProjectsResponseBodyProjects& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // modelCount Field Functions 
    bool hasModelCount() const { return this->modelCount_ != nullptr;};
    void deleteModelCount() { this->modelCount_ = nullptr;};
    inline int32_t modelCount() const { DARABONBA_PTR_GET_DEFAULT(modelCount_, 0) };
    inline ListProjectsResponseBodyProjects& setModelCount(int32_t modelCount) { DARABONBA_PTR_SET_VALUE(modelCount_, modelCount) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListProjectsResponseBodyProjects& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // offlineDatasourceId Field Functions 
    bool hasOfflineDatasourceId() const { return this->offlineDatasourceId_ != nullptr;};
    void deleteOfflineDatasourceId() { this->offlineDatasourceId_ = nullptr;};
    inline string offlineDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(offlineDatasourceId_, "") };
    inline ListProjectsResponseBodyProjects& setOfflineDatasourceId(string offlineDatasourceId) { DARABONBA_PTR_SET_VALUE(offlineDatasourceId_, offlineDatasourceId) };


    // offlineDatasourceName Field Functions 
    bool hasOfflineDatasourceName() const { return this->offlineDatasourceName_ != nullptr;};
    void deleteOfflineDatasourceName() { this->offlineDatasourceName_ = nullptr;};
    inline string offlineDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(offlineDatasourceName_, "") };
    inline ListProjectsResponseBodyProjects& setOfflineDatasourceName(string offlineDatasourceName) { DARABONBA_PTR_SET_VALUE(offlineDatasourceName_, offlineDatasourceName) };


    // offlineDatasourceType Field Functions 
    bool hasOfflineDatasourceType() const { return this->offlineDatasourceType_ != nullptr;};
    void deleteOfflineDatasourceType() { this->offlineDatasourceType_ = nullptr;};
    inline string offlineDatasourceType() const { DARABONBA_PTR_GET_DEFAULT(offlineDatasourceType_, "") };
    inline ListProjectsResponseBodyProjects& setOfflineDatasourceType(string offlineDatasourceType) { DARABONBA_PTR_SET_VALUE(offlineDatasourceType_, offlineDatasourceType) };


    // offlineLifecycle Field Functions 
    bool hasOfflineLifecycle() const { return this->offlineLifecycle_ != nullptr;};
    void deleteOfflineLifecycle() { this->offlineLifecycle_ = nullptr;};
    inline int32_t offlineLifecycle() const { DARABONBA_PTR_GET_DEFAULT(offlineLifecycle_, 0) };
    inline ListProjectsResponseBodyProjects& setOfflineLifecycle(int32_t offlineLifecycle) { DARABONBA_PTR_SET_VALUE(offlineLifecycle_, offlineLifecycle) };


    // onlineDatasourceId Field Functions 
    bool hasOnlineDatasourceId() const { return this->onlineDatasourceId_ != nullptr;};
    void deleteOnlineDatasourceId() { this->onlineDatasourceId_ = nullptr;};
    inline string onlineDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(onlineDatasourceId_, "") };
    inline ListProjectsResponseBodyProjects& setOnlineDatasourceId(string onlineDatasourceId) { DARABONBA_PTR_SET_VALUE(onlineDatasourceId_, onlineDatasourceId) };


    // onlineDatasourceName Field Functions 
    bool hasOnlineDatasourceName() const { return this->onlineDatasourceName_ != nullptr;};
    void deleteOnlineDatasourceName() { this->onlineDatasourceName_ = nullptr;};
    inline string onlineDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(onlineDatasourceName_, "") };
    inline ListProjectsResponseBodyProjects& setOnlineDatasourceName(string onlineDatasourceName) { DARABONBA_PTR_SET_VALUE(onlineDatasourceName_, onlineDatasourceName) };


    // onlineDatasourceType Field Functions 
    bool hasOnlineDatasourceType() const { return this->onlineDatasourceType_ != nullptr;};
    void deleteOnlineDatasourceType() { this->onlineDatasourceType_ = nullptr;};
    inline string onlineDatasourceType() const { DARABONBA_PTR_GET_DEFAULT(onlineDatasourceType_, "") };
    inline ListProjectsResponseBodyProjects& setOnlineDatasourceType(string onlineDatasourceType) { DARABONBA_PTR_SET_VALUE(onlineDatasourceType_, onlineDatasourceType) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListProjectsResponseBodyProjects& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ListProjectsResponseBodyProjects& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> featureEntityCount_ = nullptr;
    std::shared_ptr<int32_t> featureViewCount_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<int32_t> modelCount_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> offlineDatasourceId_ = nullptr;
    std::shared_ptr<string> offlineDatasourceName_ = nullptr;
    std::shared_ptr<string> offlineDatasourceType_ = nullptr;
    std::shared_ptr<int32_t> offlineLifecycle_ = nullptr;
    std::shared_ptr<string> onlineDatasourceId_ = nullptr;
    std::shared_ptr<string> onlineDatasourceName_ = nullptr;
    std::shared_ptr<string> onlineDatasourceType_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
