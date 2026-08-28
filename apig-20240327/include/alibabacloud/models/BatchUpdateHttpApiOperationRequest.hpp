// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATEHTTPAPIOPERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATEHTTPAPIOPERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class BatchUpdateHttpApiOperationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateHttpApiOperationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(authConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(enableAuth, enableAuth_);
      DARABONBA_PTR_TO_JSON(operationIds, operationIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateHttpApiOperationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(authConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(enableAuth, enableAuth_);
      DARABONBA_PTR_FROM_JSON(operationIds, operationIds_);
    };
    BatchUpdateHttpApiOperationRequest() = default ;
    BatchUpdateHttpApiOperationRequest(const BatchUpdateHttpApiOperationRequest &) = default ;
    BatchUpdateHttpApiOperationRequest(BatchUpdateHttpApiOperationRequest &&) = default ;
    BatchUpdateHttpApiOperationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateHttpApiOperationRequest() = default ;
    BatchUpdateHttpApiOperationRequest& operator=(const BatchUpdateHttpApiOperationRequest &) = default ;
    BatchUpdateHttpApiOperationRequest& operator=(BatchUpdateHttpApiOperationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthConfig& obj) { 
        DARABONBA_PTR_TO_JSON(authMode, authMode_);
        DARABONBA_PTR_TO_JSON(authType, authType_);
      };
      friend void from_json(const Darabonba::Json& j, AuthConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(authMode, authMode_);
        DARABONBA_PTR_FROM_JSON(authType, authType_);
      };
      AuthConfig() = default ;
      AuthConfig(const AuthConfig &) = default ;
      AuthConfig(AuthConfig &&) = default ;
      AuthConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthConfig() = default ;
      AuthConfig& operator=(const AuthConfig &) = default ;
      AuthConfig& operator=(AuthConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authMode_ == nullptr
        && this->authType_ == nullptr; };
      // authMode Field Functions 
      bool hasAuthMode() const { return this->authMode_ != nullptr;};
      void deleteAuthMode() { this->authMode_ = nullptr;};
      inline string getAuthMode() const { DARABONBA_PTR_GET_DEFAULT(authMode_, "") };
      inline AuthConfig& setAuthMode(string authMode) { DARABONBA_PTR_SET_VALUE(authMode_, authMode) };


      // authType Field Functions 
      bool hasAuthType() const { return this->authType_ != nullptr;};
      void deleteAuthType() { this->authType_ = nullptr;};
      inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
      inline AuthConfig& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    protected:
      shared_ptr<string> authMode_ {};
      shared_ptr<string> authType_ {};
    };

    virtual bool empty() const override { return this->authConfig_ == nullptr
        && this->enableAuth_ == nullptr && this->operationIds_ == nullptr; };
    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline const BatchUpdateHttpApiOperationRequest::AuthConfig & getAuthConfig() const { DARABONBA_PTR_GET_CONST(authConfig_, BatchUpdateHttpApiOperationRequest::AuthConfig) };
    inline BatchUpdateHttpApiOperationRequest::AuthConfig getAuthConfig() { DARABONBA_PTR_GET(authConfig_, BatchUpdateHttpApiOperationRequest::AuthConfig) };
    inline BatchUpdateHttpApiOperationRequest& setAuthConfig(const BatchUpdateHttpApiOperationRequest::AuthConfig & authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };
    inline BatchUpdateHttpApiOperationRequest& setAuthConfig(BatchUpdateHttpApiOperationRequest::AuthConfig && authConfig) { DARABONBA_PTR_SET_RVALUE(authConfig_, authConfig) };


    // enableAuth Field Functions 
    bool hasEnableAuth() const { return this->enableAuth_ != nullptr;};
    void deleteEnableAuth() { this->enableAuth_ = nullptr;};
    inline bool getEnableAuth() const { DARABONBA_PTR_GET_DEFAULT(enableAuth_, false) };
    inline BatchUpdateHttpApiOperationRequest& setEnableAuth(bool enableAuth) { DARABONBA_PTR_SET_VALUE(enableAuth_, enableAuth) };


    // operationIds Field Functions 
    bool hasOperationIds() const { return this->operationIds_ != nullptr;};
    void deleteOperationIds() { this->operationIds_ = nullptr;};
    inline const vector<string> & getOperationIds() const { DARABONBA_PTR_GET_CONST(operationIds_, vector<string>) };
    inline vector<string> getOperationIds() { DARABONBA_PTR_GET(operationIds_, vector<string>) };
    inline BatchUpdateHttpApiOperationRequest& setOperationIds(const vector<string> & operationIds) { DARABONBA_PTR_SET_VALUE(operationIds_, operationIds) };
    inline BatchUpdateHttpApiOperationRequest& setOperationIds(vector<string> && operationIds) { DARABONBA_PTR_SET_RVALUE(operationIds_, operationIds) };


  protected:
    shared_ptr<BatchUpdateHttpApiOperationRequest::AuthConfig> authConfig_ {};
    shared_ptr<bool> enableAuth_ {};
    shared_ptr<vector<string>> operationIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
