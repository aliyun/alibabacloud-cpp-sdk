// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICECONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICECONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateServiceConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(authType, authType_);
      DARABONBA_PTR_TO_JSON(connectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(connectionType, connectionType_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(serviceAuthId, serviceAuthId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(authType, authType_);
      DARABONBA_PTR_FROM_JSON(connectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(connectionType, connectionType_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(serviceAuthId, serviceAuthId_);
    };
    CreateServiceConnectionRequest() = default ;
    CreateServiceConnectionRequest(const CreateServiceConnectionRequest &) = default ;
    CreateServiceConnectionRequest(CreateServiceConnectionRequest &&) = default ;
    CreateServiceConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceConnectionRequest() = default ;
    CreateServiceConnectionRequest& operator=(const CreateServiceConnectionRequest &) = default ;
    CreateServiceConnectionRequest& operator=(CreateServiceConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authType_ == nullptr
        && return this->connectionName_ == nullptr && return this->connectionType_ == nullptr && return this->scope_ == nullptr && return this->serviceAuthId_ == nullptr; };
    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline CreateServiceConnectionRequest& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline CreateServiceConnectionRequest& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // connectionType Field Functions 
    bool hasConnectionType() const { return this->connectionType_ != nullptr;};
    void deleteConnectionType() { this->connectionType_ = nullptr;};
    inline string connectionType() const { DARABONBA_PTR_GET_DEFAULT(connectionType_, "") };
    inline CreateServiceConnectionRequest& setConnectionType(string connectionType) { DARABONBA_PTR_SET_VALUE(connectionType_, connectionType) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline CreateServiceConnectionRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // serviceAuthId Field Functions 
    bool hasServiceAuthId() const { return this->serviceAuthId_ != nullptr;};
    void deleteServiceAuthId() { this->serviceAuthId_ = nullptr;};
    inline int64_t serviceAuthId() const { DARABONBA_PTR_GET_DEFAULT(serviceAuthId_, 0L) };
    inline CreateServiceConnectionRequest& setServiceAuthId(int64_t serviceAuthId) { DARABONBA_PTR_SET_VALUE(serviceAuthId_, serviceAuthId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> authType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> connectionName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> connectionType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scope_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> serviceAuthId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
