// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SSERVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETK8SSERVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sServicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sServicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sServicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
    };
    GetK8sServicesRequest() = default ;
    GetK8sServicesRequest(const GetK8sServicesRequest &) = default ;
    GetK8sServicesRequest(GetK8sServicesRequest &&) = default ;
    GetK8sServicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sServicesRequest() = default ;
    GetK8sServicesRequest& operator=(const GetK8sServicesRequest &) = default ;
    GetK8sServicesRequest& operator=(GetK8sServicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetK8sServicesRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
