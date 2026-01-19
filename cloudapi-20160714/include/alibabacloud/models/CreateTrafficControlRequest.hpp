// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAFFICCONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAFFICCONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateTrafficControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrafficControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiDefault, apiDefault_);
      DARABONBA_PTR_TO_JSON(AppDefault, appDefault_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(TrafficControlName, trafficControlName_);
      DARABONBA_PTR_TO_JSON(TrafficControlUnit, trafficControlUnit_);
      DARABONBA_PTR_TO_JSON(UserDefault, userDefault_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrafficControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiDefault, apiDefault_);
      DARABONBA_PTR_FROM_JSON(AppDefault, appDefault_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(TrafficControlName, trafficControlName_);
      DARABONBA_PTR_FROM_JSON(TrafficControlUnit, trafficControlUnit_);
      DARABONBA_PTR_FROM_JSON(UserDefault, userDefault_);
    };
    CreateTrafficControlRequest() = default ;
    CreateTrafficControlRequest(const CreateTrafficControlRequest &) = default ;
    CreateTrafficControlRequest(CreateTrafficControlRequest &&) = default ;
    CreateTrafficControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrafficControlRequest() = default ;
    CreateTrafficControlRequest& operator=(const CreateTrafficControlRequest &) = default ;
    CreateTrafficControlRequest& operator=(CreateTrafficControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiDefault_ == nullptr
        && this->appDefault_ == nullptr && this->description_ == nullptr && this->securityToken_ == nullptr && this->trafficControlName_ == nullptr && this->trafficControlUnit_ == nullptr
        && this->userDefault_ == nullptr; };
    // apiDefault Field Functions 
    bool hasApiDefault() const { return this->apiDefault_ != nullptr;};
    void deleteApiDefault() { this->apiDefault_ = nullptr;};
    inline int32_t getApiDefault() const { DARABONBA_PTR_GET_DEFAULT(apiDefault_, 0) };
    inline CreateTrafficControlRequest& setApiDefault(int32_t apiDefault) { DARABONBA_PTR_SET_VALUE(apiDefault_, apiDefault) };


    // appDefault Field Functions 
    bool hasAppDefault() const { return this->appDefault_ != nullptr;};
    void deleteAppDefault() { this->appDefault_ = nullptr;};
    inline int32_t getAppDefault() const { DARABONBA_PTR_GET_DEFAULT(appDefault_, 0) };
    inline CreateTrafficControlRequest& setAppDefault(int32_t appDefault) { DARABONBA_PTR_SET_VALUE(appDefault_, appDefault) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTrafficControlRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreateTrafficControlRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // trafficControlName Field Functions 
    bool hasTrafficControlName() const { return this->trafficControlName_ != nullptr;};
    void deleteTrafficControlName() { this->trafficControlName_ = nullptr;};
    inline string getTrafficControlName() const { DARABONBA_PTR_GET_DEFAULT(trafficControlName_, "") };
    inline CreateTrafficControlRequest& setTrafficControlName(string trafficControlName) { DARABONBA_PTR_SET_VALUE(trafficControlName_, trafficControlName) };


    // trafficControlUnit Field Functions 
    bool hasTrafficControlUnit() const { return this->trafficControlUnit_ != nullptr;};
    void deleteTrafficControlUnit() { this->trafficControlUnit_ = nullptr;};
    inline string getTrafficControlUnit() const { DARABONBA_PTR_GET_DEFAULT(trafficControlUnit_, "") };
    inline CreateTrafficControlRequest& setTrafficControlUnit(string trafficControlUnit) { DARABONBA_PTR_SET_VALUE(trafficControlUnit_, trafficControlUnit) };


    // userDefault Field Functions 
    bool hasUserDefault() const { return this->userDefault_ != nullptr;};
    void deleteUserDefault() { this->userDefault_ = nullptr;};
    inline int32_t getUserDefault() const { DARABONBA_PTR_GET_DEFAULT(userDefault_, 0) };
    inline CreateTrafficControlRequest& setUserDefault(int32_t userDefault) { DARABONBA_PTR_SET_VALUE(userDefault_, userDefault) };


  protected:
    // The default throttling value for each API.
    // 
    // This parameter is required.
    shared_ptr<int32_t> apiDefault_ {};
    // The default throttling value for each app.
    shared_ptr<int32_t> appDefault_ {};
    // The description of the throttling policy.
    shared_ptr<string> description_ {};
    // The security token included in the WebSocket request header. The system uses this token to authenticate the request.
    shared_ptr<string> securityToken_ {};
    // The name of the throttling policy. The name must be 4 to 50 characters in length and can contain letters, digits, and underscores (_). It cannot start with an underscore.
    // 
    // This parameter is required.
    shared_ptr<string> trafficControlName_ {};
    // The unit to be used in the throttling policy. Valid values:
    // 
    // *   **SECOND**
    // *   **MINUTE**
    // *   **HOUR**
    // *   **DAY**
    // 
    // This parameter is required.
    shared_ptr<string> trafficControlUnit_ {};
    // The default throttling value for each user.
    shared_ptr<int32_t> userDefault_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
