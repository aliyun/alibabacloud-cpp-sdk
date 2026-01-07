// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEUNINVITEDADMININVITEJOINENTERPRISEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEUNINVITEDADMININVITEJOINENTERPRISEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseUninvitedAdminInviteJoinEnterpriseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseUninvitedAdminInviteJoinEnterpriseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EcId, ecId_);
      DARABONBA_PTR_TO_JSON(EncryptTicket, encryptTicket_);
      DARABONBA_PTR_TO_JSON(InviteePk, inviteePk_);
      DARABONBA_PTR_TO_JSON(LeId, leId_);
      DARABONBA_PTR_TO_JSON(NbId, nbId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseUninvitedAdminInviteJoinEnterpriseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EcId, ecId_);
      DARABONBA_PTR_FROM_JSON(EncryptTicket, encryptTicket_);
      DARABONBA_PTR_FROM_JSON(InviteePk, inviteePk_);
      DARABONBA_PTR_FROM_JSON(LeId, leId_);
      DARABONBA_PTR_FROM_JSON(NbId, nbId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    EnterpriseUninvitedAdminInviteJoinEnterpriseRequest() = default ;
    EnterpriseUninvitedAdminInviteJoinEnterpriseRequest(const EnterpriseUninvitedAdminInviteJoinEnterpriseRequest &) = default ;
    EnterpriseUninvitedAdminInviteJoinEnterpriseRequest(EnterpriseUninvitedAdminInviteJoinEnterpriseRequest &&) = default ;
    EnterpriseUninvitedAdminInviteJoinEnterpriseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseUninvitedAdminInviteJoinEnterpriseRequest() = default ;
    EnterpriseUninvitedAdminInviteJoinEnterpriseRequest& operator=(const EnterpriseUninvitedAdminInviteJoinEnterpriseRequest &) = default ;
    EnterpriseUninvitedAdminInviteJoinEnterpriseRequest& operator=(EnterpriseUninvitedAdminInviteJoinEnterpriseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecId_ == nullptr
        && this->encryptTicket_ == nullptr && this->inviteePk_ == nullptr && this->leId_ == nullptr && this->nbId_ == nullptr && this->remark_ == nullptr; };
    // ecId Field Functions 
    bool hasEcId() const { return this->ecId_ != nullptr;};
    void deleteEcId() { this->ecId_ = nullptr;};
    inline string getEcId() const { DARABONBA_PTR_GET_DEFAULT(ecId_, "") };
    inline EnterpriseUninvitedAdminInviteJoinEnterpriseRequest& setEcId(string ecId) { DARABONBA_PTR_SET_VALUE(ecId_, ecId) };


    // encryptTicket Field Functions 
    bool hasEncryptTicket() const { return this->encryptTicket_ != nullptr;};
    void deleteEncryptTicket() { this->encryptTicket_ = nullptr;};
    inline string getEncryptTicket() const { DARABONBA_PTR_GET_DEFAULT(encryptTicket_, "") };
    inline EnterpriseUninvitedAdminInviteJoinEnterpriseRequest& setEncryptTicket(string encryptTicket) { DARABONBA_PTR_SET_VALUE(encryptTicket_, encryptTicket) };


    // inviteePk Field Functions 
    bool hasInviteePk() const { return this->inviteePk_ != nullptr;};
    void deleteInviteePk() { this->inviteePk_ = nullptr;};
    inline string getInviteePk() const { DARABONBA_PTR_GET_DEFAULT(inviteePk_, "") };
    inline EnterpriseUninvitedAdminInviteJoinEnterpriseRequest& setInviteePk(string inviteePk) { DARABONBA_PTR_SET_VALUE(inviteePk_, inviteePk) };


    // leId Field Functions 
    bool hasLeId() const { return this->leId_ != nullptr;};
    void deleteLeId() { this->leId_ = nullptr;};
    inline string getLeId() const { DARABONBA_PTR_GET_DEFAULT(leId_, "") };
    inline EnterpriseUninvitedAdminInviteJoinEnterpriseRequest& setLeId(string leId) { DARABONBA_PTR_SET_VALUE(leId_, leId) };


    // nbId Field Functions 
    bool hasNbId() const { return this->nbId_ != nullptr;};
    void deleteNbId() { this->nbId_ = nullptr;};
    inline string getNbId() const { DARABONBA_PTR_GET_DEFAULT(nbId_, "") };
    inline EnterpriseUninvitedAdminInviteJoinEnterpriseRequest& setNbId(string nbId) { DARABONBA_PTR_SET_VALUE(nbId_, nbId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline EnterpriseUninvitedAdminInviteJoinEnterpriseRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    shared_ptr<string> ecId_ {};
    shared_ptr<string> encryptTicket_ {};
    shared_ptr<string> inviteePk_ {};
    shared_ptr<string> leId_ {};
    shared_ptr<string> nbId_ {};
    shared_ptr<string> remark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
