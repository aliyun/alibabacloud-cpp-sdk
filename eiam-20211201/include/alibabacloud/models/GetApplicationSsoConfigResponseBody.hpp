// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONSSOCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONSSOCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApplicationSsoConfigResponseBodyApplicationSsoConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationSsoConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationSsoConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationSsoConfig, applicationSsoConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationSsoConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationSsoConfig, applicationSsoConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApplicationSsoConfigResponseBody() = default ;
    GetApplicationSsoConfigResponseBody(const GetApplicationSsoConfigResponseBody &) = default ;
    GetApplicationSsoConfigResponseBody(GetApplicationSsoConfigResponseBody &&) = default ;
    GetApplicationSsoConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationSsoConfigResponseBody() = default ;
    GetApplicationSsoConfigResponseBody& operator=(const GetApplicationSsoConfigResponseBody &) = default ;
    GetApplicationSsoConfigResponseBody& operator=(GetApplicationSsoConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationSsoConfig_ == nullptr
        && return this->requestId_ == nullptr; };
    // applicationSsoConfig Field Functions 
    bool hasApplicationSsoConfig() const { return this->applicationSsoConfig_ != nullptr;};
    void deleteApplicationSsoConfig() { this->applicationSsoConfig_ = nullptr;};
    inline const GetApplicationSsoConfigResponseBodyApplicationSsoConfig & applicationSsoConfig() const { DARABONBA_PTR_GET_CONST(applicationSsoConfig_, GetApplicationSsoConfigResponseBodyApplicationSsoConfig) };
    inline GetApplicationSsoConfigResponseBodyApplicationSsoConfig applicationSsoConfig() { DARABONBA_PTR_GET(applicationSsoConfig_, GetApplicationSsoConfigResponseBodyApplicationSsoConfig) };
    inline GetApplicationSsoConfigResponseBody& setApplicationSsoConfig(const GetApplicationSsoConfigResponseBodyApplicationSsoConfig & applicationSsoConfig) { DARABONBA_PTR_SET_VALUE(applicationSsoConfig_, applicationSsoConfig) };
    inline GetApplicationSsoConfigResponseBody& setApplicationSsoConfig(GetApplicationSsoConfigResponseBodyApplicationSsoConfig && applicationSsoConfig) { DARABONBA_PTR_SET_RVALUE(applicationSsoConfig_, applicationSsoConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationSsoConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The single sign-on (SSO) configuration information of the application.
    std::shared_ptr<GetApplicationSsoConfigResponseBodyApplicationSsoConfig> applicationSsoConfig_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
