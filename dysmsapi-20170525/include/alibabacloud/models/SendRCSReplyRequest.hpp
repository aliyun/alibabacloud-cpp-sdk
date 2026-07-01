// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDRCSREPLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDRCSREPLYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class SendRCSReplyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendRCSReplyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InReplyToRcsID, inReplyToRcsID_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(PhoneNumbers, phoneNumbers_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TemplateParam, templateParam_);
    };
    friend void from_json(const Darabonba::Json& j, SendRCSReplyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InReplyToRcsID, inReplyToRcsID_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(PhoneNumbers, phoneNumbers_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TemplateParam, templateParam_);
    };
    SendRCSReplyRequest() = default ;
    SendRCSReplyRequest(const SendRCSReplyRequest &) = default ;
    SendRCSReplyRequest(SendRCSReplyRequest &&) = default ;
    SendRCSReplyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendRCSReplyRequest() = default ;
    SendRCSReplyRequest& operator=(const SendRCSReplyRequest &) = default ;
    SendRCSReplyRequest& operator=(SendRCSReplyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inReplyToRcsID_ == nullptr
        && this->outId_ == nullptr && this->phoneNumbers_ == nullptr && this->signName_ == nullptr && this->templateCode_ == nullptr && this->templateParam_ == nullptr; };
    // inReplyToRcsID Field Functions 
    bool hasInReplyToRcsID() const { return this->inReplyToRcsID_ != nullptr;};
    void deleteInReplyToRcsID() { this->inReplyToRcsID_ = nullptr;};
    inline string getInReplyToRcsID() const { DARABONBA_PTR_GET_DEFAULT(inReplyToRcsID_, "") };
    inline SendRCSReplyRequest& setInReplyToRcsID(string inReplyToRcsID) { DARABONBA_PTR_SET_VALUE(inReplyToRcsID_, inReplyToRcsID) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline SendRCSReplyRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // phoneNumbers Field Functions 
    bool hasPhoneNumbers() const { return this->phoneNumbers_ != nullptr;};
    void deletePhoneNumbers() { this->phoneNumbers_ = nullptr;};
    inline string getPhoneNumbers() const { DARABONBA_PTR_GET_DEFAULT(phoneNumbers_, "") };
    inline SendRCSReplyRequest& setPhoneNumbers(string phoneNumbers) { DARABONBA_PTR_SET_VALUE(phoneNumbers_, phoneNumbers) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline SendRCSReplyRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline SendRCSReplyRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // templateParam Field Functions 
    bool hasTemplateParam() const { return this->templateParam_ != nullptr;};
    void deleteTemplateParam() { this->templateParam_ = nullptr;};
    inline string getTemplateParam() const { DARABONBA_PTR_GET_DEFAULT(templateParam_, "") };
    inline SendRCSReplyRequest& setTemplateParam(string templateParam) { DARABONBA_PTR_SET_VALUE(templateParam_, templateParam) };


  protected:
    // This parameter is required.
    shared_ptr<string> inReplyToRcsID_ {};
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
