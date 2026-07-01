// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDRCSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDRCSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class SendRCSRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendRCSRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(PhoneNumbers, phoneNumbers_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TemplateParam, templateParam_);
    };
    friend void from_json(const Darabonba::Json& j, SendRCSRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumbers, phoneNumbers_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TemplateParam, templateParam_);
    };
    SendRCSRequest() = default ;
    SendRCSRequest(const SendRCSRequest &) = default ;
    SendRCSRequest(SendRCSRequest &&) = default ;
    SendRCSRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendRCSRequest() = default ;
    SendRCSRequest& operator=(const SendRCSRequest &) = default ;
    SendRCSRequest& operator=(SendRCSRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outId_ == nullptr
        && this->phoneNumbers_ == nullptr && this->signName_ == nullptr && this->templateCode_ == nullptr && this->templateParam_ == nullptr; };
    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline SendRCSRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // phoneNumbers Field Functions 
    bool hasPhoneNumbers() const { return this->phoneNumbers_ != nullptr;};
    void deletePhoneNumbers() { this->phoneNumbers_ = nullptr;};
    inline string getPhoneNumbers() const { DARABONBA_PTR_GET_DEFAULT(phoneNumbers_, "") };
    inline SendRCSRequest& setPhoneNumbers(string phoneNumbers) { DARABONBA_PTR_SET_VALUE(phoneNumbers_, phoneNumbers) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline SendRCSRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline SendRCSRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateParam Field Functions 
    bool hasTemplateParam() const { return this->templateParam_ != nullptr;};
    void deleteTemplateParam() { this->templateParam_ = nullptr;};
    inline string getTemplateParam() const { DARABONBA_PTR_GET_DEFAULT(templateParam_, "") };
    inline SendRCSRequest& setTemplateParam(string templateParam) { DARABONBA_PTR_SET_VALUE(templateParam_, templateParam) };


  protected:
    shared_ptr<string> outId_ {};
    // This parameter is required.
    shared_ptr<string> phoneNumbers_ {};
    // This parameter is required.
    shared_ptr<string> signName_ {};
    // This parameter is required.
    shared_ptr<string> templateCode_ {};
    shared_ptr<string> templateParam_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
