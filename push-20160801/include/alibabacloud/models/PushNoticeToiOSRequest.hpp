// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHNOTICETOIOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHNOTICETOIOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushNoticeToiOSRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushNoticeToiOSRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApnsEnv, apnsEnv_);
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(ExtParameters, extParameters_);
      DARABONBA_PTR_TO_JSON(JobKey, jobKey_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, PushNoticeToiOSRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApnsEnv, apnsEnv_);
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(ExtParameters, extParameters_);
      DARABONBA_PTR_FROM_JSON(JobKey, jobKey_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    PushNoticeToiOSRequest() = default ;
    PushNoticeToiOSRequest(const PushNoticeToiOSRequest &) = default ;
    PushNoticeToiOSRequest(PushNoticeToiOSRequest &&) = default ;
    PushNoticeToiOSRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushNoticeToiOSRequest() = default ;
    PushNoticeToiOSRequest& operator=(const PushNoticeToiOSRequest &) = default ;
    PushNoticeToiOSRequest& operator=(PushNoticeToiOSRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apnsEnv_ == nullptr
        && this->appKey_ == nullptr && this->body_ == nullptr && this->extParameters_ == nullptr && this->jobKey_ == nullptr && this->target_ == nullptr
        && this->targetValue_ == nullptr && this->title_ == nullptr; };
    // apnsEnv Field Functions 
    bool hasApnsEnv() const { return this->apnsEnv_ != nullptr;};
    void deleteApnsEnv() { this->apnsEnv_ = nullptr;};
    inline string getApnsEnv() const { DARABONBA_PTR_GET_DEFAULT(apnsEnv_, "") };
    inline PushNoticeToiOSRequest& setApnsEnv(string apnsEnv) { DARABONBA_PTR_SET_VALUE(apnsEnv_, apnsEnv) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline PushNoticeToiOSRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline PushNoticeToiOSRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // extParameters Field Functions 
    bool hasExtParameters() const { return this->extParameters_ != nullptr;};
    void deleteExtParameters() { this->extParameters_ = nullptr;};
    inline string getExtParameters() const { DARABONBA_PTR_GET_DEFAULT(extParameters_, "") };
    inline PushNoticeToiOSRequest& setExtParameters(string extParameters) { DARABONBA_PTR_SET_VALUE(extParameters_, extParameters) };


    // jobKey Field Functions 
    bool hasJobKey() const { return this->jobKey_ != nullptr;};
    void deleteJobKey() { this->jobKey_ = nullptr;};
    inline string getJobKey() const { DARABONBA_PTR_GET_DEFAULT(jobKey_, "") };
    inline PushNoticeToiOSRequest& setJobKey(string jobKey) { DARABONBA_PTR_SET_VALUE(jobKey_, jobKey) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline PushNoticeToiOSRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline string getTargetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, "") };
    inline PushNoticeToiOSRequest& setTargetValue(string targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline PushNoticeToiOSRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // iOS notifications use Apple’s APNs service. Specify the environment.
    // 
    // - DEV: Development environment.
    // 
    // - PRODUCT: Production environment.
    // 
    // This parameter is required.
    shared_ptr<string> apnsEnv_ {};
    // Your AppKey.
    // 
    // This parameter is required.
    shared_ptr<int64_t> appKey_ {};
    // The body text of the notification.
    // 
    // This parameter is required.
    shared_ptr<string> body_ {};
    // A custom key-value map for developer extensions.
    // 
    // > For iOS devices, pass this parameter as a JSON object. Otherwise, parsing fails.
    shared_ptr<string> extParameters_ {};
    // A custom ID for the push task. If you specify a JobKey, the delivery log includes this field. For more information, see [Delivery logs](https://help.aliyun.com/document_detail/434651.html).
    shared_ptr<string> jobKey_ {};
    // The target of the push. Valid values:
    // 
    // - **DEVICE**: Push to specific devices.
    // 
    // - **ACCOUNT**: Push to specific accounts.
    // 
    // - **ALIAS**: Push to users with specific aliases.
    // 
    // - **TAG**: Push to users with specific tags.
    // 
    // - **ALL**: Push to all devices.
    // 
    // This parameter is required.
    shared_ptr<string> target_ {};
    // Values depend on the Target value. Separate multiple values with commas. If you exceed the limit, send multiple requests.
    // 
    // - If Target=DEVICE, use values such as `deviceid111,deviceid1111`. Maximum: 1000.
    // 
    // - If Target=ACCOUNT, use values such as `account111,account222`. Maximum: 1000.
    // 
    // - If Target=ALIAS, use values such as `alias111,alias222`. Maximum: 1000.
    // 
    // - If Target=TAG, support single or multiple tags. For format details, see [Tag format](https://help.aliyun.com/document_detail/434847.html).
    // 
    // - If Target=ALL, set this to **ALL**.
    // 
    // This parameter is required.
    shared_ptr<string> targetValue_ {};
    // The title of the notification.
    // 
    // - iOS 10 and later: Displays as the notification title.
    // 
    // - iOS 8.2 through iOS 9.x: Replaces the app name in the notification.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
