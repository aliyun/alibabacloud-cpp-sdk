// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AUTHCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
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
    virtual bool empty() const override { this->authMode_ != nullptr
        && this->authType_ != nullptr; };
    // authMode Field Functions 
    bool hasAuthMode() const { return this->authMode_ != nullptr;};
    void deleteAuthMode() { this->authMode_ = nullptr;};
    inline string authMode() const { DARABONBA_PTR_GET_DEFAULT(authMode_, "") };
    inline AuthConfig& setAuthMode(string authMode) { DARABONBA_PTR_SET_VALUE(authMode_, authMode) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline AuthConfig& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


  protected:
    std::shared_ptr<string> authMode_ = nullptr;
    std::shared_ptr<string> authType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
