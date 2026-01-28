// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class UpdateAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(EnableLog, enableLog_);
      DARABONBA_PTR_TO_JSON(LabelRouteStrategy, labelRouteStrategy_);
      DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(EnableLog, enableLog_);
      DARABONBA_PTR_FROM_JSON(LabelRouteStrategy, labelRouteStrategy_);
      DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    UpdateAppRequest() = default ;
    UpdateAppRequest(const UpdateAppRequest &) = default ;
    UpdateAppRequest(UpdateAppRequest &&) = default ;
    UpdateAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAppRequest() = default ;
    UpdateAppRequest& operator=(const UpdateAppRequest &) = default ;
    UpdateAppRequest& operator=(UpdateAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && this->appName_ == nullptr && this->clusterId_ == nullptr && this->enableLog_ == nullptr && this->labelRouteStrategy_ == nullptr && this->maxConcurrency_ == nullptr
        && this->title_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string getAccessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline UpdateAppRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateAppRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateAppRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // enableLog Field Functions 
    bool hasEnableLog() const { return this->enableLog_ != nullptr;};
    void deleteEnableLog() { this->enableLog_ = nullptr;};
    inline bool getEnableLog() const { DARABONBA_PTR_GET_DEFAULT(enableLog_, false) };
    inline UpdateAppRequest& setEnableLog(bool enableLog) { DARABONBA_PTR_SET_VALUE(enableLog_, enableLog) };


    // labelRouteStrategy Field Functions 
    bool hasLabelRouteStrategy() const { return this->labelRouteStrategy_ != nullptr;};
    void deleteLabelRouteStrategy() { this->labelRouteStrategy_ = nullptr;};
    inline int32_t getLabelRouteStrategy() const { DARABONBA_PTR_GET_DEFAULT(labelRouteStrategy_, 0) };
    inline UpdateAppRequest& setLabelRouteStrategy(int32_t labelRouteStrategy) { DARABONBA_PTR_SET_VALUE(labelRouteStrategy_, labelRouteStrategy) };


    // maxConcurrency Field Functions 
    bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
    void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
    inline int32_t getMaxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0) };
    inline UpdateAppRequest& setMaxConcurrency(int32_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateAppRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<string> accessToken_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    shared_ptr<bool> enableLog_ {};
    shared_ptr<int32_t> labelRouteStrategy_ {};
    shared_ptr<int32_t> maxConcurrency_ {};
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
