// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORNAMESPACELISTRESPONSEBODYDESCRIBEHYBRIDMONITORNAMESPACEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORNAMESPACELISTRESPONSEBODYDESCRIBEHYBRIDMONITORNAMESPACEDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceRegion, namespaceRegion_);
      DARABONBA_PTR_TO_JSON(PrometheusInstanceId, prometheusInstanceId_);
      DARABONBA_PTR_TO_JSON(SLSProject, SLSProject_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceRegion, namespaceRegion_);
      DARABONBA_PTR_FROM_JSON(PrometheusInstanceId, prometheusInstanceId_);
      DARABONBA_PTR_FROM_JSON(SLSProject, SLSProject_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
    };
    DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail() = default ;
    DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail(const DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail &) = default ;
    DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail(DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail &&) = default ;
    DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail() = default ;
    DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail& operator=(const DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail &) = default ;
    DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail& operator=(DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespaceRegion_ == nullptr
        && return this->prometheusInstanceId_ == nullptr && return this->SLSProject_ == nullptr && return this->spec_ == nullptr; };
    // namespaceRegion Field Functions 
    bool hasNamespaceRegion() const { return this->namespaceRegion_ != nullptr;};
    void deleteNamespaceRegion() { this->namespaceRegion_ = nullptr;};
    inline string namespaceRegion() const { DARABONBA_PTR_GET_DEFAULT(namespaceRegion_, "") };
    inline DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail& setNamespaceRegion(string namespaceRegion) { DARABONBA_PTR_SET_VALUE(namespaceRegion_, namespaceRegion) };


    // prometheusInstanceId Field Functions 
    bool hasPrometheusInstanceId() const { return this->prometheusInstanceId_ != nullptr;};
    void deletePrometheusInstanceId() { this->prometheusInstanceId_ = nullptr;};
    inline string prometheusInstanceId() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceId_, "") };
    inline DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail& setPrometheusInstanceId(string prometheusInstanceId) { DARABONBA_PTR_SET_VALUE(prometheusInstanceId_, prometheusInstanceId) };


    // SLSProject Field Functions 
    bool hasSLSProject() const { return this->SLSProject_ != nullptr;};
    void deleteSLSProject() { this->SLSProject_ = nullptr;};
    inline string SLSProject() const { DARABONBA_PTR_GET_DEFAULT(SLSProject_, "") };
    inline DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail& setSLSProject(string SLSProject) { DARABONBA_PTR_SET_VALUE(SLSProject_, SLSProject) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceDetail& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    // The region where the metric data is stored.
    // 
    // >  This parameter is returned if you select `m_prom_user` for `NamespaceType` when you create a namespace.
    std::shared_ptr<string> namespaceRegion_ = nullptr;
    std::shared_ptr<string> prometheusInstanceId_ = nullptr;
    // The project where the metric data is located.
    // 
    // >  This parameter is returned if you select `m_prom_user` for `NamespaceType` when you create a namespace.
    std::shared_ptr<string> SLSProject_ = nullptr;
    // The data retention period. Valid values:
    // 
    // *   cms.s1.large (Retention Period 15 Days)
    // *   cms.s1.xlarge (Retention Period 32 Days)
    // *   cms.s1.2xlarge (Retention Period 63 Days)
    // *   cms.s1.3xlarge (Retention Period 93 Days)
    // *   cms.s1.6xlarge (Retention Period 185 Days)
    // *   cms.s1.12xlarge (Retention Period 367 Days)
    std::shared_ptr<string> spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
