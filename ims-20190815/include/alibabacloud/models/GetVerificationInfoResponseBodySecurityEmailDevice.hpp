// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVERIFICATIONINFORESPONSEBODYSECURITYEMAILDEVICE_HPP_
#define ALIBABACLOUD_MODELS_GETVERIFICATIONINFORESPONSEBODYSECURITYEMAILDEVICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetVerificationInfoResponseBodySecurityEmailDevice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVerificationInfoResponseBodySecurityEmailDevice& obj) { 
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetVerificationInfoResponseBodySecurityEmailDevice& obj) { 
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetVerificationInfoResponseBodySecurityEmailDevice() = default ;
    GetVerificationInfoResponseBodySecurityEmailDevice(const GetVerificationInfoResponseBodySecurityEmailDevice &) = default ;
    GetVerificationInfoResponseBodySecurityEmailDevice(GetVerificationInfoResponseBodySecurityEmailDevice &&) = default ;
    GetVerificationInfoResponseBodySecurityEmailDevice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVerificationInfoResponseBodySecurityEmailDevice() = default ;
    GetVerificationInfoResponseBodySecurityEmailDevice& operator=(const GetVerificationInfoResponseBodySecurityEmailDevice &) = default ;
    GetVerificationInfoResponseBodySecurityEmailDevice& operator=(GetVerificationInfoResponseBodySecurityEmailDevice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->email_ != nullptr
        && this->status_ != nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetVerificationInfoResponseBodySecurityEmailDevice& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVerificationInfoResponseBodySecurityEmailDevice& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The email address.
    std::shared_ptr<string> email_ = nullptr;
    // The status of the email. Valid values:
    // 
    // *   active: The email is activated.
    // *   pending: The email is pending for activation.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
