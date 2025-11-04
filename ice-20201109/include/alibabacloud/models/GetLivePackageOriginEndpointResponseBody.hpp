// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVEPACKAGEORIGINENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLIVEPACKAGEORIGINENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLivePackageOriginEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLivePackageOriginEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LivePackageOriginEndpoint, livePackageOriginEndpoint_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLivePackageOriginEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LivePackageOriginEndpoint, livePackageOriginEndpoint_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLivePackageOriginEndpointResponseBody() = default ;
    GetLivePackageOriginEndpointResponseBody(const GetLivePackageOriginEndpointResponseBody &) = default ;
    GetLivePackageOriginEndpointResponseBody(GetLivePackageOriginEndpointResponseBody &&) = default ;
    GetLivePackageOriginEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLivePackageOriginEndpointResponseBody() = default ;
    GetLivePackageOriginEndpointResponseBody& operator=(const GetLivePackageOriginEndpointResponseBody &) = default ;
    GetLivePackageOriginEndpointResponseBody& operator=(GetLivePackageOriginEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->livePackageOriginEndpoint_ == nullptr
        && return this->requestId_ == nullptr; };
    // livePackageOriginEndpoint Field Functions 
    bool hasLivePackageOriginEndpoint() const { return this->livePackageOriginEndpoint_ != nullptr;};
    void deleteLivePackageOriginEndpoint() { this->livePackageOriginEndpoint_ = nullptr;};
    inline const GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint & livePackageOriginEndpoint() const { DARABONBA_PTR_GET_CONST(livePackageOriginEndpoint_, GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint) };
    inline GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint livePackageOriginEndpoint() { DARABONBA_PTR_GET(livePackageOriginEndpoint_, GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint) };
    inline GetLivePackageOriginEndpointResponseBody& setLivePackageOriginEndpoint(const GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint & livePackageOriginEndpoint) { DARABONBA_PTR_SET_VALUE(livePackageOriginEndpoint_, livePackageOriginEndpoint) };
    inline GetLivePackageOriginEndpointResponseBody& setLivePackageOriginEndpoint(GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint && livePackageOriginEndpoint) { DARABONBA_PTR_SET_RVALUE(livePackageOriginEndpoint_, livePackageOriginEndpoint) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLivePackageOriginEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the origin endpoints.
    std::shared_ptr<GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint> livePackageOriginEndpoint_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
