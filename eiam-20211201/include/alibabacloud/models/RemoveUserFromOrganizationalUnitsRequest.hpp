// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERFROMORGANIZATIONALUNITSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERFROMORGANIZATIONALUNITSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class RemoveUserFromOrganizationalUnitsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUserFromOrganizationalUnitsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnitIds, organizationalUnitIds_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUserFromOrganizationalUnitsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitIds, organizationalUnitIds_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    RemoveUserFromOrganizationalUnitsRequest() = default ;
    RemoveUserFromOrganizationalUnitsRequest(const RemoveUserFromOrganizationalUnitsRequest &) = default ;
    RemoveUserFromOrganizationalUnitsRequest(RemoveUserFromOrganizationalUnitsRequest &&) = default ;
    RemoveUserFromOrganizationalUnitsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUserFromOrganizationalUnitsRequest() = default ;
    RemoveUserFromOrganizationalUnitsRequest& operator=(const RemoveUserFromOrganizationalUnitsRequest &) = default ;
    RemoveUserFromOrganizationalUnitsRequest& operator=(RemoveUserFromOrganizationalUnitsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->organizationalUnitIds_ == nullptr && return this->userId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RemoveUserFromOrganizationalUnitsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // organizationalUnitIds Field Functions 
    bool hasOrganizationalUnitIds() const { return this->organizationalUnitIds_ != nullptr;};
    void deleteOrganizationalUnitIds() { this->organizationalUnitIds_ = nullptr;};
    inline const vector<string> & organizationalUnitIds() const { DARABONBA_PTR_GET_CONST(organizationalUnitIds_, vector<string>) };
    inline vector<string> organizationalUnitIds() { DARABONBA_PTR_GET(organizationalUnitIds_, vector<string>) };
    inline RemoveUserFromOrganizationalUnitsRequest& setOrganizationalUnitIds(const vector<string> & organizationalUnitIds) { DARABONBA_PTR_SET_VALUE(organizationalUnitIds_, organizationalUnitIds) };
    inline RemoveUserFromOrganizationalUnitsRequest& setOrganizationalUnitIds(vector<string> && organizationalUnitIds) { DARABONBA_PTR_SET_RVALUE(organizationalUnitIds_, organizationalUnitIds) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline RemoveUserFromOrganizationalUnitsRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The organization IDs. You can remove an account from a maximum of 100 organizations.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> organizationalUnitIds_ = nullptr;
    // The account ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
