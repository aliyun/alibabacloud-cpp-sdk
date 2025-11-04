// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVEPACKAGEORIGINENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVEPACKAGEORIGINENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateLivePackageOriginEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLivePackageOriginEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LivePackageOriginEndpoint, livePackageOriginEndpoint_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLivePackageOriginEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LivePackageOriginEndpoint, livePackageOriginEndpoint_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateLivePackageOriginEndpointResponseBody() = default ;
    CreateLivePackageOriginEndpointResponseBody(const CreateLivePackageOriginEndpointResponseBody &) = default ;
    CreateLivePackageOriginEndpointResponseBody(CreateLivePackageOriginEndpointResponseBody &&) = default ;
    CreateLivePackageOriginEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLivePackageOriginEndpointResponseBody() = default ;
    CreateLivePackageOriginEndpointResponseBody& operator=(const CreateLivePackageOriginEndpointResponseBody &) = default ;
    CreateLivePackageOriginEndpointResponseBody& operator=(CreateLivePackageOriginEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->livePackageOriginEndpoint_ == nullptr
        && return this->requestId_ == nullptr; };
    // livePackageOriginEndpoint Field Functions 
    bool hasLivePackageOriginEndpoint() const { return this->livePackageOriginEndpoint_ != nullptr;};
    void deleteLivePackageOriginEndpoint() { this->livePackageOriginEndpoint_ = nullptr;};
    inline const CreateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint & livePackageOriginEndpoint() const { DARABONBA_PTR_GET_CONST(livePackageOriginEndpoint_, CreateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint) };
    inline CreateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint livePackageOriginEndpoint() { DARABONBA_PTR_GET(livePackageOriginEndpoint_, CreateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint) };
    inline CreateLivePackageOriginEndpointResponseBody& setLivePackageOriginEndpoint(const CreateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint & livePackageOriginEndpoint) { DARABONBA_PTR_SET_VALUE(livePackageOriginEndpoint_, livePackageOriginEndpoint) };
    inline CreateLivePackageOriginEndpointResponseBody& setLivePackageOriginEndpoint(CreateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint && livePackageOriginEndpoint) { DARABONBA_PTR_SET_RVALUE(livePackageOriginEndpoint_, livePackageOriginEndpoint) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLivePackageOriginEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the origin endpoint.
    std::shared_ptr<CreateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint> livePackageOriginEndpoint_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
