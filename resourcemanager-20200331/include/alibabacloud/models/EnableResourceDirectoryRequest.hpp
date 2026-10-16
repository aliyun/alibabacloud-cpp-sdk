// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLERESOURCEDIRECTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLERESOURCEDIRECTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class EnableResourceDirectoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableResourceDirectoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableMode, enableMode_);
      DARABONBA_PTR_TO_JSON(MAName, MAName_);
      DARABONBA_PTR_TO_JSON(MASecureMobilePhone, MASecureMobilePhone_);
      DARABONBA_PTR_TO_JSON(VerificationCode, verificationCode_);
    };
    friend void from_json(const Darabonba::Json& j, EnableResourceDirectoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableMode, enableMode_);
      DARABONBA_PTR_FROM_JSON(MAName, MAName_);
      DARABONBA_PTR_FROM_JSON(MASecureMobilePhone, MASecureMobilePhone_);
      DARABONBA_PTR_FROM_JSON(VerificationCode, verificationCode_);
    };
    EnableResourceDirectoryRequest() = default ;
    EnableResourceDirectoryRequest(const EnableResourceDirectoryRequest &) = default ;
    EnableResourceDirectoryRequest(EnableResourceDirectoryRequest &&) = default ;
    EnableResourceDirectoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableResourceDirectoryRequest() = default ;
    EnableResourceDirectoryRequest& operator=(const EnableResourceDirectoryRequest &) = default ;
    EnableResourceDirectoryRequest& operator=(EnableResourceDirectoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableMode_ == nullptr
        && this->MAName_ == nullptr && this->MASecureMobilePhone_ == nullptr && this->verificationCode_ == nullptr; };
    // enableMode Field Functions 
    bool hasEnableMode() const { return this->enableMode_ != nullptr;};
    void deleteEnableMode() { this->enableMode_ = nullptr;};
    inline string getEnableMode() const { DARABONBA_PTR_GET_DEFAULT(enableMode_, "") };
    inline EnableResourceDirectoryRequest& setEnableMode(string enableMode) { DARABONBA_PTR_SET_VALUE(enableMode_, enableMode) };


    // MAName Field Functions 
    bool hasMAName() const { return this->MAName_ != nullptr;};
    void deleteMAName() { this->MAName_ = nullptr;};
    inline string getMAName() const { DARABONBA_PTR_GET_DEFAULT(MAName_, "") };
    inline EnableResourceDirectoryRequest& setMAName(string MAName) { DARABONBA_PTR_SET_VALUE(MAName_, MAName) };


    // MASecureMobilePhone Field Functions 
    bool hasMASecureMobilePhone() const { return this->MASecureMobilePhone_ != nullptr;};
    void deleteMASecureMobilePhone() { this->MASecureMobilePhone_ = nullptr;};
    inline string getMASecureMobilePhone() const { DARABONBA_PTR_GET_DEFAULT(MASecureMobilePhone_, "") };
    inline EnableResourceDirectoryRequest& setMASecureMobilePhone(string MASecureMobilePhone) { DARABONBA_PTR_SET_VALUE(MASecureMobilePhone_, MASecureMobilePhone) };


    // verificationCode Field Functions 
    bool hasVerificationCode() const { return this->verificationCode_ != nullptr;};
    void deleteVerificationCode() { this->verificationCode_ = nullptr;};
    inline string getVerificationCode() const { DARABONBA_PTR_GET_DEFAULT(verificationCode_, "") };
    inline EnableResourceDirectoryRequest& setVerificationCode(string verificationCode) { DARABONBA_PTR_SET_VALUE(verificationCode_, verificationCode) };


  protected:
    // The method used to enable the resource directory. Valid values:
    // 
    // - CurrentAccount: enables the resource directory by using the current logon account.
    // - NewManagementAccount: enables the resource directory by creating a new management account. If you select this method, you must configure `MAName`, `MASecureMobilePhone`, and `VerificationCode`.
    // 
    // This parameter is required.
    shared_ptr<string> enableMode_ {};
    // The name of the new management account.
    // 
    // Format: `<Prefix>@rdadmin.aliyunid.com`. The prefix can contain letters, digits, and the special characters `_.-`. The prefix must start and end with a letter or digit, and cannot contain consecutive special characters. The prefix must be 2 to 50 characters in length.
    shared_ptr<string> MAName_ {};
    // The secure phone number of the new management account.
    // 
    // If you leave this parameter empty, the secure phone number of the current logon account is used. The phone number must be the same as the one used to authenticate and obtain the verification code in [SendVerificationCodeForEnableRD](https://help.aliyun.com/document_detail/364248.html).
    // 
    // Format: `<Country code>-<Phone number>`.
    // 
    // <props="intl">
    // > Phone numbers from the Chinese mainland in the format `86-<Phone number>` are not supported.
    // 
    // 
    // <props="china">
    // > Only phone numbers from the Chinese mainland in the format `86-<Phone number>` are supported.
    shared_ptr<string> MASecureMobilePhone_ {};
    // The verification code.
    // 
    // You can call [SendVerificationCodeForEnableRD](https://help.aliyun.com/document_detail/364248.html) to obtain the verification code.
    shared_ptr<string> verificationCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
