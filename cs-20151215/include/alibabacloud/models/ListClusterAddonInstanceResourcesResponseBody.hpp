// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERADDONINSTANCERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERADDONINSTANCERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class KubernetesObjects : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KubernetesObjects& obj) { 
        DARABONBA_PTR_TO_JSON(group, group_);
        DARABONBA_PTR_TO_JSON(kind, kind_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(namespace, namespace_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, KubernetesObjects& obj) { 
        DARABONBA_PTR_FROM_JSON(group, group_);
        DARABONBA_PTR_FROM_JSON(kind, kind_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      KubernetesObjects() = default ;
      KubernetesObjects(const KubernetesObjects &) = default ;
      KubernetesObjects(KubernetesObjects &&) = default ;
      KubernetesObjects(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KubernetesObjects() = default ;
      KubernetesObjects& operator=(const KubernetesObjects &) = default ;
      KubernetesObjects& operator=(KubernetesObjects &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->group_ == nullptr
        && this->kind_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->version_ == nullptr; };
      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
      inline KubernetesObjects& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


      // kind Field Functions 
      bool hasKind() const { return this->kind_ != nullptr;};
      void deleteKind() { this->kind_ = nullptr;};
      inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
      inline KubernetesObjects& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline KubernetesObjects& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline KubernetesObjects& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline KubernetesObjects& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> group_ {};
      shared_ptr<string> kind_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> namespace_ {};
      shared_ptr<string> version_ {};
    };

    class HelmRelease : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HelmRelease& obj) { 
        DARABONBA_PTR_TO_JSON(chart_name, chartName_);
        DARABONBA_PTR_TO_JSON(chart_version, chartVersion_);
        DARABONBA_PTR_TO_JSON(namespace, namespace_);
        DARABONBA_PTR_TO_JSON(release_name, releaseName_);
      };
      friend void from_json(const Darabonba::Json& j, HelmRelease& obj) { 
        DARABONBA_PTR_FROM_JSON(chart_name, chartName_);
        DARABONBA_PTR_FROM_JSON(chart_version, chartVersion_);
        DARABONBA_PTR_FROM_JSON(namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(release_name, releaseName_);
      };
      HelmRelease() = default ;
      HelmRelease(const HelmRelease &) = default ;
      HelmRelease(HelmRelease &&) = default ;
      HelmRelease(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HelmRelease() = default ;
      HelmRelease& operator=(const HelmRelease &) = default ;
      HelmRelease& operator=(HelmRelease &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->chartName_ == nullptr
        && this->chartVersion_ == nullptr && this->namespace_ == nullptr && this->releaseName_ == nullptr; };
      // chartName Field Functions 
      bool hasChartName() const { return this->chartName_ != nullptr;};
      void deleteChartName() { this->chartName_ = nullptr;};
      inline string getChartName() const { DARABONBA_PTR_GET_DEFAULT(chartName_, "") };
      inline HelmRelease& setChartName(string chartName) { DARABONBA_PTR_SET_VALUE(chartName_, chartName) };


      // chartVersion Field Functions 
      bool hasChartVersion() const { return this->chartVersion_ != nullptr;};
      void deleteChartVersion() { this->chartVersion_ = nullptr;};
      inline string getChartVersion() const { DARABONBA_PTR_GET_DEFAULT(chartVersion_, "") };
      inline HelmRelease& setChartVersion(string chartVersion) { DARABONBA_PTR_SET_VALUE(chartVersion_, chartVersion) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline HelmRelease& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // releaseName Field Functions 
      bool hasReleaseName() const { return this->releaseName_ != nullptr;};
      void deleteReleaseName() { this->releaseName_ = nullptr;};
      inline string getReleaseName() const { DARABONBA_PTR_GET_DEFAULT(releaseName_, "") };
      inline HelmRelease& setReleaseName(string releaseName) { DARABONBA_PTR_SET_VALUE(releaseName_, releaseName) };


    protected:
      shared_ptr<string> chartName_ {};
      shared_ptr<string> chartVersion_ {};
      shared_ptr<string> namespace_ {};
      shared_ptr<string> releaseName_ {};
    };

    virtual bool empty() const override { return this->helmRelease_ == nullptr
        && this->kubernetesObjects_ == nullptr; };
    // helmRelease Field Functions 
    bool hasHelmRelease() const { return this->helmRelease_ != nullptr;};
    void deleteHelmRelease() { this->helmRelease_ = nullptr;};
    inline const ListClusterAddonInstanceResourcesResponseBody::HelmRelease & getHelmRelease() const { DARABONBA_PTR_GET_CONST(helmRelease_, ListClusterAddonInstanceResourcesResponseBody::HelmRelease) };
    inline ListClusterAddonInstanceResourcesResponseBody::HelmRelease getHelmRelease() { DARABONBA_PTR_GET(helmRelease_, ListClusterAddonInstanceResourcesResponseBody::HelmRelease) };
    inline ListClusterAddonInstanceResourcesResponseBody& setHelmRelease(const ListClusterAddonInstanceResourcesResponseBody::HelmRelease & helmRelease) { DARABONBA_PTR_SET_VALUE(helmRelease_, helmRelease) };
    inline ListClusterAddonInstanceResourcesResponseBody& setHelmRelease(ListClusterAddonInstanceResourcesResponseBody::HelmRelease && helmRelease) { DARABONBA_PTR_SET_RVALUE(helmRelease_, helmRelease) };


    // kubernetesObjects Field Functions 
    bool hasKubernetesObjects() const { return this->kubernetesObjects_ != nullptr;};
    void deleteKubernetesObjects() { this->kubernetesObjects_ = nullptr;};
    inline const vector<ListClusterAddonInstanceResourcesResponseBody::KubernetesObjects> & getKubernetesObjects() const { DARABONBA_PTR_GET_CONST(kubernetesObjects_, vector<ListClusterAddonInstanceResourcesResponseBody::KubernetesObjects>) };
    inline vector<ListClusterAddonInstanceResourcesResponseBody::KubernetesObjects> getKubernetesObjects() { DARABONBA_PTR_GET(kubernetesObjects_, vector<ListClusterAddonInstanceResourcesResponseBody::KubernetesObjects>) };
    inline ListClusterAddonInstanceResourcesResponseBody& setKubernetesObjects(const vector<ListClusterAddonInstanceResourcesResponseBody::KubernetesObjects> & kubernetesObjects) { DARABONBA_PTR_SET_VALUE(kubernetesObjects_, kubernetesObjects) };
    inline ListClusterAddonInstanceResourcesResponseBody& setKubernetesObjects(vector<ListClusterAddonInstanceResourcesResponseBody::KubernetesObjects> && kubernetesObjects) { DARABONBA_PTR_SET_RVALUE(kubernetesObjects_, kubernetesObjects) };


  protected:
    shared_ptr<ListClusterAddonInstanceResourcesResponseBody::HelmRelease> helmRelease_ {};
    shared_ptr<vector<ListClusterAddonInstanceResourcesResponseBody::KubernetesObjects>> kubernetesObjects_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
