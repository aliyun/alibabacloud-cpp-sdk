// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ModifyAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
    };
    ModifyAppRequest() = default ;
    ModifyAppRequest(const ModifyAppRequest &) = default ;
    ModifyAppRequest(ModifyAppRequest &&) = default ;
    ModifyAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppRequest() = default ;
    ModifyAppRequest& operator=(const ModifyAppRequest &) = default ;
    ModifyAppRequest& operator=(ModifyAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->description_ != nullptr && this->iconUrl_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int32_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
    inline ModifyAppRequest& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ModifyAppRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyAppRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // iconUrl Field Functions 
    bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
    void deleteIconUrl() { this->iconUrl_ = nullptr;};
    inline string iconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
    inline ModifyAppRequest& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


  protected:
    // The ID of the application.
    std::shared_ptr<int32_t> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // The URL of the icon.
    std::shared_ptr<string> iconUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
