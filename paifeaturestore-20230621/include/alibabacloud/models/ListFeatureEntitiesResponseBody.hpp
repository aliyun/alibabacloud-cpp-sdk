// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATUREENTITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATUREENTITIESRESPONSEBODY_HPP_
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
  class ListFeatureEntitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureEntitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureEntities, featureEntities_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureEntitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureEntities, featureEntities_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListFeatureEntitiesResponseBody() = default ;
    ListFeatureEntitiesResponseBody(const ListFeatureEntitiesResponseBody &) = default ;
    ListFeatureEntitiesResponseBody(ListFeatureEntitiesResponseBody &&) = default ;
    ListFeatureEntitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureEntitiesResponseBody() = default ;
    ListFeatureEntitiesResponseBody& operator=(const ListFeatureEntitiesResponseBody &) = default ;
    ListFeatureEntitiesResponseBody& operator=(ListFeatureEntitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FeatureEntities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FeatureEntities& obj) { 
        DARABONBA_PTR_TO_JSON(FeatureEntityId, featureEntityId_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(JoinId, joinId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(ParentFeatureEntityId, parentFeatureEntityId_);
        DARABONBA_PTR_TO_JSON(ParentFeatureEntityName, parentFeatureEntityName_);
        DARABONBA_PTR_TO_JSON(ParentJoinId, parentJoinId_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      };
      friend void from_json(const Darabonba::Json& j, FeatureEntities& obj) { 
        DARABONBA_PTR_FROM_JSON(FeatureEntityId, featureEntityId_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(JoinId, joinId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(ParentFeatureEntityId, parentFeatureEntityId_);
        DARABONBA_PTR_FROM_JSON(ParentFeatureEntityName, parentFeatureEntityName_);
        DARABONBA_PTR_FROM_JSON(ParentJoinId, parentJoinId_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      };
      FeatureEntities() = default ;
      FeatureEntities(const FeatureEntities &) = default ;
      FeatureEntities(FeatureEntities &&) = default ;
      FeatureEntities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FeatureEntities() = default ;
      FeatureEntities& operator=(const FeatureEntities &) = default ;
      FeatureEntities& operator=(FeatureEntities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->featureEntityId_ == nullptr
        && this->gmtCreateTime_ == nullptr && this->joinId_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->parentFeatureEntityId_ == nullptr
        && this->parentFeatureEntityName_ == nullptr && this->parentJoinId_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr; };
      // featureEntityId Field Functions 
      bool hasFeatureEntityId() const { return this->featureEntityId_ != nullptr;};
      void deleteFeatureEntityId() { this->featureEntityId_ = nullptr;};
      inline string getFeatureEntityId() const { DARABONBA_PTR_GET_DEFAULT(featureEntityId_, "") };
      inline FeatureEntities& setFeatureEntityId(string featureEntityId) { DARABONBA_PTR_SET_VALUE(featureEntityId_, featureEntityId) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline FeatureEntities& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // joinId Field Functions 
      bool hasJoinId() const { return this->joinId_ != nullptr;};
      void deleteJoinId() { this->joinId_ = nullptr;};
      inline string getJoinId() const { DARABONBA_PTR_GET_DEFAULT(joinId_, "") };
      inline FeatureEntities& setJoinId(string joinId) { DARABONBA_PTR_SET_VALUE(joinId_, joinId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline FeatureEntities& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline FeatureEntities& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // parentFeatureEntityId Field Functions 
      bool hasParentFeatureEntityId() const { return this->parentFeatureEntityId_ != nullptr;};
      void deleteParentFeatureEntityId() { this->parentFeatureEntityId_ = nullptr;};
      inline string getParentFeatureEntityId() const { DARABONBA_PTR_GET_DEFAULT(parentFeatureEntityId_, "") };
      inline FeatureEntities& setParentFeatureEntityId(string parentFeatureEntityId) { DARABONBA_PTR_SET_VALUE(parentFeatureEntityId_, parentFeatureEntityId) };


      // parentFeatureEntityName Field Functions 
      bool hasParentFeatureEntityName() const { return this->parentFeatureEntityName_ != nullptr;};
      void deleteParentFeatureEntityName() { this->parentFeatureEntityName_ = nullptr;};
      inline string getParentFeatureEntityName() const { DARABONBA_PTR_GET_DEFAULT(parentFeatureEntityName_, "") };
      inline FeatureEntities& setParentFeatureEntityName(string parentFeatureEntityName) { DARABONBA_PTR_SET_VALUE(parentFeatureEntityName_, parentFeatureEntityName) };


      // parentJoinId Field Functions 
      bool hasParentJoinId() const { return this->parentJoinId_ != nullptr;};
      void deleteParentJoinId() { this->parentJoinId_ = nullptr;};
      inline string getParentJoinId() const { DARABONBA_PTR_GET_DEFAULT(parentJoinId_, "") };
      inline FeatureEntities& setParentJoinId(string parentJoinId) { DARABONBA_PTR_SET_VALUE(parentJoinId_, parentJoinId) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline FeatureEntities& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline FeatureEntities& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    protected:
      shared_ptr<string> featureEntityId_ {};
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<string> joinId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> owner_ {};
      shared_ptr<string> parentFeatureEntityId_ {};
      shared_ptr<string> parentFeatureEntityName_ {};
      shared_ptr<string> parentJoinId_ {};
      shared_ptr<string> projectId_ {};
      shared_ptr<string> projectName_ {};
    };

    virtual bool empty() const override { return this->featureEntities_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // featureEntities Field Functions 
    bool hasFeatureEntities() const { return this->featureEntities_ != nullptr;};
    void deleteFeatureEntities() { this->featureEntities_ = nullptr;};
    inline const vector<ListFeatureEntitiesResponseBody::FeatureEntities> & getFeatureEntities() const { DARABONBA_PTR_GET_CONST(featureEntities_, vector<ListFeatureEntitiesResponseBody::FeatureEntities>) };
    inline vector<ListFeatureEntitiesResponseBody::FeatureEntities> getFeatureEntities() { DARABONBA_PTR_GET(featureEntities_, vector<ListFeatureEntitiesResponseBody::FeatureEntities>) };
    inline ListFeatureEntitiesResponseBody& setFeatureEntities(const vector<ListFeatureEntitiesResponseBody::FeatureEntities> & featureEntities) { DARABONBA_PTR_SET_VALUE(featureEntities_, featureEntities) };
    inline ListFeatureEntitiesResponseBody& setFeatureEntities(vector<ListFeatureEntitiesResponseBody::FeatureEntities> && featureEntities) { DARABONBA_PTR_SET_RVALUE(featureEntities_, featureEntities) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFeatureEntitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListFeatureEntitiesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListFeatureEntitiesResponseBody::FeatureEntities>> featureEntities_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
