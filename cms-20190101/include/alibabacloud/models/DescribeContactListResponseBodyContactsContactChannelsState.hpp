// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTACTLISTRESPONSEBODYCONTACTSCONTACTCHANNELSSTATE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTACTLISTRESPONSEBODYCONTACTSCONTACTCHANNELSSTATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeContactListResponseBodyContactsContactChannelsState : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContactListResponseBodyContactsContactChannelsState& obj) { 
      DARABONBA_PTR_TO_JSON(AliIM, aliIM_);
      DARABONBA_PTR_TO_JSON(DingWebHook, dingWebHook_);
      DARABONBA_PTR_TO_JSON(Mail, mail_);
      DARABONBA_PTR_TO_JSON(SMS, SMS_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContactListResponseBodyContactsContactChannelsState& obj) { 
      DARABONBA_PTR_FROM_JSON(AliIM, aliIM_);
      DARABONBA_PTR_FROM_JSON(DingWebHook, dingWebHook_);
      DARABONBA_PTR_FROM_JSON(Mail, mail_);
      DARABONBA_PTR_FROM_JSON(SMS, SMS_);
    };
    DescribeContactListResponseBodyContactsContactChannelsState() = default ;
    DescribeContactListResponseBodyContactsContactChannelsState(const DescribeContactListResponseBodyContactsContactChannelsState &) = default ;
    DescribeContactListResponseBodyContactsContactChannelsState(DescribeContactListResponseBodyContactsContactChannelsState &&) = default ;
    DescribeContactListResponseBodyContactsContactChannelsState(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContactListResponseBodyContactsContactChannelsState() = default ;
    DescribeContactListResponseBodyContactsContactChannelsState& operator=(const DescribeContactListResponseBodyContactsContactChannelsState &) = default ;
    DescribeContactListResponseBodyContactsContactChannelsState& operator=(DescribeContactListResponseBodyContactsContactChannelsState &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliIM_ != nullptr
        && this->dingWebHook_ != nullptr && this->mail_ != nullptr && this->SMS_ != nullptr; };
    // aliIM Field Functions 
    bool hasAliIM() const { return this->aliIM_ != nullptr;};
    void deleteAliIM() { this->aliIM_ = nullptr;};
    inline string aliIM() const { DARABONBA_PTR_GET_DEFAULT(aliIM_, "") };
    inline DescribeContactListResponseBodyContactsContactChannelsState& setAliIM(string aliIM) { DARABONBA_PTR_SET_VALUE(aliIM_, aliIM) };


    // dingWebHook Field Functions 
    bool hasDingWebHook() const { return this->dingWebHook_ != nullptr;};
    void deleteDingWebHook() { this->dingWebHook_ = nullptr;};
    inline string dingWebHook() const { DARABONBA_PTR_GET_DEFAULT(dingWebHook_, "") };
    inline DescribeContactListResponseBodyContactsContactChannelsState& setDingWebHook(string dingWebHook) { DARABONBA_PTR_SET_VALUE(dingWebHook_, dingWebHook) };


    // mail Field Functions 
    bool hasMail() const { return this->mail_ != nullptr;};
    void deleteMail() { this->mail_ = nullptr;};
    inline string mail() const { DARABONBA_PTR_GET_DEFAULT(mail_, "") };
    inline DescribeContactListResponseBodyContactsContactChannelsState& setMail(string mail) { DARABONBA_PTR_SET_VALUE(mail_, mail) };


    // SMS Field Functions 
    bool hasSMS() const { return this->SMS_ != nullptr;};
    void deleteSMS() { this->SMS_ = nullptr;};
    inline string SMS() const { DARABONBA_PTR_GET_DEFAULT(SMS_, "") };
    inline DescribeContactListResponseBodyContactsContactChannelsState& setSMS(string SMS) { DARABONBA_PTR_SET_VALUE(SMS_, SMS) };


  protected:
    // The status of the TradeManager ID.
    // 
    // Valid value: OK. The value OK indicates that the TradeManager ID is valid and can receive alert notifications.
    // 
    // >  This parameter applies only to the Alibaba Cloud China site (aliyun.com).
    std::shared_ptr<string> aliIM_ = nullptr;
    // The status of the DingTalk chatbot.
    // 
    // Valid value: OK. The value OK indicates that the DingTalk chatbot is normal and alert notifications can be received in a DingTalk group.
    std::shared_ptr<string> dingWebHook_ = nullptr;
    // The status of the email address. Valid values:
    // 
    // *   PENDING: The phone number is not activated. Alert notifications can be sent to the phone number by using text messages only after the phone number is activated.
    // *   OK: The phone number is activated and can receive alert notifications.
    std::shared_ptr<string> mail_ = nullptr;
    // The status of the phone number. Valid values:
    // 
    // *   PENDING: The phone number is not activated. Alert notifications can be sent to the phone number by using text messages only after the phone number is activated.
    // *   OK: The phone number is activated and can receive alert notifications.
    // 
    // >  This parameter applies only to the Alibaba Cloud China site (aliyun.com).
    std::shared_ptr<string> SMS_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
