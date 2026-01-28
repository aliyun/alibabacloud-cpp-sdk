// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTHORIZATIONRULEAPPLICATIONATTACHMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTHORIZATIONRULEAPPLICATIONATTACHMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateAuthorizationRuleApplicationAttachmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAuthorizationRuleApplicationAttachmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ValidityPeriod, validityPeriod_);
      DARABONBA_PTR_TO_JSON(ValidityType, validityType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAuthorizationRuleApplicationAttachmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ValidityPeriod, validityPeriod_);
      DARABONBA_PTR_FROM_JSON(ValidityType, validityType_);
    };
    UpdateAuthorizationRuleApplicationAttachmentRequest() = default ;
    UpdateAuthorizationRuleApplicationAttachmentRequest(const UpdateAuthorizationRuleApplicationAttachmentRequest &) = default ;
    UpdateAuthorizationRuleApplicationAttachmentRequest(UpdateAuthorizationRuleApplicationAttachmentRequest &&) = default ;
    UpdateAuthorizationRuleApplicationAttachmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAuthorizationRuleApplicationAttachmentRequest() = default ;
    UpdateAuthorizationRuleApplicationAttachmentRequest& operator=(const UpdateAuthorizationRuleApplicationAttachmentRequest &) = default ;
    UpdateAuthorizationRuleApplicationAttachmentRequest& operator=(UpdateAuthorizationRuleApplicationAttachmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ValidityPeriod : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ValidityPeriod& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, ValidityPeriod& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      ValidityPeriod() = default ;
      ValidityPeriod(const ValidityPeriod &) = default ;
      ValidityPeriod(ValidityPeriod &&) = default ;
      ValidityPeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ValidityPeriod() = default ;
      ValidityPeriod& operator=(const ValidityPeriod &) = default ;
      ValidityPeriod& operator=(ValidityPeriod &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline ValidityPeriod& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline ValidityPeriod& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // 授权规则生效结束时间，采用unix纪元精确到毫秒。
      shared_ptr<int64_t> endTime_ {};
      // 授权规则生效开始时间，采用unix纪元精确到毫秒。
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->authorizationRuleId_ == nullptr && this->clientToken_ == nullptr && this->instanceId_ == nullptr && this->validityPeriod_ == nullptr && this->validityType_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdateAuthorizationRuleApplicationAttachmentRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // authorizationRuleId Field Functions 
    bool hasAuthorizationRuleId() const { return this->authorizationRuleId_ != nullptr;};
    void deleteAuthorizationRuleId() { this->authorizationRuleId_ = nullptr;};
    inline string getAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleId_, "") };
    inline UpdateAuthorizationRuleApplicationAttachmentRequest& setAuthorizationRuleId(string authorizationRuleId) { DARABONBA_PTR_SET_VALUE(authorizationRuleId_, authorizationRuleId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAuthorizationRuleApplicationAttachmentRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateAuthorizationRuleApplicationAttachmentRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // validityPeriod Field Functions 
    bool hasValidityPeriod() const { return this->validityPeriod_ != nullptr;};
    void deleteValidityPeriod() { this->validityPeriod_ = nullptr;};
    inline const UpdateAuthorizationRuleApplicationAttachmentRequest::ValidityPeriod & getValidityPeriod() const { DARABONBA_PTR_GET_CONST(validityPeriod_, UpdateAuthorizationRuleApplicationAttachmentRequest::ValidityPeriod) };
    inline UpdateAuthorizationRuleApplicationAttachmentRequest::ValidityPeriod getValidityPeriod() { DARABONBA_PTR_GET(validityPeriod_, UpdateAuthorizationRuleApplicationAttachmentRequest::ValidityPeriod) };
    inline UpdateAuthorizationRuleApplicationAttachmentRequest& setValidityPeriod(const UpdateAuthorizationRuleApplicationAttachmentRequest::ValidityPeriod & validityPeriod) { DARABONBA_PTR_SET_VALUE(validityPeriod_, validityPeriod) };
    inline UpdateAuthorizationRuleApplicationAttachmentRequest& setValidityPeriod(UpdateAuthorizationRuleApplicationAttachmentRequest::ValidityPeriod && validityPeriod) { DARABONBA_PTR_SET_RVALUE(validityPeriod_, validityPeriod) };


    // validityType Field Functions 
    bool hasValidityType() const { return this->validityType_ != nullptr;};
    void deleteValidityType() { this->validityType_ = nullptr;};
    inline string getValidityType() const { DARABONBA_PTR_GET_DEFAULT(validityType_, "") };
    inline UpdateAuthorizationRuleApplicationAttachmentRequest& setValidityType(string validityType) { DARABONBA_PTR_SET_VALUE(validityType_, validityType) };


  protected:
    // 应用 ID。
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // 授权规则标识。
    // 
    // This parameter is required.
    shared_ptr<string> authorizationRuleId_ {};
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 有效周期，当validityPeriodType为custom有效。
    shared_ptr<UpdateAuthorizationRuleApplicationAttachmentRequest::ValidityPeriod> validityPeriod_ {};
    // 有效期类型，枚举值：permanent（永久），time_bound（自定义时间范围）。
    // 
    // This parameter is required.
    shared_ptr<string> validityType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
