// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICETRAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICETRAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetServiceTrailResponseBodyServiceTrail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetServiceTrailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceTrailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceTrail, serviceTrail_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceTrailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceTrail, serviceTrail_);
    };
    GetServiceTrailResponseBody() = default ;
    GetServiceTrailResponseBody(const GetServiceTrailResponseBody &) = default ;
    GetServiceTrailResponseBody(GetServiceTrailResponseBody &&) = default ;
    GetServiceTrailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceTrailResponseBody() = default ;
    GetServiceTrailResponseBody& operator=(const GetServiceTrailResponseBody &) = default ;
    GetServiceTrailResponseBody& operator=(GetServiceTrailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->serviceTrail_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceTrailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceTrail Field Functions 
    bool hasServiceTrail() const { return this->serviceTrail_ != nullptr;};
    void deleteServiceTrail() { this->serviceTrail_ = nullptr;};
    inline const GetServiceTrailResponseBodyServiceTrail & serviceTrail() const { DARABONBA_PTR_GET_CONST(serviceTrail_, GetServiceTrailResponseBodyServiceTrail) };
    inline GetServiceTrailResponseBodyServiceTrail serviceTrail() { DARABONBA_PTR_GET(serviceTrail_, GetServiceTrailResponseBodyServiceTrail) };
    inline GetServiceTrailResponseBody& setServiceTrail(const GetServiceTrailResponseBodyServiceTrail & serviceTrail) { DARABONBA_PTR_SET_VALUE(serviceTrail_, serviceTrail) };
    inline GetServiceTrailResponseBody& setServiceTrail(GetServiceTrailResponseBodyServiceTrail && serviceTrail) { DARABONBA_PTR_SET_RVALUE(serviceTrail_, serviceTrail) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The configurations of the service trail.
    std::shared_ptr<GetServiceTrailResponseBodyServiceTrail> serviceTrail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
