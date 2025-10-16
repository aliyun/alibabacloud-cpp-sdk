// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/VerifyCenResponseBodyRouteEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class VerifyCenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlocks, cidrBlocks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteEntries, routeEntries_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlocks, cidrBlocks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteEntries, routeEntries_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    VerifyCenResponseBody() = default ;
    VerifyCenResponseBody(const VerifyCenResponseBody &) = default ;
    VerifyCenResponseBody(VerifyCenResponseBody &&) = default ;
    VerifyCenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCenResponseBody() = default ;
    VerifyCenResponseBody& operator=(const VerifyCenResponseBody &) = default ;
    VerifyCenResponseBody& operator=(VerifyCenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrBlocks_ == nullptr
        && return this->requestId_ == nullptr && return this->routeEntries_ == nullptr && return this->status_ == nullptr; };
    // cidrBlocks Field Functions 
    bool hasCidrBlocks() const { return this->cidrBlocks_ != nullptr;};
    void deleteCidrBlocks() { this->cidrBlocks_ = nullptr;};
    inline const vector<string> & cidrBlocks() const { DARABONBA_PTR_GET_CONST(cidrBlocks_, vector<string>) };
    inline vector<string> cidrBlocks() { DARABONBA_PTR_GET(cidrBlocks_, vector<string>) };
    inline VerifyCenResponseBody& setCidrBlocks(const vector<string> & cidrBlocks) { DARABONBA_PTR_SET_VALUE(cidrBlocks_, cidrBlocks) };
    inline VerifyCenResponseBody& setCidrBlocks(vector<string> && cidrBlocks) { DARABONBA_PTR_SET_RVALUE(cidrBlocks_, cidrBlocks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyCenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeEntries Field Functions 
    bool hasRouteEntries() const { return this->routeEntries_ != nullptr;};
    void deleteRouteEntries() { this->routeEntries_ = nullptr;};
    inline const vector<VerifyCenResponseBodyRouteEntries> & routeEntries() const { DARABONBA_PTR_GET_CONST(routeEntries_, vector<VerifyCenResponseBodyRouteEntries>) };
    inline vector<VerifyCenResponseBodyRouteEntries> routeEntries() { DARABONBA_PTR_GET(routeEntries_, vector<VerifyCenResponseBodyRouteEntries>) };
    inline VerifyCenResponseBody& setRouteEntries(const vector<VerifyCenResponseBodyRouteEntries> & routeEntries) { DARABONBA_PTR_SET_VALUE(routeEntries_, routeEntries) };
    inline VerifyCenResponseBody& setRouteEntries(vector<VerifyCenResponseBodyRouteEntries> && routeEntries) { DARABONBA_PTR_SET_RVALUE(routeEntries_, routeEntries) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline VerifyCenResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The recommended IPv4 CIDR blocks. Three CIDR blocks are randomly recommended. This parameter is returned when the `Status` value is `Conflict`.
    std::shared_ptr<vector<string>> cidrBlocks_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The routes provided by the CEN instance.
    std::shared_ptr<vector<VerifyCenResponseBodyRouteEntries>> routeEntries_ = nullptr;
    // The check result of CIDR block conflict.
    // 
    // Valid values:
    // 
    // *   InvalidCen.CenUidInvalid: The Alibaba Cloud account is invalid or the Alibaba Cloud account does not have the permission to access Elastic Desktop Service.
    // *   VerifyCode.InvalidTokenCode: The verification code is invalid.
    // *   VerifyCode.ReachTokenRetryTime: The maximum number of times for entering a verification code reaches the limit.
    // *   Conflict: A CIDR block conflict exists. If the verification result of at least one route is Conflict, Conflict is returned for this parameter.
    // *   Access: The verification is passed. If the verification result for all routes is Access, Access is returned for this parameter.
    // *   InvalidCen.ParameterCenInstanceId: The Alibaba Cloud account does not own the CEN instance.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
