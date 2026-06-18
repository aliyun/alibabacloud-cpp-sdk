// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUSPENDHOTLINESERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUSPENDHOTLINESERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class SuspendHotlineServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SuspendHotlineServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SuspendHotlineServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SuspendHotlineServiceRequest() = default ;
    SuspendHotlineServiceRequest(const SuspendHotlineServiceRequest &) = default ;
    SuspendHotlineServiceRequest(SuspendHotlineServiceRequest &&) = default ;
    SuspendHotlineServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SuspendHotlineServiceRequest() = default ;
    SuspendHotlineServiceRequest& operator=(const SuspendHotlineServiceRequest &) = default ;
    SuspendHotlineServiceRequest& operator=(SuspendHotlineServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->clientToken_ == nullptr && this->instanceId_ == nullptr && this->type_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline SuspendHotlineServiceRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SuspendHotlineServiceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SuspendHotlineServiceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline SuspendHotlineServiceRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Agent account name, which is the phone number or mailbox entered during account registration. It is unique within the instance.
    // 
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // Unique ID of the customer request. Used for idempotency validation. You can generate it using UUID.
    shared_ptr<string> clientToken_ {};
    // Artificial Intelligence Cloud Call Service (AICCS) instance ID.  
    // You can obtain it from **Instance Management** in the left-side navigation pane of the [Artificial Intelligence Cloud Call Service console](https://aiccs.console.aliyun.com/overview).
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Reason for the short break. Valid values:
    // - **1**: Short break (default value).
    // - **2**: Meal break.
    // - **3**: Meeting.
    // - **4**: Coaching.
    // - **5**: Training.
    shared_ptr<int32_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
