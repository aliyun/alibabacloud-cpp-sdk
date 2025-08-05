// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPIDESTINATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPIDESTINATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateApiDestinationRequestHttpApiParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateApiDestinationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApiDestinationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiDestinationName, apiDestinationName_);
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HttpApiParameters, httpApiParameters_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApiDestinationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiDestinationName, apiDestinationName_);
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HttpApiParameters, httpApiParameters_);
    };
    CreateApiDestinationRequest() = default ;
    CreateApiDestinationRequest(const CreateApiDestinationRequest &) = default ;
    CreateApiDestinationRequest(CreateApiDestinationRequest &&) = default ;
    CreateApiDestinationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApiDestinationRequest() = default ;
    CreateApiDestinationRequest& operator=(const CreateApiDestinationRequest &) = default ;
    CreateApiDestinationRequest& operator=(CreateApiDestinationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiDestinationName_ != nullptr
        && this->connectionName_ != nullptr && this->description_ != nullptr && this->httpApiParameters_ != nullptr; };
    // apiDestinationName Field Functions 
    bool hasApiDestinationName() const { return this->apiDestinationName_ != nullptr;};
    void deleteApiDestinationName() { this->apiDestinationName_ = nullptr;};
    inline string apiDestinationName() const { DARABONBA_PTR_GET_DEFAULT(apiDestinationName_, "") };
    inline CreateApiDestinationRequest& setApiDestinationName(string apiDestinationName) { DARABONBA_PTR_SET_VALUE(apiDestinationName_, apiDestinationName) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline CreateApiDestinationRequest& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApiDestinationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // httpApiParameters Field Functions 
    bool hasHttpApiParameters() const { return this->httpApiParameters_ != nullptr;};
    void deleteHttpApiParameters() { this->httpApiParameters_ = nullptr;};
    inline const CreateApiDestinationRequestHttpApiParameters & httpApiParameters() const { DARABONBA_PTR_GET_CONST(httpApiParameters_, CreateApiDestinationRequestHttpApiParameters) };
    inline CreateApiDestinationRequestHttpApiParameters httpApiParameters() { DARABONBA_PTR_GET(httpApiParameters_, CreateApiDestinationRequestHttpApiParameters) };
    inline CreateApiDestinationRequest& setHttpApiParameters(const CreateApiDestinationRequestHttpApiParameters & httpApiParameters) { DARABONBA_PTR_SET_VALUE(httpApiParameters_, httpApiParameters) };
    inline CreateApiDestinationRequest& setHttpApiParameters(CreateApiDestinationRequestHttpApiParameters && httpApiParameters) { DARABONBA_PTR_SET_RVALUE(httpApiParameters_, httpApiParameters) };


  protected:
    // The name of the API destination. The name must be 2 to 127 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiDestinationName_ = nullptr;
    // The name of the connection. The name must be 2 to 127 characters in length.
    // 
    // > 
    // >  Before you configure this parameter, you must call the CreateConnection operation to create a connection. Then, set this parameter to the name of the connection that you created.
    // 
    // This parameter is required.
    std::shared_ptr<string> connectionName_ = nullptr;
    // The description of the API destination. The description can be up to 255 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The parameters that are configured for the API destination.
    // 
    // This parameter is required.
    std::shared_ptr<CreateApiDestinationRequestHttpApiParameters> httpApiParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
