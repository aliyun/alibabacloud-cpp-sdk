// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORNAMESPACELISTRESPONSEBODYDESCRIBEHYBRIDMONITORNAMESPACEALIYUNPRODUCTMETRICLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORNAMESPACELISTRESPONSEBODYDESCRIBEHYBRIDMONITORNAMESPACEALIYUNPRODUCTMETRICLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricListNamespaceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceList, namespaceList_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(YAMLConfig, YAMLConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceList, namespaceList_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(YAMLConfig, YAMLConfig_);
    };
    DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList() = default ;
    DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList(const DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList &) = default ;
    DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList(DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList &&) = default ;
    DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList() = default ;
    DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList& operator=(const DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList &) = default ;
    DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList& operator=(DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->namespaceList_ == nullptr
        && return this->userId_ == nullptr && return this->YAMLConfig_ == nullptr; };
    // namespaceList Field Functions 
    bool hasNamespaceList() const { return this->namespaceList_ != nullptr;};
    void deleteNamespaceList() { this->namespaceList_ = nullptr;};
    inline const vector<Models::DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricListNamespaceList> & namespaceList() const { DARABONBA_PTR_GET_CONST(namespaceList_, vector<Models::DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricListNamespaceList>) };
    inline vector<Models::DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricListNamespaceList> namespaceList() { DARABONBA_PTR_GET(namespaceList_, vector<Models::DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricListNamespaceList>) };
    inline DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList& setNamespaceList(const vector<Models::DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricListNamespaceList> & namespaceList) { DARABONBA_PTR_SET_VALUE(namespaceList_, namespaceList) };
    inline DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList& setNamespaceList(vector<Models::DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricListNamespaceList> && namespaceList) { DARABONBA_PTR_SET_RVALUE(namespaceList_, namespaceList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // YAMLConfig Field Functions 
    bool hasYAMLConfig() const { return this->YAMLConfig_ != nullptr;};
    void deleteYAMLConfig() { this->YAMLConfig_ = nullptr;};
    inline string YAMLConfig() const { DARABONBA_PTR_GET_DEFAULT(YAMLConfig_, "") };
    inline DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricList& setYAMLConfig(string YAMLConfig) { DARABONBA_PTR_SET_VALUE(YAMLConfig_, YAMLConfig) };


  protected:
    // The namespaces.
    std::shared_ptr<vector<Models::DescribeHybridMonitorNamespaceListResponseBodyDescribeHybridMonitorNamespaceAliyunProductMetricListNamespaceList>> namespaceList_ = nullptr;
    // The account that is used to create the namespace.
    std::shared_ptr<int64_t> userId_ = nullptr;
    // The configuration file of the Alibaba Cloud service that you want to monitor by using Hybrid Cloud Monitoring.
    // 
    // *   namespace: the namespace of the Alibaba Cloud service.
    // *   metric_list: the metrics of the Alibaba Cloud service.
    // *   dimension: the resources of the Alibaba Cloud service that you want to monitor by using Hybrid Cloud Monitoring. If you do not specify a dimension, all resources of the Alibaba Cloud service are monitored.
    std::shared_ptr<string> YAMLConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
