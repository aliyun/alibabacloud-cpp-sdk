// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONDITIONALACCESSPOLICYRESPONSEBODYCONDITIONALACCESSPOLICYCONDITIONSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETCONDITIONALACCESSPOLICYRESPONSEBODYCONDITIONALACCESSPOLICYCONDITIONSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications.hpp>
#include <alibabacloud/models/GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigNetworkZones.hpp>
#include <alibabacloud/models/GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(NetworkZones, networkZones_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(NetworkZones, networkZones_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig() = default ;
    GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig(const GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig &) = default ;
    GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig(GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig &&) = default ;
    GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig() = default ;
    GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig& operator=(const GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig &) = default ;
    GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig& operator=(GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applications_ == nullptr
        && return this->networkZones_ == nullptr && return this->users_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications & applications() const { DARABONBA_PTR_GET_CONST(applications_, Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications) };
    inline Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications applications() { DARABONBA_PTR_GET(applications_, Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications) };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig& setApplications(const Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig& setApplications(Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // networkZones Field Functions 
    bool hasNetworkZones() const { return this->networkZones_ != nullptr;};
    void deleteNetworkZones() { this->networkZones_ = nullptr;};
    inline const Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigNetworkZones & networkZones() const { DARABONBA_PTR_GET_CONST(networkZones_, Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigNetworkZones) };
    inline Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigNetworkZones networkZones() { DARABONBA_PTR_GET(networkZones_, Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigNetworkZones) };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig& setNetworkZones(const Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigNetworkZones & networkZones) { DARABONBA_PTR_SET_VALUE(networkZones_, networkZones) };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig& setNetworkZones(Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigNetworkZones && networkZones) { DARABONBA_PTR_SET_RVALUE(networkZones_, networkZones) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigUsers & users() const { DARABONBA_PTR_GET_CONST(users_, Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigUsers) };
    inline Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigUsers users() { DARABONBA_PTR_GET(users_, Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigUsers) };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig& setUsers(const Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigUsers & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig& setUsers(Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigUsers && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // Target applications of the conditional access policy
    std::shared_ptr<Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigApplications> applications_ = nullptr;
    // Network zones for the conditional access policy
    std::shared_ptr<Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigNetworkZones> networkZones_ = nullptr;
    // Target users of the conditional access policy
    std::shared_ptr<Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfigUsers> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
