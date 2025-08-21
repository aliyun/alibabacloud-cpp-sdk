// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHNOTICETOANDROIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHNOTICETOANDROIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushNoticeToAndroidRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushNoticeToAndroidRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(ExtParameters, extParameters_);
      DARABONBA_PTR_TO_JSON(JobKey, jobKey_);
      DARABONBA_PTR_TO_JSON(StoreOffline, storeOffline_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, PushNoticeToAndroidRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(ExtParameters, extParameters_);
      DARABONBA_PTR_FROM_JSON(JobKey, jobKey_);
      DARABONBA_PTR_FROM_JSON(StoreOffline, storeOffline_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    PushNoticeToAndroidRequest() = default ;
    PushNoticeToAndroidRequest(const PushNoticeToAndroidRequest &) = default ;
    PushNoticeToAndroidRequest(PushNoticeToAndroidRequest &&) = default ;
    PushNoticeToAndroidRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushNoticeToAndroidRequest() = default ;
    PushNoticeToAndroidRequest& operator=(const PushNoticeToAndroidRequest &) = default ;
    PushNoticeToAndroidRequest& operator=(PushNoticeToAndroidRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appKey_ != nullptr
        && this->body_ != nullptr && this->extParameters_ != nullptr && this->jobKey_ != nullptr && this->storeOffline_ != nullptr && this->target_ != nullptr
        && this->targetValue_ != nullptr && this->title_ != nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline PushNoticeToAndroidRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline PushNoticeToAndroidRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // extParameters Field Functions 
    bool hasExtParameters() const { return this->extParameters_ != nullptr;};
    void deleteExtParameters() { this->extParameters_ = nullptr;};
    inline string extParameters() const { DARABONBA_PTR_GET_DEFAULT(extParameters_, "") };
    inline PushNoticeToAndroidRequest& setExtParameters(string extParameters) { DARABONBA_PTR_SET_VALUE(extParameters_, extParameters) };


    // jobKey Field Functions 
    bool hasJobKey() const { return this->jobKey_ != nullptr;};
    void deleteJobKey() { this->jobKey_ = nullptr;};
    inline string jobKey() const { DARABONBA_PTR_GET_DEFAULT(jobKey_, "") };
    inline PushNoticeToAndroidRequest& setJobKey(string jobKey) { DARABONBA_PTR_SET_VALUE(jobKey_, jobKey) };


    // storeOffline Field Functions 
    bool hasStoreOffline() const { return this->storeOffline_ != nullptr;};
    void deleteStoreOffline() { this->storeOffline_ = nullptr;};
    inline bool storeOffline() const { DARABONBA_PTR_GET_DEFAULT(storeOffline_, false) };
    inline PushNoticeToAndroidRequest& setStoreOffline(bool storeOffline) { DARABONBA_PTR_SET_VALUE(storeOffline_, storeOffline) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline PushNoticeToAndroidRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline string targetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, "") };
    inline PushNoticeToAndroidRequest& setTargetValue(string targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline PushNoticeToAndroidRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> appKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> body_ = nullptr;
    std::shared_ptr<string> extParameters_ = nullptr;
    std::shared_ptr<string> jobKey_ = nullptr;
    std::shared_ptr<bool> storeOffline_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> target_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetValue_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
