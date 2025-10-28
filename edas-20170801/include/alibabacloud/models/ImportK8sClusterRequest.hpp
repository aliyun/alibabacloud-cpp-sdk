// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTK8SCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTK8SCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ImportK8sClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportK8sClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(EnableAsm, enableAsm_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportK8sClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(EnableAsm, enableAsm_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    ImportK8sClusterRequest() = default ;
    ImportK8sClusterRequest(const ImportK8sClusterRequest &) = default ;
    ImportK8sClusterRequest(ImportK8sClusterRequest &&) = default ;
    ImportK8sClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportK8sClusterRequest() = default ;
    ImportK8sClusterRequest& operator=(const ImportK8sClusterRequest &) = default ;
    ImportK8sClusterRequest& operator=(ImportK8sClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->enableAsm_ == nullptr && return this->mode_ == nullptr && return this->namespaceId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ImportK8sClusterRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // enableAsm Field Functions 
    bool hasEnableAsm() const { return this->enableAsm_ != nullptr;};
    void deleteEnableAsm() { this->enableAsm_ = nullptr;};
    inline bool enableAsm() const { DARABONBA_PTR_GET_DEFAULT(enableAsm_, false) };
    inline ImportK8sClusterRequest& setEnableAsm(bool enableAsm) { DARABONBA_PTR_SET_VALUE(enableAsm_, enableAsm) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline int32_t mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
    inline ImportK8sClusterRequest& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ImportK8sClusterRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    // The ID of the ACK cluster or serverless Kubernetes cluster. You can obtain the cluster ID by calling the GetK8sCluster operation. For more information, see [GetK8sCluster](https://help.aliyun.com/document_detail/181437.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Specifies whether to enable the integration with Alibaba Cloud Service Mesh (ASM). Valid values:
    // 
    // *   true: Enables the integration with ASM.
    // *   false: Disables the integration with ASM.
    std::shared_ptr<bool> enableAsm_ = nullptr;
    // You can ignore this parameter.
    std::shared_ptr<int32_t> mode_ = nullptr;
    // The ID of the namespace. It is in the format of `Region ID:Identifier of the microservices namespace`. Example: `cn-hangzhou:doc`.
    std::shared_ptr<string> namespaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
