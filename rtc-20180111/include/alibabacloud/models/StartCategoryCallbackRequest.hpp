// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCATEGORYCALLBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTCATEGORYCALLBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartCategoryCallbackRequestCallback.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartCategoryCallbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCategoryCallbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Callback, callback_);
    };
    friend void from_json(const Darabonba::Json& j, StartCategoryCallbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Callback, callback_);
    };
    StartCategoryCallbackRequest() = default ;
    StartCategoryCallbackRequest(const StartCategoryCallbackRequest &) = default ;
    StartCategoryCallbackRequest(StartCategoryCallbackRequest &&) = default ;
    StartCategoryCallbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCategoryCallbackRequest() = default ;
    StartCategoryCallbackRequest& operator=(const StartCategoryCallbackRequest &) = default ;
    StartCategoryCallbackRequest& operator=(StartCategoryCallbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->callback_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartCategoryCallbackRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // callback Field Functions 
    bool hasCallback() const { return this->callback_ != nullptr;};
    void deleteCallback() { this->callback_ = nullptr;};
    inline const StartCategoryCallbackRequestCallback & callback() const { DARABONBA_PTR_GET_CONST(callback_, StartCategoryCallbackRequestCallback) };
    inline StartCategoryCallbackRequestCallback callback() { DARABONBA_PTR_GET(callback_, StartCategoryCallbackRequestCallback) };
    inline StartCategoryCallbackRequest& setCallback(const StartCategoryCallbackRequestCallback & callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };
    inline StartCategoryCallbackRequest& setCallback(StartCategoryCallbackRequestCallback && callback) { DARABONBA_PTR_SET_RVALUE(callback_, callback) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<StartCategoryCallbackRequestCallback> callback_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
