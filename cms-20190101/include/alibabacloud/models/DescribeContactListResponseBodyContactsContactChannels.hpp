// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTACTLISTRESPONSEBODYCONTACTSCONTACTCHANNELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTACTLISTRESPONSEBODYCONTACTSCONTACTCHANNELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeContactListResponseBodyContactsContactChannels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContactListResponseBodyContactsContactChannels& obj) { 
      DARABONBA_PTR_TO_JSON(AliIM, aliIM_);
      DARABONBA_PTR_TO_JSON(DingWebHook, dingWebHook_);
      DARABONBA_PTR_TO_JSON(Mail, mail_);
      DARABONBA_PTR_TO_JSON(SMS, SMS_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContactListResponseBodyContactsContactChannels& obj) { 
      DARABONBA_PTR_FROM_JSON(AliIM, aliIM_);
      DARABONBA_PTR_FROM_JSON(DingWebHook, dingWebHook_);
      DARABONBA_PTR_FROM_JSON(Mail, mail_);
      DARABONBA_PTR_FROM_JSON(SMS, SMS_);
    };
    DescribeContactListResponseBodyContactsContactChannels() = default ;
    DescribeContactListResponseBodyContactsContactChannels(const DescribeContactListResponseBodyContactsContactChannels &) = default ;
    DescribeContactListResponseBodyContactsContactChannels(DescribeContactListResponseBodyContactsContactChannels &&) = default ;
    DescribeContactListResponseBodyContactsContactChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContactListResponseBodyContactsContactChannels() = default ;
    DescribeContactListResponseBodyContactsContactChannels& operator=(const DescribeContactListResponseBodyContactsContactChannels &) = default ;
    DescribeContactListResponseBodyContactsContactChannels& operator=(DescribeContactListResponseBodyContactsContactChannels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliIM_ == nullptr
        && return this->dingWebHook_ == nullptr && return this->mail_ == nullptr && return this->SMS_ == nullptr; };
    // aliIM Field Functions 
    bool hasAliIM() const { return this->aliIM_ != nullptr;};
    void deleteAliIM() { this->aliIM_ = nullptr;};
    inline string aliIM() const { DARABONBA_PTR_GET_DEFAULT(aliIM_, "") };
    inline DescribeContactListResponseBodyContactsContactChannels& setAliIM(string aliIM) { DARABONBA_PTR_SET_VALUE(aliIM_, aliIM) };


    // dingWebHook Field Functions 
    bool hasDingWebHook() const { return this->dingWebHook_ != nullptr;};
    void deleteDingWebHook() { this->dingWebHook_ = nullptr;};
    inline string dingWebHook() const { DARABONBA_PTR_GET_DEFAULT(dingWebHook_, "") };
    inline DescribeContactListResponseBodyContactsContactChannels& setDingWebHook(string dingWebHook) { DARABONBA_PTR_SET_VALUE(dingWebHook_, dingWebHook) };


    // mail Field Functions 
    bool hasMail() const { return this->mail_ != nullptr;};
    void deleteMail() { this->mail_ = nullptr;};
    inline string mail() const { DARABONBA_PTR_GET_DEFAULT(mail_, "") };
    inline DescribeContactListResponseBodyContactsContactChannels& setMail(string mail) { DARABONBA_PTR_SET_VALUE(mail_, mail) };


    // SMS Field Functions 
    bool hasSMS() const { return this->SMS_ != nullptr;};
    void deleteSMS() { this->SMS_ = nullptr;};
    inline string SMS() const { DARABONBA_PTR_GET_DEFAULT(SMS_, "") };
    inline DescribeContactListResponseBodyContactsContactChannels& setSMS(string SMS) { DARABONBA_PTR_SET_VALUE(SMS_, SMS) };


  protected:
    // The TradeManager ID of the alert contact.
    std::shared_ptr<string> aliIM_ = nullptr;
    // The webhook URL of the DingTalk chatbot.
    std::shared_ptr<string> dingWebHook_ = nullptr;
    // The email address of the alert contact.
    std::shared_ptr<string> mail_ = nullptr;
    // The phone number of the alert contac.
    std::shared_ptr<string> SMS_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
