// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSYNCHRONIZATIONJOBREQUESTSYNCHRONIZATIONSCOPECONFIG_HPP_
#define ALIBABACLOUD_MODELS_RUNSYNCHRONIZATIONJOBREQUESTSYNCHRONIZATIONSCOPECONFIG_HPP_
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
  class RunSynchronizationJobRequestSynchronizationScopeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSynchronizationJobRequestSynchronizationScopeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnitIds, organizationalUnitIds_);
      DARABONBA_PTR_TO_JSON(UserIds, userIds_);
    };
    friend void from_json(const Darabonba::Json& j, RunSynchronizationJobRequestSynchronizationScopeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitIds, organizationalUnitIds_);
      DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
    };
    RunSynchronizationJobRequestSynchronizationScopeConfig() = default ;
    RunSynchronizationJobRequestSynchronizationScopeConfig(const RunSynchronizationJobRequestSynchronizationScopeConfig &) = default ;
    RunSynchronizationJobRequestSynchronizationScopeConfig(RunSynchronizationJobRequestSynchronizationScopeConfig &&) = default ;
    RunSynchronizationJobRequestSynchronizationScopeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSynchronizationJobRequestSynchronizationScopeConfig() = default ;
    RunSynchronizationJobRequestSynchronizationScopeConfig& operator=(const RunSynchronizationJobRequestSynchronizationScopeConfig &) = default ;
    RunSynchronizationJobRequestSynchronizationScopeConfig& operator=(RunSynchronizationJobRequestSynchronizationScopeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupIds_ == nullptr
        && return this->organizationalUnitIds_ == nullptr && return this->userIds_ == nullptr; };
    // groupIds Field Functions 
    bool hasGroupIds() const { return this->groupIds_ != nullptr;};
    void deleteGroupIds() { this->groupIds_ = nullptr;};
    inline const vector<string> & groupIds() const { DARABONBA_PTR_GET_CONST(groupIds_, vector<string>) };
    inline vector<string> groupIds() { DARABONBA_PTR_GET(groupIds_, vector<string>) };
    inline RunSynchronizationJobRequestSynchronizationScopeConfig& setGroupIds(const vector<string> & groupIds) { DARABONBA_PTR_SET_VALUE(groupIds_, groupIds) };
    inline RunSynchronizationJobRequestSynchronizationScopeConfig& setGroupIds(vector<string> && groupIds) { DARABONBA_PTR_SET_RVALUE(groupIds_, groupIds) };


    // organizationalUnitIds Field Functions 
    bool hasOrganizationalUnitIds() const { return this->organizationalUnitIds_ != nullptr;};
    void deleteOrganizationalUnitIds() { this->organizationalUnitIds_ = nullptr;};
    inline const vector<string> & organizationalUnitIds() const { DARABONBA_PTR_GET_CONST(organizationalUnitIds_, vector<string>) };
    inline vector<string> organizationalUnitIds() { DARABONBA_PTR_GET(organizationalUnitIds_, vector<string>) };
    inline RunSynchronizationJobRequestSynchronizationScopeConfig& setOrganizationalUnitIds(const vector<string> & organizationalUnitIds) { DARABONBA_PTR_SET_VALUE(organizationalUnitIds_, organizationalUnitIds) };
    inline RunSynchronizationJobRequestSynchronizationScopeConfig& setOrganizationalUnitIds(vector<string> && organizationalUnitIds) { DARABONBA_PTR_SET_RVALUE(organizationalUnitIds_, organizationalUnitIds) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline const vector<string> & userIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
    inline vector<string> userIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
    inline RunSynchronizationJobRequestSynchronizationScopeConfig& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
    inline RunSynchronizationJobRequestSynchronizationScopeConfig& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


  protected:
    // The group IDs.
    std::shared_ptr<vector<string>> groupIds_ = nullptr;
    // The IDs of organizational units.
    std::shared_ptr<vector<string>> organizationalUnitIds_ = nullptr;
    // UserIds
    std::shared_ptr<vector<string>> userIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
