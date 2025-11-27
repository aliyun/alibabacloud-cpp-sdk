// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRENDERINGSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTRENDERINGSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartRenderingSessionResponseBodyLocation.hpp>
#include <vector>
#include <alibabacloud/models/StartRenderingSessionResponseBodyPortMappings.hpp>
#include <alibabacloud/models/StartRenderingSessionResponseBodyStateInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class StartRenderingSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRenderingSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(IsRepeatedRequest, isRepeatedRequest_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(PortMappings, portMappings_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(StateInfo, stateInfo_);
    };
    friend void from_json(const Darabonba::Json& j, StartRenderingSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(IsRepeatedRequest, isRepeatedRequest_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(PortMappings, portMappings_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(StateInfo, stateInfo_);
    };
    StartRenderingSessionResponseBody() = default ;
    StartRenderingSessionResponseBody(const StartRenderingSessionResponseBody &) = default ;
    StartRenderingSessionResponseBody(StartRenderingSessionResponseBody &&) = default ;
    StartRenderingSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRenderingSessionResponseBody() = default ;
    StartRenderingSessionResponseBody& operator=(const StartRenderingSessionResponseBody &) = default ;
    StartRenderingSessionResponseBody& operator=(StartRenderingSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostname_ == nullptr
        && return this->isRepeatedRequest_ == nullptr && return this->location_ == nullptr && return this->portMappings_ == nullptr && return this->renderingInstanceId_ == nullptr && return this->requestId_ == nullptr
        && return this->sessionId_ == nullptr && return this->stateInfo_ == nullptr; };
    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline StartRenderingSessionResponseBody& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // isRepeatedRequest Field Functions 
    bool hasIsRepeatedRequest() const { return this->isRepeatedRequest_ != nullptr;};
    void deleteIsRepeatedRequest() { this->isRepeatedRequest_ = nullptr;};
    inline bool isRepeatedRequest() const { DARABONBA_PTR_GET_DEFAULT(isRepeatedRequest_, false) };
    inline StartRenderingSessionResponseBody& setIsRepeatedRequest(bool isRepeatedRequest) { DARABONBA_PTR_SET_VALUE(isRepeatedRequest_, isRepeatedRequest) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const StartRenderingSessionResponseBodyLocation & location() const { DARABONBA_PTR_GET_CONST(location_, StartRenderingSessionResponseBodyLocation) };
    inline StartRenderingSessionResponseBodyLocation location() { DARABONBA_PTR_GET(location_, StartRenderingSessionResponseBodyLocation) };
    inline StartRenderingSessionResponseBody& setLocation(const StartRenderingSessionResponseBodyLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline StartRenderingSessionResponseBody& setLocation(StartRenderingSessionResponseBodyLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // portMappings Field Functions 
    bool hasPortMappings() const { return this->portMappings_ != nullptr;};
    void deletePortMappings() { this->portMappings_ = nullptr;};
    inline const vector<StartRenderingSessionResponseBodyPortMappings> & portMappings() const { DARABONBA_PTR_GET_CONST(portMappings_, vector<StartRenderingSessionResponseBodyPortMappings>) };
    inline vector<StartRenderingSessionResponseBodyPortMappings> portMappings() { DARABONBA_PTR_GET(portMappings_, vector<StartRenderingSessionResponseBodyPortMappings>) };
    inline StartRenderingSessionResponseBody& setPortMappings(const vector<StartRenderingSessionResponseBodyPortMappings> & portMappings) { DARABONBA_PTR_SET_VALUE(portMappings_, portMappings) };
    inline StartRenderingSessionResponseBody& setPortMappings(vector<StartRenderingSessionResponseBodyPortMappings> && portMappings) { DARABONBA_PTR_SET_RVALUE(portMappings_, portMappings) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline StartRenderingSessionResponseBody& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartRenderingSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline StartRenderingSessionResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // stateInfo Field Functions 
    bool hasStateInfo() const { return this->stateInfo_ != nullptr;};
    void deleteStateInfo() { this->stateInfo_ = nullptr;};
    inline const StartRenderingSessionResponseBodyStateInfo & stateInfo() const { DARABONBA_PTR_GET_CONST(stateInfo_, StartRenderingSessionResponseBodyStateInfo) };
    inline StartRenderingSessionResponseBodyStateInfo stateInfo() { DARABONBA_PTR_GET(stateInfo_, StartRenderingSessionResponseBodyStateInfo) };
    inline StartRenderingSessionResponseBody& setStateInfo(const StartRenderingSessionResponseBodyStateInfo & stateInfo) { DARABONBA_PTR_SET_VALUE(stateInfo_, stateInfo) };
    inline StartRenderingSessionResponseBody& setStateInfo(StartRenderingSessionResponseBodyStateInfo && stateInfo) { DARABONBA_PTR_SET_RVALUE(stateInfo_, stateInfo) };


  protected:
    std::shared_ptr<string> hostname_ = nullptr;
    std::shared_ptr<bool> isRepeatedRequest_ = nullptr;
    std::shared_ptr<StartRenderingSessionResponseBodyLocation> location_ = nullptr;
    std::shared_ptr<vector<StartRenderingSessionResponseBodyPortMappings>> portMappings_ = nullptr;
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<StartRenderingSessionResponseBodyStateInfo> stateInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
