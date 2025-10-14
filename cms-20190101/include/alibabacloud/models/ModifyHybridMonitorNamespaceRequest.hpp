// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHYBRIDMONITORNAMESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHYBRIDMONITORNAMESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyHybridMonitorNamespaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHybridMonitorNamespaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHybridMonitorNamespaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
    };
    ModifyHybridMonitorNamespaceRequest() = default ;
    ModifyHybridMonitorNamespaceRequest(const ModifyHybridMonitorNamespaceRequest &) = default ;
    ModifyHybridMonitorNamespaceRequest(ModifyHybridMonitorNamespaceRequest &&) = default ;
    ModifyHybridMonitorNamespaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHybridMonitorNamespaceRequest() = default ;
    ModifyHybridMonitorNamespaceRequest& operator=(const ModifyHybridMonitorNamespaceRequest &) = default ;
    ModifyHybridMonitorNamespaceRequest& operator=(ModifyHybridMonitorNamespaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->namespace_ == nullptr && return this->regionId_ == nullptr && return this->spec_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyHybridMonitorNamespaceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ModifyHybridMonitorNamespaceRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyHybridMonitorNamespaceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline ModifyHybridMonitorNamespaceRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    // The description of the namespace.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the namespace.
    // 
    // The name can contain letters, digits, and hyphens (-).
    // 
    // For information about how to obtain the name of a namespace, see [DescribeHybridMonitorNamespaceList](https://help.aliyun.com/document_detail/428880.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The data retention period. Valid values:
    // 
    // *   cms.s1.large: Data is stored for 15 days.
    // *   cms.s1.xlarge: Data is stored for 32 days.
    // *   cms.s1.2xlarge: Data is stored for 63 days.
    // *   cms.s1.3xlarge: Data is stored for 93 days.
    // *   cms.s1.6xlarge: Data is stored for 185 days.
    // *   cms.s1.12xlarge: Data is stored for 376 days.
    // 
    // For information about the pricing for different retention periods, see the **Pricing** section in [Billing of the dashboard feature](https://help.aliyun.com/document_detail/223532.html).
    std::shared_ptr<string> spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
