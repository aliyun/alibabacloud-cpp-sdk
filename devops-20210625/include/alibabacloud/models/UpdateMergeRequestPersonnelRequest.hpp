// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMERGEREQUESTPERSONNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMERGEREQUESTPERSONNELREQUEST_HPP_
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
  class UpdateMergeRequestPersonnelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMergeRequestPersonnelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(newUserIdList, newUserIdList_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMergeRequestPersonnelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(newUserIdList, newUserIdList_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    UpdateMergeRequestPersonnelRequest() = default ;
    UpdateMergeRequestPersonnelRequest(const UpdateMergeRequestPersonnelRequest &) = default ;
    UpdateMergeRequestPersonnelRequest(UpdateMergeRequestPersonnelRequest &&) = default ;
    UpdateMergeRequestPersonnelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMergeRequestPersonnelRequest() = default ;
    UpdateMergeRequestPersonnelRequest& operator=(const UpdateMergeRequestPersonnelRequest &) = default ;
    UpdateMergeRequestPersonnelRequest& operator=(UpdateMergeRequestPersonnelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->newUserIdList_ == nullptr && return this->organizationId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline UpdateMergeRequestPersonnelRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // newUserIdList Field Functions 
    bool hasNewUserIdList() const { return this->newUserIdList_ != nullptr;};
    void deleteNewUserIdList() { this->newUserIdList_ = nullptr;};
    inline const vector<string> & newUserIdList() const { DARABONBA_PTR_GET_CONST(newUserIdList_, vector<string>) };
    inline vector<string> newUserIdList() { DARABONBA_PTR_GET(newUserIdList_, vector<string>) };
    inline UpdateMergeRequestPersonnelRequest& setNewUserIdList(const vector<string> & newUserIdList) { DARABONBA_PTR_SET_VALUE(newUserIdList_, newUserIdList) };
    inline UpdateMergeRequestPersonnelRequest& setNewUserIdList(vector<string> && newUserIdList) { DARABONBA_PTR_SET_RVALUE(newUserIdList_, newUserIdList) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline UpdateMergeRequestPersonnelRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<vector<string>> newUserIdList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
