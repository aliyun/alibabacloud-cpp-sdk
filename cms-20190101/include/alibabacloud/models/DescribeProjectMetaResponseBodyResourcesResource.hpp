// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROJECTMETARESPONSEBODYRESOURCESRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROJECTMETARESPONSEBODYRESOURCESRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeProjectMetaResponseBodyResourcesResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProjectMetaResponseBodyResourcesResource& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProjectMetaResponseBodyResourcesResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    DescribeProjectMetaResponseBodyResourcesResource() = default ;
    DescribeProjectMetaResponseBodyResourcesResource(const DescribeProjectMetaResponseBodyResourcesResource &) = default ;
    DescribeProjectMetaResponseBodyResourcesResource(DescribeProjectMetaResponseBodyResourcesResource &&) = default ;
    DescribeProjectMetaResponseBodyResourcesResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProjectMetaResponseBodyResourcesResource() = default ;
    DescribeProjectMetaResponseBodyResourcesResource& operator=(const DescribeProjectMetaResponseBodyResourcesResource &) = default ;
    DescribeProjectMetaResponseBodyResourcesResource& operator=(DescribeProjectMetaResponseBodyResourcesResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->labels_ == nullptr && return this->namespace_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeProjectMetaResponseBodyResourcesResource& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline DescribeProjectMetaResponseBodyResourcesResource& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeProjectMetaResponseBodyResourcesResource& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The tags. Tags are used to filter services.
    // 
    // Tags are returned in the following format: `[{"name":"Tag key","value":"Tag value"}, {"name":"Tag key","value":"Tag value"}]`. The following tags are commonly used:
    // 
    // *   alertUnit: the unit of the metric value in alerts. If the unit is small, the original metric value may be too large. In this case, you can use the `alertUnit` tag to specify an appropriate unit. This tag is used in CloudMonitor.
    // *   minAlertPeriod: the minimum time interval to report a new alert. The interval at which monitoring data is reported. The value is usually 1 minute.
    // *   metricCategory: the service specification. Example: kvstore_sharding. Some Alibaba Cloud services have multiple specifications that are defined in the same namespace. This parameter is used to identify the specifications.
    // *   is_alarm: indicates whether an alert rule can be configured. We recommend that you do not use the special tags in the CloudMonitor console.
    std::shared_ptr<string> labels_ = nullptr;
    // The namespace of the cloud service. Format: `acs_Service name abbreviation`. For more information about namespaces, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
