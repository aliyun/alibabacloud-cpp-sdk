// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESFORUSERRESPONSEBODYCONDITIONALACCESSPOLICIESCONDITIONSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESFORUSERRESPONSEBODYCONDITIONALACCESSPOLICIESCONDITIONSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigApplications.hpp>
#include <alibabacloud/models/ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones.hpp>
#include <alibabacloud/models/ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(NetworkZones, networkZones_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(NetworkZones, networkZones_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig() = default ;
    ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig(const ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig &) = default ;
    ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig(ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig &&) = default ;
    ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig() = default ;
    ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig& operator=(const ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig &) = default ;
    ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig& operator=(ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applications_ == nullptr
        && return this->networkZones_ == nullptr && return this->users_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigApplications & applications() const { DARABONBA_PTR_GET_CONST(applications_, Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigApplications) };
    inline Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigApplications applications() { DARABONBA_PTR_GET(applications_, Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigApplications) };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig& setApplications(const Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigApplications & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig& setApplications(Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigApplications && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // networkZones Field Functions 
    bool hasNetworkZones() const { return this->networkZones_ != nullptr;};
    void deleteNetworkZones() { this->networkZones_ = nullptr;};
    inline const Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones & networkZones() const { DARABONBA_PTR_GET_CONST(networkZones_, Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones) };
    inline Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones networkZones() { DARABONBA_PTR_GET(networkZones_, Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones) };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig& setNetworkZones(const Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones & networkZones) { DARABONBA_PTR_SET_VALUE(networkZones_, networkZones) };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig& setNetworkZones(Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones && networkZones) { DARABONBA_PTR_SET_RVALUE(networkZones_, networkZones) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigUsers & users() const { DARABONBA_PTR_GET_CONST(users_, Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigUsers) };
    inline Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigUsers users() { DARABONBA_PTR_GET(users_, Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigUsers) };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig& setUsers(const Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigUsers & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig& setUsers(Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigUsers && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // 条件访问策略目标应用
    std::shared_ptr<Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigApplications> applications_ = nullptr;
    // 条件访问策略网络区域
    std::shared_ptr<Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones> networkZones_ = nullptr;
    // 条件访问策略目标用户
    std::shared_ptr<Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfigUsers> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
