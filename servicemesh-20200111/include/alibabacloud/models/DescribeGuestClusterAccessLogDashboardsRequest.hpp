// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGUESTCLUSTERACCESSLOGDASHBOARDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGUESTCLUSTERACCESSLOGDASHBOARDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeGuestClusterAccessLogDashboardsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGuestClusterAccessLogDashboardsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(K8sClusterId, k8sClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGuestClusterAccessLogDashboardsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(K8sClusterId, k8sClusterId_);
    };
    DescribeGuestClusterAccessLogDashboardsRequest() = default ;
    DescribeGuestClusterAccessLogDashboardsRequest(const DescribeGuestClusterAccessLogDashboardsRequest &) = default ;
    DescribeGuestClusterAccessLogDashboardsRequest(DescribeGuestClusterAccessLogDashboardsRequest &&) = default ;
    DescribeGuestClusterAccessLogDashboardsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGuestClusterAccessLogDashboardsRequest() = default ;
    DescribeGuestClusterAccessLogDashboardsRequest& operator=(const DescribeGuestClusterAccessLogDashboardsRequest &) = default ;
    DescribeGuestClusterAccessLogDashboardsRequest& operator=(DescribeGuestClusterAccessLogDashboardsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->k8sClusterId_ == nullptr; };
    // k8sClusterId Field Functions 
    bool hasK8sClusterId() const { return this->k8sClusterId_ != nullptr;};
    void deleteK8sClusterId() { this->k8sClusterId_ = nullptr;};
    inline string k8sClusterId() const { DARABONBA_PTR_GET_DEFAULT(k8sClusterId_, "") };
    inline DescribeGuestClusterAccessLogDashboardsRequest& setK8sClusterId(string k8sClusterId) { DARABONBA_PTR_SET_VALUE(k8sClusterId_, k8sClusterId) };


  protected:
    // The ID of the cluster on the data plane.
    // 
    // This parameter is required.
    std::shared_ptr<string> k8sClusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
