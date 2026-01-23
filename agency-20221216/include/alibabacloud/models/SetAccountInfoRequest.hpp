// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETACCOUNTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETACCOUNTINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class SetAccountInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAccountInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNickname, accountNickname_);
      DARABONBA_PTR_TO_JSON(CustomerBd, customerBd_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, SetAccountInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNickname, accountNickname_);
      DARABONBA_PTR_FROM_JSON(CustomerBd, customerBd_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    SetAccountInfoRequest() = default ;
    SetAccountInfoRequest(const SetAccountInfoRequest &) = default ;
    SetAccountInfoRequest(SetAccountInfoRequest &&) = default ;
    SetAccountInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAccountInfoRequest() = default ;
    SetAccountInfoRequest& operator=(const SetAccountInfoRequest &) = default ;
    SetAccountInfoRequest& operator=(SetAccountInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNickname_ == nullptr
        && this->customerBd_ == nullptr && this->remark_ == nullptr && this->uid_ == nullptr; };
    // accountNickname Field Functions 
    bool hasAccountNickname() const { return this->accountNickname_ != nullptr;};
    void deleteAccountNickname() { this->accountNickname_ = nullptr;};
    inline string getAccountNickname() const { DARABONBA_PTR_GET_DEFAULT(accountNickname_, "") };
    inline SetAccountInfoRequest& setAccountNickname(string accountNickname) { DARABONBA_PTR_SET_VALUE(accountNickname_, accountNickname) };


    // customerBd Field Functions 
    bool hasCustomerBd() const { return this->customerBd_ != nullptr;};
    void deleteCustomerBd() { this->customerBd_ = nullptr;};
    inline string getCustomerBd() const { DARABONBA_PTR_GET_DEFAULT(customerBd_, "") };
    inline SetAccountInfoRequest& setCustomerBd(string customerBd) { DARABONBA_PTR_SET_VALUE(customerBd_, customerBd) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline SetAccountInfoRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline int64_t getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
    inline SetAccountInfoRequest& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // Result Code:
    // *   200 OK
    // *   1109 System error
    // *   3030 Sub Account Nickname exceeds maximum length,  maximum length 150 bytes.
    // *   3031 Remark exceeds maximum length,  maximum length 3000 bytes.
    shared_ptr<string> accountNickname_ {};
    // Customer manager（limited 50 character）
    shared_ptr<string> customerBd_ {};
    // success
    shared_ptr<string> remark_ {};
    // Request ID, Alibaba Cloud will track errors with this.
    // 
    // This parameter is required.
    shared_ptr<int64_t> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
