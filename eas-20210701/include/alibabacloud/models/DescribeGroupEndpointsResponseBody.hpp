// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPENDPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeGroupEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGroupEndpointsResponseBody() = default ;
    DescribeGroupEndpointsResponseBody(const DescribeGroupEndpointsResponseBody &) = default ;
    DescribeGroupEndpointsResponseBody(DescribeGroupEndpointsResponseBody &&) = default ;
    DescribeGroupEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupEndpointsResponseBody() = default ;
    DescribeGroupEndpointsResponseBody& operator=(const DescribeGroupEndpointsResponseBody &) = default ;
    DescribeGroupEndpointsResponseBody& operator=(DescribeGroupEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Endpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
        DARABONBA_PTR_TO_JSON(BackendId, backendId_);
        DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
        DARABONBA_PTR_TO_JSON(InternetEndpoints, internetEndpoints_);
        DARABONBA_PTR_TO_JSON(IntranetEndpoints, intranetEndpoints_);
        DARABONBA_PTR_TO_JSON(PathType, pathType_);
        DARABONBA_PTR_TO_JSON(Port, port_);
      };
      friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(BackendId, backendId_);
        DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
        DARABONBA_PTR_FROM_JSON(InternetEndpoints, internetEndpoints_);
        DARABONBA_PTR_FROM_JSON(IntranetEndpoints, intranetEndpoints_);
        DARABONBA_PTR_FROM_JSON(PathType, pathType_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
      };
      Endpoints() = default ;
      Endpoints(const Endpoints &) = default ;
      Endpoints(Endpoints &&) = default ;
      Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Endpoints() = default ;
      Endpoints& operator=(const Endpoints &) = default ;
      Endpoints& operator=(Endpoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backendId_ == nullptr
        && this->endpointType_ == nullptr && this->internetEndpoints_ == nullptr && this->intranetEndpoints_ == nullptr && this->pathType_ == nullptr && this->port_ == nullptr; };
      // backendId Field Functions 
      bool hasBackendId() const { return this->backendId_ != nullptr;};
      void deleteBackendId() { this->backendId_ = nullptr;};
      inline string getBackendId() const { DARABONBA_PTR_GET_DEFAULT(backendId_, "") };
      inline Endpoints& setBackendId(string backendId) { DARABONBA_PTR_SET_VALUE(backendId_, backendId) };


      // endpointType Field Functions 
      bool hasEndpointType() const { return this->endpointType_ != nullptr;};
      void deleteEndpointType() { this->endpointType_ = nullptr;};
      inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
      inline Endpoints& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


      // internetEndpoints Field Functions 
      bool hasInternetEndpoints() const { return this->internetEndpoints_ != nullptr;};
      void deleteInternetEndpoints() { this->internetEndpoints_ = nullptr;};
      inline const vector<string> & getInternetEndpoints() const { DARABONBA_PTR_GET_CONST(internetEndpoints_, vector<string>) };
      inline vector<string> getInternetEndpoints() { DARABONBA_PTR_GET(internetEndpoints_, vector<string>) };
      inline Endpoints& setInternetEndpoints(const vector<string> & internetEndpoints) { DARABONBA_PTR_SET_VALUE(internetEndpoints_, internetEndpoints) };
      inline Endpoints& setInternetEndpoints(vector<string> && internetEndpoints) { DARABONBA_PTR_SET_RVALUE(internetEndpoints_, internetEndpoints) };


      // intranetEndpoints Field Functions 
      bool hasIntranetEndpoints() const { return this->intranetEndpoints_ != nullptr;};
      void deleteIntranetEndpoints() { this->intranetEndpoints_ = nullptr;};
      inline const vector<string> & getIntranetEndpoints() const { DARABONBA_PTR_GET_CONST(intranetEndpoints_, vector<string>) };
      inline vector<string> getIntranetEndpoints() { DARABONBA_PTR_GET(intranetEndpoints_, vector<string>) };
      inline Endpoints& setIntranetEndpoints(const vector<string> & intranetEndpoints) { DARABONBA_PTR_SET_VALUE(intranetEndpoints_, intranetEndpoints) };
      inline Endpoints& setIntranetEndpoints(vector<string> && intranetEndpoints) { DARABONBA_PTR_SET_RVALUE(intranetEndpoints_, intranetEndpoints) };


      // pathType Field Functions 
      bool hasPathType() const { return this->pathType_ != nullptr;};
      void deletePathType() { this->pathType_ = nullptr;};
      inline string getPathType() const { DARABONBA_PTR_GET_DEFAULT(pathType_, "") };
      inline Endpoints& setPathType(string pathType) { DARABONBA_PTR_SET_VALUE(pathType_, pathType) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Endpoints& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    protected:
      shared_ptr<string> backendId_ {};
      shared_ptr<string> endpointType_ {};
      shared_ptr<vector<string>> internetEndpoints_ {};
      shared_ptr<vector<string>> intranetEndpoints_ {};
      shared_ptr<string> pathType_ {};
      shared_ptr<int32_t> port_ {};
    };

    virtual bool empty() const override { return this->accessToken_ == nullptr
        && this->endpoints_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string getAccessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline DescribeGroupEndpointsResponseBody& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<DescribeGroupEndpointsResponseBody::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<DescribeGroupEndpointsResponseBody::Endpoints>) };
    inline vector<DescribeGroupEndpointsResponseBody::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<DescribeGroupEndpointsResponseBody::Endpoints>) };
    inline DescribeGroupEndpointsResponseBody& setEndpoints(const vector<DescribeGroupEndpointsResponseBody::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline DescribeGroupEndpointsResponseBody& setEndpoints(vector<DescribeGroupEndpointsResponseBody::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeGroupEndpointsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The service token.
    shared_ptr<string> accessToken_ {};
    // The endpoints of the service group.
    shared_ptr<vector<DescribeGroupEndpointsResponseBody::Endpoints>> endpoints_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
