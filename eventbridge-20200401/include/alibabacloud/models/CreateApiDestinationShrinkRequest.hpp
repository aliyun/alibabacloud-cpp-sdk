// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPIDESTINATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPIDESTINATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateApiDestinationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApiDestinationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiDestinationName, apiDestinationName_);
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HttpApiParameters, httpApiParametersShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApiDestinationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiDestinationName, apiDestinationName_);
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HttpApiParameters, httpApiParametersShrink_);
    };
    CreateApiDestinationShrinkRequest() = default ;
    CreateApiDestinationShrinkRequest(const CreateApiDestinationShrinkRequest &) = default ;
    CreateApiDestinationShrinkRequest(CreateApiDestinationShrinkRequest &&) = default ;
    CreateApiDestinationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApiDestinationShrinkRequest() = default ;
    CreateApiDestinationShrinkRequest& operator=(const CreateApiDestinationShrinkRequest &) = default ;
    CreateApiDestinationShrinkRequest& operator=(CreateApiDestinationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiDestinationName_ != nullptr
        && this->connectionName_ != nullptr && this->description_ != nullptr && this->httpApiParametersShrink_ != nullptr; };
    // apiDestinationName Field Functions 
    bool hasApiDestinationName() const { return this->apiDestinationName_ != nullptr;};
    void deleteApiDestinationName() { this->apiDestinationName_ = nullptr;};
    inline string apiDestinationName() const { DARABONBA_PTR_GET_DEFAULT(apiDestinationName_, "") };
    inline CreateApiDestinationShrinkRequest& setApiDestinationName(string apiDestinationName) { DARABONBA_PTR_SET_VALUE(apiDestinationName_, apiDestinationName) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline CreateApiDestinationShrinkRequest& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApiDestinationShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // httpApiParametersShrink Field Functions 
    bool hasHttpApiParametersShrink() const { return this->httpApiParametersShrink_ != nullptr;};
    void deleteHttpApiParametersShrink() { this->httpApiParametersShrink_ = nullptr;};
    inline string httpApiParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(httpApiParametersShrink_, "") };
    inline CreateApiDestinationShrinkRequest& setHttpApiParametersShrink(string httpApiParametersShrink) { DARABONBA_PTR_SET_VALUE(httpApiParametersShrink_, httpApiParametersShrink) };


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
    std::shared_ptr<string> httpApiParametersShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
