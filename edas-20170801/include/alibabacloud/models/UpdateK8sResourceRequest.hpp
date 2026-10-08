// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEK8SRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEK8SRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateK8sResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateK8sResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ResourceContent, resourceContent_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateK8sResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ResourceContent, resourceContent_);
    };
    UpdateK8sResourceRequest() = default ;
    UpdateK8sResourceRequest(const UpdateK8sResourceRequest &) = default ;
    UpdateK8sResourceRequest(UpdateK8sResourceRequest &&) = default ;
    UpdateK8sResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateK8sResourceRequest() = default ;
    UpdateK8sResourceRequest& operator=(const UpdateK8sResourceRequest &) = default ;
    UpdateK8sResourceRequest& operator=(UpdateK8sResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->namespace_ == nullptr && this->resourceContent_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateK8sResourceRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateK8sResourceRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // resourceContent Field Functions 
    bool hasResourceContent() const { return this->resourceContent_ != nullptr;};
    void deleteResourceContent() { this->resourceContent_ = nullptr;};
    inline string getResourceContent() const { DARABONBA_PTR_GET_DEFAULT(resourceContent_, "") };
    inline UpdateK8sResourceRequest& setResourceContent(string resourceContent) { DARABONBA_PTR_SET_VALUE(resourceContent_, resourceContent) };


  protected:
    // The ID of the cluster.
    shared_ptr<string> clusterId_ {};
    // The ID of the namespace to which the Kubernetes resource belongs.
    shared_ptr<string> namespace_ {};
    // The description of the resource in the YAML format.
    shared_ptr<string> resourceContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
