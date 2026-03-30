// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXTERNALAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEXTERNALAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetExternalApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExternalApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
    };
    friend void from_json(const Darabonba::Json& j, GetExternalApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
    };
    GetExternalApplicationRequest() = default ;
    GetExternalApplicationRequest(const GetExternalApplicationRequest &) = default ;
    GetExternalApplicationRequest(GetExternalApplicationRequest &&) = default ;
    GetExternalApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExternalApplicationRequest() = default ;
    GetExternalApplicationRequest& operator=(const GetExternalApplicationRequest &) = default ;
    GetExternalApplicationRequest& operator=(GetExternalApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetExternalApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
