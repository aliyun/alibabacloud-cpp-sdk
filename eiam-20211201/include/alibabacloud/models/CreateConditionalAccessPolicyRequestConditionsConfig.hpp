// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONDITIONALACCESSPOLICYREQUESTCONDITIONSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATECONDITIONALACCESSPOLICYREQUESTCONDITIONSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateConditionalAccessPolicyRequestConditionsConfigApplications.hpp>
#include <alibabacloud/models/CreateConditionalAccessPolicyRequestConditionsConfigNetworkZones.hpp>
#include <alibabacloud/models/CreateConditionalAccessPolicyRequestConditionsConfigUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateConditionalAccessPolicyRequestConditionsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConditionalAccessPolicyRequestConditionsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(NetworkZones, networkZones_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConditionalAccessPolicyRequestConditionsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(NetworkZones, networkZones_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    CreateConditionalAccessPolicyRequestConditionsConfig() = default ;
    CreateConditionalAccessPolicyRequestConditionsConfig(const CreateConditionalAccessPolicyRequestConditionsConfig &) = default ;
    CreateConditionalAccessPolicyRequestConditionsConfig(CreateConditionalAccessPolicyRequestConditionsConfig &&) = default ;
    CreateConditionalAccessPolicyRequestConditionsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConditionalAccessPolicyRequestConditionsConfig() = default ;
    CreateConditionalAccessPolicyRequestConditionsConfig& operator=(const CreateConditionalAccessPolicyRequestConditionsConfig &) = default ;
    CreateConditionalAccessPolicyRequestConditionsConfig& operator=(CreateConditionalAccessPolicyRequestConditionsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applications_ != nullptr
        && this->networkZones_ != nullptr && this->users_ != nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const Models::CreateConditionalAccessPolicyRequestConditionsConfigApplications & applications() const { DARABONBA_PTR_GET_CONST(applications_, Models::CreateConditionalAccessPolicyRequestConditionsConfigApplications) };
    inline Models::CreateConditionalAccessPolicyRequestConditionsConfigApplications applications() { DARABONBA_PTR_GET(applications_, Models::CreateConditionalAccessPolicyRequestConditionsConfigApplications) };
    inline CreateConditionalAccessPolicyRequestConditionsConfig& setApplications(const Models::CreateConditionalAccessPolicyRequestConditionsConfigApplications & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline CreateConditionalAccessPolicyRequestConditionsConfig& setApplications(Models::CreateConditionalAccessPolicyRequestConditionsConfigApplications && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // networkZones Field Functions 
    bool hasNetworkZones() const { return this->networkZones_ != nullptr;};
    void deleteNetworkZones() { this->networkZones_ = nullptr;};
    inline const Models::CreateConditionalAccessPolicyRequestConditionsConfigNetworkZones & networkZones() const { DARABONBA_PTR_GET_CONST(networkZones_, Models::CreateConditionalAccessPolicyRequestConditionsConfigNetworkZones) };
    inline Models::CreateConditionalAccessPolicyRequestConditionsConfigNetworkZones networkZones() { DARABONBA_PTR_GET(networkZones_, Models::CreateConditionalAccessPolicyRequestConditionsConfigNetworkZones) };
    inline CreateConditionalAccessPolicyRequestConditionsConfig& setNetworkZones(const Models::CreateConditionalAccessPolicyRequestConditionsConfigNetworkZones & networkZones) { DARABONBA_PTR_SET_VALUE(networkZones_, networkZones) };
    inline CreateConditionalAccessPolicyRequestConditionsConfig& setNetworkZones(Models::CreateConditionalAccessPolicyRequestConditionsConfigNetworkZones && networkZones) { DARABONBA_PTR_SET_RVALUE(networkZones_, networkZones) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const Models::CreateConditionalAccessPolicyRequestConditionsConfigUsers & users() const { DARABONBA_PTR_GET_CONST(users_, Models::CreateConditionalAccessPolicyRequestConditionsConfigUsers) };
    inline Models::CreateConditionalAccessPolicyRequestConditionsConfigUsers users() { DARABONBA_PTR_GET(users_, Models::CreateConditionalAccessPolicyRequestConditionsConfigUsers) };
    inline CreateConditionalAccessPolicyRequestConditionsConfig& setUsers(const Models::CreateConditionalAccessPolicyRequestConditionsConfigUsers & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline CreateConditionalAccessPolicyRequestConditionsConfig& setUsers(Models::CreateConditionalAccessPolicyRequestConditionsConfigUsers && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // Target applications for the conditional access policy
    std::shared_ptr<Models::CreateConditionalAccessPolicyRequestConditionsConfigApplications> applications_ = nullptr;
    // Network zones for conditional access policy
    std::shared_ptr<Models::CreateConditionalAccessPolicyRequestConditionsConfigNetworkZones> networkZones_ = nullptr;
    // Target users of the conditional access policy
    std::shared_ptr<Models::CreateConditionalAccessPolicyRequestConditionsConfigUsers> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
