// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENDERINGSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENDERINGSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRenderingSessionResponseBodyAdditionalIngresses.hpp>
#include <alibabacloud/models/DescribeRenderingSessionResponseBodyLocation.hpp>
#include <alibabacloud/models/DescribeRenderingSessionResponseBodyPortMappings.hpp>
#include <alibabacloud/models/DescribeRenderingSessionResponseBodyStateInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeRenderingSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenderingSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalIngresses, additionalIngresses_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(PatchId, patchId_);
      DARABONBA_PTR_TO_JSON(PortMappings, portMappings_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StateInfo, stateInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenderingSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalIngresses, additionalIngresses_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(PatchId, patchId_);
      DARABONBA_PTR_FROM_JSON(PortMappings, portMappings_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StateInfo, stateInfo_);
    };
    DescribeRenderingSessionResponseBody() = default ;
    DescribeRenderingSessionResponseBody(const DescribeRenderingSessionResponseBody &) = default ;
    DescribeRenderingSessionResponseBody(DescribeRenderingSessionResponseBody &&) = default ;
    DescribeRenderingSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenderingSessionResponseBody() = default ;
    DescribeRenderingSessionResponseBody& operator=(const DescribeRenderingSessionResponseBody &) = default ;
    DescribeRenderingSessionResponseBody& operator=(DescribeRenderingSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->additionalIngresses_ != nullptr
        && this->appId_ != nullptr && this->clientId_ != nullptr && this->hostname_ != nullptr && this->isp_ != nullptr && this->location_ != nullptr
        && this->patchId_ != nullptr && this->portMappings_ != nullptr && this->renderingInstanceId_ != nullptr && this->requestId_ != nullptr && this->sessionId_ != nullptr
        && this->startTime_ != nullptr && this->stateInfo_ != nullptr; };
    // additionalIngresses Field Functions 
    bool hasAdditionalIngresses() const { return this->additionalIngresses_ != nullptr;};
    void deleteAdditionalIngresses() { this->additionalIngresses_ = nullptr;};
    inline const vector<DescribeRenderingSessionResponseBodyAdditionalIngresses> & additionalIngresses() const { DARABONBA_PTR_GET_CONST(additionalIngresses_, vector<DescribeRenderingSessionResponseBodyAdditionalIngresses>) };
    inline vector<DescribeRenderingSessionResponseBodyAdditionalIngresses> additionalIngresses() { DARABONBA_PTR_GET(additionalIngresses_, vector<DescribeRenderingSessionResponseBodyAdditionalIngresses>) };
    inline DescribeRenderingSessionResponseBody& setAdditionalIngresses(const vector<DescribeRenderingSessionResponseBodyAdditionalIngresses> & additionalIngresses) { DARABONBA_PTR_SET_VALUE(additionalIngresses_, additionalIngresses) };
    inline DescribeRenderingSessionResponseBody& setAdditionalIngresses(vector<DescribeRenderingSessionResponseBodyAdditionalIngresses> && additionalIngresses) { DARABONBA_PTR_SET_RVALUE(additionalIngresses_, additionalIngresses) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeRenderingSessionResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DescribeRenderingSessionResponseBody& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline DescribeRenderingSessionResponseBody& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeRenderingSessionResponseBody& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const DescribeRenderingSessionResponseBodyLocation & location() const { DARABONBA_PTR_GET_CONST(location_, DescribeRenderingSessionResponseBodyLocation) };
    inline DescribeRenderingSessionResponseBodyLocation location() { DARABONBA_PTR_GET(location_, DescribeRenderingSessionResponseBodyLocation) };
    inline DescribeRenderingSessionResponseBody& setLocation(const DescribeRenderingSessionResponseBodyLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline DescribeRenderingSessionResponseBody& setLocation(DescribeRenderingSessionResponseBodyLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // patchId Field Functions 
    bool hasPatchId() const { return this->patchId_ != nullptr;};
    void deletePatchId() { this->patchId_ = nullptr;};
    inline string patchId() const { DARABONBA_PTR_GET_DEFAULT(patchId_, "") };
    inline DescribeRenderingSessionResponseBody& setPatchId(string patchId) { DARABONBA_PTR_SET_VALUE(patchId_, patchId) };


    // portMappings Field Functions 
    bool hasPortMappings() const { return this->portMappings_ != nullptr;};
    void deletePortMappings() { this->portMappings_ = nullptr;};
    inline const vector<DescribeRenderingSessionResponseBodyPortMappings> & portMappings() const { DARABONBA_PTR_GET_CONST(portMappings_, vector<DescribeRenderingSessionResponseBodyPortMappings>) };
    inline vector<DescribeRenderingSessionResponseBodyPortMappings> portMappings() { DARABONBA_PTR_GET(portMappings_, vector<DescribeRenderingSessionResponseBodyPortMappings>) };
    inline DescribeRenderingSessionResponseBody& setPortMappings(const vector<DescribeRenderingSessionResponseBodyPortMappings> & portMappings) { DARABONBA_PTR_SET_VALUE(portMappings_, portMappings) };
    inline DescribeRenderingSessionResponseBody& setPortMappings(vector<DescribeRenderingSessionResponseBodyPortMappings> && portMappings) { DARABONBA_PTR_SET_RVALUE(portMappings_, portMappings) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline DescribeRenderingSessionResponseBody& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRenderingSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DescribeRenderingSessionResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRenderingSessionResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // stateInfo Field Functions 
    bool hasStateInfo() const { return this->stateInfo_ != nullptr;};
    void deleteStateInfo() { this->stateInfo_ = nullptr;};
    inline const DescribeRenderingSessionResponseBodyStateInfo & stateInfo() const { DARABONBA_PTR_GET_CONST(stateInfo_, DescribeRenderingSessionResponseBodyStateInfo) };
    inline DescribeRenderingSessionResponseBodyStateInfo stateInfo() { DARABONBA_PTR_GET(stateInfo_, DescribeRenderingSessionResponseBodyStateInfo) };
    inline DescribeRenderingSessionResponseBody& setStateInfo(const DescribeRenderingSessionResponseBodyStateInfo & stateInfo) { DARABONBA_PTR_SET_VALUE(stateInfo_, stateInfo) };
    inline DescribeRenderingSessionResponseBody& setStateInfo(DescribeRenderingSessionResponseBodyStateInfo && stateInfo) { DARABONBA_PTR_SET_RVALUE(stateInfo_, stateInfo) };


  protected:
    std::shared_ptr<vector<DescribeRenderingSessionResponseBodyAdditionalIngresses>> additionalIngresses_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> clientId_ = nullptr;
    std::shared_ptr<string> hostname_ = nullptr;
    std::shared_ptr<string> isp_ = nullptr;
    std::shared_ptr<DescribeRenderingSessionResponseBodyLocation> location_ = nullptr;
    std::shared_ptr<string> patchId_ = nullptr;
    std::shared_ptr<vector<DescribeRenderingSessionResponseBodyPortMappings>> portMappings_ = nullptr;
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<DescribeRenderingSessionResponseBodyStateInfo> stateInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
