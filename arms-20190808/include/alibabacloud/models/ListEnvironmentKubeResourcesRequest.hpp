// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTKUBERESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTKUBERESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentKubeResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentKubeResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(Kind, kind_);
      DARABONBA_PTR_TO_JSON(LabelSelectors, labelSelectors_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentKubeResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(Kind, kind_);
      DARABONBA_PTR_FROM_JSON(LabelSelectors, labelSelectors_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListEnvironmentKubeResourcesRequest() = default ;
    ListEnvironmentKubeResourcesRequest(const ListEnvironmentKubeResourcesRequest &) = default ;
    ListEnvironmentKubeResourcesRequest(ListEnvironmentKubeResourcesRequest &&) = default ;
    ListEnvironmentKubeResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentKubeResourcesRequest() = default ;
    ListEnvironmentKubeResourcesRequest& operator=(const ListEnvironmentKubeResourcesRequest &) = default ;
    ListEnvironmentKubeResourcesRequest& operator=(ListEnvironmentKubeResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->environmentId_ != nullptr
        && this->kind_ != nullptr && this->labelSelectors_ != nullptr && this->namespace_ != nullptr && this->regionId_ != nullptr; };
    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline ListEnvironmentKubeResourcesRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline ListEnvironmentKubeResourcesRequest& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // labelSelectors Field Functions 
    bool hasLabelSelectors() const { return this->labelSelectors_ != nullptr;};
    void deleteLabelSelectors() { this->labelSelectors_ = nullptr;};
    inline const map<string, string> & labelSelectors() const { DARABONBA_PTR_GET_CONST(labelSelectors_, map<string, string>) };
    inline map<string, string> labelSelectors() { DARABONBA_PTR_GET(labelSelectors_, map<string, string>) };
    inline ListEnvironmentKubeResourcesRequest& setLabelSelectors(const map<string, string> & labelSelectors) { DARABONBA_PTR_SET_VALUE(labelSelectors_, labelSelectors) };
    inline ListEnvironmentKubeResourcesRequest& setLabelSelectors(map<string, string> && labelSelectors) { DARABONBA_PTR_SET_RVALUE(labelSelectors_, labelSelectors) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListEnvironmentKubeResourcesRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEnvironmentKubeResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The environment ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The resource type. Valid values: Pod, Deployment, and Service.
    // 
    // This parameter is required.
    std::shared_ptr<string> kind_ = nullptr;
    // The tags.
    std::shared_ptr<map<string, string>> labelSelectors_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
