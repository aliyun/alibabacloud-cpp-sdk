// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPIDESTINATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPIDESTINATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateApiDestinationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApiDestinationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiDestinationName, apiDestinationName_);
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HttpApiParameters, httpApiParameters_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApiDestinationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiDestinationName, apiDestinationName_);
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HttpApiParameters, httpApiParameters_);
    };
    UpdateApiDestinationRequest() = default ;
    UpdateApiDestinationRequest(const UpdateApiDestinationRequest &) = default ;
    UpdateApiDestinationRequest(UpdateApiDestinationRequest &&) = default ;
    UpdateApiDestinationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApiDestinationRequest() = default ;
    UpdateApiDestinationRequest& operator=(const UpdateApiDestinationRequest &) = default ;
    UpdateApiDestinationRequest& operator=(UpdateApiDestinationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HttpApiParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HttpApiParameters& obj) { 
        DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_TO_JSON(Method, method_);
      };
      friend void from_json(const Darabonba::Json& j, HttpApiParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
        DARABONBA_PTR_FROM_JSON(Method, method_);
      };
      HttpApiParameters() = default ;
      HttpApiParameters(const HttpApiParameters &) = default ;
      HttpApiParameters(HttpApiParameters &&) = default ;
      HttpApiParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HttpApiParameters() = default ;
      HttpApiParameters& operator=(const HttpApiParameters &) = default ;
      HttpApiParameters& operator=(HttpApiParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endpoint_ == nullptr
        && this->method_ == nullptr; };
      // endpoint Field Functions 
      bool hasEndpoint() const { return this->endpoint_ != nullptr;};
      void deleteEndpoint() { this->endpoint_ = nullptr;};
      inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
      inline HttpApiParameters& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


      // method Field Functions 
      bool hasMethod() const { return this->method_ != nullptr;};
      void deleteMethod() { this->method_ = nullptr;};
      inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
      inline HttpApiParameters& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    protected:
      // The endpoint of the API destination. The endpoint can be up to 127 characters in length.
      shared_ptr<string> endpoint_ {};
      // The HTTP request method. Valid values:
      // 
      // - GET
      // - POST
      // - HEAD
      // - DELETE
      // - PUT
      // - PATCH
      shared_ptr<string> method_ {};
    };

    virtual bool empty() const override { return this->apiDestinationName_ == nullptr
        && this->connectionName_ == nullptr && this->description_ == nullptr && this->httpApiParameters_ == nullptr; };
    // apiDestinationName Field Functions 
    bool hasApiDestinationName() const { return this->apiDestinationName_ != nullptr;};
    void deleteApiDestinationName() { this->apiDestinationName_ = nullptr;};
    inline string getApiDestinationName() const { DARABONBA_PTR_GET_DEFAULT(apiDestinationName_, "") };
    inline UpdateApiDestinationRequest& setApiDestinationName(string apiDestinationName) { DARABONBA_PTR_SET_VALUE(apiDestinationName_, apiDestinationName) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string getConnectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline UpdateApiDestinationRequest& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateApiDestinationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // httpApiParameters Field Functions 
    bool hasHttpApiParameters() const { return this->httpApiParameters_ != nullptr;};
    void deleteHttpApiParameters() { this->httpApiParameters_ = nullptr;};
    inline const UpdateApiDestinationRequest::HttpApiParameters & getHttpApiParameters() const { DARABONBA_PTR_GET_CONST(httpApiParameters_, UpdateApiDestinationRequest::HttpApiParameters) };
    inline UpdateApiDestinationRequest::HttpApiParameters getHttpApiParameters() { DARABONBA_PTR_GET(httpApiParameters_, UpdateApiDestinationRequest::HttpApiParameters) };
    inline UpdateApiDestinationRequest& setHttpApiParameters(const UpdateApiDestinationRequest::HttpApiParameters & httpApiParameters) { DARABONBA_PTR_SET_VALUE(httpApiParameters_, httpApiParameters) };
    inline UpdateApiDestinationRequest& setHttpApiParameters(UpdateApiDestinationRequest::HttpApiParameters && httpApiParameters) { DARABONBA_PTR_SET_RVALUE(httpApiParameters_, httpApiParameters) };


  protected:
    // The name of the API destination. The name must be 2 to 127 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> apiDestinationName_ {};
    // The name of the connection. The name must be 2 to 127 characters in length.
    // 
    // Note: Before you configure this parameter, you must call the CreateConnection operation to create a connection. Then, set this parameter to the name of the connection that you created.
    shared_ptr<string> connectionName_ {};
    // The description of the API destination. The description can be up to 255 characters in length.
    shared_ptr<string> description_ {};
    // The parameters that are configured for the API destination.
    shared_ptr<UpdateApiDestinationRequest::HttpApiParameters> httpApiParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
