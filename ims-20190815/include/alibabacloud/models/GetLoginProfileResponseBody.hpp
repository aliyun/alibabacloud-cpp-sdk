// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGINPROFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGINPROFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLoginProfileResponseBodyLoginProfile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetLoginProfileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoginProfileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoginProfile, loginProfile_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoginProfileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginProfile, loginProfile_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLoginProfileResponseBody() = default ;
    GetLoginProfileResponseBody(const GetLoginProfileResponseBody &) = default ;
    GetLoginProfileResponseBody(GetLoginProfileResponseBody &&) = default ;
    GetLoginProfileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoginProfileResponseBody() = default ;
    GetLoginProfileResponseBody& operator=(const GetLoginProfileResponseBody &) = default ;
    GetLoginProfileResponseBody& operator=(GetLoginProfileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->loginProfile_ != nullptr
        && this->requestId_ != nullptr; };
    // loginProfile Field Functions 
    bool hasLoginProfile() const { return this->loginProfile_ != nullptr;};
    void deleteLoginProfile() { this->loginProfile_ = nullptr;};
    inline const GetLoginProfileResponseBodyLoginProfile & loginProfile() const { DARABONBA_PTR_GET_CONST(loginProfile_, GetLoginProfileResponseBodyLoginProfile) };
    inline GetLoginProfileResponseBodyLoginProfile loginProfile() { DARABONBA_PTR_GET(loginProfile_, GetLoginProfileResponseBodyLoginProfile) };
    inline GetLoginProfileResponseBody& setLoginProfile(const GetLoginProfileResponseBodyLoginProfile & loginProfile) { DARABONBA_PTR_SET_VALUE(loginProfile_, loginProfile) };
    inline GetLoginProfileResponseBody& setLoginProfile(GetLoginProfileResponseBodyLoginProfile && loginProfile) { DARABONBA_PTR_SET_RVALUE(loginProfile_, loginProfile) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLoginProfileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The console logon configurations.
    std::shared_ptr<GetLoginProfileResponseBodyLoginProfile> loginProfile_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
