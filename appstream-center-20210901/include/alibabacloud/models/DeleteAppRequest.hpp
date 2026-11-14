// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DeleteAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppVersionId, appVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppVersionId, appVersionId_);
    };
    DeleteAppRequest() = default ;
    DeleteAppRequest(const DeleteAppRequest &) = default ;
    DeleteAppRequest(DeleteAppRequest &&) = default ;
    DeleteAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppRequest() = default ;
    DeleteAppRequest& operator=(const DeleteAppRequest &) = default ;
    DeleteAppRequest& operator=(DeleteAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appVersionId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteAppRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appVersionId Field Functions 
    bool hasAppVersionId() const { return this->appVersionId_ != nullptr;};
    void deleteAppVersionId() { this->appVersionId_ = nullptr;};
    inline string getAppVersionId() const { DARABONBA_PTR_GET_DEFAULT(appVersionId_, "") };
    inline DeleteAppRequest& setAppVersionId(string appVersionId) { DARABONBA_PTR_SET_VALUE(appVersionId_, appVersionId) };


  protected:
    // The ID of the application to be deleted. **This parameter is required**, and the application must belong to the current account. You must disassociate the image references from the target application or version before deletion.
    shared_ptr<string> appId_ {};
    // The ID of the application version to be deleted. If specified, only the adapters corresponding to this application version are deleted. If omitted, the entire application and its adapters are deleted. If the application has no other adapters after the version is deleted, the application record is also deleted.
    shared_ptr<string> appVersionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
