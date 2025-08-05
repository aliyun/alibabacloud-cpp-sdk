// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONNECTIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONNECTIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateConnectionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConnectionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthParameters, authParametersShrink_);
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NetworkParameters, networkParametersShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConnectionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthParameters, authParametersShrink_);
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NetworkParameters, networkParametersShrink_);
    };
    CreateConnectionShrinkRequest() = default ;
    CreateConnectionShrinkRequest(const CreateConnectionShrinkRequest &) = default ;
    CreateConnectionShrinkRequest(CreateConnectionShrinkRequest &&) = default ;
    CreateConnectionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConnectionShrinkRequest() = default ;
    CreateConnectionShrinkRequest& operator=(const CreateConnectionShrinkRequest &) = default ;
    CreateConnectionShrinkRequest& operator=(CreateConnectionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authParametersShrink_ != nullptr
        && this->connectionName_ != nullptr && this->description_ != nullptr && this->networkParametersShrink_ != nullptr; };
    // authParametersShrink Field Functions 
    bool hasAuthParametersShrink() const { return this->authParametersShrink_ != nullptr;};
    void deleteAuthParametersShrink() { this->authParametersShrink_ = nullptr;};
    inline string authParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(authParametersShrink_, "") };
    inline CreateConnectionShrinkRequest& setAuthParametersShrink(string authParametersShrink) { DARABONBA_PTR_SET_VALUE(authParametersShrink_, authParametersShrink) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline CreateConnectionShrinkRequest& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateConnectionShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // networkParametersShrink Field Functions 
    bool hasNetworkParametersShrink() const { return this->networkParametersShrink_ != nullptr;};
    void deleteNetworkParametersShrink() { this->networkParametersShrink_ = nullptr;};
    inline string networkParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(networkParametersShrink_, "") };
    inline CreateConnectionShrinkRequest& setNetworkParametersShrink(string networkParametersShrink) { DARABONBA_PTR_SET_VALUE(networkParametersShrink_, networkParametersShrink) };


  protected:
    // The parameters that are configured for authentication.
    std::shared_ptr<string> authParametersShrink_ = nullptr;
    // The name of the connection. The name must be 2 to 127 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> connectionName_ = nullptr;
    // The description of the connection. The description can be up to 255 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The parameters that are configured for the network.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkParametersShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
