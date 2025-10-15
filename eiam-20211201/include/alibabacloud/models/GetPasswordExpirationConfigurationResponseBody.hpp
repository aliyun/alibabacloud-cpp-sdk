// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPASSWORDEXPIRATIONCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPASSWORDEXPIRATIONCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetPasswordExpirationConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPasswordExpirationConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PasswordExpirationConfiguration, passwordExpirationConfiguration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPasswordExpirationConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PasswordExpirationConfiguration, passwordExpirationConfiguration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPasswordExpirationConfigurationResponseBody() = default ;
    GetPasswordExpirationConfigurationResponseBody(const GetPasswordExpirationConfigurationResponseBody &) = default ;
    GetPasswordExpirationConfigurationResponseBody(GetPasswordExpirationConfigurationResponseBody &&) = default ;
    GetPasswordExpirationConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPasswordExpirationConfigurationResponseBody() = default ;
    GetPasswordExpirationConfigurationResponseBody& operator=(const GetPasswordExpirationConfigurationResponseBody &) = default ;
    GetPasswordExpirationConfigurationResponseBody& operator=(GetPasswordExpirationConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->passwordExpirationConfiguration_ == nullptr
        && return this->requestId_ == nullptr; };
    // passwordExpirationConfiguration Field Functions 
    bool hasPasswordExpirationConfiguration() const { return this->passwordExpirationConfiguration_ != nullptr;};
    void deletePasswordExpirationConfiguration() { this->passwordExpirationConfiguration_ = nullptr;};
    inline const GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration & passwordExpirationConfiguration() const { DARABONBA_PTR_GET_CONST(passwordExpirationConfiguration_, GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration) };
    inline GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration passwordExpirationConfiguration() { DARABONBA_PTR_GET(passwordExpirationConfiguration_, GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration) };
    inline GetPasswordExpirationConfigurationResponseBody& setPasswordExpirationConfiguration(const GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration & passwordExpirationConfiguration) { DARABONBA_PTR_SET_VALUE(passwordExpirationConfiguration_, passwordExpirationConfiguration) };
    inline GetPasswordExpirationConfigurationResponseBody& setPasswordExpirationConfiguration(GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration && passwordExpirationConfiguration) { DARABONBA_PTR_SET_RVALUE(passwordExpirationConfiguration_, passwordExpirationConfiguration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPasswordExpirationConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The password expiration configurations.
    std::shared_ptr<GetPasswordExpirationConfigurationResponseBodyPasswordExpirationConfiguration> passwordExpirationConfiguration_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
