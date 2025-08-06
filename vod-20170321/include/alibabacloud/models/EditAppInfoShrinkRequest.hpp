// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITAPPINFOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITAPPINFOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class EditAppInfoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditAppInfoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppItemId, appItemId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(Platforms, platformsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, EditAppInfoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppItemId, appItemId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(Platforms, platformsShrink_);
    };
    EditAppInfoShrinkRequest() = default ;
    EditAppInfoShrinkRequest(const EditAppInfoShrinkRequest &) = default ;
    EditAppInfoShrinkRequest(EditAppInfoShrinkRequest &&) = default ;
    EditAppInfoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditAppInfoShrinkRequest() = default ;
    EditAppInfoShrinkRequest& operator=(const EditAppInfoShrinkRequest &) = default ;
    EditAppInfoShrinkRequest& operator=(EditAppInfoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appItemId_ != nullptr
        && this->appName_ != nullptr && this->appType_ != nullptr && this->platformsShrink_ != nullptr; };
    // appItemId Field Functions 
    bool hasAppItemId() const { return this->appItemId_ != nullptr;};
    void deleteAppItemId() { this->appItemId_ = nullptr;};
    inline string appItemId() const { DARABONBA_PTR_GET_DEFAULT(appItemId_, "") };
    inline EditAppInfoShrinkRequest& setAppItemId(string appItemId) { DARABONBA_PTR_SET_VALUE(appItemId_, appItemId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline EditAppInfoShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline int32_t appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, 0) };
    inline EditAppInfoShrinkRequest& setAppType(int32_t appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // platformsShrink Field Functions 
    bool hasPlatformsShrink() const { return this->platformsShrink_ != nullptr;};
    void deletePlatformsShrink() { this->platformsShrink_ = nullptr;};
    inline string platformsShrink() const { DARABONBA_PTR_GET_DEFAULT(platformsShrink_, "") };
    inline EditAppInfoShrinkRequest& setPlatformsShrink(string platformsShrink) { DARABONBA_PTR_SET_VALUE(platformsShrink_, platformsShrink) };


  protected:
    std::shared_ptr<string> appItemId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<int32_t> appType_ = nullptr;
    std::shared_ptr<string> platformsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
