// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKCHANNELRESPONSEBODYAUDIT_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKCHANNELRESPONSEBODYAUDIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetCheckChannelResponseBodyAudit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckChannelResponseBodyAudit& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CustomerId, customerId_);
      DARABONBA_PTR_TO_JSON(LegalSwitch, legalSwitch_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckChannelResponseBodyAudit& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CustomerId, customerId_);
      DARABONBA_PTR_FROM_JSON(LegalSwitch, legalSwitch_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetCheckChannelResponseBodyAudit() = default ;
    GetCheckChannelResponseBodyAudit(const GetCheckChannelResponseBodyAudit &) = default ;
    GetCheckChannelResponseBodyAudit(GetCheckChannelResponseBodyAudit &&) = default ;
    GetCheckChannelResponseBodyAudit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckChannelResponseBodyAudit() = default ;
    GetCheckChannelResponseBodyAudit& operator=(const GetCheckChannelResponseBodyAudit &) = default ;
    GetCheckChannelResponseBodyAudit& operator=(GetCheckChannelResponseBodyAudit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channel_ != nullptr
        && this->createTime_ != nullptr && this->customerId_ != nullptr && this->legalSwitch_ != nullptr && this->updateTime_ != nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline GetCheckChannelResponseBodyAudit& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetCheckChannelResponseBodyAudit& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customerId Field Functions 
    bool hasCustomerId() const { return this->customerId_ != nullptr;};
    void deleteCustomerId() { this->customerId_ = nullptr;};
    inline string customerId() const { DARABONBA_PTR_GET_DEFAULT(customerId_, "") };
    inline GetCheckChannelResponseBodyAudit& setCustomerId(string customerId) { DARABONBA_PTR_SET_VALUE(customerId_, customerId) };


    // legalSwitch Field Functions 
    bool hasLegalSwitch() const { return this->legalSwitch_ != nullptr;};
    void deleteLegalSwitch() { this->legalSwitch_ = nullptr;};
    inline string legalSwitch() const { DARABONBA_PTR_GET_DEFAULT(legalSwitch_, "") };
    inline GetCheckChannelResponseBodyAudit& setLegalSwitch(string legalSwitch) { DARABONBA_PTR_SET_VALUE(legalSwitch_, legalSwitch) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetCheckChannelResponseBodyAudit& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> channel_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> customerId_ = nullptr;
    std::shared_ptr<string> legalSwitch_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
