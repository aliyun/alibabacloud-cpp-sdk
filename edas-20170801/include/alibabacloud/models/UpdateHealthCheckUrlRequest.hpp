// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHEALTHCHECKURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHEALTHCHECKURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateHealthCheckUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHealthCheckUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(hcURL, hcURL_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHealthCheckUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(hcURL, hcURL_);
    };
    UpdateHealthCheckUrlRequest() = default ;
    UpdateHealthCheckUrlRequest(const UpdateHealthCheckUrlRequest &) = default ;
    UpdateHealthCheckUrlRequest(UpdateHealthCheckUrlRequest &&) = default ;
    UpdateHealthCheckUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHealthCheckUrlRequest() = default ;
    UpdateHealthCheckUrlRequest& operator=(const UpdateHealthCheckUrlRequest &) = default ;
    UpdateHealthCheckUrlRequest& operator=(UpdateHealthCheckUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->hcURL_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateHealthCheckUrlRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // hcURL Field Functions 
    bool hasHcURL() const { return this->hcURL_ != nullptr;};
    void deleteHcURL() { this->hcURL_ = nullptr;};
    inline string hcURL() const { DARABONBA_PTR_GET_DEFAULT(hcURL_, "") };
    inline UpdateHealthCheckUrlRequest& setHcURL(string hcURL) { DARABONBA_PTR_SET_VALUE(hcURL_, hcURL) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The health check URL of the application. The URL must start with `http://`, and can be up to 255 characters in length. Example: `http://127.0.0.1:8080/_ehc.html`. If this parameter is not specified, the health check URL of the application is not changed.
    std::shared_ptr<string> hcURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
