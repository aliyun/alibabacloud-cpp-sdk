// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHORIZATIONURLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHORIZATIONURLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class GetAuthorizationUrlResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthorizationUrlResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationUrl, authorizationUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthorizationUrlResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationUrl, authorizationUrl_);
    };
    GetAuthorizationUrlResponseBodyData() = default ;
    GetAuthorizationUrlResponseBodyData(const GetAuthorizationUrlResponseBodyData &) = default ;
    GetAuthorizationUrlResponseBodyData(GetAuthorizationUrlResponseBodyData &&) = default ;
    GetAuthorizationUrlResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthorizationUrlResponseBodyData() = default ;
    GetAuthorizationUrlResponseBodyData& operator=(const GetAuthorizationUrlResponseBodyData &) = default ;
    GetAuthorizationUrlResponseBodyData& operator=(GetAuthorizationUrlResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorizationUrl_ != nullptr; };
    // authorizationUrl Field Functions 
    bool hasAuthorizationUrl() const { return this->authorizationUrl_ != nullptr;};
    void deleteAuthorizationUrl() { this->authorizationUrl_ = nullptr;};
    inline string authorizationUrl() const { DARABONBA_PTR_GET_DEFAULT(authorizationUrl_, "") };
    inline GetAuthorizationUrlResponseBodyData& setAuthorizationUrl(string authorizationUrl) { DARABONBA_PTR_SET_VALUE(authorizationUrl_, authorizationUrl) };


  protected:
    // The authorization URL.
    std::shared_ptr<string> authorizationUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
