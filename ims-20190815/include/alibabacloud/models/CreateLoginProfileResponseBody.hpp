// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOGINPROFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELOGINPROFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateLoginProfileResponseBodyLoginProfile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class CreateLoginProfileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoginProfileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoginProfile, loginProfile_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoginProfileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginProfile, loginProfile_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateLoginProfileResponseBody() = default ;
    CreateLoginProfileResponseBody(const CreateLoginProfileResponseBody &) = default ;
    CreateLoginProfileResponseBody(CreateLoginProfileResponseBody &&) = default ;
    CreateLoginProfileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLoginProfileResponseBody() = default ;
    CreateLoginProfileResponseBody& operator=(const CreateLoginProfileResponseBody &) = default ;
    CreateLoginProfileResponseBody& operator=(CreateLoginProfileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->loginProfile_ != nullptr
        && this->requestId_ != nullptr; };
    // loginProfile Field Functions 
    bool hasLoginProfile() const { return this->loginProfile_ != nullptr;};
    void deleteLoginProfile() { this->loginProfile_ = nullptr;};
    inline const CreateLoginProfileResponseBodyLoginProfile & loginProfile() const { DARABONBA_PTR_GET_CONST(loginProfile_, CreateLoginProfileResponseBodyLoginProfile) };
    inline CreateLoginProfileResponseBodyLoginProfile loginProfile() { DARABONBA_PTR_GET(loginProfile_, CreateLoginProfileResponseBodyLoginProfile) };
    inline CreateLoginProfileResponseBody& setLoginProfile(const CreateLoginProfileResponseBodyLoginProfile & loginProfile) { DARABONBA_PTR_SET_VALUE(loginProfile_, loginProfile) };
    inline CreateLoginProfileResponseBody& setLoginProfile(CreateLoginProfileResponseBodyLoginProfile && loginProfile) { DARABONBA_PTR_SET_RVALUE(loginProfile_, loginProfile) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLoginProfileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The logon information.
    std::shared_ptr<CreateLoginProfileResponseBodyLoginProfile> loginProfile_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
