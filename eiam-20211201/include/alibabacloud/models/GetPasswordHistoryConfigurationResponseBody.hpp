// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPASSWORDHISTORYCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPASSWORDHISTORYCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetPasswordHistoryConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPasswordHistoryConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PasswordHistoryConfiguration, passwordHistoryConfiguration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPasswordHistoryConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PasswordHistoryConfiguration, passwordHistoryConfiguration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPasswordHistoryConfigurationResponseBody() = default ;
    GetPasswordHistoryConfigurationResponseBody(const GetPasswordHistoryConfigurationResponseBody &) = default ;
    GetPasswordHistoryConfigurationResponseBody(GetPasswordHistoryConfigurationResponseBody &&) = default ;
    GetPasswordHistoryConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPasswordHistoryConfigurationResponseBody() = default ;
    GetPasswordHistoryConfigurationResponseBody& operator=(const GetPasswordHistoryConfigurationResponseBody &) = default ;
    GetPasswordHistoryConfigurationResponseBody& operator=(GetPasswordHistoryConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->passwordHistoryConfiguration_ == nullptr
        && return this->requestId_ == nullptr; };
    // passwordHistoryConfiguration Field Functions 
    bool hasPasswordHistoryConfiguration() const { return this->passwordHistoryConfiguration_ != nullptr;};
    void deletePasswordHistoryConfiguration() { this->passwordHistoryConfiguration_ = nullptr;};
    inline const GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration & passwordHistoryConfiguration() const { DARABONBA_PTR_GET_CONST(passwordHistoryConfiguration_, GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration) };
    inline GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration passwordHistoryConfiguration() { DARABONBA_PTR_GET(passwordHistoryConfiguration_, GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration) };
    inline GetPasswordHistoryConfigurationResponseBody& setPasswordHistoryConfiguration(const GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration & passwordHistoryConfiguration) { DARABONBA_PTR_SET_VALUE(passwordHistoryConfiguration_, passwordHistoryConfiguration) };
    inline GetPasswordHistoryConfigurationResponseBody& setPasswordHistoryConfiguration(GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration && passwordHistoryConfiguration) { DARABONBA_PTR_SET_RVALUE(passwordHistoryConfiguration_, passwordHistoryConfiguration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPasswordHistoryConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The password history configurations.
    std::shared_ptr<GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration> passwordHistoryConfiguration_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
