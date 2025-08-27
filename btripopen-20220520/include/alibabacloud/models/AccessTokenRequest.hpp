// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCESSTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACCESSTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class AccessTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AccessTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(app_secret, appSecret_);
    };
    friend void from_json(const Darabonba::Json& j, AccessTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(app_secret, appSecret_);
    };
    AccessTokenRequest() = default ;
    AccessTokenRequest(const AccessTokenRequest &) = default ;
    AccessTokenRequest(AccessTokenRequest &&) = default ;
    AccessTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AccessTokenRequest() = default ;
    AccessTokenRequest& operator=(const AccessTokenRequest &) = default ;
    AccessTokenRequest& operator=(AccessTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appSecret_ != nullptr; };
    // appSecret Field Functions 
    bool hasAppSecret() const { return this->appSecret_ != nullptr;};
    void deleteAppSecret() { this->appSecret_ = nullptr;};
    inline string appSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
    inline AccessTokenRequest& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appSecret_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
