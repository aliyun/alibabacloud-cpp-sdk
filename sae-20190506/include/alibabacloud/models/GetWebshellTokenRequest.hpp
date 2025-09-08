// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWEBSHELLTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWEBSHELLTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class GetWebshellTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWebshellTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
      DARABONBA_PTR_TO_JSON(PodName, podName_);
    };
    friend void from_json(const Darabonba::Json& j, GetWebshellTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
      DARABONBA_PTR_FROM_JSON(PodName, podName_);
    };
    GetWebshellTokenRequest() = default ;
    GetWebshellTokenRequest(const GetWebshellTokenRequest &) = default ;
    GetWebshellTokenRequest(GetWebshellTokenRequest &&) = default ;
    GetWebshellTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWebshellTokenRequest() = default ;
    GetWebshellTokenRequest& operator=(const GetWebshellTokenRequest &) = default ;
    GetWebshellTokenRequest& operator=(GetWebshellTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->containerName_ != nullptr && this->podName_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetWebshellTokenRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string containerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline GetWebshellTokenRequest& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // podName Field Functions 
    bool hasPodName() const { return this->podName_ != nullptr;};
    void deletePodName() { this->podName_ = nullptr;};
    inline string podName() const { DARABONBA_PTR_GET_DEFAULT(podName_, "") };
    inline GetWebshellTokenRequest& setPodName(string podName) { DARABONBA_PTR_SET_VALUE(podName_, podName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the container.
    // 
    // Note:
    // 
    // *   If this parameter is specified, Cloud Assistant runs the command in the specified container of the instance.
    // 
    // *   If this parameter is specified, the command can run only on Linux instances on which Cloud Assistant Agent 2.2.3.344 or later is installed.
    // 
    //     *   For information about how to query the version of Cloud Assistant Agent, see [Install Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html).
    //     *   For information about how to upgrade Cloud Assistant Agent, see [Upgrade or disable upgrades for Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html).
    // 
    // *   If this parameter is specified, the `Username` parameter that is specified in a request to call this operation and the `WorkingDir` parameter that is specified in a request to call the [CreateCommand](https://help.aliyun.com/document_detail/64844.html) operation do not take effect. You can run the command only in the default working directory of the container by using the default user of the container. For more information, see [Use Cloud Assistant to run commands in containers](https://help.aliyun.com/document_detail/456641.html).
    // 
    // *   If this parameter is specified, only shell scripts can be run in Linux containers. You cannot add a command in the format similar to `#!/usr/bin/python` at the beginning of a script to specify a script interpreter. For more information, see [Use Cloud Assistant to run commands in containers](https://help.aliyun.com/document_detail/456641.html).
    std::shared_ptr<string> containerName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> podName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
