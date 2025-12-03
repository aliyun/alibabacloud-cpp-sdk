// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LINKMERGEREQUESTLABELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LINKMERGEREQUESTLABELREQUEST_HPP_
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
  class LinkMergeRequestLabelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LinkMergeRequestLabelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(labelIds, labelIds_);
      DARABONBA_PTR_TO_JSON(localId, localId_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(repositoryIdentity, repositoryIdentity_);
    };
    friend void from_json(const Darabonba::Json& j, LinkMergeRequestLabelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(labelIds, labelIds_);
      DARABONBA_PTR_FROM_JSON(localId, localId_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(repositoryIdentity, repositoryIdentity_);
    };
    LinkMergeRequestLabelRequest() = default ;
    LinkMergeRequestLabelRequest(const LinkMergeRequestLabelRequest &) = default ;
    LinkMergeRequestLabelRequest(LinkMergeRequestLabelRequest &&) = default ;
    LinkMergeRequestLabelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LinkMergeRequestLabelRequest() = default ;
    LinkMergeRequestLabelRequest& operator=(const LinkMergeRequestLabelRequest &) = default ;
    LinkMergeRequestLabelRequest& operator=(LinkMergeRequestLabelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->labelIds_ == nullptr && return this->localId_ == nullptr && return this->organizationId_ == nullptr && return this->repositoryIdentity_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline LinkMergeRequestLabelRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // labelIds Field Functions 
    bool hasLabelIds() const { return this->labelIds_ != nullptr;};
    void deleteLabelIds() { this->labelIds_ = nullptr;};
    inline const vector<string> & labelIds() const { DARABONBA_PTR_GET_CONST(labelIds_, vector<string>) };
    inline vector<string> labelIds() { DARABONBA_PTR_GET(labelIds_, vector<string>) };
    inline LinkMergeRequestLabelRequest& setLabelIds(const vector<string> & labelIds) { DARABONBA_PTR_SET_VALUE(labelIds_, labelIds) };
    inline LinkMergeRequestLabelRequest& setLabelIds(vector<string> && labelIds) { DARABONBA_PTR_SET_RVALUE(labelIds_, labelIds) };


    // localId Field Functions 
    bool hasLocalId() const { return this->localId_ != nullptr;};
    void deleteLocalId() { this->localId_ = nullptr;};
    inline int64_t localId() const { DARABONBA_PTR_GET_DEFAULT(localId_, 0L) };
    inline LinkMergeRequestLabelRequest& setLocalId(int64_t localId) { DARABONBA_PTR_SET_VALUE(localId_, localId) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline LinkMergeRequestLabelRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // repositoryIdentity Field Functions 
    bool hasRepositoryIdentity() const { return this->repositoryIdentity_ != nullptr;};
    void deleteRepositoryIdentity() { this->repositoryIdentity_ = nullptr;};
    inline string repositoryIdentity() const { DARABONBA_PTR_GET_DEFAULT(repositoryIdentity_, "") };
    inline LinkMergeRequestLabelRequest& setRepositoryIdentity(string repositoryIdentity) { DARABONBA_PTR_SET_VALUE(repositoryIdentity_, repositoryIdentity) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> labelIds_ = nullptr;
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
