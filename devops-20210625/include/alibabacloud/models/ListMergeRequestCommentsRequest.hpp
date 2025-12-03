// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMERGEREQUESTCOMMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMERGEREQUESTCOMMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListMergeRequestCommentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMergeRequestCommentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(commentType, commentType_);
      DARABONBA_PTR_TO_JSON(filePath, filePath_);
      DARABONBA_PTR_TO_JSON(patchSetBizIds, patchSetBizIds_);
      DARABONBA_PTR_TO_JSON(resolved, resolved_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(localId, localId_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(repositoryIdentity, repositoryIdentity_);
    };
    friend void from_json(const Darabonba::Json& j, ListMergeRequestCommentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(commentType, commentType_);
      DARABONBA_PTR_FROM_JSON(filePath, filePath_);
      DARABONBA_PTR_FROM_JSON(patchSetBizIds, patchSetBizIds_);
      DARABONBA_PTR_FROM_JSON(resolved, resolved_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(localId, localId_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(repositoryIdentity, repositoryIdentity_);
    };
    ListMergeRequestCommentsRequest() = default ;
    ListMergeRequestCommentsRequest(const ListMergeRequestCommentsRequest &) = default ;
    ListMergeRequestCommentsRequest(ListMergeRequestCommentsRequest &&) = default ;
    ListMergeRequestCommentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMergeRequestCommentsRequest() = default ;
    ListMergeRequestCommentsRequest& operator=(const ListMergeRequestCommentsRequest &) = default ;
    ListMergeRequestCommentsRequest& operator=(ListMergeRequestCommentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->commentType_ == nullptr && return this->filePath_ == nullptr && return this->patchSetBizIds_ == nullptr && return this->resolved_ == nullptr && return this->state_ == nullptr
        && return this->localId_ == nullptr && return this->organizationId_ == nullptr && return this->repositoryIdentity_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline ListMergeRequestCommentsRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // commentType Field Functions 
    bool hasCommentType() const { return this->commentType_ != nullptr;};
    void deleteCommentType() { this->commentType_ = nullptr;};
    inline string commentType() const { DARABONBA_PTR_GET_DEFAULT(commentType_, "") };
    inline ListMergeRequestCommentsRequest& setCommentType(string commentType) { DARABONBA_PTR_SET_VALUE(commentType_, commentType) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline ListMergeRequestCommentsRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // patchSetBizIds Field Functions 
    bool hasPatchSetBizIds() const { return this->patchSetBizIds_ != nullptr;};
    void deletePatchSetBizIds() { this->patchSetBizIds_ = nullptr;};
    inline const vector<string> & patchSetBizIds() const { DARABONBA_PTR_GET_CONST(patchSetBizIds_, vector<string>) };
    inline vector<string> patchSetBizIds() { DARABONBA_PTR_GET(patchSetBizIds_, vector<string>) };
    inline ListMergeRequestCommentsRequest& setPatchSetBizIds(const vector<string> & patchSetBizIds) { DARABONBA_PTR_SET_VALUE(patchSetBizIds_, patchSetBizIds) };
    inline ListMergeRequestCommentsRequest& setPatchSetBizIds(vector<string> && patchSetBizIds) { DARABONBA_PTR_SET_RVALUE(patchSetBizIds_, patchSetBizIds) };


    // resolved Field Functions 
    bool hasResolved() const { return this->resolved_ != nullptr;};
    void deleteResolved() { this->resolved_ = nullptr;};
    inline bool resolved() const { DARABONBA_PTR_GET_DEFAULT(resolved_, false) };
    inline ListMergeRequestCommentsRequest& setResolved(bool resolved) { DARABONBA_PTR_SET_VALUE(resolved_, resolved) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListMergeRequestCommentsRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // localId Field Functions 
    bool hasLocalId() const { return this->localId_ != nullptr;};
    void deleteLocalId() { this->localId_ = nullptr;};
    inline int64_t localId() const { DARABONBA_PTR_GET_DEFAULT(localId_, 0L) };
    inline ListMergeRequestCommentsRequest& setLocalId(int64_t localId) { DARABONBA_PTR_SET_VALUE(localId_, localId) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListMergeRequestCommentsRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // repositoryIdentity Field Functions 
    bool hasRepositoryIdentity() const { return this->repositoryIdentity_ != nullptr;};
    void deleteRepositoryIdentity() { this->repositoryIdentity_ = nullptr;};
    inline string repositoryIdentity() const { DARABONBA_PTR_GET_DEFAULT(repositoryIdentity_, "") };
    inline ListMergeRequestCommentsRequest& setRepositoryIdentity(string repositoryIdentity) { DARABONBA_PTR_SET_VALUE(repositoryIdentity_, repositoryIdentity) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<string> commentType_ = nullptr;
    std::shared_ptr<string> filePath_ = nullptr;
    std::shared_ptr<vector<string>> patchSetBizIds_ = nullptr;
    std::shared_ptr<bool> resolved_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> localId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> repositoryIdentity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
