// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SSECRETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SSECRETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListK8sSecretsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sSecretsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ShowRelatedApps, showRelatedApps_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sSecretsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ShowRelatedApps, showRelatedApps_);
    };
    ListK8sSecretsRequest() = default ;
    ListK8sSecretsRequest(const ListK8sSecretsRequest &) = default ;
    ListK8sSecretsRequest(ListK8sSecretsRequest &&) = default ;
    ListK8sSecretsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sSecretsRequest() = default ;
    ListK8sSecretsRequest& operator=(const ListK8sSecretsRequest &) = default ;
    ListK8sSecretsRequest& operator=(ListK8sSecretsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->condition_ == nullptr && return this->namespace_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->regionId_ == nullptr
        && return this->showRelatedApps_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListK8sSecretsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline ListK8sSecretsRequest& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListK8sSecretsRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListK8sSecretsRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListK8sSecretsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListK8sSecretsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // showRelatedApps Field Functions 
    bool hasShowRelatedApps() const { return this->showRelatedApps_ != nullptr;};
    void deleteShowRelatedApps() { this->showRelatedApps_ = nullptr;};
    inline bool showRelatedApps() const { DARABONBA_PTR_GET_DEFAULT(showRelatedApps_, false) };
    inline ListK8sSecretsRequest& setShowRelatedApps(bool showRelatedApps) { DARABONBA_PTR_SET_VALUE(showRelatedApps_, showRelatedApps) };


  protected:
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The filter conditions. Set this parameter to a JSON string in the format of {"field":"Name", "pattern":"configmap-"}.
    std::shared_ptr<string> condition_ = nullptr;
    // The namespace of the Kubernetes cluster.
    std::shared_ptr<string> namespace_ = nullptr;
    // The number of the page to return. Pages start from Page 0.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries to return on each page. The value 0 indicates that all entries are returned on one page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to return a list of applications that use a Secret.
    std::shared_ptr<bool> showRelatedApps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
