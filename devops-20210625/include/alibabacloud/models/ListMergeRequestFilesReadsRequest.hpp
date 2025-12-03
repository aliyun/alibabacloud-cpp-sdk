// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMERGEREQUESTFILESREADSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMERGEREQUESTFILESREADSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListMergeRequestFilesReadsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMergeRequestFilesReadsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(fromPatchSetBizId, fromPatchSetBizId_);
      DARABONBA_PTR_TO_JSON(localId, localId_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(repositoryIdentity, repositoryIdentity_);
      DARABONBA_PTR_TO_JSON(toPatchSetBizId, toPatchSetBizId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMergeRequestFilesReadsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(fromPatchSetBizId, fromPatchSetBizId_);
      DARABONBA_PTR_FROM_JSON(localId, localId_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(repositoryIdentity, repositoryIdentity_);
      DARABONBA_PTR_FROM_JSON(toPatchSetBizId, toPatchSetBizId_);
    };
    ListMergeRequestFilesReadsRequest() = default ;
    ListMergeRequestFilesReadsRequest(const ListMergeRequestFilesReadsRequest &) = default ;
    ListMergeRequestFilesReadsRequest(ListMergeRequestFilesReadsRequest &&) = default ;
    ListMergeRequestFilesReadsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMergeRequestFilesReadsRequest() = default ;
    ListMergeRequestFilesReadsRequest& operator=(const ListMergeRequestFilesReadsRequest &) = default ;
    ListMergeRequestFilesReadsRequest& operator=(ListMergeRequestFilesReadsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->fromPatchSetBizId_ == nullptr && return this->localId_ == nullptr && return this->organizationId_ == nullptr && return this->repositoryIdentity_ == nullptr && return this->toPatchSetBizId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline ListMergeRequestFilesReadsRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // fromPatchSetBizId Field Functions 
    bool hasFromPatchSetBizId() const { return this->fromPatchSetBizId_ != nullptr;};
    void deleteFromPatchSetBizId() { this->fromPatchSetBizId_ = nullptr;};
    inline string fromPatchSetBizId() const { DARABONBA_PTR_GET_DEFAULT(fromPatchSetBizId_, "") };
    inline ListMergeRequestFilesReadsRequest& setFromPatchSetBizId(string fromPatchSetBizId) { DARABONBA_PTR_SET_VALUE(fromPatchSetBizId_, fromPatchSetBizId) };


    // localId Field Functions 
    bool hasLocalId() const { return this->localId_ != nullptr;};
    void deleteLocalId() { this->localId_ = nullptr;};
    inline int64_t localId() const { DARABONBA_PTR_GET_DEFAULT(localId_, 0L) };
    inline ListMergeRequestFilesReadsRequest& setLocalId(int64_t localId) { DARABONBA_PTR_SET_VALUE(localId_, localId) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListMergeRequestFilesReadsRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // repositoryIdentity Field Functions 
    bool hasRepositoryIdentity() const { return this->repositoryIdentity_ != nullptr;};
    void deleteRepositoryIdentity() { this->repositoryIdentity_ = nullptr;};
    inline string repositoryIdentity() const { DARABONBA_PTR_GET_DEFAULT(repositoryIdentity_, "") };
    inline ListMergeRequestFilesReadsRequest& setRepositoryIdentity(string repositoryIdentity) { DARABONBA_PTR_SET_VALUE(repositoryIdentity_, repositoryIdentity) };


    // toPatchSetBizId Field Functions 
    bool hasToPatchSetBizId() const { return this->toPatchSetBizId_ != nullptr;};
    void deleteToPatchSetBizId() { this->toPatchSetBizId_ = nullptr;};
    inline string toPatchSetBizId() const { DARABONBA_PTR_GET_DEFAULT(toPatchSetBizId_, "") };
    inline ListMergeRequestFilesReadsRequest& setToPatchSetBizId(string toPatchSetBizId) { DARABONBA_PTR_SET_VALUE(toPatchSetBizId_, toPatchSetBizId) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fromPatchSetBizId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> localId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> repositoryIdentity_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> toPatchSetBizId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
