// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SCONFIGMAPSRESPONSEBODYRESULTCONFIGMAPS_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SCONFIGMAPSRESPONSEBODYRESULTCONFIGMAPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListK8sConfigMapsResponseBodyResultConfigMapsData.hpp>
#include <alibabacloud/models/ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListK8sConfigMapsResponseBodyResultConfigMaps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sConfigMapsResponseBodyResultConfigMaps& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RelatedApps, relatedApps_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sConfigMapsResponseBodyResultConfigMaps& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RelatedApps, relatedApps_);
    };
    ListK8sConfigMapsResponseBodyResultConfigMaps() = default ;
    ListK8sConfigMapsResponseBodyResultConfigMaps(const ListK8sConfigMapsResponseBodyResultConfigMaps &) = default ;
    ListK8sConfigMapsResponseBodyResultConfigMaps(ListK8sConfigMapsResponseBodyResultConfigMaps &&) = default ;
    ListK8sConfigMapsResponseBodyResultConfigMaps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sConfigMapsResponseBodyResultConfigMaps() = default ;
    ListK8sConfigMapsResponseBodyResultConfigMaps& operator=(const ListK8sConfigMapsResponseBodyResultConfigMaps &) = default ;
    ListK8sConfigMapsResponseBodyResultConfigMaps& operator=(ListK8sConfigMapsResponseBodyResultConfigMaps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->clusterName_ == nullptr && return this->creationTime_ == nullptr && return this->data_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr
        && return this->relatedApps_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListK8sConfigMapsResponseBodyResultConfigMaps& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListK8sConfigMapsResponseBodyResultConfigMaps& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListK8sConfigMapsResponseBodyResultConfigMaps& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListK8sConfigMapsResponseBodyResultConfigMapsData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListK8sConfigMapsResponseBodyResultConfigMapsData>) };
    inline vector<Models::ListK8sConfigMapsResponseBodyResultConfigMapsData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListK8sConfigMapsResponseBodyResultConfigMapsData>) };
    inline ListK8sConfigMapsResponseBodyResultConfigMaps& setData(const vector<Models::ListK8sConfigMapsResponseBodyResultConfigMapsData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListK8sConfigMapsResponseBodyResultConfigMaps& setData(vector<Models::ListK8sConfigMapsResponseBodyResultConfigMapsData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListK8sConfigMapsResponseBodyResultConfigMaps& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListK8sConfigMapsResponseBodyResultConfigMaps& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // relatedApps Field Functions 
    bool hasRelatedApps() const { return this->relatedApps_ != nullptr;};
    void deleteRelatedApps() { this->relatedApps_ = nullptr;};
    inline const vector<Models::ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps> & relatedApps() const { DARABONBA_PTR_GET_CONST(relatedApps_, vector<Models::ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps>) };
    inline vector<Models::ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps> relatedApps() { DARABONBA_PTR_GET(relatedApps_, vector<Models::ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps>) };
    inline ListK8sConfigMapsResponseBodyResultConfigMaps& setRelatedApps(const vector<Models::ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps> & relatedApps) { DARABONBA_PTR_SET_VALUE(relatedApps_, relatedApps) };
    inline ListK8sConfigMapsResponseBodyResultConfigMaps& setRelatedApps(vector<Models::ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps> && relatedApps) { DARABONBA_PTR_SET_RVALUE(relatedApps_, relatedApps) };


  protected:
    // The ID of the Kubernetes cluster. You can obtain the cluster ID by calling the GetK8sCluster operation. For more information, see [GetK8sCluster](https://help.aliyun.com/document_detail/181437.html).
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The time when the ConfigMaps were created. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The information about ConfigMaps.
    std::shared_ptr<vector<Models::ListK8sConfigMapsResponseBodyResultConfigMapsData>> data_ = nullptr;
    // The name of the ConfigMap.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace of the Kubernetes cluster.
    std::shared_ptr<string> namespace_ = nullptr;
    // The related applications.
    std::shared_ptr<vector<Models::ListK8sConfigMapsResponseBodyResultConfigMapsRelatedApps>> relatedApps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
