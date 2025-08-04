// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCATEGORYCALLBACKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTCATEGORYCALLBACKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartCategoryCallbackShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCategoryCallbackShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Callback, callbackShrink_);
    };
    friend void from_json(const Darabonba::Json& j, StartCategoryCallbackShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Callback, callbackShrink_);
    };
    StartCategoryCallbackShrinkRequest() = default ;
    StartCategoryCallbackShrinkRequest(const StartCategoryCallbackShrinkRequest &) = default ;
    StartCategoryCallbackShrinkRequest(StartCategoryCallbackShrinkRequest &&) = default ;
    StartCategoryCallbackShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCategoryCallbackShrinkRequest() = default ;
    StartCategoryCallbackShrinkRequest& operator=(const StartCategoryCallbackShrinkRequest &) = default ;
    StartCategoryCallbackShrinkRequest& operator=(StartCategoryCallbackShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->callbackShrink_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartCategoryCallbackShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // callbackShrink Field Functions 
    bool hasCallbackShrink() const { return this->callbackShrink_ != nullptr;};
    void deleteCallbackShrink() { this->callbackShrink_ = nullptr;};
    inline string callbackShrink() const { DARABONBA_PTR_GET_DEFAULT(callbackShrink_, "") };
    inline StartCategoryCallbackShrinkRequest& setCallbackShrink(string callbackShrink) { DARABONBA_PTR_SET_VALUE(callbackShrink_, callbackShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> callbackShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
