// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHMESSAGETOANDROIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHMESSAGETOANDROIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushMessageToAndroidRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushMessageToAndroidRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(JobKey, jobKey_);
      DARABONBA_PTR_TO_JSON(StoreOffline, storeOffline_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, PushMessageToAndroidRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(JobKey, jobKey_);
      DARABONBA_PTR_FROM_JSON(StoreOffline, storeOffline_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    PushMessageToAndroidRequest() = default ;
    PushMessageToAndroidRequest(const PushMessageToAndroidRequest &) = default ;
    PushMessageToAndroidRequest(PushMessageToAndroidRequest &&) = default ;
    PushMessageToAndroidRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushMessageToAndroidRequest() = default ;
    PushMessageToAndroidRequest& operator=(const PushMessageToAndroidRequest &) = default ;
    PushMessageToAndroidRequest& operator=(PushMessageToAndroidRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && this->body_ == nullptr && this->jobKey_ == nullptr && this->storeOffline_ == nullptr && this->target_ == nullptr && this->targetValue_ == nullptr
        && this->title_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline PushMessageToAndroidRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline PushMessageToAndroidRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // jobKey Field Functions 
    bool hasJobKey() const { return this->jobKey_ != nullptr;};
    void deleteJobKey() { this->jobKey_ = nullptr;};
    inline string getJobKey() const { DARABONBA_PTR_GET_DEFAULT(jobKey_, "") };
    inline PushMessageToAndroidRequest& setJobKey(string jobKey) { DARABONBA_PTR_SET_VALUE(jobKey_, jobKey) };


    // storeOffline Field Functions 
    bool hasStoreOffline() const { return this->storeOffline_ != nullptr;};
    void deleteStoreOffline() { this->storeOffline_ = nullptr;};
    inline bool getStoreOffline() const { DARABONBA_PTR_GET_DEFAULT(storeOffline_, false) };
    inline PushMessageToAndroidRequest& setStoreOffline(bool storeOffline) { DARABONBA_PTR_SET_VALUE(storeOffline_, storeOffline) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline PushMessageToAndroidRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline string getTargetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, "") };
    inline PushMessageToAndroidRequest& setTargetValue(string targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline PushMessageToAndroidRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The AppKey.
    // 
    // This parameter is required.
    shared_ptr<int64_t> appKey_ {};
    // The content of the message.
    // 
    // This parameter is required.
    shared_ptr<string> body_ {};
    // A custom ID for the push task. If \\`JobKey\\` is not empty, this field is included in the receipt logs. For more information, see [Receipt logs](https://help.aliyun.com/document_detail/434651.html).
    shared_ptr<string> jobKey_ {};
    // Specifies whether to store the message offline. The default value is false.
    // 
    // If you store the message and the user is offline, the message is sent again when the user comes online within the time-to-live (TTL) period. The default TTL is 72 hours.
    shared_ptr<bool> storeOffline_ {};
    // The push target. Valid values:
    // 
    // - **DEVICE**: Pushes messages to devices.
    // 
    // - **ACCOUNT**: Pushes messages to accounts.
    // 
    // - **ALIAS**: Pushes messages to aliases.
    // 
    // - **TAG**: Pushes messages to tags.
    // 
    // - **ALL**: Pushes messages to all devices.
    // 
    // This parameter is required.
    shared_ptr<string> target_ {};
    // Set this parameter based on the value of \\`Target\\`. Use commas (,) to separate multiple values. If you exceed the limit, send the pushes in batches.
    // 
    // - If \\`Target\\` is set to \\`DEVICE\\`, specify device IDs. Example: `deviceid111,deviceid1111`. You can specify up to 1,000 device IDs.
    // 
    // - If \\`Target\\` is set to \\`ACCOUNT\\`, specify account IDs. Example: `account111,account222`. You can specify up to 1,000 account IDs.
    // 
    // - If \\`Target\\` is set to \\`ALIAS\\`, specify aliases. Example: `alias111,alias222`. You can specify up to 1,000 aliases.
    // 
    // - If \\`Target\\` is set to \\`TAG\\`, you can specify one or more tags. For more information about the format, see [Tag format](https://help.aliyun.com/document_detail/434847.html).
    // 
    // - If \\`Target\\` is set to \\`ALL\\`, set the value to **all**.
    // 
    // This parameter is required.
    shared_ptr<string> targetValue_ {};
    // The title of the message.
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
