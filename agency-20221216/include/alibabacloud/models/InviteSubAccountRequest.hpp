// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVITESUBACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVITESUBACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InviteSubAccountRequestAccountInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class InviteSubAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InviteSubAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountInfoList, accountInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, InviteSubAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountInfoList, accountInfoList_);
    };
    InviteSubAccountRequest() = default ;
    InviteSubAccountRequest(const InviteSubAccountRequest &) = default ;
    InviteSubAccountRequest(InviteSubAccountRequest &&) = default ;
    InviteSubAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InviteSubAccountRequest() = default ;
    InviteSubAccountRequest& operator=(const InviteSubAccountRequest &) = default ;
    InviteSubAccountRequest& operator=(InviteSubAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountInfoList_ == nullptr; };
    // accountInfoList Field Functions 
    bool hasAccountInfoList() const { return this->accountInfoList_ != nullptr;};
    void deleteAccountInfoList() { this->accountInfoList_ = nullptr;};
    inline const vector<InviteSubAccountRequestAccountInfoList> & accountInfoList() const { DARABONBA_PTR_GET_CONST(accountInfoList_, vector<InviteSubAccountRequestAccountInfoList>) };
    inline vector<InviteSubAccountRequestAccountInfoList> accountInfoList() { DARABONBA_PTR_GET(accountInfoList_, vector<InviteSubAccountRequestAccountInfoList>) };
    inline InviteSubAccountRequest& setAccountInfoList(const vector<InviteSubAccountRequestAccountInfoList> & accountInfoList) { DARABONBA_PTR_SET_VALUE(accountInfoList_, accountInfoList) };
    inline InviteSubAccountRequest& setAccountInfoList(vector<InviteSubAccountRequestAccountInfoList> && accountInfoList) { DARABONBA_PTR_SET_RVALUE(accountInfoList_, accountInfoList) };


  protected:
    // List of invited account information,  less than 5 accounts at a time.</br>
    // `Sub-levels <= 5`
    // 
    // This parameter is required.
    std::shared_ptr<vector<InviteSubAccountRequestAccountInfoList>> accountInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
