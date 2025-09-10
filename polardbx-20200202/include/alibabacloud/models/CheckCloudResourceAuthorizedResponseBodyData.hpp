// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKCLOUDRESOURCEAUTHORIZEDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CHECKCLOUDRESOURCEAUTHORIZEDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CheckCloudResourceAuthorizedResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckCloudResourceAuthorizedResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationState, authorizationState_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
    };
    friend void from_json(const Darabonba::Json& j, CheckCloudResourceAuthorizedResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationState, authorizationState_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
    };
    CheckCloudResourceAuthorizedResponseBodyData() = default ;
    CheckCloudResourceAuthorizedResponseBodyData(const CheckCloudResourceAuthorizedResponseBodyData &) = default ;
    CheckCloudResourceAuthorizedResponseBodyData(CheckCloudResourceAuthorizedResponseBodyData &&) = default ;
    CheckCloudResourceAuthorizedResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckCloudResourceAuthorizedResponseBodyData() = default ;
    CheckCloudResourceAuthorizedResponseBodyData& operator=(const CheckCloudResourceAuthorizedResponseBodyData &) = default ;
    CheckCloudResourceAuthorizedResponseBodyData& operator=(CheckCloudResourceAuthorizedResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorizationState_ != nullptr
        && this->roleArn_ != nullptr; };
    // authorizationState Field Functions 
    bool hasAuthorizationState() const { return this->authorizationState_ != nullptr;};
    void deleteAuthorizationState() { this->authorizationState_ = nullptr;};
    inline string authorizationState() const { DARABONBA_PTR_GET_DEFAULT(authorizationState_, "") };
    inline CheckCloudResourceAuthorizedResponseBodyData& setAuthorizationState(string authorizationState) { DARABONBA_PTR_SET_VALUE(authorizationState_, authorizationState) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline CheckCloudResourceAuthorizedResponseBodyData& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


  protected:
    std::shared_ptr<string> authorizationState_ = nullptr;
    std::shared_ptr<string> roleArn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
