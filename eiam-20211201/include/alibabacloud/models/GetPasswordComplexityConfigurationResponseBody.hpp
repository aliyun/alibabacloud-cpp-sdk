// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPASSWORDCOMPLEXITYCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPASSWORDCOMPLEXITYCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetPasswordComplexityConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPasswordComplexityConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PasswordComplexityConfiguration, passwordComplexityConfiguration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPasswordComplexityConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PasswordComplexityConfiguration, passwordComplexityConfiguration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPasswordComplexityConfigurationResponseBody() = default ;
    GetPasswordComplexityConfigurationResponseBody(const GetPasswordComplexityConfigurationResponseBody &) = default ;
    GetPasswordComplexityConfigurationResponseBody(GetPasswordComplexityConfigurationResponseBody &&) = default ;
    GetPasswordComplexityConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPasswordComplexityConfigurationResponseBody() = default ;
    GetPasswordComplexityConfigurationResponseBody& operator=(const GetPasswordComplexityConfigurationResponseBody &) = default ;
    GetPasswordComplexityConfigurationResponseBody& operator=(GetPasswordComplexityConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passwordComplexityConfiguration_ != nullptr
        && this->requestId_ != nullptr; };
    // passwordComplexityConfiguration Field Functions 
    bool hasPasswordComplexityConfiguration() const { return this->passwordComplexityConfiguration_ != nullptr;};
    void deletePasswordComplexityConfiguration() { this->passwordComplexityConfiguration_ = nullptr;};
    inline const GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration & passwordComplexityConfiguration() const { DARABONBA_PTR_GET_CONST(passwordComplexityConfiguration_, GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration) };
    inline GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration passwordComplexityConfiguration() { DARABONBA_PTR_GET(passwordComplexityConfiguration_, GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration) };
    inline GetPasswordComplexityConfigurationResponseBody& setPasswordComplexityConfiguration(const GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration & passwordComplexityConfiguration) { DARABONBA_PTR_SET_VALUE(passwordComplexityConfiguration_, passwordComplexityConfiguration) };
    inline GetPasswordComplexityConfigurationResponseBody& setPasswordComplexityConfiguration(GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration && passwordComplexityConfiguration) { DARABONBA_PTR_SET_RVALUE(passwordComplexityConfiguration_, passwordComplexityConfiguration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPasswordComplexityConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The password complexity configurations.
    std::shared_ptr<GetPasswordComplexityConfigurationResponseBodyPasswordComplexityConfiguration> passwordComplexityConfiguration_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
