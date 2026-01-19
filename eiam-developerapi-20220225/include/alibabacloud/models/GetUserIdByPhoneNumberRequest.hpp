// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERIDBYPHONENUMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERIDBYPHONENUMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GetUserIdByPhoneNumberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserIdByPhoneNumberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(phoneNumber, phoneNumber_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserIdByPhoneNumberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(phoneNumber, phoneNumber_);
    };
    GetUserIdByPhoneNumberRequest() = default ;
    GetUserIdByPhoneNumberRequest(const GetUserIdByPhoneNumberRequest &) = default ;
    GetUserIdByPhoneNumberRequest(GetUserIdByPhoneNumberRequest &&) = default ;
    GetUserIdByPhoneNumberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserIdByPhoneNumberRequest() = default ;
    GetUserIdByPhoneNumberRequest& operator=(const GetUserIdByPhoneNumberRequest &) = default ;
    GetUserIdByPhoneNumberRequest& operator=(GetUserIdByPhoneNumberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->phoneNumber_ == nullptr; };
    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline GetUserIdByPhoneNumberRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


  protected:
    // The mobile number of the user who owns the account.
    // 
    // This parameter is required.
    shared_ptr<string> phoneNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
