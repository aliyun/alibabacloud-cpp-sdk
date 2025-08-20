// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHONENUMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPHONENUMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class GetPhoneNumberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhoneNumberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(phoneNumber, phoneNumber_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhoneNumberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(phoneNumber, phoneNumber_);
    };
    GetPhoneNumberResponseBody() = default ;
    GetPhoneNumberResponseBody(const GetPhoneNumberResponseBody &) = default ;
    GetPhoneNumberResponseBody(GetPhoneNumberResponseBody &&) = default ;
    GetPhoneNumberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhoneNumberResponseBody() = default ;
    GetPhoneNumberResponseBody& operator=(const GetPhoneNumberResponseBody &) = default ;
    GetPhoneNumberResponseBody& operator=(GetPhoneNumberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->phoneNumber_ != nullptr; };
    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline GetPhoneNumberResponseBody& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


  protected:
    std::shared_ptr<string> phoneNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
