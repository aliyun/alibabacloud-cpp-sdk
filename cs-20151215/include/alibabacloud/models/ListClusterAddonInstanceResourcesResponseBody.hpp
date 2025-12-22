// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERADDONINSTANCERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERADDONINSTANCERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListClusterAddonInstanceResourcesResponseBodyHelmRelease.hpp>
#include <vector>
#include <alibabacloud/models/ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListClusterAddonInstanceResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterAddonInstanceResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(helm_release, helmRelease_);
      DARABONBA_PTR_TO_JSON(kubernetes_objects, kubernetesObjects_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterAddonInstanceResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(helm_release, helmRelease_);
      DARABONBA_PTR_FROM_JSON(kubernetes_objects, kubernetesObjects_);
    };
    ListClusterAddonInstanceResourcesResponseBody() = default ;
    ListClusterAddonInstanceResourcesResponseBody(const ListClusterAddonInstanceResourcesResponseBody &) = default ;
    ListClusterAddonInstanceResourcesResponseBody(ListClusterAddonInstanceResourcesResponseBody &&) = default ;
    ListClusterAddonInstanceResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterAddonInstanceResourcesResponseBody() = default ;
    ListClusterAddonInstanceResourcesResponseBody& operator=(const ListClusterAddonInstanceResourcesResponseBody &) = default ;
    ListClusterAddonInstanceResourcesResponseBody& operator=(ListClusterAddonInstanceResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->helmRelease_ == nullptr
        && return this->kubernetesObjects_ == nullptr; };
    // helmRelease Field Functions 
    bool hasHelmRelease() const { return this->helmRelease_ != nullptr;};
    void deleteHelmRelease() { this->helmRelease_ = nullptr;};
    inline const ListClusterAddonInstanceResourcesResponseBodyHelmRelease & helmRelease() const { DARABONBA_PTR_GET_CONST(helmRelease_, ListClusterAddonInstanceResourcesResponseBodyHelmRelease) };
    inline ListClusterAddonInstanceResourcesResponseBodyHelmRelease helmRelease() { DARABONBA_PTR_GET(helmRelease_, ListClusterAddonInstanceResourcesResponseBodyHelmRelease) };
    inline ListClusterAddonInstanceResourcesResponseBody& setHelmRelease(const ListClusterAddonInstanceResourcesResponseBodyHelmRelease & helmRelease) { DARABONBA_PTR_SET_VALUE(helmRelease_, helmRelease) };
    inline ListClusterAddonInstanceResourcesResponseBody& setHelmRelease(ListClusterAddonInstanceResourcesResponseBodyHelmRelease && helmRelease) { DARABONBA_PTR_SET_RVALUE(helmRelease_, helmRelease) };


    // kubernetesObjects Field Functions 
    bool hasKubernetesObjects() const { return this->kubernetesObjects_ != nullptr;};
    void deleteKubernetesObjects() { this->kubernetesObjects_ = nullptr;};
    inline const vector<ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects> & kubernetesObjects() const { DARABONBA_PTR_GET_CONST(kubernetesObjects_, vector<ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects>) };
    inline vector<ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects> kubernetesObjects() { DARABONBA_PTR_GET(kubernetesObjects_, vector<ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects>) };
    inline ListClusterAddonInstanceResourcesResponseBody& setKubernetesObjects(const vector<ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects> & kubernetesObjects) { DARABONBA_PTR_SET_VALUE(kubernetesObjects_, kubernetesObjects) };
    inline ListClusterAddonInstanceResourcesResponseBody& setKubernetesObjects(vector<ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects> && kubernetesObjects) { DARABONBA_PTR_SET_RVALUE(kubernetesObjects_, kubernetesObjects) };


  protected:
    std::shared_ptr<ListClusterAddonInstanceResourcesResponseBodyHelmRelease> helmRelease_ = nullptr;
    std::shared_ptr<vector<ListClusterAddonInstanceResourcesResponseBodyKubernetesObjects>> kubernetesObjects_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
