// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIstioGatewayRoutesResponseBodyManagementRoutes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeIstioGatewayRoutesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIstioGatewayRoutesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ManagementRoutes, managementRoutes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIstioGatewayRoutesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ManagementRoutes, managementRoutes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeIstioGatewayRoutesResponseBody() = default ;
    DescribeIstioGatewayRoutesResponseBody(const DescribeIstioGatewayRoutesResponseBody &) = default ;
    DescribeIstioGatewayRoutesResponseBody(DescribeIstioGatewayRoutesResponseBody &&) = default ;
    DescribeIstioGatewayRoutesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIstioGatewayRoutesResponseBody() = default ;
    DescribeIstioGatewayRoutesResponseBody& operator=(const DescribeIstioGatewayRoutesResponseBody &) = default ;
    DescribeIstioGatewayRoutesResponseBody& operator=(DescribeIstioGatewayRoutesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->managementRoutes_ == nullptr
        && return this->requestId_ == nullptr; };
    // managementRoutes Field Functions 
    bool hasManagementRoutes() const { return this->managementRoutes_ != nullptr;};
    void deleteManagementRoutes() { this->managementRoutes_ = nullptr;};
    inline const vector<DescribeIstioGatewayRoutesResponseBodyManagementRoutes> & managementRoutes() const { DARABONBA_PTR_GET_CONST(managementRoutes_, vector<DescribeIstioGatewayRoutesResponseBodyManagementRoutes>) };
    inline vector<DescribeIstioGatewayRoutesResponseBodyManagementRoutes> managementRoutes() { DARABONBA_PTR_GET(managementRoutes_, vector<DescribeIstioGatewayRoutesResponseBodyManagementRoutes>) };
    inline DescribeIstioGatewayRoutesResponseBody& setManagementRoutes(const vector<DescribeIstioGatewayRoutesResponseBodyManagementRoutes> & managementRoutes) { DARABONBA_PTR_SET_VALUE(managementRoutes_, managementRoutes) };
    inline DescribeIstioGatewayRoutesResponseBody& setManagementRoutes(vector<DescribeIstioGatewayRoutesResponseBodyManagementRoutes> && managementRoutes) { DARABONBA_PTR_SET_RVALUE(managementRoutes_, managementRoutes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIstioGatewayRoutesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The routing rules.
    std::shared_ptr<vector<DescribeIstioGatewayRoutesResponseBodyManagementRoutes>> managementRoutes_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
