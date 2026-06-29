// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETTOKENPLANORGINVITECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETTOKENPLANORGINVITECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class SetTokenPlanOrgInviteConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetTokenPlanOrgInviteConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultRoleId, defaultRoleId_);
      DARABONBA_PTR_TO_JSON(SeatAssignStrategy, seatAssignStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, SetTokenPlanOrgInviteConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultRoleId, defaultRoleId_);
      DARABONBA_PTR_FROM_JSON(SeatAssignStrategy, seatAssignStrategy_);
    };
    SetTokenPlanOrgInviteConfigRequest() = default ;
    SetTokenPlanOrgInviteConfigRequest(const SetTokenPlanOrgInviteConfigRequest &) = default ;
    SetTokenPlanOrgInviteConfigRequest(SetTokenPlanOrgInviteConfigRequest &&) = default ;
    SetTokenPlanOrgInviteConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetTokenPlanOrgInviteConfigRequest() = default ;
    SetTokenPlanOrgInviteConfigRequest& operator=(const SetTokenPlanOrgInviteConfigRequest &) = default ;
    SetTokenPlanOrgInviteConfigRequest& operator=(SetTokenPlanOrgInviteConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultRoleId_ == nullptr
        && this->seatAssignStrategy_ == nullptr; };
    // defaultRoleId Field Functions 
    bool hasDefaultRoleId() const { return this->defaultRoleId_ != nullptr;};
    void deleteDefaultRoleId() { this->defaultRoleId_ = nullptr;};
    inline string getDefaultRoleId() const { DARABONBA_PTR_GET_DEFAULT(defaultRoleId_, "") };
    inline SetTokenPlanOrgInviteConfigRequest& setDefaultRoleId(string defaultRoleId) { DARABONBA_PTR_SET_VALUE(defaultRoleId_, defaultRoleId) };


    // seatAssignStrategy Field Functions 
    bool hasSeatAssignStrategy() const { return this->seatAssignStrategy_ != nullptr;};
    void deleteSeatAssignStrategy() { this->seatAssignStrategy_ = nullptr;};
    inline string getSeatAssignStrategy() const { DARABONBA_PTR_GET_DEFAULT(seatAssignStrategy_, "") };
    inline SetTokenPlanOrgInviteConfigRequest& setSeatAssignStrategy(string seatAssignStrategy) { DARABONBA_PTR_SET_VALUE(seatAssignStrategy_, seatAssignStrategy) };


  protected:
    // The ID of the organization role assigned by default. Valid values:
    // 
    // - SYSTEM_ROLE_ORG_ADMIN
    // - SYSTEM_ROLE_ORG_MEMBER
    // 
    // This parameter is required.
    shared_ptr<string> defaultRoleId_ {};
    // The default seat allocation policy. Valid values:
    // 
    // - HIGH_TO_LOW
    // - LOW_TO_HIGH
    // - NONE
    // 
    // This parameter is required.
    shared_ptr<string> seatAssignStrategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
