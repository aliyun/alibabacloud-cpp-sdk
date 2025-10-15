// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESFORAPPLICATIONRESPONSEBODYCONDITIONALACCESSPOLICIESCONDITIONSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESFORAPPLICATIONRESPONSEBODYCONDITIONALACCESSPOLICIESCONDITIONSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigApplications.hpp>
#include <alibabacloud/models/ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones.hpp>
#include <alibabacloud/models/ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(NetworkZones, networkZones_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(NetworkZones, networkZones_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfig() = default ;
    ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfig(const ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfig &) = default ;
    ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfig(ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfig &&) = default ;
    ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfig() = default ;
    ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfig& operator=(const ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfig &) = default ;
    ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfig& operator=(ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applications_ == nullptr
        && return this->networkZones_ == nullptr && return this->users_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const Models::ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigApplications & applications() const { DARABONBA_PTR_GET_CONST(applications_, Models::ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigApplications) };
    inline Models::ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigApplications applications() { DARABONBA_PTR_GET(applications_, Models::ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigApplications) };
    inline ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfig& setApplications(const Models::ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigApplications & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfig& setApplications(Models::ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigApplications && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // networkZones Field Functions 
    bool hasNetworkZones() const { return this->networkZones_ != nullptr;};
    void deleteNetworkZones() { this->networkZones_ = nullptr;};
    inline const Models::ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones & networkZones() const { DARABONBA_PTR_GET_CONST(networkZones_, Models::ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones) };
    inline Models::ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones networkZones() { DARABONBA_PTR_GET(networkZones_, Models::ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones) };
    inline ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfig& setNetworkZones(const Models::ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones & networkZones) { DARABONBA_PTR_SET_VALUE(networkZones_, networkZones) };
    inline ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfig& setNetworkZones(Models::ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones && networkZones) { DARABONBA_PTR_SET_RVALUE(networkZones_, networkZones) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const Models::ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigUsers & users() const { DARABONBA_PTR_GET_CONST(users_, Models::ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigUsers) };
    inline Models::ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigUsers users() { DARABONBA_PTR_GET(users_, Models::ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigUsers) };
    inline ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfig& setUsers(const Models::ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigUsers & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfig& setUsers(Models::ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigUsers && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // 条件访问策略目标应用
    std::shared_ptr<Models::ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigApplications> applications_ = nullptr;
    // 条件访问策略网络区域
    std::shared_ptr<Models::ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones> networkZones_ = nullptr;
    // 条件访问策略目标用户
    std::shared_ptr<Models::ListConditionalAccessPoliciesForApplicationResponseBodyConditionalAccessPoliciesConditionsConfigUsers> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
