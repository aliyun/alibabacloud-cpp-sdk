// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPMEMBERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAppMembersRequestPlayerList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateAppMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(playerList, playerList_);
      DARABONBA_PTR_TO_JSON(roleNames, roleNames_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(playerList, playerList_);
      DARABONBA_PTR_FROM_JSON(roleNames, roleNames_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    CreateAppMembersRequest() = default ;
    CreateAppMembersRequest(const CreateAppMembersRequest &) = default ;
    CreateAppMembersRequest(CreateAppMembersRequest &&) = default ;
    CreateAppMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppMembersRequest() = default ;
    CreateAppMembersRequest& operator=(const CreateAppMembersRequest &) = default ;
    CreateAppMembersRequest& operator=(CreateAppMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->playerList_ == nullptr
        && return this->roleNames_ == nullptr && return this->organizationId_ == nullptr; };
    // playerList Field Functions 
    bool hasPlayerList() const { return this->playerList_ != nullptr;};
    void deletePlayerList() { this->playerList_ = nullptr;};
    inline const vector<CreateAppMembersRequestPlayerList> & playerList() const { DARABONBA_PTR_GET_CONST(playerList_, vector<CreateAppMembersRequestPlayerList>) };
    inline vector<CreateAppMembersRequestPlayerList> playerList() { DARABONBA_PTR_GET(playerList_, vector<CreateAppMembersRequestPlayerList>) };
    inline CreateAppMembersRequest& setPlayerList(const vector<CreateAppMembersRequestPlayerList> & playerList) { DARABONBA_PTR_SET_VALUE(playerList_, playerList) };
    inline CreateAppMembersRequest& setPlayerList(vector<CreateAppMembersRequestPlayerList> && playerList) { DARABONBA_PTR_SET_RVALUE(playerList_, playerList) };


    // roleNames Field Functions 
    bool hasRoleNames() const { return this->roleNames_ != nullptr;};
    void deleteRoleNames() { this->roleNames_ = nullptr;};
    inline const vector<string> & roleNames() const { DARABONBA_PTR_GET_CONST(roleNames_, vector<string>) };
    inline vector<string> roleNames() { DARABONBA_PTR_GET(roleNames_, vector<string>) };
    inline CreateAppMembersRequest& setRoleNames(const vector<string> & roleNames) { DARABONBA_PTR_SET_VALUE(roleNames_, roleNames) };
    inline CreateAppMembersRequest& setRoleNames(vector<string> && roleNames) { DARABONBA_PTR_SET_RVALUE(roleNames_, roleNames) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline CreateAppMembersRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<vector<CreateAppMembersRequestPlayerList>> playerList_ = nullptr;
    std::shared_ptr<vector<string>> roleNames_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
