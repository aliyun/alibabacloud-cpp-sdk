// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEKUBECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKEKUBECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class RevokeKubeconfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeKubeconfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeKubeconfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    RevokeKubeconfigRequest() = default ;
    RevokeKubeconfigRequest(const RevokeKubeconfigRequest &) = default ;
    RevokeKubeconfigRequest(RevokeKubeconfigRequest &&) = default ;
    RevokeKubeconfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeKubeconfigRequest() = default ;
    RevokeKubeconfigRequest& operator=(const RevokeKubeconfigRequest &) = default ;
    RevokeKubeconfigRequest& operator=(RevokeKubeconfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->privateIpAddress_ == nullptr
        && return this->serviceMeshId_ == nullptr; };
    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline bool privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, false) };
    inline RevokeKubeconfigRequest& setPrivateIpAddress(bool privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline RevokeKubeconfigRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // Specifies whether to return the kubeconfig file for private access.
    // 
    // *   `true`: returns the kubeconfig file for private access.
    // *   `false`: returns the kubeconfig file for public access.
    std::shared_ptr<bool> privateIpAddress_ = nullptr;
    // The ID of the ASM instance for which you want to revoke its kubeconfig file.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
