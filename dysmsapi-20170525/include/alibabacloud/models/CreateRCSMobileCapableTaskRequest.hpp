// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERCSMOBILECAPABLETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERCSMOBILECAPABLETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class CreateRCSMobileCapableTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRCSMobileCapableTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PhoneNumbersFile, phoneNumbersFile_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRCSMobileCapableTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PhoneNumbersFile, phoneNumbersFile_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
    };
    CreateRCSMobileCapableTaskRequest() = default ;
    CreateRCSMobileCapableTaskRequest(const CreateRCSMobileCapableTaskRequest &) = default ;
    CreateRCSMobileCapableTaskRequest(CreateRCSMobileCapableTaskRequest &&) = default ;
    CreateRCSMobileCapableTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRCSMobileCapableTaskRequest() = default ;
    CreateRCSMobileCapableTaskRequest& operator=(const CreateRCSMobileCapableTaskRequest &) = default ;
    CreateRCSMobileCapableTaskRequest& operator=(CreateRCSMobileCapableTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->phoneNumbersFile_ == nullptr
        && this->signName_ == nullptr && this->templateCode_ == nullptr; };
    // phoneNumbersFile Field Functions 
    bool hasPhoneNumbersFile() const { return this->phoneNumbersFile_ != nullptr;};
    void deletePhoneNumbersFile() { this->phoneNumbersFile_ = nullptr;};
    inline string getPhoneNumbersFile() const { DARABONBA_PTR_GET_DEFAULT(phoneNumbersFile_, "") };
    inline CreateRCSMobileCapableTaskRequest& setPhoneNumbersFile(string phoneNumbersFile) { DARABONBA_PTR_SET_VALUE(phoneNumbersFile_, phoneNumbersFile) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline CreateRCSMobileCapableTaskRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline CreateRCSMobileCapableTaskRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


  protected:
    // This parameter is required.
    shared_ptr<string> phoneNumbersFile_ {};
    // This parameter is required.
    shared_ptr<string> signName_ {};
    // This parameter is required.
    shared_ptr<string> templateCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
