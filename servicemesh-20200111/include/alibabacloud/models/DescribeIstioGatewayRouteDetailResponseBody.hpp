// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeIstioGatewayRouteDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIstioGatewayRouteDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteDetail, routeDetail_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIstioGatewayRouteDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteDetail, routeDetail_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeIstioGatewayRouteDetailResponseBody() = default ;
    DescribeIstioGatewayRouteDetailResponseBody(const DescribeIstioGatewayRouteDetailResponseBody &) = default ;
    DescribeIstioGatewayRouteDetailResponseBody(DescribeIstioGatewayRouteDetailResponseBody &&) = default ;
    DescribeIstioGatewayRouteDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIstioGatewayRouteDetailResponseBody() = default ;
    DescribeIstioGatewayRouteDetailResponseBody& operator=(const DescribeIstioGatewayRouteDetailResponseBody &) = default ;
    DescribeIstioGatewayRouteDetailResponseBody& operator=(DescribeIstioGatewayRouteDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->namespace_ == nullptr && return this->priority_ == nullptr && return this->requestId_ == nullptr && return this->routeDetail_ == nullptr && return this->status_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeIstioGatewayRouteDetailResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeIstioGatewayRouteDetailResponseBody& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline DescribeIstioGatewayRouteDetailResponseBody& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIstioGatewayRouteDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeDetail Field Functions 
    bool hasRouteDetail() const { return this->routeDetail_ != nullptr;};
    void deleteRouteDetail() { this->routeDetail_ = nullptr;};
    inline const DescribeIstioGatewayRouteDetailResponseBodyRouteDetail & routeDetail() const { DARABONBA_PTR_GET_CONST(routeDetail_, DescribeIstioGatewayRouteDetailResponseBodyRouteDetail) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetail routeDetail() { DARABONBA_PTR_GET(routeDetail_, DescribeIstioGatewayRouteDetailResponseBodyRouteDetail) };
    inline DescribeIstioGatewayRouteDetailResponseBody& setRouteDetail(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetail & routeDetail) { DARABONBA_PTR_SET_VALUE(routeDetail_, routeDetail) };
    inline DescribeIstioGatewayRouteDetailResponseBody& setRouteDetail(DescribeIstioGatewayRouteDetailResponseBodyRouteDetail && routeDetail) { DARABONBA_PTR_SET_RVALUE(routeDetail_, routeDetail) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeIstioGatewayRouteDetailResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The description of the routing rule.
    std::shared_ptr<string> description_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The priority of the routing rule. The value of this parameter is an integer. A smaller value indicates a higher priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The detailed information about the routing rule.
    std::shared_ptr<DescribeIstioGatewayRouteDetailResponseBodyRouteDetail> routeDetail_ = nullptr;
    // The status of the routing rule. Valid values:
    // 
    // *   `0`: The routing rule is valid.
    // *   `1`: The routing rule is invalid.
    // *   `2`: An error occurs during the creation or update of the routing rule.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
