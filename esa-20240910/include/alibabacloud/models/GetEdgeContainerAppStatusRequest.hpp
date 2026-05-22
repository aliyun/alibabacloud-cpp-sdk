// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERAPPSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetEdgeContainerAppStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerAppStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(PublishEnv, publishEnv_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerAppStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(PublishEnv, publishEnv_);
    };
    GetEdgeContainerAppStatusRequest() = default ;
    GetEdgeContainerAppStatusRequest(const GetEdgeContainerAppStatusRequest &) = default ;
    GetEdgeContainerAppStatusRequest(GetEdgeContainerAppStatusRequest &&) = default ;
    GetEdgeContainerAppStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerAppStatusRequest() = default ;
    GetEdgeContainerAppStatusRequest& operator=(const GetEdgeContainerAppStatusRequest &) = default ;
    GetEdgeContainerAppStatusRequest& operator=(GetEdgeContainerAppStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->publishEnv_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetEdgeContainerAppStatusRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // publishEnv Field Functions 
    bool hasPublishEnv() const { return this->publishEnv_ != nullptr;};
    void deletePublishEnv() { this->publishEnv_ = nullptr;};
    inline string getPublishEnv() const { DARABONBA_PTR_GET_DEFAULT(publishEnv_, "") };
    inline GetEdgeContainerAppStatusRequest& setPublishEnv(string publishEnv) { DARABONBA_PTR_SET_VALUE(publishEnv_, publishEnv) };


  protected:
    // The application ID, which can be obtained by calling the [ListEdgeContainerApps](~~ListEdgeContainerApps~~) operation.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The release environment. Valid values: prod and staging.
    shared_ptr<string> publishEnv_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
