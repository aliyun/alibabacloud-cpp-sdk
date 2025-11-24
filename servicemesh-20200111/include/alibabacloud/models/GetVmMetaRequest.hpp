// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVMMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVMMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GetVmMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVmMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ServiceAccount, serviceAccount_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_TO_JSON(TrustDomain, trustDomain_);
    };
    friend void from_json(const Darabonba::Json& j, GetVmMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ServiceAccount, serviceAccount_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_FROM_JSON(TrustDomain, trustDomain_);
    };
    GetVmMetaRequest() = default ;
    GetVmMetaRequest(const GetVmMetaRequest &) = default ;
    GetVmMetaRequest(GetVmMetaRequest &&) = default ;
    GetVmMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVmMetaRequest() = default ;
    GetVmMetaRequest& operator=(const GetVmMetaRequest &) = default ;
    GetVmMetaRequest& operator=(GetVmMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespace_ == nullptr
        && return this->serviceAccount_ == nullptr && return this->serviceMeshId_ == nullptr && return this->trustDomain_ == nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetVmMetaRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // serviceAccount Field Functions 
    bool hasServiceAccount() const { return this->serviceAccount_ != nullptr;};
    void deleteServiceAccount() { this->serviceAccount_ = nullptr;};
    inline string serviceAccount() const { DARABONBA_PTR_GET_DEFAULT(serviceAccount_, "") };
    inline GetVmMetaRequest& setServiceAccount(string serviceAccount) { DARABONBA_PTR_SET_VALUE(serviceAccount_, serviceAccount) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline GetVmMetaRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


    // trustDomain Field Functions 
    bool hasTrustDomain() const { return this->trustDomain_ != nullptr;};
    void deleteTrustDomain() { this->trustDomain_ = nullptr;};
    inline string trustDomain() const { DARABONBA_PTR_GET_DEFAULT(trustDomain_, "") };
    inline GetVmMetaRequest& setTrustDomain(string trustDomain) { DARABONBA_PTR_SET_VALUE(trustDomain_, trustDomain) };


  protected:
    // The name of the namespace. This parameter is valid only after you set the Namespace and the ServiceAccount parameters.
    std::shared_ptr<string> namespace_ = nullptr;
    // The service account. This parameter is valid only after you set the Namespace and the ServiceAccount parameters.
    std::shared_ptr<string> serviceAccount_ = nullptr;
    // The ASM instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
    // The trusted domain. Default value: cluster.local. This parameter is valid only after you set the Namespace and the ServiceAccount parameters.
    std::shared_ptr<string> trustDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
