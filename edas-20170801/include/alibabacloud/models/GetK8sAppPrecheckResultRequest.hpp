// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SAPPPRECHECKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETK8SAPPPRECHECKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sAppPrecheckResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sAppPrecheckResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sAppPrecheckResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    GetK8sAppPrecheckResultRequest() = default ;
    GetK8sAppPrecheckResultRequest(const GetK8sAppPrecheckResultRequest &) = default ;
    GetK8sAppPrecheckResultRequest(GetK8sAppPrecheckResultRequest &&) = default ;
    GetK8sAppPrecheckResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sAppPrecheckResultRequest() = default ;
    GetK8sAppPrecheckResultRequest& operator=(const GetK8sAppPrecheckResultRequest &) = default ;
    GetK8sAppPrecheckResultRequest& operator=(GetK8sAppPrecheckResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->clusterId_ == nullptr && return this->namespace_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetK8sAppPrecheckResultRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetK8sAppPrecheckResultRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetK8sAppPrecheckResultRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The name of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // The ID of the cluster in Enterprise Distributed Application Service (EDAS).
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The namespace of the Kubernetes cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
