// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEPACKAGEORIGINENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEPACKAGEORIGINENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateLivePackageOriginEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLivePackageOriginEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LivePackageOriginEndpoint, livePackageOriginEndpoint_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLivePackageOriginEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LivePackageOriginEndpoint, livePackageOriginEndpoint_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateLivePackageOriginEndpointResponseBody() = default ;
    UpdateLivePackageOriginEndpointResponseBody(const UpdateLivePackageOriginEndpointResponseBody &) = default ;
    UpdateLivePackageOriginEndpointResponseBody(UpdateLivePackageOriginEndpointResponseBody &&) = default ;
    UpdateLivePackageOriginEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLivePackageOriginEndpointResponseBody() = default ;
    UpdateLivePackageOriginEndpointResponseBody& operator=(const UpdateLivePackageOriginEndpointResponseBody &) = default ;
    UpdateLivePackageOriginEndpointResponseBody& operator=(UpdateLivePackageOriginEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->livePackageOriginEndpoint_ != nullptr
        && this->requestId_ != nullptr; };
    // livePackageOriginEndpoint Field Functions 
    bool hasLivePackageOriginEndpoint() const { return this->livePackageOriginEndpoint_ != nullptr;};
    void deleteLivePackageOriginEndpoint() { this->livePackageOriginEndpoint_ = nullptr;};
    inline const UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint & livePackageOriginEndpoint() const { DARABONBA_PTR_GET_CONST(livePackageOriginEndpoint_, UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint) };
    inline UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint livePackageOriginEndpoint() { DARABONBA_PTR_GET(livePackageOriginEndpoint_, UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint) };
    inline UpdateLivePackageOriginEndpointResponseBody& setLivePackageOriginEndpoint(const UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint & livePackageOriginEndpoint) { DARABONBA_PTR_SET_VALUE(livePackageOriginEndpoint_, livePackageOriginEndpoint) };
    inline UpdateLivePackageOriginEndpointResponseBody& setLivePackageOriginEndpoint(UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint && livePackageOriginEndpoint) { DARABONBA_PTR_SET_RVALUE(livePackageOriginEndpoint_, livePackageOriginEndpoint) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateLivePackageOriginEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the origin endpoint.
    std::shared_ptr<UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint> livePackageOriginEndpoint_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
