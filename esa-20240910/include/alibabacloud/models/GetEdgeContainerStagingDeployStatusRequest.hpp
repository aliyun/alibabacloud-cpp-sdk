// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERSTAGINGDEPLOYSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERSTAGINGDEPLOYSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetEdgeContainerStagingDeployStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerStagingDeployStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerStagingDeployStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
    };
    GetEdgeContainerStagingDeployStatusRequest() = default ;
    GetEdgeContainerStagingDeployStatusRequest(const GetEdgeContainerStagingDeployStatusRequest &) = default ;
    GetEdgeContainerStagingDeployStatusRequest(GetEdgeContainerStagingDeployStatusRequest &&) = default ;
    GetEdgeContainerStagingDeployStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerStagingDeployStatusRequest() = default ;
    GetEdgeContainerStagingDeployStatusRequest& operator=(const GetEdgeContainerStagingDeployStatusRequest &) = default ;
    GetEdgeContainerStagingDeployStatusRequest& operator=(GetEdgeContainerStagingDeployStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetEdgeContainerStagingDeployStatusRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


  protected:
    // The application ID, which can be obtained by calling the [ListEdgeContainerApps](~~ListEdgeContainerApps~~) operation.
    shared_ptr<string> appId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
