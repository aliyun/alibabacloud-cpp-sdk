// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERTK8SRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONVERTK8SRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ConvertK8sResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConvertK8sResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ConvertK8sResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ConvertK8sResourceRequest() = default ;
    ConvertK8sResourceRequest(const ConvertK8sResourceRequest &) = default ;
    ConvertK8sResourceRequest(ConvertK8sResourceRequest &&) = default ;
    ConvertK8sResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConvertK8sResourceRequest() = default ;
    ConvertK8sResourceRequest& operator=(const ConvertK8sResourceRequest &) = default ;
    ConvertK8sResourceRequest& operator=(ConvertK8sResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->namespace_ == nullptr && this->resourceName_ == nullptr && this->resourceType_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ConvertK8sResourceRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ConvertK8sResourceRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ConvertK8sResourceRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ConvertK8sResourceRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The ID of the cluster. For more information, see [ListCluster](https://help.aliyun.com/document_detail/154995.html).
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The namespace.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // The name of the resource.
    // 
    // This parameter is required.
    shared_ptr<string> resourceName_ {};
    // The resource type. Only deployment is supported.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
