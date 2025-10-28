// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONBASEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONBASEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateApplicationBaseInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationBaseInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationBaseInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
    };
    UpdateApplicationBaseInfoRequest() = default ;
    UpdateApplicationBaseInfoRequest(const UpdateApplicationBaseInfoRequest &) = default ;
    UpdateApplicationBaseInfoRequest(UpdateApplicationBaseInfoRequest &&) = default ;
    UpdateApplicationBaseInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationBaseInfoRequest() = default ;
    UpdateApplicationBaseInfoRequest& operator=(const UpdateApplicationBaseInfoRequest &) = default ;
    UpdateApplicationBaseInfoRequest& operator=(UpdateApplicationBaseInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->desc_ == nullptr && return this->owner_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateApplicationBaseInfoRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateApplicationBaseInfoRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline UpdateApplicationBaseInfoRequest& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateApplicationBaseInfoRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application. The name must start with a letter, and can contain letters, digits, underscores (_), and hyphens (-). The name can be up to 36 characters in length.
    std::shared_ptr<string> appName_ = nullptr;
    // The description of the application. The description can be up to 256 characters in length.
    std::shared_ptr<string> desc_ = nullptr;
    // The owner of the application. The value can be up to 127 characters in length.
    std::shared_ptr<string> owner_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
