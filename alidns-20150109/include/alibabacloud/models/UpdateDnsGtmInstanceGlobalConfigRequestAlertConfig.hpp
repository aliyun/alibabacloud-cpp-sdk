// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDNSGTMINSTANCEGLOBALCONFIGREQUESTALERTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDNSGTMINSTANCEGLOBALCONFIGREQUESTALERTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DingtalkNotice, dingtalkNotice_);
      DARABONBA_PTR_TO_JSON(EmailNotice, emailNotice_);
      DARABONBA_PTR_TO_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_TO_JSON(SmsNotice, smsNotice_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DingtalkNotice, dingtalkNotice_);
      DARABONBA_PTR_FROM_JSON(EmailNotice, emailNotice_);
      DARABONBA_PTR_FROM_JSON(NoticeType, noticeType_);
      DARABONBA_PTR_FROM_JSON(SmsNotice, smsNotice_);
    };
    UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig() = default ;
    UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig(const UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig &) = default ;
    UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig(UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig &&) = default ;
    UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig() = default ;
    UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig& operator=(const UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig &) = default ;
    UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig& operator=(UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dingtalkNotice_ == nullptr
        && return this->emailNotice_ == nullptr && return this->noticeType_ == nullptr && return this->smsNotice_ == nullptr; };
    // dingtalkNotice Field Functions 
    bool hasDingtalkNotice() const { return this->dingtalkNotice_ != nullptr;};
    void deleteDingtalkNotice() { this->dingtalkNotice_ = nullptr;};
    inline bool dingtalkNotice() const { DARABONBA_PTR_GET_DEFAULT(dingtalkNotice_, false) };
    inline UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig& setDingtalkNotice(bool dingtalkNotice) { DARABONBA_PTR_SET_VALUE(dingtalkNotice_, dingtalkNotice) };


    // emailNotice Field Functions 
    bool hasEmailNotice() const { return this->emailNotice_ != nullptr;};
    void deleteEmailNotice() { this->emailNotice_ = nullptr;};
    inline bool emailNotice() const { DARABONBA_PTR_GET_DEFAULT(emailNotice_, false) };
    inline UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig& setEmailNotice(bool emailNotice) { DARABONBA_PTR_SET_VALUE(emailNotice_, emailNotice) };


    // noticeType Field Functions 
    bool hasNoticeType() const { return this->noticeType_ != nullptr;};
    void deleteNoticeType() { this->noticeType_ = nullptr;};
    inline string noticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, "") };
    inline UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig& setNoticeType(string noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


    // smsNotice Field Functions 
    bool hasSmsNotice() const { return this->smsNotice_ != nullptr;};
    void deleteSmsNotice() { this->smsNotice_ = nullptr;};
    inline bool smsNotice() const { DARABONBA_PTR_GET_DEFAULT(smsNotice_, false) };
    inline UpdateDnsGtmInstanceGlobalConfigRequestAlertConfig& setSmsNotice(bool smsNotice) { DARABONBA_PTR_SET_VALUE(smsNotice_, smsNotice) };


  protected:
    std::shared_ptr<bool> dingtalkNotice_ = nullptr;
    std::shared_ptr<bool> emailNotice_ = nullptr;
    std::shared_ptr<string> noticeType_ = nullptr;
    std::shared_ptr<bool> smsNotice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
