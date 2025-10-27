// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHMESSAGETOIOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHMESSAGETOIOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class PushMessageToiOSRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushMessageToiOSRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(JobKey, jobKey_);
      DARABONBA_PTR_TO_JSON(StoreOffline, storeOffline_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, PushMessageToiOSRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(JobKey, jobKey_);
      DARABONBA_PTR_FROM_JSON(StoreOffline, storeOffline_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    PushMessageToiOSRequest() = default ;
    PushMessageToiOSRequest(const PushMessageToiOSRequest &) = default ;
    PushMessageToiOSRequest(PushMessageToiOSRequest &&) = default ;
    PushMessageToiOSRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushMessageToiOSRequest() = default ;
    PushMessageToiOSRequest& operator=(const PushMessageToiOSRequest &) = default ;
    PushMessageToiOSRequest& operator=(PushMessageToiOSRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && return this->body_ == nullptr && return this->jobKey_ == nullptr && return this->storeOffline_ == nullptr && return this->target_ == nullptr && return this->targetValue_ == nullptr
        && return this->title_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline PushMessageToiOSRequest& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline PushMessageToiOSRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // jobKey Field Functions 
    bool hasJobKey() const { return this->jobKey_ != nullptr;};
    void deleteJobKey() { this->jobKey_ = nullptr;};
    inline string jobKey() const { DARABONBA_PTR_GET_DEFAULT(jobKey_, "") };
    inline PushMessageToiOSRequest& setJobKey(string jobKey) { DARABONBA_PTR_SET_VALUE(jobKey_, jobKey) };


    // storeOffline Field Functions 
    bool hasStoreOffline() const { return this->storeOffline_ != nullptr;};
    void deleteStoreOffline() { this->storeOffline_ = nullptr;};
    inline bool storeOffline() const { DARABONBA_PTR_GET_DEFAULT(storeOffline_, false) };
    inline PushMessageToiOSRequest& setStoreOffline(bool storeOffline) { DARABONBA_PTR_SET_VALUE(storeOffline_, storeOffline) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline PushMessageToiOSRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline string targetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, "") };
    inline PushMessageToiOSRequest& setTargetValue(string targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline PushMessageToiOSRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> appKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> body_ = nullptr;
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
