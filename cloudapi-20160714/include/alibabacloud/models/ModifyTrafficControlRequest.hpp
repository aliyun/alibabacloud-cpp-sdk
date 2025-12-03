// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTRAFFICCONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTRAFFICCONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyTrafficControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTrafficControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiDefault, apiDefault_);
      DARABONBA_PTR_TO_JSON(AppDefault, appDefault_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(TrafficControlId, trafficControlId_);
      DARABONBA_PTR_TO_JSON(TrafficControlName, trafficControlName_);
      DARABONBA_PTR_TO_JSON(TrafficControlUnit, trafficControlUnit_);
      DARABONBA_PTR_TO_JSON(UserDefault, userDefault_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTrafficControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiDefault, apiDefault_);
      DARABONBA_PTR_FROM_JSON(AppDefault, appDefault_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(TrafficControlId, trafficControlId_);
      DARABONBA_PTR_FROM_JSON(TrafficControlName, trafficControlName_);
      DARABONBA_PTR_FROM_JSON(TrafficControlUnit, trafficControlUnit_);
      DARABONBA_PTR_FROM_JSON(UserDefault, userDefault_);
    };
    ModifyTrafficControlRequest() = default ;
    ModifyTrafficControlRequest(const ModifyTrafficControlRequest &) = default ;
    ModifyTrafficControlRequest(ModifyTrafficControlRequest &&) = default ;
    ModifyTrafficControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTrafficControlRequest() = default ;
    ModifyTrafficControlRequest& operator=(const ModifyTrafficControlRequest &) = default ;
    ModifyTrafficControlRequest& operator=(ModifyTrafficControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiDefault_ == nullptr
        && return this->appDefault_ == nullptr && return this->description_ == nullptr && return this->securityToken_ == nullptr && return this->trafficControlId_ == nullptr && return this->trafficControlName_ == nullptr
        && return this->trafficControlUnit_ == nullptr && return this->userDefault_ == nullptr; };
    // apiDefault Field Functions 
    bool hasApiDefault() const { return this->apiDefault_ != nullptr;};
    void deleteApiDefault() { this->apiDefault_ = nullptr;};
    inline int32_t apiDefault() const { DARABONBA_PTR_GET_DEFAULT(apiDefault_, 0) };
    inline ModifyTrafficControlRequest& setApiDefault(int32_t apiDefault) { DARABONBA_PTR_SET_VALUE(apiDefault_, apiDefault) };


    // appDefault Field Functions 
    bool hasAppDefault() const { return this->appDefault_ != nullptr;};
    void deleteAppDefault() { this->appDefault_ = nullptr;};
    inline int32_t appDefault() const { DARABONBA_PTR_GET_DEFAULT(appDefault_, 0) };
    inline ModifyTrafficControlRequest& setAppDefault(int32_t appDefault) { DARABONBA_PTR_SET_VALUE(appDefault_, appDefault) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyTrafficControlRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyTrafficControlRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // trafficControlId Field Functions 
    bool hasTrafficControlId() const { return this->trafficControlId_ != nullptr;};
    void deleteTrafficControlId() { this->trafficControlId_ = nullptr;};
    inline string trafficControlId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlId_, "") };
    inline ModifyTrafficControlRequest& setTrafficControlId(string trafficControlId) { DARABONBA_PTR_SET_VALUE(trafficControlId_, trafficControlId) };


    // trafficControlName Field Functions 
    bool hasTrafficControlName() const { return this->trafficControlName_ != nullptr;};
    void deleteTrafficControlName() { this->trafficControlName_ = nullptr;};
    inline string trafficControlName() const { DARABONBA_PTR_GET_DEFAULT(trafficControlName_, "") };
    inline ModifyTrafficControlRequest& setTrafficControlName(string trafficControlName) { DARABONBA_PTR_SET_VALUE(trafficControlName_, trafficControlName) };


    // trafficControlUnit Field Functions 
    bool hasTrafficControlUnit() const { return this->trafficControlUnit_ != nullptr;};
    void deleteTrafficControlUnit() { this->trafficControlUnit_ = nullptr;};
    inline string trafficControlUnit() const { DARABONBA_PTR_GET_DEFAULT(trafficControlUnit_, "") };
    inline ModifyTrafficControlRequest& setTrafficControlUnit(string trafficControlUnit) { DARABONBA_PTR_SET_VALUE(trafficControlUnit_, trafficControlUnit) };


    // userDefault Field Functions 
    bool hasUserDefault() const { return this->userDefault_ != nullptr;};
    void deleteUserDefault() { this->userDefault_ = nullptr;};
    inline int32_t userDefault() const { DARABONBA_PTR_GET_DEFAULT(userDefault_, 0) };
    inline ModifyTrafficControlRequest& setUserDefault(int32_t userDefault) { DARABONBA_PTR_SET_VALUE(userDefault_, userDefault) };


  protected:
    // The default throttling value for each API.
    std::shared_ptr<int32_t> apiDefault_ = nullptr;
    // The default throttling value for each app.
    std::shared_ptr<int32_t> appDefault_ = nullptr;
    // The description of the throttling policy.
    std::shared_ptr<string> description_ = nullptr;
    // The security token included in the WebSocket request header. The system uses this token to authenticate the request.
    std::shared_ptr<string> securityToken_ = nullptr;
    // The ID of the throttling policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> trafficControlId_ = nullptr;
    // The throttling policy name. The name must be 4 to 50 characters in length and can contain letters, digits, and underscores (_). It cannot start with an underscore.
    std::shared_ptr<string> trafficControlName_ = nullptr;
    // The unit to be used in the throttling policy. Valid values:
    // 
    // *   **SECOND**
    // *   **MINUTE**
    // *   **HOUR**
    // *   **DAY**
    std::shared_ptr<string> trafficControlUnit_ = nullptr;
    // The default throttling value for each user.
    std::shared_ptr<int32_t> userDefault_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
