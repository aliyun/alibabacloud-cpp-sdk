// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPRELEASESTAGEEXECUTIONINTEGRATEDMETADATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPRELEASESTAGEEXECUTIONINTEGRATEDMETADATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListAppReleaseStageExecutionIntegratedMetadataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppReleaseStageExecutionIntegratedMetadataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(releaseBranch, releaseBranch_);
      DARABONBA_PTR_TO_JSON(releaseRevision, releaseRevision_);
      DARABONBA_PTR_TO_JSON(repoUrl, repoUrl_);
      DARABONBA_PTR_TO_JSON(repoType, repoType_);
      DARABONBA_PTR_TO_JSON(changeRequests, changeRequests_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppReleaseStageExecutionIntegratedMetadataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(releaseBranch, releaseBranch_);
      DARABONBA_PTR_FROM_JSON(releaseRevision, releaseRevision_);
      DARABONBA_PTR_FROM_JSON(repoUrl, repoUrl_);
      DARABONBA_PTR_FROM_JSON(repoType, repoType_);
      DARABONBA_PTR_FROM_JSON(changeRequests, changeRequests_);
    };
    ListAppReleaseStageExecutionIntegratedMetadataResponseBody() = default ;
    ListAppReleaseStageExecutionIntegratedMetadataResponseBody(const ListAppReleaseStageExecutionIntegratedMetadataResponseBody &) = default ;
    ListAppReleaseStageExecutionIntegratedMetadataResponseBody(ListAppReleaseStageExecutionIntegratedMetadataResponseBody &&) = default ;
    ListAppReleaseStageExecutionIntegratedMetadataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppReleaseStageExecutionIntegratedMetadataResponseBody() = default ;
    ListAppReleaseStageExecutionIntegratedMetadataResponseBody& operator=(const ListAppReleaseStageExecutionIntegratedMetadataResponseBody &) = default ;
    ListAppReleaseStageExecutionIntegratedMetadataResponseBody& operator=(ListAppReleaseStageExecutionIntegratedMetadataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->releaseBranch_ == nullptr
        && return this->releaseRevision_ == nullptr && return this->repoUrl_ == nullptr && return this->repoType_ == nullptr && return this->changeRequests_ == nullptr; };
    // releaseBranch Field Functions 
    bool hasReleaseBranch() const { return this->releaseBranch_ != nullptr;};
    void deleteReleaseBranch() { this->releaseBranch_ = nullptr;};
    inline string releaseBranch() const { DARABONBA_PTR_GET_DEFAULT(releaseBranch_, "") };
    inline ListAppReleaseStageExecutionIntegratedMetadataResponseBody& setReleaseBranch(string releaseBranch) { DARABONBA_PTR_SET_VALUE(releaseBranch_, releaseBranch) };


    // releaseRevision Field Functions 
    bool hasReleaseRevision() const { return this->releaseRevision_ != nullptr;};
    void deleteReleaseRevision() { this->releaseRevision_ = nullptr;};
    inline string releaseRevision() const { DARABONBA_PTR_GET_DEFAULT(releaseRevision_, "") };
    inline ListAppReleaseStageExecutionIntegratedMetadataResponseBody& setReleaseRevision(string releaseRevision) { DARABONBA_PTR_SET_VALUE(releaseRevision_, releaseRevision) };


    // repoUrl Field Functions 
    bool hasRepoUrl() const { return this->repoUrl_ != nullptr;};
    void deleteRepoUrl() { this->repoUrl_ = nullptr;};
    inline string repoUrl() const { DARABONBA_PTR_GET_DEFAULT(repoUrl_, "") };
    inline ListAppReleaseStageExecutionIntegratedMetadataResponseBody& setRepoUrl(string repoUrl) { DARABONBA_PTR_SET_VALUE(repoUrl_, repoUrl) };


    // repoType Field Functions 
    bool hasRepoType() const { return this->repoType_ != nullptr;};
    void deleteRepoType() { this->repoType_ = nullptr;};
    inline string repoType() const { DARABONBA_PTR_GET_DEFAULT(repoType_, "") };
    inline ListAppReleaseStageExecutionIntegratedMetadataResponseBody& setRepoType(string repoType) { DARABONBA_PTR_SET_VALUE(repoType_, repoType) };


    // changeRequests Field Functions 
    bool hasChangeRequests() const { return this->changeRequests_ != nullptr;};
    void deleteChangeRequests() { this->changeRequests_ = nullptr;};
    inline const vector<Models::ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests> & changeRequests() const { DARABONBA_PTR_GET_CONST(changeRequests_, vector<Models::ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests>) };
    inline vector<Models::ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests> changeRequests() { DARABONBA_PTR_GET(changeRequests_, vector<Models::ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests>) };
    inline ListAppReleaseStageExecutionIntegratedMetadataResponseBody& setChangeRequests(const vector<Models::ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests> & changeRequests) { DARABONBA_PTR_SET_VALUE(changeRequests_, changeRequests) };
    inline ListAppReleaseStageExecutionIntegratedMetadataResponseBody& setChangeRequests(vector<Models::ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests> && changeRequests) { DARABONBA_PTR_SET_RVALUE(changeRequests_, changeRequests) };


  protected:
    std::shared_ptr<string> releaseBranch_ = nullptr;
    std::shared_ptr<string> releaseRevision_ = nullptr;
    std::shared_ptr<string> repoUrl_ = nullptr;
    std::shared_ptr<string> repoType_ = nullptr;
    std::shared_ptr<vector<Models::ListAppReleaseStageExecutionIntegratedMetadataResponseBodyChangeRequests>> changeRequests_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
