// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONSUMERAUTHORIZATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONSUMERAUTHORIZATIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AuthorizationResourceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateConsumerAuthorizationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConsumerAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(authorizationResourceInfos, authorizationResourceInfos_);
      DARABONBA_PTR_TO_JSON(expireMode, expireMode_);
      DARABONBA_PTR_TO_JSON(expireTimestamp, expireTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConsumerAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(authorizationResourceInfos, authorizationResourceInfos_);
      DARABONBA_PTR_FROM_JSON(expireMode, expireMode_);
      DARABONBA_PTR_FROM_JSON(expireTimestamp, expireTimestamp_);
    };
    UpdateConsumerAuthorizationRuleRequest() = default ;
    UpdateConsumerAuthorizationRuleRequest(const UpdateConsumerAuthorizationRuleRequest &) = default ;
    UpdateConsumerAuthorizationRuleRequest(UpdateConsumerAuthorizationRuleRequest &&) = default ;
    UpdateConsumerAuthorizationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConsumerAuthorizationRuleRequest() = default ;
    UpdateConsumerAuthorizationRuleRequest& operator=(const UpdateConsumerAuthorizationRuleRequest &) = default ;
    UpdateConsumerAuthorizationRuleRequest& operator=(UpdateConsumerAuthorizationRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationResourceInfos_ == nullptr
        && return this->expireMode_ == nullptr && return this->expireTimestamp_ == nullptr; };
    // authorizationResourceInfos Field Functions 
    bool hasAuthorizationResourceInfos() const { return this->authorizationResourceInfos_ != nullptr;};
    void deleteAuthorizationResourceInfos() { this->authorizationResourceInfos_ = nullptr;};
    inline const vector<AuthorizationResourceInfo> & authorizationResourceInfos() const { DARABONBA_PTR_GET_CONST(authorizationResourceInfos_, vector<AuthorizationResourceInfo>) };
    inline vector<AuthorizationResourceInfo> authorizationResourceInfos() { DARABONBA_PTR_GET(authorizationResourceInfos_, vector<AuthorizationResourceInfo>) };
    inline UpdateConsumerAuthorizationRuleRequest& setAuthorizationResourceInfos(const vector<AuthorizationResourceInfo> & authorizationResourceInfos) { DARABONBA_PTR_SET_VALUE(authorizationResourceInfos_, authorizationResourceInfos) };
    inline UpdateConsumerAuthorizationRuleRequest& setAuthorizationResourceInfos(vector<AuthorizationResourceInfo> && authorizationResourceInfos) { DARABONBA_PTR_SET_RVALUE(authorizationResourceInfos_, authorizationResourceInfos) };


    // expireMode Field Functions 
    bool hasExpireMode() const { return this->expireMode_ != nullptr;};
    void deleteExpireMode() { this->expireMode_ = nullptr;};
    inline string expireMode() const { DARABONBA_PTR_GET_DEFAULT(expireMode_, "") };
    inline UpdateConsumerAuthorizationRuleRequest& setExpireMode(string expireMode) { DARABONBA_PTR_SET_VALUE(expireMode_, expireMode) };


    // expireTimestamp Field Functions 
    bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
    void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
    inline int64_t expireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
    inline UpdateConsumerAuthorizationRuleRequest& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


  protected:
    std::shared_ptr<vector<AuthorizationResourceInfo>> authorizationResourceInfos_ = nullptr;
    std::shared_ptr<string> expireMode_ = nullptr;
    std::shared_ptr<int64_t> expireTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
