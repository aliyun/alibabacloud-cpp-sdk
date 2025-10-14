// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGECONTAINERDEPLOYREGIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEDGECONTAINERDEPLOYREGIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetEdgeContainerDeployRegionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeContainerDeployRegionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeContainerDeployRegionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
    };
    GetEdgeContainerDeployRegionsRequest() = default ;
    GetEdgeContainerDeployRegionsRequest(const GetEdgeContainerDeployRegionsRequest &) = default ;
    GetEdgeContainerDeployRegionsRequest(GetEdgeContainerDeployRegionsRequest &&) = default ;
    GetEdgeContainerDeployRegionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeContainerDeployRegionsRequest() = default ;
    GetEdgeContainerDeployRegionsRequest& operator=(const GetEdgeContainerDeployRegionsRequest &) = default ;
    GetEdgeContainerDeployRegionsRequest& operator=(GetEdgeContainerDeployRegionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetEdgeContainerDeployRegionsRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


  protected:
    // The application ID, which can be obtained by calling the [ListEdgeContainerApps](~~ListEdgeContainerApps~~) operation.
    std::shared_ptr<string> appId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
