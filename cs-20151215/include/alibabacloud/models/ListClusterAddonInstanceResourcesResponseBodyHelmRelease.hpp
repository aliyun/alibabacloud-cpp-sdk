// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERADDONINSTANCERESOURCESRESPONSEBODYHELMRELEASE_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERADDONINSTANCERESOURCESRESPONSEBODYHELMRELEASE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListClusterAddonInstanceResourcesResponseBodyHelmRelease : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterAddonInstanceResourcesResponseBodyHelmRelease& obj) { 
      DARABONBA_PTR_TO_JSON(chart_name, chartName_);
      DARABONBA_PTR_TO_JSON(chart_version, chartVersion_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(release_name, releaseName_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterAddonInstanceResourcesResponseBodyHelmRelease& obj) { 
      DARABONBA_PTR_FROM_JSON(chart_name, chartName_);
      DARABONBA_PTR_FROM_JSON(chart_version, chartVersion_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(release_name, releaseName_);
    };
    ListClusterAddonInstanceResourcesResponseBodyHelmRelease() = default ;
    ListClusterAddonInstanceResourcesResponseBodyHelmRelease(const ListClusterAddonInstanceResourcesResponseBodyHelmRelease &) = default ;
    ListClusterAddonInstanceResourcesResponseBodyHelmRelease(ListClusterAddonInstanceResourcesResponseBodyHelmRelease &&) = default ;
    ListClusterAddonInstanceResourcesResponseBodyHelmRelease(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterAddonInstanceResourcesResponseBodyHelmRelease() = default ;
    ListClusterAddonInstanceResourcesResponseBodyHelmRelease& operator=(const ListClusterAddonInstanceResourcesResponseBodyHelmRelease &) = default ;
    ListClusterAddonInstanceResourcesResponseBodyHelmRelease& operator=(ListClusterAddonInstanceResourcesResponseBodyHelmRelease &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chartName_ == nullptr
        && return this->chartVersion_ == nullptr && return this->namespace_ == nullptr && return this->releaseName_ == nullptr; };
    // chartName Field Functions 
    bool hasChartName() const { return this->chartName_ != nullptr;};
    void deleteChartName() { this->chartName_ = nullptr;};
    inline string chartName() const { DARABONBA_PTR_GET_DEFAULT(chartName_, "") };
    inline ListClusterAddonInstanceResourcesResponseBodyHelmRelease& setChartName(string chartName) { DARABONBA_PTR_SET_VALUE(chartName_, chartName) };


    // chartVersion Field Functions 
    bool hasChartVersion() const { return this->chartVersion_ != nullptr;};
    void deleteChartVersion() { this->chartVersion_ = nullptr;};
    inline string chartVersion() const { DARABONBA_PTR_GET_DEFAULT(chartVersion_, "") };
    inline ListClusterAddonInstanceResourcesResponseBodyHelmRelease& setChartVersion(string chartVersion) { DARABONBA_PTR_SET_VALUE(chartVersion_, chartVersion) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListClusterAddonInstanceResourcesResponseBodyHelmRelease& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // releaseName Field Functions 
    bool hasReleaseName() const { return this->releaseName_ != nullptr;};
    void deleteReleaseName() { this->releaseName_ = nullptr;};
    inline string releaseName() const { DARABONBA_PTR_GET_DEFAULT(releaseName_, "") };
    inline ListClusterAddonInstanceResourcesResponseBodyHelmRelease& setReleaseName(string releaseName) { DARABONBA_PTR_SET_VALUE(releaseName_, releaseName) };


  protected:
    std::shared_ptr<string> chartName_ = nullptr;
    std::shared_ptr<string> chartVersion_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> releaseName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
