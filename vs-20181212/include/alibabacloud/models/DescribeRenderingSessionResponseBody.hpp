// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENDERINGSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENDERINGSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class StateInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StateInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, StateInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      StateInfo() = default ;
      StateInfo(const StateInfo &) = default ;
      StateInfo(StateInfo &&) = default ;
      StateInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StateInfo() = default ;
      StateInfo& operator=(const StateInfo &) = default ;
      StateInfo& operator=(StateInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->state_ == nullptr && this->updateTime_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline StateInfo& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline StateInfo& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline StateInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> comment_ {};
      shared_ptr<string> state_ {};
      shared_ptr<string> updateTime_ {};
    };

    class PortMappings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PortMappings& obj) { 
        DARABONBA_PTR_TO_JSON(ExternalPort, externalPort_);
        DARABONBA_PTR_TO_JSON(InternalPort, internalPort_);
      };
      friend void from_json(const Darabonba::Json& j, PortMappings& obj) { 
        DARABONBA_PTR_FROM_JSON(ExternalPort, externalPort_);
        DARABONBA_PTR_FROM_JSON(InternalPort, internalPort_);
      };
      PortMappings() = default ;
      PortMappings(const PortMappings &) = default ;
      PortMappings(PortMappings &&) = default ;
      PortMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PortMappings() = default ;
      PortMappings& operator=(const PortMappings &) = default ;
      PortMappings& operator=(PortMappings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->externalPort_ == nullptr
        && this->internalPort_ == nullptr; };
      // externalPort Field Functions 
      bool hasExternalPort() const { return this->externalPort_ != nullptr;};
      void deleteExternalPort() { this->externalPort_ = nullptr;};
      inline string getExternalPort() const { DARABONBA_PTR_GET_DEFAULT(externalPort_, "") };
      inline PortMappings& setExternalPort(string externalPort) { DARABONBA_PTR_SET_VALUE(externalPort_, externalPort) };


      // internalPort Field Functions 
      bool hasInternalPort() const { return this->internalPort_ != nullptr;};
      void deleteInternalPort() { this->internalPort_ = nullptr;};
      inline string getInternalPort() const { DARABONBA_PTR_GET_DEFAULT(internalPort_, "") };
      inline PortMappings& setInternalPort(string internalPort) { DARABONBA_PTR_SET_VALUE(internalPort_, internalPort) };


    protected:
      shared_ptr<string> externalPort_ {};
      shared_ptr<string> internalPort_ {};
    };

    class Location : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Location& obj) { 
        DARABONBA_PTR_TO_JSON(ProvinceCode, provinceCode_);
      };
      friend void from_json(const Darabonba::Json& j, Location& obj) { 
        DARABONBA_PTR_FROM_JSON(ProvinceCode, provinceCode_);
      };
      Location() = default ;
      Location(const Location &) = default ;
      Location(Location &&) = default ;
      Location(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Location() = default ;
      Location& operator=(const Location &) = default ;
      Location& operator=(Location &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->provinceCode_ == nullptr; };
      // provinceCode Field Functions 
      bool hasProvinceCode() const { return this->provinceCode_ != nullptr;};
      void deleteProvinceCode() { this->provinceCode_ = nullptr;};
      inline string getProvinceCode() const { DARABONBA_PTR_GET_DEFAULT(provinceCode_, "") };
      inline Location& setProvinceCode(string provinceCode) { DARABONBA_PTR_SET_VALUE(provinceCode_, provinceCode) };


    protected:
      shared_ptr<string> provinceCode_ {};
    };

    class AdditionalIngresses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdditionalIngresses& obj) { 
        DARABONBA_PTR_TO_JSON(Hostname, hostname_);
        DARABONBA_PTR_TO_JSON(Isp, isp_);
        DARABONBA_PTR_TO_JSON(PortMappings, portMappings_);
      };
      friend void from_json(const Darabonba::Json& j, AdditionalIngresses& obj) { 
        DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
        DARABONBA_PTR_FROM_JSON(Isp, isp_);
        DARABONBA_PTR_FROM_JSON(PortMappings, portMappings_);
      };
      AdditionalIngresses() = default ;
      AdditionalIngresses(const AdditionalIngresses &) = default ;
      AdditionalIngresses(AdditionalIngresses &&) = default ;
      AdditionalIngresses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdditionalIngresses() = default ;
      AdditionalIngresses& operator=(const AdditionalIngresses &) = default ;
      AdditionalIngresses& operator=(AdditionalIngresses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PortMappings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PortMappings& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalPort, externalPort_);
          DARABONBA_PTR_TO_JSON(InternalPort, internalPort_);
        };
        friend void from_json(const Darabonba::Json& j, PortMappings& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalPort, externalPort_);
          DARABONBA_PTR_FROM_JSON(InternalPort, internalPort_);
        };
        PortMappings() = default ;
        PortMappings(const PortMappings &) = default ;
        PortMappings(PortMappings &&) = default ;
        PortMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PortMappings() = default ;
        PortMappings& operator=(const PortMappings &) = default ;
        PortMappings& operator=(PortMappings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->externalPort_ == nullptr
        && this->internalPort_ == nullptr; };
        // externalPort Field Functions 
        bool hasExternalPort() const { return this->externalPort_ != nullptr;};
        void deleteExternalPort() { this->externalPort_ = nullptr;};
        inline string getExternalPort() const { DARABONBA_PTR_GET_DEFAULT(externalPort_, "") };
        inline PortMappings& setExternalPort(string externalPort) { DARABONBA_PTR_SET_VALUE(externalPort_, externalPort) };


        // internalPort Field Functions 
        bool hasInternalPort() const { return this->internalPort_ != nullptr;};
        void deleteInternalPort() { this->internalPort_ = nullptr;};
        inline string getInternalPort() const { DARABONBA_PTR_GET_DEFAULT(internalPort_, "") };
        inline PortMappings& setInternalPort(string internalPort) { DARABONBA_PTR_SET_VALUE(internalPort_, internalPort) };


      protected:
        shared_ptr<string> externalPort_ {};
        shared_ptr<string> internalPort_ {};
      };

      virtual bool empty() const override { return this->hostname_ == nullptr
        && this->isp_ == nullptr && this->portMappings_ == nullptr; };
      // hostname Field Functions 
      bool hasHostname() const { return this->hostname_ != nullptr;};
      void deleteHostname() { this->hostname_ = nullptr;};
      inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
      inline AdditionalIngresses& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
      inline AdditionalIngresses& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


      // portMappings Field Functions 
      bool hasPortMappings() const { return this->portMappings_ != nullptr;};
      void deletePortMappings() { this->portMappings_ = nullptr;};
      inline const vector<AdditionalIngresses::PortMappings> & getPortMappings() const { DARABONBA_PTR_GET_CONST(portMappings_, vector<AdditionalIngresses::PortMappings>) };
      inline vector<AdditionalIngresses::PortMappings> getPortMappings() { DARABONBA_PTR_GET(portMappings_, vector<AdditionalIngresses::PortMappings>) };
      inline AdditionalIngresses& setPortMappings(const vector<AdditionalIngresses::PortMappings> & portMappings) { DARABONBA_PTR_SET_VALUE(portMappings_, portMappings) };
      inline AdditionalIngresses& setPortMappings(vector<AdditionalIngresses::PortMappings> && portMappings) { DARABONBA_PTR_SET_RVALUE(portMappings_, portMappings) };


    protected:
      shared_ptr<string> hostname_ {};
      shared_ptr<string> isp_ {};
      shared_ptr<vector<AdditionalIngresses::PortMappings>> portMappings_ {};
    };

    virtual bool empty() const override { return this->additionalIngresses_ == nullptr
        && this->appId_ == nullptr && this->clientId_ == nullptr && this->hostname_ == nullptr && this->isp_ == nullptr && this->location_ == nullptr
        && this->patchId_ == nullptr && this->portMappings_ == nullptr && this->renderingInstanceId_ == nullptr && this->requestId_ == nullptr && this->sessionId_ == nullptr
        && this->startTime_ == nullptr && this->stateInfo_ == nullptr; };
    // additionalIngresses Field Functions 
    bool hasAdditionalIngresses() const { return this->additionalIngresses_ != nullptr;};
    void deleteAdditionalIngresses() { this->additionalIngresses_ = nullptr;};
    inline const vector<DescribeRenderingSessionResponseBody::AdditionalIngresses> & getAdditionalIngresses() const { DARABONBA_PTR_GET_CONST(additionalIngresses_, vector<DescribeRenderingSessionResponseBody::AdditionalIngresses>) };
    inline vector<DescribeRenderingSessionResponseBody::AdditionalIngresses> getAdditionalIngresses() { DARABONBA_PTR_GET(additionalIngresses_, vector<DescribeRenderingSessionResponseBody::AdditionalIngresses>) };
    inline DescribeRenderingSessionResponseBody& setAdditionalIngresses(const vector<DescribeRenderingSessionResponseBody::AdditionalIngresses> & additionalIngresses) { DARABONBA_PTR_SET_VALUE(additionalIngresses_, additionalIngresses) };
    inline DescribeRenderingSessionResponseBody& setAdditionalIngresses(vector<DescribeRenderingSessionResponseBody::AdditionalIngresses> && additionalIngresses) { DARABONBA_PTR_SET_RVALUE(additionalIngresses_, additionalIngresses) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeRenderingSessionResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DescribeRenderingSessionResponseBody& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline DescribeRenderingSessionResponseBody& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeRenderingSessionResponseBody& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const DescribeRenderingSessionResponseBody::Location & getLocation() const { DARABONBA_PTR_GET_CONST(location_, DescribeRenderingSessionResponseBody::Location) };
    inline DescribeRenderingSessionResponseBody::Location getLocation() { DARABONBA_PTR_GET(location_, DescribeRenderingSessionResponseBody::Location) };
    inline DescribeRenderingSessionResponseBody& setLocation(const DescribeRenderingSessionResponseBody::Location & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline DescribeRenderingSessionResponseBody& setLocation(DescribeRenderingSessionResponseBody::Location && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // patchId Field Functions 
    bool hasPatchId() const { return this->patchId_ != nullptr;};
    void deletePatchId() { this->patchId_ = nullptr;};
    inline string getPatchId() const { DARABONBA_PTR_GET_DEFAULT(patchId_, "") };
    inline DescribeRenderingSessionResponseBody& setPatchId(string patchId) { DARABONBA_PTR_SET_VALUE(patchId_, patchId) };


    // portMappings Field Functions 
    bool hasPortMappings() const { return this->portMappings_ != nullptr;};
    void deletePortMappings() { this->portMappings_ = nullptr;};
    inline const vector<DescribeRenderingSessionResponseBody::PortMappings> & getPortMappings() const { DARABONBA_PTR_GET_CONST(portMappings_, vector<DescribeRenderingSessionResponseBody::PortMappings>) };
    inline vector<DescribeRenderingSessionResponseBody::PortMappings> getPortMappings() { DARABONBA_PTR_GET(portMappings_, vector<DescribeRenderingSessionResponseBody::PortMappings>) };
    inline DescribeRenderingSessionResponseBody& setPortMappings(const vector<DescribeRenderingSessionResponseBody::PortMappings> & portMappings) { DARABONBA_PTR_SET_VALUE(portMappings_, portMappings) };
    inline DescribeRenderingSessionResponseBody& setPortMappings(vector<DescribeRenderingSessionResponseBody::PortMappings> && portMappings) { DARABONBA_PTR_SET_RVALUE(portMappings_, portMappings) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline DescribeRenderingSessionResponseBody& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRenderingSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DescribeRenderingSessionResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRenderingSessionResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // stateInfo Field Functions 
    bool hasStateInfo() const { return this->stateInfo_ != nullptr;};
    void deleteStateInfo() { this->stateInfo_ = nullptr;};
    inline const DescribeRenderingSessionResponseBody::StateInfo & getStateInfo() const { DARABONBA_PTR_GET_CONST(stateInfo_, DescribeRenderingSessionResponseBody::StateInfo) };
    inline DescribeRenderingSessionResponseBody::StateInfo getStateInfo() { DARABONBA_PTR_GET(stateInfo_, DescribeRenderingSessionResponseBody::StateInfo) };
    inline DescribeRenderingSessionResponseBody& setStateInfo(const DescribeRenderingSessionResponseBody::StateInfo & stateInfo) { DARABONBA_PTR_SET_VALUE(stateInfo_, stateInfo) };
    inline DescribeRenderingSessionResponseBody& setStateInfo(DescribeRenderingSessionResponseBody::StateInfo && stateInfo) { DARABONBA_PTR_SET_RVALUE(stateInfo_, stateInfo) };


  protected:
    shared_ptr<vector<DescribeRenderingSessionResponseBody::AdditionalIngresses>> additionalIngresses_ {};
    shared_ptr<string> appId_ {};
    shared_ptr<string> clientId_ {};
    shared_ptr<string> hostname_ {};
    shared_ptr<string> isp_ {};
    shared_ptr<DescribeRenderingSessionResponseBody::Location> location_ {};
    shared_ptr<string> patchId_ {};
    shared_ptr<vector<DescribeRenderingSessionResponseBody::PortMappings>> portMappings_ {};
    shared_ptr<string> renderingInstanceId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<DescribeRenderingSessionResponseBody::StateInfo> stateInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
