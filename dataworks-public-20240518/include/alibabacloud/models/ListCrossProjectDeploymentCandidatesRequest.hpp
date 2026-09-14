// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCROSSPROJECTDEPLOYMENTCANDIDATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCROSSPROJECTDEPLOYMENTCANDIDATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListCrossProjectDeploymentCandidatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCrossProjectDeploymentCandidatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeType, changeType_);
      DARABONBA_PTR_TO_JSON(CommitTimeFrom, commitTimeFrom_);
      DARABONBA_PTR_TO_JSON(CommitTimeTo, commitTimeTo_);
      DARABONBA_PTR_TO_JSON(CommitUser, commitUser_);
      DARABONBA_PTR_TO_JSON(DeploymentEnvironmentId, deploymentEnvironmentId_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCrossProjectDeploymentCandidatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeType, changeType_);
      DARABONBA_PTR_FROM_JSON(CommitTimeFrom, commitTimeFrom_);
      DARABONBA_PTR_FROM_JSON(CommitTimeTo, commitTimeTo_);
      DARABONBA_PTR_FROM_JSON(CommitUser, commitUser_);
      DARABONBA_PTR_FROM_JSON(DeploymentEnvironmentId, deploymentEnvironmentId_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ListCrossProjectDeploymentCandidatesRequest() = default ;
    ListCrossProjectDeploymentCandidatesRequest(const ListCrossProjectDeploymentCandidatesRequest &) = default ;
    ListCrossProjectDeploymentCandidatesRequest(ListCrossProjectDeploymentCandidatesRequest &&) = default ;
    ListCrossProjectDeploymentCandidatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCrossProjectDeploymentCandidatesRequest() = default ;
    ListCrossProjectDeploymentCandidatesRequest& operator=(const ListCrossProjectDeploymentCandidatesRequest &) = default ;
    ListCrossProjectDeploymentCandidatesRequest& operator=(ListCrossProjectDeploymentCandidatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeType_ == nullptr
        && this->commitTimeFrom_ == nullptr && this->commitTimeTo_ == nullptr && this->commitUser_ == nullptr && this->deploymentEnvironmentId_ == nullptr && this->keyword_ == nullptr
        && this->objectId_ == nullptr && this->objectType_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->projectId_ == nullptr; };
    // changeType Field Functions 
    bool hasChangeType() const { return this->changeType_ != nullptr;};
    void deleteChangeType() { this->changeType_ = nullptr;};
    inline string getChangeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, "") };
    inline ListCrossProjectDeploymentCandidatesRequest& setChangeType(string changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


    // commitTimeFrom Field Functions 
    bool hasCommitTimeFrom() const { return this->commitTimeFrom_ != nullptr;};
    void deleteCommitTimeFrom() { this->commitTimeFrom_ = nullptr;};
    inline int64_t getCommitTimeFrom() const { DARABONBA_PTR_GET_DEFAULT(commitTimeFrom_, 0L) };
    inline ListCrossProjectDeploymentCandidatesRequest& setCommitTimeFrom(int64_t commitTimeFrom) { DARABONBA_PTR_SET_VALUE(commitTimeFrom_, commitTimeFrom) };


    // commitTimeTo Field Functions 
    bool hasCommitTimeTo() const { return this->commitTimeTo_ != nullptr;};
    void deleteCommitTimeTo() { this->commitTimeTo_ = nullptr;};
    inline int64_t getCommitTimeTo() const { DARABONBA_PTR_GET_DEFAULT(commitTimeTo_, 0L) };
    inline ListCrossProjectDeploymentCandidatesRequest& setCommitTimeTo(int64_t commitTimeTo) { DARABONBA_PTR_SET_VALUE(commitTimeTo_, commitTimeTo) };


    // commitUser Field Functions 
    bool hasCommitUser() const { return this->commitUser_ != nullptr;};
    void deleteCommitUser() { this->commitUser_ = nullptr;};
    inline string getCommitUser() const { DARABONBA_PTR_GET_DEFAULT(commitUser_, "") };
    inline ListCrossProjectDeploymentCandidatesRequest& setCommitUser(string commitUser) { DARABONBA_PTR_SET_VALUE(commitUser_, commitUser) };


    // deploymentEnvironmentId Field Functions 
    bool hasDeploymentEnvironmentId() const { return this->deploymentEnvironmentId_ != nullptr;};
    void deleteDeploymentEnvironmentId() { this->deploymentEnvironmentId_ = nullptr;};
    inline int64_t getDeploymentEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentEnvironmentId_, 0L) };
    inline ListCrossProjectDeploymentCandidatesRequest& setDeploymentEnvironmentId(int64_t deploymentEnvironmentId) { DARABONBA_PTR_SET_VALUE(deploymentEnvironmentId_, deploymentEnvironmentId) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListCrossProjectDeploymentCandidatesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline ListCrossProjectDeploymentCandidatesRequest& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline ListCrossProjectDeploymentCandidatesRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCrossProjectDeploymentCandidatesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCrossProjectDeploymentCandidatesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListCrossProjectDeploymentCandidatesRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The change type.
    shared_ptr<string> changeType_ {};
    // The start of the commit time range. This value is a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> commitTimeFrom_ {};
    // The end of the commit time range. This value is a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> commitTimeTo_ {};
    // The committer.
    shared_ptr<string> commitUser_ {};
    // The cross-workspace deployment environment ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> deploymentEnvironmentId_ {};
    // The search keyword.
    shared_ptr<string> keyword_ {};
    // The candidate object ID.
    shared_ptr<string> objectId_ {};
    // The candidate object type.
    shared_ptr<string> objectType_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
