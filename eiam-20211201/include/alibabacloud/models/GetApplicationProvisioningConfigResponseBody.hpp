// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONPROVISIONINGCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONPROVISIONINGCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationProvisioningConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationProvisioningConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationProvisioningConfig, applicationProvisioningConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationProvisioningConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationProvisioningConfig, applicationProvisioningConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApplicationProvisioningConfigResponseBody() = default ;
    GetApplicationProvisioningConfigResponseBody(const GetApplicationProvisioningConfigResponseBody &) = default ;
    GetApplicationProvisioningConfigResponseBody(GetApplicationProvisioningConfigResponseBody &&) = default ;
    GetApplicationProvisioningConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationProvisioningConfigResponseBody() = default ;
    GetApplicationProvisioningConfigResponseBody& operator=(const GetApplicationProvisioningConfigResponseBody &) = default ;
    GetApplicationProvisioningConfigResponseBody& operator=(GetApplicationProvisioningConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationProvisioningConfig_ == nullptr
        && return this->requestId_ == nullptr; };
    // applicationProvisioningConfig Field Functions 
    bool hasApplicationProvisioningConfig() const { return this->applicationProvisioningConfig_ != nullptr;};
    void deleteApplicationProvisioningConfig() { this->applicationProvisioningConfig_ = nullptr;};
    inline const GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig & applicationProvisioningConfig() const { DARABONBA_PTR_GET_CONST(applicationProvisioningConfig_, GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig) };
    inline GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig applicationProvisioningConfig() { DARABONBA_PTR_GET(applicationProvisioningConfig_, GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig) };
    inline GetApplicationProvisioningConfigResponseBody& setApplicationProvisioningConfig(const GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig & applicationProvisioningConfig) { DARABONBA_PTR_SET_VALUE(applicationProvisioningConfig_, applicationProvisioningConfig) };
    inline GetApplicationProvisioningConfigResponseBody& setApplicationProvisioningConfig(GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig && applicationProvisioningConfig) { DARABONBA_PTR_SET_RVALUE(applicationProvisioningConfig_, applicationProvisioningConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationProvisioningConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration of the account synchronization feature for the application.
    std::shared_ptr<GetApplicationProvisioningConfigResponseBodyApplicationProvisioningConfig> applicationProvisioningConfig_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
