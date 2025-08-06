// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERUDPULLCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERUDPULLCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetIdentityProviderUdPullConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderUdPullConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UdPullConfiguration, udPullConfiguration_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderUdPullConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UdPullConfiguration, udPullConfiguration_);
    };
    GetIdentityProviderUdPullConfigurationResponseBody() = default ;
    GetIdentityProviderUdPullConfigurationResponseBody(const GetIdentityProviderUdPullConfigurationResponseBody &) = default ;
    GetIdentityProviderUdPullConfigurationResponseBody(GetIdentityProviderUdPullConfigurationResponseBody &&) = default ;
    GetIdentityProviderUdPullConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderUdPullConfigurationResponseBody() = default ;
    GetIdentityProviderUdPullConfigurationResponseBody& operator=(const GetIdentityProviderUdPullConfigurationResponseBody &) = default ;
    GetIdentityProviderUdPullConfigurationResponseBody& operator=(GetIdentityProviderUdPullConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->udPullConfiguration_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIdentityProviderUdPullConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // udPullConfiguration Field Functions 
    bool hasUdPullConfiguration() const { return this->udPullConfiguration_ != nullptr;};
    void deleteUdPullConfiguration() { this->udPullConfiguration_ = nullptr;};
    inline const GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration & udPullConfiguration() const { DARABONBA_PTR_GET_CONST(udPullConfiguration_, GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration) };
    inline GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration udPullConfiguration() { DARABONBA_PTR_GET(udPullConfiguration_, GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration) };
    inline GetIdentityProviderUdPullConfigurationResponseBody& setUdPullConfiguration(const GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration & udPullConfiguration) { DARABONBA_PTR_SET_VALUE(udPullConfiguration_, udPullConfiguration) };
    inline GetIdentityProviderUdPullConfigurationResponseBody& setUdPullConfiguration(GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration && udPullConfiguration) { DARABONBA_PTR_SET_RVALUE(udPullConfiguration_, udPullConfiguration) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Inbound Synchronization Configuration Information
    std::shared_ptr<GetIdentityProviderUdPullConfigurationResponseBodyUdPullConfiguration> udPullConfiguration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
