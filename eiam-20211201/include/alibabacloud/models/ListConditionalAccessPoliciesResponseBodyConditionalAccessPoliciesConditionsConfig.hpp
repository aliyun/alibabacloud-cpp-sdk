// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESRESPONSEBODYCONDITIONALACCESSPOLICIESCONDITIONSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESRESPONSEBODYCONDITIONALACCESSPOLICIESCONDITIONSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigApplications.hpp>
#include <alibabacloud/models/ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones.hpp>
#include <alibabacloud/models/ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(NetworkZones, networkZones_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(NetworkZones, networkZones_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfig() = default ;
    ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfig(const ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfig &) = default ;
    ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfig(ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfig &&) = default ;
    ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfig() = default ;
    ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfig& operator=(const ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfig &) = default ;
    ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfig& operator=(ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applications_ == nullptr
        && return this->networkZones_ == nullptr && return this->users_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const Models::ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigApplications & applications() const { DARABONBA_PTR_GET_CONST(applications_, Models::ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigApplications) };
    inline Models::ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigApplications applications() { DARABONBA_PTR_GET(applications_, Models::ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigApplications) };
    inline ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfig& setApplications(const Models::ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigApplications & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfig& setApplications(Models::ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigApplications && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // networkZones Field Functions 
    bool hasNetworkZones() const { return this->networkZones_ != nullptr;};
    void deleteNetworkZones() { this->networkZones_ = nullptr;};
    inline const Models::ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones & networkZones() const { DARABONBA_PTR_GET_CONST(networkZones_, Models::ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones) };
    inline Models::ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones networkZones() { DARABONBA_PTR_GET(networkZones_, Models::ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones) };
    inline ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfig& setNetworkZones(const Models::ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones & networkZones) { DARABONBA_PTR_SET_VALUE(networkZones_, networkZones) };
    inline ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfig& setNetworkZones(Models::ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones && networkZones) { DARABONBA_PTR_SET_RVALUE(networkZones_, networkZones) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const Models::ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers & users() const { DARABONBA_PTR_GET_CONST(users_, Models::ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers) };
    inline Models::ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers users() { DARABONBA_PTR_GET(users_, Models::ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers) };
    inline ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfig& setUsers(const Models::ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfig& setUsers(Models::ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // Target applications of the conditional access policy
    std::shared_ptr<Models::ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigApplications> applications_ = nullptr;
    // Network zones for conditional access policies
    std::shared_ptr<Models::ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones> networkZones_ = nullptr;
    // Target users of the conditional access policy
    std::shared_ptr<Models::ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigUsers> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
