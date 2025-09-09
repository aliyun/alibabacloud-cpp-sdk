// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCERESPONSEBODYUSEDQUOTA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCERESPONSEBODYUSEDQUOTA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmInstanceResponseBodyUsedQuota : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmInstanceResponseBodyUsedQuota& obj) { 
      DARABONBA_PTR_TO_JSON(DingtalkUsedCount, dingtalkUsedCount_);
      DARABONBA_PTR_TO_JSON(EmailUsedCount, emailUsedCount_);
      DARABONBA_PTR_TO_JSON(SmsUsedCount, smsUsedCount_);
      DARABONBA_PTR_TO_JSON(TaskUsedCount, taskUsedCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmInstanceResponseBodyUsedQuota& obj) { 
      DARABONBA_PTR_FROM_JSON(DingtalkUsedCount, dingtalkUsedCount_);
      DARABONBA_PTR_FROM_JSON(EmailUsedCount, emailUsedCount_);
      DARABONBA_PTR_FROM_JSON(SmsUsedCount, smsUsedCount_);
      DARABONBA_PTR_FROM_JSON(TaskUsedCount, taskUsedCount_);
    };
    DescribeDnsGtmInstanceResponseBodyUsedQuota() = default ;
    DescribeDnsGtmInstanceResponseBodyUsedQuota(const DescribeDnsGtmInstanceResponseBodyUsedQuota &) = default ;
    DescribeDnsGtmInstanceResponseBodyUsedQuota(DescribeDnsGtmInstanceResponseBodyUsedQuota &&) = default ;
    DescribeDnsGtmInstanceResponseBodyUsedQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmInstanceResponseBodyUsedQuota() = default ;
    DescribeDnsGtmInstanceResponseBodyUsedQuota& operator=(const DescribeDnsGtmInstanceResponseBodyUsedQuota &) = default ;
    DescribeDnsGtmInstanceResponseBodyUsedQuota& operator=(DescribeDnsGtmInstanceResponseBodyUsedQuota &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dingtalkUsedCount_ != nullptr
        && this->emailUsedCount_ != nullptr && this->smsUsedCount_ != nullptr && this->taskUsedCount_ != nullptr; };
    // dingtalkUsedCount Field Functions 
    bool hasDingtalkUsedCount() const { return this->dingtalkUsedCount_ != nullptr;};
    void deleteDingtalkUsedCount() { this->dingtalkUsedCount_ = nullptr;};
    inline int32_t dingtalkUsedCount() const { DARABONBA_PTR_GET_DEFAULT(dingtalkUsedCount_, 0) };
    inline DescribeDnsGtmInstanceResponseBodyUsedQuota& setDingtalkUsedCount(int32_t dingtalkUsedCount) { DARABONBA_PTR_SET_VALUE(dingtalkUsedCount_, dingtalkUsedCount) };


    // emailUsedCount Field Functions 
    bool hasEmailUsedCount() const { return this->emailUsedCount_ != nullptr;};
    void deleteEmailUsedCount() { this->emailUsedCount_ = nullptr;};
    inline int32_t emailUsedCount() const { DARABONBA_PTR_GET_DEFAULT(emailUsedCount_, 0) };
    inline DescribeDnsGtmInstanceResponseBodyUsedQuota& setEmailUsedCount(int32_t emailUsedCount) { DARABONBA_PTR_SET_VALUE(emailUsedCount_, emailUsedCount) };


    // smsUsedCount Field Functions 
    bool hasSmsUsedCount() const { return this->smsUsedCount_ != nullptr;};
    void deleteSmsUsedCount() { this->smsUsedCount_ = nullptr;};
    inline int32_t smsUsedCount() const { DARABONBA_PTR_GET_DEFAULT(smsUsedCount_, 0) };
    inline DescribeDnsGtmInstanceResponseBodyUsedQuota& setSmsUsedCount(int32_t smsUsedCount) { DARABONBA_PTR_SET_VALUE(smsUsedCount_, smsUsedCount) };


    // taskUsedCount Field Functions 
    bool hasTaskUsedCount() const { return this->taskUsedCount_ != nullptr;};
    void deleteTaskUsedCount() { this->taskUsedCount_ = nullptr;};
    inline int32_t taskUsedCount() const { DARABONBA_PTR_GET_DEFAULT(taskUsedCount_, 0) };
    inline DescribeDnsGtmInstanceResponseBodyUsedQuota& setTaskUsedCount(int32_t taskUsedCount) { DARABONBA_PTR_SET_VALUE(taskUsedCount_, taskUsedCount) };


  protected:
    std::shared_ptr<int32_t> dingtalkUsedCount_ = nullptr;
    // The total number of emails that were sent.
    std::shared_ptr<int32_t> emailUsedCount_ = nullptr;
    // The total number of short messages that were sent.
    std::shared_ptr<int32_t> smsUsedCount_ = nullptr;
    // The number of detection tasks that were created.
    std::shared_ptr<int32_t> taskUsedCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
