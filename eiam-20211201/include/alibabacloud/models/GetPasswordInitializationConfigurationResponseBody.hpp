// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPASSWORDINITIALIZATIONCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPASSWORDINITIALIZATIONCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetPasswordInitializationConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPasswordInitializationConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PasswordInitializationConfiguration, passwordInitializationConfiguration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPasswordInitializationConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PasswordInitializationConfiguration, passwordInitializationConfiguration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPasswordInitializationConfigurationResponseBody() = default ;
    GetPasswordInitializationConfigurationResponseBody(const GetPasswordInitializationConfigurationResponseBody &) = default ;
    GetPasswordInitializationConfigurationResponseBody(GetPasswordInitializationConfigurationResponseBody &&) = default ;
    GetPasswordInitializationConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPasswordInitializationConfigurationResponseBody() = default ;
    GetPasswordInitializationConfigurationResponseBody& operator=(const GetPasswordInitializationConfigurationResponseBody &) = default ;
    GetPasswordInitializationConfigurationResponseBody& operator=(GetPasswordInitializationConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passwordInitializationConfiguration_ != nullptr
        && this->requestId_ != nullptr; };
    // passwordInitializationConfiguration Field Functions 
    bool hasPasswordInitializationConfiguration() const { return this->passwordInitializationConfiguration_ != nullptr;};
    void deletePasswordInitializationConfiguration() { this->passwordInitializationConfiguration_ = nullptr;};
    inline const GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration & passwordInitializationConfiguration() const { DARABONBA_PTR_GET_CONST(passwordInitializationConfiguration_, GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration) };
    inline GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration passwordInitializationConfiguration() { DARABONBA_PTR_GET(passwordInitializationConfiguration_, GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration) };
    inline GetPasswordInitializationConfigurationResponseBody& setPasswordInitializationConfiguration(const GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration & passwordInitializationConfiguration) { DARABONBA_PTR_SET_VALUE(passwordInitializationConfiguration_, passwordInitializationConfiguration) };
    inline GetPasswordInitializationConfigurationResponseBody& setPasswordInitializationConfiguration(GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration && passwordInitializationConfiguration) { DARABONBA_PTR_SET_RVALUE(passwordInitializationConfiguration_, passwordInitializationConfiguration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPasswordInitializationConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The password initialization configurations.
    std::shared_ptr<GetPasswordInitializationConfigurationResponseBodyPasswordInitializationConfiguration> passwordInitializationConfiguration_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
