// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONDITIONALACCESSPOLICYREQUESTCONDITIONSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONDITIONALACCESSPOLICYREQUESTCONDITIONSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateConditionalAccessPolicyRequestConditionsConfigApplications.hpp>
#include <alibabacloud/models/UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones.hpp>
#include <alibabacloud/models/UpdateConditionalAccessPolicyRequestConditionsConfigUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateConditionalAccessPolicyRequestConditionsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConditionalAccessPolicyRequestConditionsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(NetworkZones, networkZones_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConditionalAccessPolicyRequestConditionsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(NetworkZones, networkZones_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    UpdateConditionalAccessPolicyRequestConditionsConfig() = default ;
    UpdateConditionalAccessPolicyRequestConditionsConfig(const UpdateConditionalAccessPolicyRequestConditionsConfig &) = default ;
    UpdateConditionalAccessPolicyRequestConditionsConfig(UpdateConditionalAccessPolicyRequestConditionsConfig &&) = default ;
    UpdateConditionalAccessPolicyRequestConditionsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConditionalAccessPolicyRequestConditionsConfig() = default ;
    UpdateConditionalAccessPolicyRequestConditionsConfig& operator=(const UpdateConditionalAccessPolicyRequestConditionsConfig &) = default ;
    UpdateConditionalAccessPolicyRequestConditionsConfig& operator=(UpdateConditionalAccessPolicyRequestConditionsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applications_ != nullptr
        && this->networkZones_ != nullptr && this->users_ != nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const Models::UpdateConditionalAccessPolicyRequestConditionsConfigApplications & applications() const { DARABONBA_PTR_GET_CONST(applications_, Models::UpdateConditionalAccessPolicyRequestConditionsConfigApplications) };
    inline Models::UpdateConditionalAccessPolicyRequestConditionsConfigApplications applications() { DARABONBA_PTR_GET(applications_, Models::UpdateConditionalAccessPolicyRequestConditionsConfigApplications) };
    inline UpdateConditionalAccessPolicyRequestConditionsConfig& setApplications(const Models::UpdateConditionalAccessPolicyRequestConditionsConfigApplications & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline UpdateConditionalAccessPolicyRequestConditionsConfig& setApplications(Models::UpdateConditionalAccessPolicyRequestConditionsConfigApplications && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // networkZones Field Functions 
    bool hasNetworkZones() const { return this->networkZones_ != nullptr;};
    void deleteNetworkZones() { this->networkZones_ = nullptr;};
    inline const Models::UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones & networkZones() const { DARABONBA_PTR_GET_CONST(networkZones_, Models::UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones) };
    inline Models::UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones networkZones() { DARABONBA_PTR_GET(networkZones_, Models::UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones) };
    inline UpdateConditionalAccessPolicyRequestConditionsConfig& setNetworkZones(const Models::UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones & networkZones) { DARABONBA_PTR_SET_VALUE(networkZones_, networkZones) };
    inline UpdateConditionalAccessPolicyRequestConditionsConfig& setNetworkZones(Models::UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones && networkZones) { DARABONBA_PTR_SET_RVALUE(networkZones_, networkZones) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const Models::UpdateConditionalAccessPolicyRequestConditionsConfigUsers & users() const { DARABONBA_PTR_GET_CONST(users_, Models::UpdateConditionalAccessPolicyRequestConditionsConfigUsers) };
    inline Models::UpdateConditionalAccessPolicyRequestConditionsConfigUsers users() { DARABONBA_PTR_GET(users_, Models::UpdateConditionalAccessPolicyRequestConditionsConfigUsers) };
    inline UpdateConditionalAccessPolicyRequestConditionsConfig& setUsers(const Models::UpdateConditionalAccessPolicyRequestConditionsConfigUsers & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline UpdateConditionalAccessPolicyRequestConditionsConfig& setUsers(Models::UpdateConditionalAccessPolicyRequestConditionsConfigUsers && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // Target Applications for the Conditional Access Policy
    std::shared_ptr<Models::UpdateConditionalAccessPolicyRequestConditionsConfigApplications> applications_ = nullptr;
    // Network zones for conditional access policy
    std::shared_ptr<Models::UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones> networkZones_ = nullptr;
    // Target Users for the Conditional Access Policy
    std::shared_ptr<Models::UpdateConditionalAccessPolicyRequestConditionsConfigUsers> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
