// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHYBRIDMONITORNAMESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHYBRIDMONITORNAMESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateHybridMonitorNamespaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHybridMonitorNamespaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespaceRegion, namespaceRegion_);
      DARABONBA_PTR_TO_JSON(NamespaceType, namespaceType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHybridMonitorNamespaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespaceRegion, namespaceRegion_);
      DARABONBA_PTR_FROM_JSON(NamespaceType, namespaceType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
    };
    CreateHybridMonitorNamespaceRequest() = default ;
    CreateHybridMonitorNamespaceRequest(const CreateHybridMonitorNamespaceRequest &) = default ;
    CreateHybridMonitorNamespaceRequest(CreateHybridMonitorNamespaceRequest &&) = default ;
    CreateHybridMonitorNamespaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHybridMonitorNamespaceRequest() = default ;
    CreateHybridMonitorNamespaceRequest& operator=(const CreateHybridMonitorNamespaceRequest &) = default ;
    CreateHybridMonitorNamespaceRequest& operator=(CreateHybridMonitorNamespaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->namespace_ == nullptr && return this->namespaceRegion_ == nullptr && return this->namespaceType_ == nullptr && return this->regionId_ == nullptr && return this->spec_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateHybridMonitorNamespaceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateHybridMonitorNamespaceRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespaceRegion Field Functions 
    bool hasNamespaceRegion() const { return this->namespaceRegion_ != nullptr;};
    void deleteNamespaceRegion() { this->namespaceRegion_ = nullptr;};
    inline string namespaceRegion() const { DARABONBA_PTR_GET_DEFAULT(namespaceRegion_, "") };
    inline CreateHybridMonitorNamespaceRequest& setNamespaceRegion(string namespaceRegion) { DARABONBA_PTR_SET_VALUE(namespaceRegion_, namespaceRegion) };


    // namespaceType Field Functions 
    bool hasNamespaceType() const { return this->namespaceType_ != nullptr;};
    void deleteNamespaceType() { this->namespaceType_ = nullptr;};
    inline string namespaceType() const { DARABONBA_PTR_GET_DEFAULT(namespaceType_, "") };
    inline CreateHybridMonitorNamespaceRequest& setNamespaceType(string namespaceType) { DARABONBA_PTR_SET_VALUE(namespaceType_, namespaceType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateHybridMonitorNamespaceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline CreateHybridMonitorNamespaceRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    // The description of the namespace.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the namespace.
    // 
    // The name can contain lowercase letters, digits, and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The region where the metric data is stored.
    std::shared_ptr<string> namespaceRegion_ = nullptr;
    // The storage scheme of metric data. Valid values:
    // 
    // *   m_prom_user: The metric data is stored in Simple Log Service.
    // *   m_prom_pool: The metric data is stored in the private storage space provided by CloudMonitor.
    // 
    // >  For more information about the storage schemes of metric data, see [Data storage schemes for Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/2594921.html).
    std::shared_ptr<string> namespaceType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The data retention period. Valid values:
    // 
    // *   cms.s1.large (Retention Period 15 Days)
    // *   cms.s1.xlarge (Retention Period 32 Days)
    // *   cms.s1.2xlarge (Retention Period 63 Days)
    // *   cms.s1.3xlarge (Retention Period 93 Days) (default)
    // *   cms.s1.6xlarge (Retention Period 185 Days)
    // *   cms.s1.12xlarge (Retention Period 367 Days)
    // 
    // For information about the pricing for different retention periods, see the **Pricing** section in [Billing of the dashboard feature](https://help.aliyun.com/document_detail/223532.html).
    std::shared_ptr<string> spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
