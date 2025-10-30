// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECRETASRDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSECRETASRDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class GetSecretAsrDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecretAsrDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(CallTime, callTime_);
      DARABONBA_PTR_TO_JSON(PoolKey, poolKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecretAsrDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(CallTime, callTime_);
      DARABONBA_PTR_FROM_JSON(PoolKey, poolKey_);
    };
    GetSecretAsrDetailRequest() = default ;
    GetSecretAsrDetailRequest(const GetSecretAsrDetailRequest &) = default ;
    GetSecretAsrDetailRequest(GetSecretAsrDetailRequest &&) = default ;
    GetSecretAsrDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecretAsrDetailRequest() = default ;
    GetSecretAsrDetailRequest& operator=(const GetSecretAsrDetailRequest &) = default ;
    GetSecretAsrDetailRequest& operator=(GetSecretAsrDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callId_ == nullptr
        && return this->callTime_ == nullptr && return this->poolKey_ == nullptr; };
    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string callId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline GetSecretAsrDetailRequest& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // callTime Field Functions 
    bool hasCallTime() const { return this->callTime_ != nullptr;};
    void deleteCallTime() { this->callTime_ = nullptr;};
    inline string callTime() const { DARABONBA_PTR_GET_DEFAULT(callTime_, "") };
    inline GetSecretAsrDetailRequest& setCallTime(string callTime) { DARABONBA_PTR_SET_VALUE(callTime_, callTime) };


    // poolKey Field Functions 
    bool hasPoolKey() const { return this->poolKey_ != nullptr;};
    void deletePoolKey() { this->poolKey_ = nullptr;};
    inline string poolKey() const { DARABONBA_PTR_GET_DEFAULT(poolKey_, "") };
    inline GetSecretAsrDetailRequest& setPoolKey(string poolKey) { DARABONBA_PTR_SET_VALUE(poolKey_, poolKey) };


  protected:
    // The ID of the call record.
    // 
    // You can log on to the [Phone Number Protection console](https://dypls.console.aliyun.com/dypls.htm#/account) and view **Call Record ID** on the **Call Record Query** page.
    // 
    // This parameter is required.
    std::shared_ptr<string> callId_ = nullptr;
    // The call initiation time in the call record.
    // 
    // You can log on to the [Phone Number Protection console](https://dypls.console.aliyun.com/dypls.htm#/account). View **Call Initiated At** on the **Call Record Query** page, or view the call_time field in the Call Detail Record (CDR) receipt.
    // 
    // This parameter is required.
    std::shared_ptr<string> callTime_ = nullptr;
    // The key of the phone number pool.
    // 
    // You can log on to the [Phone Number Protection console](https://dypls.console.aliyun.com/dypls.htm#/account) and view the key of the phone number pool on the **Number Pool Management** page.
    // 
    // This parameter is required.
    std::shared_ptr<string> poolKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
