// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGUESTCLUSTERPODSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGUESTCLUSTERPODSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeGuestClusterPodsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGuestClusterPodsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GuestClusterID, guestClusterID_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGuestClusterPodsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GuestClusterID, guestClusterID_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    DescribeGuestClusterPodsRequest() = default ;
    DescribeGuestClusterPodsRequest(const DescribeGuestClusterPodsRequest &) = default ;
    DescribeGuestClusterPodsRequest(DescribeGuestClusterPodsRequest &&) = default ;
    DescribeGuestClusterPodsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGuestClusterPodsRequest() = default ;
    DescribeGuestClusterPodsRequest& operator=(const DescribeGuestClusterPodsRequest &) = default ;
    DescribeGuestClusterPodsRequest& operator=(DescribeGuestClusterPodsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->guestClusterID_ == nullptr
        && return this->namespace_ == nullptr && return this->serviceMeshId_ == nullptr; };
    // guestClusterID Field Functions 
    bool hasGuestClusterID() const { return this->guestClusterID_ != nullptr;};
    void deleteGuestClusterID() { this->guestClusterID_ = nullptr;};
    inline string guestClusterID() const { DARABONBA_PTR_GET_DEFAULT(guestClusterID_, "") };
    inline DescribeGuestClusterPodsRequest& setGuestClusterID(string guestClusterID) { DARABONBA_PTR_SET_VALUE(guestClusterID_, guestClusterID) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeGuestClusterPodsRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline DescribeGuestClusterPodsRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The ID of the Kubernetes cluster that is added to the ASM instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> guestClusterID_ = nullptr;
    // The namespace.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The ASM instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
