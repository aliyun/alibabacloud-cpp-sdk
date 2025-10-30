// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTXTELEPHONESRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTXTELEPHONESRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class ListXTelephonesResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListXTelephonesResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AuthMsg, authMsg_);
      DARABONBA_PTR_TO_JSON(BindTime, bindTime_);
      DARABONBA_PTR_TO_JSON(BuyTime, buyTime_);
      DARABONBA_PTR_TO_JSON(CustomerPoolKey, customerPoolKey_);
      DARABONBA_PTR_TO_JSON(CustomerPoolName, customerPoolName_);
      DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_TO_JSON(SmsStatus, smsStatus_);
      DARABONBA_PTR_TO_JSON(Telephone, telephone_);
      DARABONBA_PTR_TO_JSON(TelephoneStatus, telephoneStatus_);
      DARABONBA_PTR_TO_JSON(UnbindTime, unbindTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListXTelephonesResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthMsg, authMsg_);
      DARABONBA_PTR_FROM_JSON(BindTime, bindTime_);
      DARABONBA_PTR_FROM_JSON(BuyTime, buyTime_);
      DARABONBA_PTR_FROM_JSON(CustomerPoolKey, customerPoolKey_);
      DARABONBA_PTR_FROM_JSON(CustomerPoolName, customerPoolName_);
      DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
      DARABONBA_PTR_FROM_JSON(SmsStatus, smsStatus_);
      DARABONBA_PTR_FROM_JSON(Telephone, telephone_);
      DARABONBA_PTR_FROM_JSON(TelephoneStatus, telephoneStatus_);
      DARABONBA_PTR_FROM_JSON(UnbindTime, unbindTime_);
    };
    ListXTelephonesResponseBodyDataList() = default ;
    ListXTelephonesResponseBodyDataList(const ListXTelephonesResponseBodyDataList &) = default ;
    ListXTelephonesResponseBodyDataList(ListXTelephonesResponseBodyDataList &&) = default ;
    ListXTelephonesResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListXTelephonesResponseBodyDataList() = default ;
    ListXTelephonesResponseBodyDataList& operator=(const ListXTelephonesResponseBodyDataList &) = default ;
    ListXTelephonesResponseBodyDataList& operator=(ListXTelephonesResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authMsg_ == nullptr
        && return this->bindTime_ == nullptr && return this->buyTime_ == nullptr && return this->customerPoolKey_ == nullptr && return this->customerPoolName_ == nullptr && return this->releaseTime_ == nullptr
        && return this->smsStatus_ == nullptr && return this->telephone_ == nullptr && return this->telephoneStatus_ == nullptr && return this->unbindTime_ == nullptr; };
    // authMsg Field Functions 
    bool hasAuthMsg() const { return this->authMsg_ != nullptr;};
    void deleteAuthMsg() { this->authMsg_ = nullptr;};
    inline string authMsg() const { DARABONBA_PTR_GET_DEFAULT(authMsg_, "") };
    inline ListXTelephonesResponseBodyDataList& setAuthMsg(string authMsg) { DARABONBA_PTR_SET_VALUE(authMsg_, authMsg) };


    // bindTime Field Functions 
    bool hasBindTime() const { return this->bindTime_ != nullptr;};
    void deleteBindTime() { this->bindTime_ = nullptr;};
    inline string bindTime() const { DARABONBA_PTR_GET_DEFAULT(bindTime_, "") };
    inline ListXTelephonesResponseBodyDataList& setBindTime(string bindTime) { DARABONBA_PTR_SET_VALUE(bindTime_, bindTime) };


    // buyTime Field Functions 
    bool hasBuyTime() const { return this->buyTime_ != nullptr;};
    void deleteBuyTime() { this->buyTime_ = nullptr;};
    inline string buyTime() const { DARABONBA_PTR_GET_DEFAULT(buyTime_, "") };
    inline ListXTelephonesResponseBodyDataList& setBuyTime(string buyTime) { DARABONBA_PTR_SET_VALUE(buyTime_, buyTime) };


    // customerPoolKey Field Functions 
    bool hasCustomerPoolKey() const { return this->customerPoolKey_ != nullptr;};
    void deleteCustomerPoolKey() { this->customerPoolKey_ = nullptr;};
    inline string customerPoolKey() const { DARABONBA_PTR_GET_DEFAULT(customerPoolKey_, "") };
    inline ListXTelephonesResponseBodyDataList& setCustomerPoolKey(string customerPoolKey) { DARABONBA_PTR_SET_VALUE(customerPoolKey_, customerPoolKey) };


    // customerPoolName Field Functions 
    bool hasCustomerPoolName() const { return this->customerPoolName_ != nullptr;};
    void deleteCustomerPoolName() { this->customerPoolName_ = nullptr;};
    inline string customerPoolName() const { DARABONBA_PTR_GET_DEFAULT(customerPoolName_, "") };
    inline ListXTelephonesResponseBodyDataList& setCustomerPoolName(string customerPoolName) { DARABONBA_PTR_SET_VALUE(customerPoolName_, customerPoolName) };


    // releaseTime Field Functions 
    bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
    void deleteReleaseTime() { this->releaseTime_ = nullptr;};
    inline string releaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
    inline ListXTelephonesResponseBodyDataList& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


    // smsStatus Field Functions 
    bool hasSmsStatus() const { return this->smsStatus_ != nullptr;};
    void deleteSmsStatus() { this->smsStatus_ = nullptr;};
    inline string smsStatus() const { DARABONBA_PTR_GET_DEFAULT(smsStatus_, "") };
    inline ListXTelephonesResponseBodyDataList& setSmsStatus(string smsStatus) { DARABONBA_PTR_SET_VALUE(smsStatus_, smsStatus) };


    // telephone Field Functions 
    bool hasTelephone() const { return this->telephone_ != nullptr;};
    void deleteTelephone() { this->telephone_ = nullptr;};
    inline string telephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
    inline ListXTelephonesResponseBodyDataList& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


    // telephoneStatus Field Functions 
    bool hasTelephoneStatus() const { return this->telephoneStatus_ != nullptr;};
    void deleteTelephoneStatus() { this->telephoneStatus_ = nullptr;};
    inline string telephoneStatus() const { DARABONBA_PTR_GET_DEFAULT(telephoneStatus_, "") };
    inline ListXTelephonesResponseBodyDataList& setTelephoneStatus(string telephoneStatus) { DARABONBA_PTR_SET_VALUE(telephoneStatus_, telephoneStatus) };


    // unbindTime Field Functions 
    bool hasUnbindTime() const { return this->unbindTime_ != nullptr;};
    void deleteUnbindTime() { this->unbindTime_ = nullptr;};
    inline string unbindTime() const { DARABONBA_PTR_GET_DEFAULT(unbindTime_, "") };
    inline ListXTelephonesResponseBodyDataList& setUnbindTime(string unbindTime) { DARABONBA_PTR_SET_VALUE(unbindTime_, unbindTime) };


  protected:
    // 绑定失败原因
    std::shared_ptr<string> authMsg_ = nullptr;
    // 绑定时间
    std::shared_ptr<string> bindTime_ = nullptr;
    // 购买时间
    std::shared_ptr<string> buyTime_ = nullptr;
    // 客户号码池key
    std::shared_ptr<string> customerPoolKey_ = nullptr;
    // 号码池名称
    std::shared_ptr<string> customerPoolName_ = nullptr;
    // 释放时间
    std::shared_ptr<string> releaseTime_ = nullptr;
    // 短信开通状态：0 未开通 1已开通
    std::shared_ptr<string> smsStatus_ = nullptr;
    // X号码
    std::shared_ptr<string> telephone_ = nullptr;
    // 号码状态：0 空闲中 1 调拨完成待购买 2购买完成待认证  3 实名认证中  4 实名认证成功  5 认证失败  6 解绑中 7 解绑失败 8已释放 99 超时释放
    std::shared_ptr<string> telephoneStatus_ = nullptr;
    // 解绑时间
    std::shared_ptr<string> unbindTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
