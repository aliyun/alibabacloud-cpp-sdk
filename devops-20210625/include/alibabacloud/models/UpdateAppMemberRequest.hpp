// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateAppMemberRequestPlayer.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateAppMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAppMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(player, player_);
      DARABONBA_PTR_TO_JSON(roleNames, roleNames_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAppMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(player, player_);
      DARABONBA_PTR_FROM_JSON(roleNames, roleNames_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    UpdateAppMemberRequest() = default ;
    UpdateAppMemberRequest(const UpdateAppMemberRequest &) = default ;
    UpdateAppMemberRequest(UpdateAppMemberRequest &&) = default ;
    UpdateAppMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAppMemberRequest() = default ;
    UpdateAppMemberRequest& operator=(const UpdateAppMemberRequest &) = default ;
    UpdateAppMemberRequest& operator=(UpdateAppMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->player_ == nullptr
        && return this->roleNames_ == nullptr && return this->organizationId_ == nullptr; };
    // player Field Functions 
    bool hasPlayer() const { return this->player_ != nullptr;};
    void deletePlayer() { this->player_ = nullptr;};
    inline const UpdateAppMemberRequestPlayer & player() const { DARABONBA_PTR_GET_CONST(player_, UpdateAppMemberRequestPlayer) };
    inline UpdateAppMemberRequestPlayer player() { DARABONBA_PTR_GET(player_, UpdateAppMemberRequestPlayer) };
    inline UpdateAppMemberRequest& setPlayer(const UpdateAppMemberRequestPlayer & player) { DARABONBA_PTR_SET_VALUE(player_, player) };
    inline UpdateAppMemberRequest& setPlayer(UpdateAppMemberRequestPlayer && player) { DARABONBA_PTR_SET_RVALUE(player_, player) };


    // roleNames Field Functions 
    bool hasRoleNames() const { return this->roleNames_ != nullptr;};
    void deleteRoleNames() { this->roleNames_ = nullptr;};
    inline const vector<string> & roleNames() const { DARABONBA_PTR_GET_CONST(roleNames_, vector<string>) };
    inline vector<string> roleNames() { DARABONBA_PTR_GET(roleNames_, vector<string>) };
    inline UpdateAppMemberRequest& setRoleNames(const vector<string> & roleNames) { DARABONBA_PTR_SET_VALUE(roleNames_, roleNames) };
    inline UpdateAppMemberRequest& setRoleNames(vector<string> && roleNames) { DARABONBA_PTR_SET_RVALUE(roleNames_, roleNames) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline UpdateAppMemberRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<UpdateAppMemberRequestPlayer> player_ = nullptr;
    std::shared_ptr<vector<string>> roleNames_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
