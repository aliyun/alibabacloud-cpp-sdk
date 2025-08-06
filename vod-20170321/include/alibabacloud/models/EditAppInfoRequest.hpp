// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITAPPINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITAPPINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EditAppInfoRequestPlatforms.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class EditAppInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditAppInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppItemId, appItemId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(Platforms, platforms_);
    };
    friend void from_json(const Darabonba::Json& j, EditAppInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppItemId, appItemId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(Platforms, platforms_);
    };
    EditAppInfoRequest() = default ;
    EditAppInfoRequest(const EditAppInfoRequest &) = default ;
    EditAppInfoRequest(EditAppInfoRequest &&) = default ;
    EditAppInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditAppInfoRequest() = default ;
    EditAppInfoRequest& operator=(const EditAppInfoRequest &) = default ;
    EditAppInfoRequest& operator=(EditAppInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appItemId_ != nullptr
        && this->appName_ != nullptr && this->appType_ != nullptr && this->platforms_ != nullptr; };
    // appItemId Field Functions 
    bool hasAppItemId() const { return this->appItemId_ != nullptr;};
    void deleteAppItemId() { this->appItemId_ = nullptr;};
    inline string appItemId() const { DARABONBA_PTR_GET_DEFAULT(appItemId_, "") };
    inline EditAppInfoRequest& setAppItemId(string appItemId) { DARABONBA_PTR_SET_VALUE(appItemId_, appItemId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline EditAppInfoRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline int32_t appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, 0) };
    inline EditAppInfoRequest& setAppType(int32_t appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // platforms Field Functions 
    bool hasPlatforms() const { return this->platforms_ != nullptr;};
    void deletePlatforms() { this->platforms_ = nullptr;};
    inline const vector<EditAppInfoRequestPlatforms> & platforms() const { DARABONBA_PTR_GET_CONST(platforms_, vector<EditAppInfoRequestPlatforms>) };
    inline vector<EditAppInfoRequestPlatforms> platforms() { DARABONBA_PTR_GET(platforms_, vector<EditAppInfoRequestPlatforms>) };
    inline EditAppInfoRequest& setPlatforms(const vector<EditAppInfoRequestPlatforms> & platforms) { DARABONBA_PTR_SET_VALUE(platforms_, platforms) };
    inline EditAppInfoRequest& setPlatforms(vector<EditAppInfoRequestPlatforms> && platforms) { DARABONBA_PTR_SET_RVALUE(platforms_, platforms) };


  protected:
    std::shared_ptr<string> appItemId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<int32_t> appType_ = nullptr;
    std::shared_ptr<vector<EditAppInfoRequestPlatforms>> platforms_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
