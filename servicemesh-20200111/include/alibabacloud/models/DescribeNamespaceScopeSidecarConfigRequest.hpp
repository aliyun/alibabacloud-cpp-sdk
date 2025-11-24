// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACESCOPESIDECARCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACESCOPESIDECARCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeNamespaceScopeSidecarConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespaceScopeSidecarConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespaceScopeSidecarConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    DescribeNamespaceScopeSidecarConfigRequest() = default ;
    DescribeNamespaceScopeSidecarConfigRequest(const DescribeNamespaceScopeSidecarConfigRequest &) = default ;
    DescribeNamespaceScopeSidecarConfigRequest(DescribeNamespaceScopeSidecarConfigRequest &&) = default ;
    DescribeNamespaceScopeSidecarConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespaceScopeSidecarConfigRequest() = default ;
    DescribeNamespaceScopeSidecarConfigRequest& operator=(const DescribeNamespaceScopeSidecarConfigRequest &) = default ;
    DescribeNamespaceScopeSidecarConfigRequest& operator=(DescribeNamespaceScopeSidecarConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespace_ == nullptr
        && return this->serviceMeshId_ == nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeNamespaceScopeSidecarConfigRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline DescribeNamespaceScopeSidecarConfigRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The ID of the ASM instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
