// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTIFICATIONSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTIFICATIONSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20230101
{
namespace Models
{
  class GetIdentificationSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentificationSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentificationSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
    };
    GetIdentificationSessionRequest() = default ;
    GetIdentificationSessionRequest(const GetIdentificationSessionRequest &) = default ;
    GetIdentificationSessionRequest(GetIdentificationSessionRequest &&) = default ;
    GetIdentificationSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentificationSessionRequest() = default ;
    GetIdentificationSessionRequest& operator=(const GetIdentificationSessionRequest &) = default ;
    GetIdentificationSessionRequest& operator=(GetIdentificationSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authCode_ == nullptr; };
    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline GetIdentificationSessionRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


  protected:
    // This parameter is required.
    shared_ptr<string> authCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20230101
#endif
