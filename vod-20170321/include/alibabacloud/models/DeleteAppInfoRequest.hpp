// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DeleteAppInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
    };
    DeleteAppInfoRequest() = default ;
    DeleteAppInfoRequest(const DeleteAppInfoRequest &) = default ;
    DeleteAppInfoRequest(DeleteAppInfoRequest &&) = default ;
    DeleteAppInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppInfoRequest() = default ;
    DeleteAppInfoRequest& operator=(const DeleteAppInfoRequest &) = default ;
    DeleteAppInfoRequest& operator=(DeleteAppInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteAppInfoRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


  protected:
    // The ID of the application. Default value: **app-1000000**. For more information, see [Overview](https://help.aliyun.com/document_detail/113600.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
