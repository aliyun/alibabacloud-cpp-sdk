// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODY_HPP_
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
  class ListProjectsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Projects, projects_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Projects, projects_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProjectsResponseBody() = default ;
    ListProjectsResponseBody(const ListProjectsResponseBody &) = default ;
    ListProjectsResponseBody(ListProjectsResponseBody &&) = default ;
    ListProjectsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsResponseBody() = default ;
    ListProjectsResponseBody& operator=(const ListProjectsResponseBody &) = default ;
    ListProjectsResponseBody& operator=(ListProjectsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Projects : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Projects& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Projects& obj) { 
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
      Projects() = default ;
      Projects(const Projects &) = default ;
      Projects(Projects &&) = default ;
      Projects(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Projects() = default ;
      Projects& operator=(const Projects &) = default ;
      Projects& operator=(Projects &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->featureEntityCount_ == nullptr && this->featureViewCount_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->modelCount_ == nullptr
        && this->name_ == nullptr && this->offlineDatasourceId_ == nullptr && this->offlineDatasourceName_ == nullptr && this->offlineDatasourceType_ == nullptr && this->offlineLifecycle_ == nullptr
        && this->onlineDatasourceId_ == nullptr && this->onlineDatasourceName_ == nullptr && this->onlineDatasourceType_ == nullptr && this->owner_ == nullptr && this->projectId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Projects& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // featureEntityCount Field Functions 
      bool hasFeatureEntityCount() const { return this->featureEntityCount_ != nullptr;};
      void deleteFeatureEntityCount() { this->featureEntityCount_ = nullptr;};
      inline int32_t getFeatureEntityCount() const { DARABONBA_PTR_GET_DEFAULT(featureEntityCount_, 0) };
      inline Projects& setFeatureEntityCount(int32_t featureEntityCount) { DARABONBA_PTR_SET_VALUE(featureEntityCount_, featureEntityCount) };


      // featureViewCount Field Functions 
      bool hasFeatureViewCount() const { return this->featureViewCount_ != nullptr;};
      void deleteFeatureViewCount() { this->featureViewCount_ = nullptr;};
      inline int32_t getFeatureViewCount() const { DARABONBA_PTR_GET_DEFAULT(featureViewCount_, 0) };
      inline Projects& setFeatureViewCount(int32_t featureViewCount) { DARABONBA_PTR_SET_VALUE(featureViewCount_, featureViewCount) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline Projects& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline Projects& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // modelCount Field Functions 
      bool hasModelCount() const { return this->modelCount_ != nullptr;};
      void deleteModelCount() { this->modelCount_ = nullptr;};
      inline int32_t getModelCount() const { DARABONBA_PTR_GET_DEFAULT(modelCount_, 0) };
      inline Projects& setModelCount(int32_t modelCount) { DARABONBA_PTR_SET_VALUE(modelCount_, modelCount) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Projects& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // offlineDatasourceId Field Functions 
      bool hasOfflineDatasourceId() const { return this->offlineDatasourceId_ != nullptr;};
      void deleteOfflineDatasourceId() { this->offlineDatasourceId_ = nullptr;};
      inline string getOfflineDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(offlineDatasourceId_, "") };
      inline Projects& setOfflineDatasourceId(string offlineDatasourceId) { DARABONBA_PTR_SET_VALUE(offlineDatasourceId_, offlineDatasourceId) };


      // offlineDatasourceName Field Functions 
      bool hasOfflineDatasourceName() const { return this->offlineDatasourceName_ != nullptr;};
      void deleteOfflineDatasourceName() { this->offlineDatasourceName_ = nullptr;};
      inline string getOfflineDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(offlineDatasourceName_, "") };
      inline Projects& setOfflineDatasourceName(string offlineDatasourceName) { DARABONBA_PTR_SET_VALUE(offlineDatasourceName_, offlineDatasourceName) };


      // offlineDatasourceType Field Functions 
      bool hasOfflineDatasourceType() const { return this->offlineDatasourceType_ != nullptr;};
      void deleteOfflineDatasourceType() { this->offlineDatasourceType_ = nullptr;};
      inline string getOfflineDatasourceType() const { DARABONBA_PTR_GET_DEFAULT(offlineDatasourceType_, "") };
      inline Projects& setOfflineDatasourceType(string offlineDatasourceType) { DARABONBA_PTR_SET_VALUE(offlineDatasourceType_, offlineDatasourceType) };


      // offlineLifecycle Field Functions 
      bool hasOfflineLifecycle() const { return this->offlineLifecycle_ != nullptr;};
      void deleteOfflineLifecycle() { this->offlineLifecycle_ = nullptr;};
      inline int32_t getOfflineLifecycle() const { DARABONBA_PTR_GET_DEFAULT(offlineLifecycle_, 0) };
      inline Projects& setOfflineLifecycle(int32_t offlineLifecycle) { DARABONBA_PTR_SET_VALUE(offlineLifecycle_, offlineLifecycle) };


      // onlineDatasourceId Field Functions 
      bool hasOnlineDatasourceId() const { return this->onlineDatasourceId_ != nullptr;};
      void deleteOnlineDatasourceId() { this->onlineDatasourceId_ = nullptr;};
      inline string getOnlineDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(onlineDatasourceId_, "") };
      inline Projects& setOnlineDatasourceId(string onlineDatasourceId) { DARABONBA_PTR_SET_VALUE(onlineDatasourceId_, onlineDatasourceId) };


      // onlineDatasourceName Field Functions 
      bool hasOnlineDatasourceName() const { return this->onlineDatasourceName_ != nullptr;};
      void deleteOnlineDatasourceName() { this->onlineDatasourceName_ = nullptr;};
      inline string getOnlineDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(onlineDatasourceName_, "") };
      inline Projects& setOnlineDatasourceName(string onlineDatasourceName) { DARABONBA_PTR_SET_VALUE(onlineDatasourceName_, onlineDatasourceName) };


      // onlineDatasourceType Field Functions 
      bool hasOnlineDatasourceType() const { return this->onlineDatasourceType_ != nullptr;};
      void deleteOnlineDatasourceType() { this->onlineDatasourceType_ = nullptr;};
      inline string getOnlineDatasourceType() const { DARABONBA_PTR_GET_DEFAULT(onlineDatasourceType_, "") };
      inline Projects& setOnlineDatasourceType(string onlineDatasourceType) { DARABONBA_PTR_SET_VALUE(onlineDatasourceType_, onlineDatasourceType) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Projects& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline Projects& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<int32_t> featureEntityCount_ {};
      shared_ptr<int32_t> featureViewCount_ {};
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<string> gmtModifiedTime_ {};
      shared_ptr<int32_t> modelCount_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> offlineDatasourceId_ {};
      shared_ptr<string> offlineDatasourceName_ {};
      shared_ptr<string> offlineDatasourceType_ {};
      shared_ptr<int32_t> offlineLifecycle_ {};
      shared_ptr<string> onlineDatasourceId_ {};
      shared_ptr<string> onlineDatasourceName_ {};
      shared_ptr<string> onlineDatasourceType_ {};
      shared_ptr<string> owner_ {};
      shared_ptr<string> projectId_ {};
    };

    virtual bool empty() const override { return this->projects_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // projects Field Functions 
    bool hasProjects() const { return this->projects_ != nullptr;};
    void deleteProjects() { this->projects_ = nullptr;};
    inline const vector<ListProjectsResponseBody::Projects> & getProjects() const { DARABONBA_PTR_GET_CONST(projects_, vector<ListProjectsResponseBody::Projects>) };
    inline vector<ListProjectsResponseBody::Projects> getProjects() { DARABONBA_PTR_GET(projects_, vector<ListProjectsResponseBody::Projects>) };
    inline ListProjectsResponseBody& setProjects(const vector<ListProjectsResponseBody::Projects> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
    inline ListProjectsResponseBody& setProjects(vector<ListProjectsResponseBody::Projects> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProjectsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListProjectsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListProjectsResponseBody::Projects>> projects_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
