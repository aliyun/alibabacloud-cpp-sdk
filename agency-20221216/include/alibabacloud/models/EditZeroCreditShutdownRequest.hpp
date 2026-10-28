// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITZEROCREDITSHUTDOWNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITZEROCREDITSHUTDOWNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class EditZeroCreditShutdownRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditZeroCreditShutdownRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ShutdownPolicy, shutdownPolicy_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, EditZeroCreditShutdownRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ShutdownPolicy, shutdownPolicy_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    EditZeroCreditShutdownRequest() = default ;
    EditZeroCreditShutdownRequest(const EditZeroCreditShutdownRequest &) = default ;
    EditZeroCreditShutdownRequest(EditZeroCreditShutdownRequest &&) = default ;
    EditZeroCreditShutdownRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditZeroCreditShutdownRequest() = default ;
    EditZeroCreditShutdownRequest& operator=(const EditZeroCreditShutdownRequest &) = default ;
    EditZeroCreditShutdownRequest& operator=(EditZeroCreditShutdownRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->shutdownPolicy_ == nullptr
        && this->uid_ == nullptr; };
    // shutdownPolicy Field Functions 
    bool hasShutdownPolicy() const { return this->shutdownPolicy_ != nullptr;};
    void deleteShutdownPolicy() { this->shutdownPolicy_ = nullptr;};
    inline string getShutdownPolicy() const { DARABONBA_PTR_GET_DEFAULT(shutdownPolicy_, "") };
    inline EditZeroCreditShutdownRequest& setShutdownPolicy(string shutdownPolicy) { DARABONBA_PTR_SET_VALUE(shutdownPolicy_, shutdownPolicy) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline int64_t getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
    inline EditZeroCreditShutdownRequest& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // ### **Shutdown policy**
    // For more information, refer to the official documentation: https://www.alibabacloud.com/help/zh/channel-platform/latest/shutdowndelayprivilege
    // 
    // - **immediatelyStop**——When the active credit of the distributor customer account is less than 0, the account enters the overdue payment state. New resources cannot be purchased. Pay-as-you-go instances are stopped and no longer incur charges. Upfront instances can be used until they expire. After the instances remain stopped for 15 days, pay-as-you-go instances are released. Because of billing delays, credits may continue to be deducted even after instances are successfully stopped.
    // - **delayStop**——The overdraft quota in the delayed shutdown policy is calculated by Alibaba Cloud based on the historical consumption of the account. The minimum overdraft quota is 600 USD, and instances can continue to run for approximately 15 days after the overdue payment occurs. The overdraft quota applies to pay-as-you-go products. After this policy is enabled, when the customer has an overdue payment (active credit < 0) and the overdue amount is within the overdraft quota, instance shutdown is not triggered. The overdraft quota is not the upper limit of the overdue amount. Because of billing delays, credits may continue to be deducted even after instances are successfully stopped. After the instances remain stopped for 15 days, pay-as-you-go instances are released. When the delayed shutdown quota <= remaining credit < 0, you can manually trigger an immediate shutdown.
    // - **noStop**——If you select this option, instances are not stopped when the customer has an overdue payment. When the customer has an overdue payment (remaining credit < 0), instance shutdown is not triggered. There is no upper limit on the overdue amount. You must perform a manual operation of "Immediate Shutdown" in ACPN to change the instance status. Use this option with caution.
    shared_ptr<string> shutdownPolicy_ {};
    // The UID of the distributor customer whose shutdown policy you want to modify.
    shared_ptr<int64_t> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
