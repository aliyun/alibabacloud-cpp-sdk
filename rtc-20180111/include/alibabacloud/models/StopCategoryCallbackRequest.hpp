// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPCATEGORYCALLBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPCATEGORYCALLBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StopCategoryCallbackRequestCallback.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StopCategoryCallbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopCategoryCallbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Callback, callback_);
    };
    friend void from_json(const Darabonba::Json& j, StopCategoryCallbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Callback, callback_);
    };
    StopCategoryCallbackRequest() = default ;
    StopCategoryCallbackRequest(const StopCategoryCallbackRequest &) = default ;
    StopCategoryCallbackRequest(StopCategoryCallbackRequest &&) = default ;
    StopCategoryCallbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopCategoryCallbackRequest() = default ;
    StopCategoryCallbackRequest& operator=(const StopCategoryCallbackRequest &) = default ;
    StopCategoryCallbackRequest& operator=(StopCategoryCallbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->callback_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StopCategoryCallbackRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // callback Field Functions 
    bool hasCallback() const { return this->callback_ != nullptr;};
    void deleteCallback() { this->callback_ = nullptr;};
    inline const StopCategoryCallbackRequestCallback & callback() const { DARABONBA_PTR_GET_CONST(callback_, StopCategoryCallbackRequestCallback) };
    inline StopCategoryCallbackRequestCallback callback() { DARABONBA_PTR_GET(callback_, StopCategoryCallbackRequestCallback) };
    inline StopCategoryCallbackRequest& setCallback(const StopCategoryCallbackRequestCallback & callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };
    inline StopCategoryCallbackRequest& setCallback(StopCategoryCallbackRequestCallback && callback) { DARABONBA_PTR_SET_RVALUE(callback_, callback) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<StopCategoryCallbackRequestCallback> callback_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
