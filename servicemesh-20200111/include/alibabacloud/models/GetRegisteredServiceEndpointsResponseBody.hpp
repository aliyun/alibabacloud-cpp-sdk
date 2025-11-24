// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGISTEREDSERVICEENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREGISTEREDSERVICEENDPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRegisteredServiceEndpointsResponseBodyEndPointSlice.hpp>
#include <vector>
#include <alibabacloud/models/GetRegisteredServiceEndpointsResponseBodyServiceEndpoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GetRegisteredServiceEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegisteredServiceEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndPointSlice, endPointSlice_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceEndpoints, serviceEndpoints_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegisteredServiceEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndPointSlice, endPointSlice_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceEndpoints, serviceEndpoints_);
    };
    GetRegisteredServiceEndpointsResponseBody() = default ;
    GetRegisteredServiceEndpointsResponseBody(const GetRegisteredServiceEndpointsResponseBody &) = default ;
    GetRegisteredServiceEndpointsResponseBody(GetRegisteredServiceEndpointsResponseBody &&) = default ;
    GetRegisteredServiceEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegisteredServiceEndpointsResponseBody() = default ;
    GetRegisteredServiceEndpointsResponseBody& operator=(const GetRegisteredServiceEndpointsResponseBody &) = default ;
    GetRegisteredServiceEndpointsResponseBody& operator=(GetRegisteredServiceEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endPointSlice_ == nullptr
        && return this->requestId_ == nullptr && return this->serviceEndpoints_ == nullptr; };
    // endPointSlice Field Functions 
    bool hasEndPointSlice() const { return this->endPointSlice_ != nullptr;};
    void deleteEndPointSlice() { this->endPointSlice_ = nullptr;};
    inline const GetRegisteredServiceEndpointsResponseBodyEndPointSlice & endPointSlice() const { DARABONBA_PTR_GET_CONST(endPointSlice_, GetRegisteredServiceEndpointsResponseBodyEndPointSlice) };
    inline GetRegisteredServiceEndpointsResponseBodyEndPointSlice endPointSlice() { DARABONBA_PTR_GET(endPointSlice_, GetRegisteredServiceEndpointsResponseBodyEndPointSlice) };
    inline GetRegisteredServiceEndpointsResponseBody& setEndPointSlice(const GetRegisteredServiceEndpointsResponseBodyEndPointSlice & endPointSlice) { DARABONBA_PTR_SET_VALUE(endPointSlice_, endPointSlice) };
    inline GetRegisteredServiceEndpointsResponseBody& setEndPointSlice(GetRegisteredServiceEndpointsResponseBodyEndPointSlice && endPointSlice) { DARABONBA_PTR_SET_RVALUE(endPointSlice_, endPointSlice) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRegisteredServiceEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceEndpoints Field Functions 
    bool hasServiceEndpoints() const { return this->serviceEndpoints_ != nullptr;};
    void deleteServiceEndpoints() { this->serviceEndpoints_ = nullptr;};
    inline const vector<GetRegisteredServiceEndpointsResponseBodyServiceEndpoints> & serviceEndpoints() const { DARABONBA_PTR_GET_CONST(serviceEndpoints_, vector<GetRegisteredServiceEndpointsResponseBodyServiceEndpoints>) };
    inline vector<GetRegisteredServiceEndpointsResponseBodyServiceEndpoints> serviceEndpoints() { DARABONBA_PTR_GET(serviceEndpoints_, vector<GetRegisteredServiceEndpointsResponseBodyServiceEndpoints>) };
    inline GetRegisteredServiceEndpointsResponseBody& setServiceEndpoints(const vector<GetRegisteredServiceEndpointsResponseBodyServiceEndpoints> & serviceEndpoints) { DARABONBA_PTR_SET_VALUE(serviceEndpoints_, serviceEndpoints) };
    inline GetRegisteredServiceEndpointsResponseBody& setServiceEndpoints(vector<GetRegisteredServiceEndpointsResponseBodyServiceEndpoints> && serviceEndpoints) { DARABONBA_PTR_SET_RVALUE(serviceEndpoints_, serviceEndpoints) };


  protected:
    // The name of the registered service.
    std::shared_ptr<GetRegisteredServiceEndpointsResponseBodyEndPointSlice> endPointSlice_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    // The IP address of the registered service.
    std::shared_ptr<vector<GetRegisteredServiceEndpointsResponseBodyServiceEndpoints>> serviceEndpoints_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
