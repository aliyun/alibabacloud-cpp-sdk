// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGUESTCLUSTERNAMESPACESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGUESTCLUSTERNAMESPACESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeGuestClusterNamespacesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGuestClusterNamespacesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GuestClusterID, guestClusterID_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_TO_JSON(ShowNsLabels, showNsLabels_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGuestClusterNamespacesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GuestClusterID, guestClusterID_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_FROM_JSON(ShowNsLabels, showNsLabels_);
    };
    DescribeGuestClusterNamespacesRequest() = default ;
    DescribeGuestClusterNamespacesRequest(const DescribeGuestClusterNamespacesRequest &) = default ;
    DescribeGuestClusterNamespacesRequest(DescribeGuestClusterNamespacesRequest &&) = default ;
    DescribeGuestClusterNamespacesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGuestClusterNamespacesRequest() = default ;
    DescribeGuestClusterNamespacesRequest& operator=(const DescribeGuestClusterNamespacesRequest &) = default ;
    DescribeGuestClusterNamespacesRequest& operator=(DescribeGuestClusterNamespacesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->guestClusterID_ == nullptr
        && return this->serviceMeshId_ == nullptr && return this->showNsLabels_ == nullptr; };
    // guestClusterID Field Functions 
    bool hasGuestClusterID() const { return this->guestClusterID_ != nullptr;};
    void deleteGuestClusterID() { this->guestClusterID_ = nullptr;};
    inline string guestClusterID() const { DARABONBA_PTR_GET_DEFAULT(guestClusterID_, "") };
    inline DescribeGuestClusterNamespacesRequest& setGuestClusterID(string guestClusterID) { DARABONBA_PTR_SET_VALUE(guestClusterID_, guestClusterID) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline DescribeGuestClusterNamespacesRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


    // showNsLabels Field Functions 
    bool hasShowNsLabels() const { return this->showNsLabels_ != nullptr;};
    void deleteShowNsLabels() { this->showNsLabels_ = nullptr;};
    inline bool showNsLabels() const { DARABONBA_PTR_GET_DEFAULT(showNsLabels_, false) };
    inline DescribeGuestClusterNamespacesRequest& setShowNsLabels(bool showNsLabels) { DARABONBA_PTR_SET_VALUE(showNsLabels_, showNsLabels) };


  protected:
    // The ID of the Kubernetes cluster that is added to the ASM instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> guestClusterID_ = nullptr;
    // The ASM instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
    // Specifies whether to return the labels of the namespaces.
    std::shared_ptr<bool> showNsLabels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
