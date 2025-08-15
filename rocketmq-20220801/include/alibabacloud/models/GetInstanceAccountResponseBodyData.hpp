// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEACCOUNTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEACCOUNTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetInstanceAccountResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceAccountResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(accountStatus, accountStatus_);
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceAccountResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(accountStatus, accountStatus_);
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    GetInstanceAccountResponseBodyData() = default ;
    GetInstanceAccountResponseBodyData(const GetInstanceAccountResponseBodyData &) = default ;
    GetInstanceAccountResponseBodyData(GetInstanceAccountResponseBodyData &&) = default ;
    GetInstanceAccountResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceAccountResponseBodyData() = default ;
    GetInstanceAccountResponseBodyData& operator=(const GetInstanceAccountResponseBodyData &) = default ;
    GetInstanceAccountResponseBodyData& operator=(GetInstanceAccountResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountStatus_ != nullptr
        && this->password_ != nullptr && this->username_ != nullptr; };
    // accountStatus Field Functions 
    bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
    void deleteAccountStatus() { this->accountStatus_ = nullptr;};
    inline string accountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
    inline GetInstanceAccountResponseBodyData& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline GetInstanceAccountResponseBodyData& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GetInstanceAccountResponseBodyData& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The status of the account.
    // 
    // Valid values:
    // 
    // *   DISABLE
    // *   ENABLE
    std::shared_ptr<string> accountStatus_ = nullptr;
    // The password of the account.
    std::shared_ptr<string> password_ = nullptr;
    // The username of the account.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
