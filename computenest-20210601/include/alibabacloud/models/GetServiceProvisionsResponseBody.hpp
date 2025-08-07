// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEPROVISIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEPROVISIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceProvisionsResponseBodyServiceProvisions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceProvisionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceProvisionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceProvisions, serviceProvisions_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceProvisionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceProvisions, serviceProvisions_);
    };
    GetServiceProvisionsResponseBody() = default ;
    GetServiceProvisionsResponseBody(const GetServiceProvisionsResponseBody &) = default ;
    GetServiceProvisionsResponseBody(GetServiceProvisionsResponseBody &&) = default ;
    GetServiceProvisionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceProvisionsResponseBody() = default ;
    GetServiceProvisionsResponseBody& operator=(const GetServiceProvisionsResponseBody &) = default ;
    GetServiceProvisionsResponseBody& operator=(GetServiceProvisionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->serviceProvisions_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceProvisionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceProvisions Field Functions 
    bool hasServiceProvisions() const { return this->serviceProvisions_ != nullptr;};
    void deleteServiceProvisions() { this->serviceProvisions_ = nullptr;};
    inline const vector<GetServiceProvisionsResponseBodyServiceProvisions> & serviceProvisions() const { DARABONBA_PTR_GET_CONST(serviceProvisions_, vector<GetServiceProvisionsResponseBodyServiceProvisions>) };
    inline vector<GetServiceProvisionsResponseBodyServiceProvisions> serviceProvisions() { DARABONBA_PTR_GET(serviceProvisions_, vector<GetServiceProvisionsResponseBodyServiceProvisions>) };
    inline GetServiceProvisionsResponseBody& setServiceProvisions(const vector<GetServiceProvisionsResponseBodyServiceProvisions> & serviceProvisions) { DARABONBA_PTR_SET_VALUE(serviceProvisions_, serviceProvisions) };
    inline GetServiceProvisionsResponseBody& setServiceProvisions(vector<GetServiceProvisionsResponseBodyServiceProvisions> && serviceProvisions) { DARABONBA_PTR_SET_RVALUE(serviceProvisions_, serviceProvisions) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the cloud services.
    std::shared_ptr<vector<GetServiceProvisionsResponseBodyServiceProvisions>> serviceProvisions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
