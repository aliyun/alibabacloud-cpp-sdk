// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DeleteAppCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
    };
    DeleteAppCodeRequest() = default ;
    DeleteAppCodeRequest(const DeleteAppCodeRequest &) = default ;
    DeleteAppCodeRequest(DeleteAppCodeRequest &&) = default ;
    DeleteAppCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppCodeRequest() = default ;
    DeleteAppCodeRequest& operator=(const DeleteAppCodeRequest &) = default ;
    DeleteAppCodeRequest& operator=(DeleteAppCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && return this->appId_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline DeleteAppCodeRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteAppCodeRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


  protected:
    // The application AppCode.
    // 
    // This parameter is required.
    std::shared_ptr<string> appCode_ = nullptr;
    // The application ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
