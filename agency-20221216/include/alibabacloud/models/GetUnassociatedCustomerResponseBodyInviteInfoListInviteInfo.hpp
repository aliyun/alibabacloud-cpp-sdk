// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUNASSOCIATEDCUSTOMERRESPONSEBODYINVITEINFOLISTINVITEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETUNASSOCIATEDCUSTOMERRESPONSEBODYINVITEINFOLISTINVITEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNickname, accountNickname_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(InviteId, inviteId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNickname, accountNickname_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(InviteId, inviteId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo() = default ;
    GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo(const GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo &) = default ;
    GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo(GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo &&) = default ;
    GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo() = default ;
    GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo& operator=(const GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo &) = default ;
    GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo& operator=(GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNickname_ == nullptr
        && return this->email_ == nullptr && return this->gmtCreate_ == nullptr && return this->inviteId_ == nullptr && return this->status_ == nullptr; };
    // accountNickname Field Functions 
    bool hasAccountNickname() const { return this->accountNickname_ != nullptr;};
    void deleteAccountNickname() { this->accountNickname_ = nullptr;};
    inline string accountNickname() const { DARABONBA_PTR_GET_DEFAULT(accountNickname_, "") };
    inline GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo& setAccountNickname(string accountNickname) { DARABONBA_PTR_SET_VALUE(accountNickname_, accountNickname) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // inviteId Field Functions 
    bool hasInviteId() const { return this->inviteId_ != nullptr;};
    void deleteInviteId() { this->inviteId_ = nullptr;};
    inline int64_t inviteId() const { DARABONBA_PTR_GET_DEFAULT(inviteId_, 0L) };
    inline GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo& setInviteId(int64_t inviteId) { DARABONBA_PTR_SET_VALUE(inviteId_, inviteId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The name of Customer who are to be invited.
    std::shared_ptr<string> accountNickname_ = nullptr;
    // The Email of Customer who are to be invited.
    std::shared_ptr<string> email_ = nullptr;
    // The time of email been sent out.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // Invitation ID
    std::shared_ptr<int64_t> inviteId_ = nullptr;
    // Invitation Status:
    // * 0 No visit on registration URL
    // * 1 Successful Registration
    // * 2 Unsuccessful Registration
    // * 3 Registration URL have been visited, but no submitted sheet/ticket.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
