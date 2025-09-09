// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCETWOFACTORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCETWOFACTORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstanceTwoFactorResponseBodyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetInstanceTwoFactorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceTwoFactorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceTwoFactorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceTwoFactorResponseBody() = default ;
    GetInstanceTwoFactorResponseBody(const GetInstanceTwoFactorResponseBody &) = default ;
    GetInstanceTwoFactorResponseBody(GetInstanceTwoFactorResponseBody &&) = default ;
    GetInstanceTwoFactorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceTwoFactorResponseBody() = default ;
    GetInstanceTwoFactorResponseBody& operator=(const GetInstanceTwoFactorResponseBody &) = default ;
    GetInstanceTwoFactorResponseBody& operator=(GetInstanceTwoFactorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->requestId_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const GetInstanceTwoFactorResponseBodyConfig & config() const { DARABONBA_PTR_GET_CONST(config_, GetInstanceTwoFactorResponseBodyConfig) };
    inline GetInstanceTwoFactorResponseBodyConfig config() { DARABONBA_PTR_GET(config_, GetInstanceTwoFactorResponseBodyConfig) };
    inline GetInstanceTwoFactorResponseBody& setConfig(const GetInstanceTwoFactorResponseBodyConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline GetInstanceTwoFactorResponseBody& setConfig(GetInstanceTwoFactorResponseBodyConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceTwoFactorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The settings of two-factor authentication.
    std::shared_ptr<GetInstanceTwoFactorResponseBodyConfig> config_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
