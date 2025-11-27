// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMANAGERINFOBYAUTHCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMANAGERINFOBYAUTHCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class GetManagerInfoByAuthCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetManagerInfoByAuthCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetManagerInfoByAuthCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
    };
    GetManagerInfoByAuthCodeRequest() = default ;
    GetManagerInfoByAuthCodeRequest(const GetManagerInfoByAuthCodeRequest &) = default ;
    GetManagerInfoByAuthCodeRequest(GetManagerInfoByAuthCodeRequest &&) = default ;
    GetManagerInfoByAuthCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetManagerInfoByAuthCodeRequest() = default ;
    GetManagerInfoByAuthCodeRequest& operator=(const GetManagerInfoByAuthCodeRequest &) = default ;
    GetManagerInfoByAuthCodeRequest& operator=(GetManagerInfoByAuthCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authCode_ == nullptr; };
    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string authCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline GetManagerInfoByAuthCodeRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


  protected:
    // The authorization code.
    // 
    // This parameter is required.
    std::shared_ptr<string> authCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
