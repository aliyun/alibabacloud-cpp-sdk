// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLERESOURCEDIRECTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLERESOURCEDIRECTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class EnableResourceDirectoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableResourceDirectoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EnableMode, enableMode_);
      DARABONBA_PTR_TO_JSON(MAName, MAName_);
      DARABONBA_PTR_TO_JSON(MASecureMobilePhone, MASecureMobilePhone_);
      DARABONBA_PTR_TO_JSON(VerificationCode, verificationCode_);
    };
    friend void from_json(const Darabonba::Json& j, EnableResourceDirectoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
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
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && return this->enableMode_ == nullptr && return this->MAName_ == nullptr && return this->MASecureMobilePhone_ == nullptr && return this->verificationCode_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline EnableResourceDirectoryRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // enableMode Field Functions 
    bool hasEnableMode() const { return this->enableMode_ != nullptr;};
    void deleteEnableMode() { this->enableMode_ = nullptr;};
    inline string enableMode() const { DARABONBA_PTR_GET_DEFAULT(enableMode_, "") };
    inline EnableResourceDirectoryRequest& setEnableMode(string enableMode) { DARABONBA_PTR_SET_VALUE(enableMode_, enableMode) };


    // MAName Field Functions 
    bool hasMAName() const { return this->MAName_ != nullptr;};
    void deleteMAName() { this->MAName_ = nullptr;};
    inline string MAName() const { DARABONBA_PTR_GET_DEFAULT(MAName_, "") };
    inline EnableResourceDirectoryRequest& setMAName(string MAName) { DARABONBA_PTR_SET_VALUE(MAName_, MAName) };


    // MASecureMobilePhone Field Functions 
    bool hasMASecureMobilePhone() const { return this->MASecureMobilePhone_ != nullptr;};
    void deleteMASecureMobilePhone() { this->MASecureMobilePhone_ = nullptr;};
    inline string MASecureMobilePhone() const { DARABONBA_PTR_GET_DEFAULT(MASecureMobilePhone_, "") };
    inline EnableResourceDirectoryRequest& setMASecureMobilePhone(string MASecureMobilePhone) { DARABONBA_PTR_SET_VALUE(MASecureMobilePhone_, MASecureMobilePhone) };


    // verificationCode Field Functions 
    bool hasVerificationCode() const { return this->verificationCode_ != nullptr;};
    void deleteVerificationCode() { this->verificationCode_ = nullptr;};
    inline string verificationCode() const { DARABONBA_PTR_GET_DEFAULT(verificationCode_, "") };
    inline EnableResourceDirectoryRequest& setVerificationCode(string verificationCode) { DARABONBA_PTR_SET_VALUE(verificationCode_, verificationCode) };


  protected:
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run.
    // *   **false** (default): performs a dry run and performs the actual request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The mode in which you enable a resource directory. Valid values:
    // 
    // *   CurrentAccount: The current account is used to enable a resource directory.
    // *   NewManagementAccount: A newly created account is used to enable a resource directory. If you select this mode, you must configure the `MAName`, `MASecureMobilePhone`, and `VerificationCode` parameters.
    // 
    // This parameter is required.
    std::shared_ptr<string> enableMode_ = nullptr;
    // The name of the newly created account.
    // 
    // Specify the name in the `<Prefix>@rdadmin.aliyunid.com` format. The prefix can contain letters, digits, and special characters but cannot contain consecutive special characters. The prefix must start and end with a letter or digit. Valid special characters include underscores (`_`), periods (.), and hyphens (-). The prefix must be 2 to 50 characters in length.
    std::shared_ptr<string> MAName_ = nullptr;
    // The mobile phone number that is bound to the newly created account.
    // 
    // If you leave this parameter empty, the mobile phone number that is bound to the current account is used. The mobile phone number you specify must be the same as the mobile phone number that you specify when you call the [SendVerificationCodeForEnableRD](~~SendVerificationCodeForEnableRD~~) operation to obtain a verification code.
    // 
    // Specify the mobile phone number in the `<Country code>-<Mobile phone number>` format.
    // 
    // > Mobile phone numbers in the `86-<Mobile phone number>` format in the Chinese mainland are not supported.
    std::shared_ptr<string> MASecureMobilePhone_ = nullptr;
    // The verification code.
    // 
    // You can call the [SendVerificationCodeForEnableRD](~~SendVerificationCodeForEnableRD~~) operation to obtain the verification code.
    std::shared_ptr<string> verificationCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
