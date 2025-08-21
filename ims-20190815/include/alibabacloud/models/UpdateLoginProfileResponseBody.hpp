// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOGINPROFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOGINPROFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateLoginProfileResponseBodyLoginProfile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class UpdateLoginProfileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLoginProfileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoginProfile, loginProfile_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLoginProfileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginProfile, loginProfile_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateLoginProfileResponseBody() = default ;
    UpdateLoginProfileResponseBody(const UpdateLoginProfileResponseBody &) = default ;
    UpdateLoginProfileResponseBody(UpdateLoginProfileResponseBody &&) = default ;
    UpdateLoginProfileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLoginProfileResponseBody() = default ;
    UpdateLoginProfileResponseBody& operator=(const UpdateLoginProfileResponseBody &) = default ;
    UpdateLoginProfileResponseBody& operator=(UpdateLoginProfileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->loginProfile_ != nullptr
        && this->requestId_ != nullptr; };
    // loginProfile Field Functions 
    bool hasLoginProfile() const { return this->loginProfile_ != nullptr;};
    void deleteLoginProfile() { this->loginProfile_ = nullptr;};
    inline const UpdateLoginProfileResponseBodyLoginProfile & loginProfile() const { DARABONBA_PTR_GET_CONST(loginProfile_, UpdateLoginProfileResponseBodyLoginProfile) };
    inline UpdateLoginProfileResponseBodyLoginProfile loginProfile() { DARABONBA_PTR_GET(loginProfile_, UpdateLoginProfileResponseBodyLoginProfile) };
    inline UpdateLoginProfileResponseBody& setLoginProfile(const UpdateLoginProfileResponseBodyLoginProfile & loginProfile) { DARABONBA_PTR_SET_VALUE(loginProfile_, loginProfile) };
    inline UpdateLoginProfileResponseBody& setLoginProfile(UpdateLoginProfileResponseBodyLoginProfile && loginProfile) { DARABONBA_PTR_SET_RVALUE(loginProfile_, loginProfile) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateLoginProfileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The console logon configurations.
    std::shared_ptr<UpdateLoginProfileResponseBodyLoginProfile> loginProfile_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
