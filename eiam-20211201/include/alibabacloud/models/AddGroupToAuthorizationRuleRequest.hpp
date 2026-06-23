// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGROUPTOAUTHORIZATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDGROUPTOAUTHORIZATIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class AddGroupToAuthorizationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGroupToAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ValidityPeriod, validityPeriod_);
      DARABONBA_PTR_TO_JSON(ValidityType, validityType_);
    };
    friend void from_json(const Darabonba::Json& j, AddGroupToAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ValidityPeriod, validityPeriod_);
      DARABONBA_PTR_FROM_JSON(ValidityType, validityType_);
    };
    AddGroupToAuthorizationRuleRequest() = default ;
    AddGroupToAuthorizationRuleRequest(const AddGroupToAuthorizationRuleRequest &) = default ;
    AddGroupToAuthorizationRuleRequest(AddGroupToAuthorizationRuleRequest &&) = default ;
    AddGroupToAuthorizationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGroupToAuthorizationRuleRequest() = default ;
    AddGroupToAuthorizationRuleRequest& operator=(const AddGroupToAuthorizationRuleRequest &) = default ;
    AddGroupToAuthorizationRuleRequest& operator=(AddGroupToAuthorizationRuleRequest &&) = default ;
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
      // The end time of the validity period. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> endTime_ {};
      // The start time of the validity period. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->authorizationRuleId_ == nullptr
        && this->clientToken_ == nullptr && this->groupId_ == nullptr && this->instanceId_ == nullptr && this->validityPeriod_ == nullptr && this->validityType_ == nullptr; };
    // authorizationRuleId Field Functions 
    bool hasAuthorizationRuleId() const { return this->authorizationRuleId_ != nullptr;};
    void deleteAuthorizationRuleId() { this->authorizationRuleId_ = nullptr;};
    inline string getAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleId_, "") };
    inline AddGroupToAuthorizationRuleRequest& setAuthorizationRuleId(string authorizationRuleId) { DARABONBA_PTR_SET_VALUE(authorizationRuleId_, authorizationRuleId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddGroupToAuthorizationRuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline AddGroupToAuthorizationRuleRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddGroupToAuthorizationRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // validityPeriod Field Functions 
    bool hasValidityPeriod() const { return this->validityPeriod_ != nullptr;};
    void deleteValidityPeriod() { this->validityPeriod_ = nullptr;};
    inline const AddGroupToAuthorizationRuleRequest::ValidityPeriod & getValidityPeriod() const { DARABONBA_PTR_GET_CONST(validityPeriod_, AddGroupToAuthorizationRuleRequest::ValidityPeriod) };
    inline AddGroupToAuthorizationRuleRequest::ValidityPeriod getValidityPeriod() { DARABONBA_PTR_GET(validityPeriod_, AddGroupToAuthorizationRuleRequest::ValidityPeriod) };
    inline AddGroupToAuthorizationRuleRequest& setValidityPeriod(const AddGroupToAuthorizationRuleRequest::ValidityPeriod & validityPeriod) { DARABONBA_PTR_SET_VALUE(validityPeriod_, validityPeriod) };
    inline AddGroupToAuthorizationRuleRequest& setValidityPeriod(AddGroupToAuthorizationRuleRequest::ValidityPeriod && validityPeriod) { DARABONBA_PTR_SET_RVALUE(validityPeriod_, validityPeriod) };


    // validityType Field Functions 
    bool hasValidityType() const { return this->validityType_ != nullptr;};
    void deleteValidityType() { this->validityType_ = nullptr;};
    inline string getValidityType() const { DARABONBA_PTR_GET_DEFAULT(validityType_, "") };
    inline AddGroupToAuthorizationRuleRequest& setValidityType(string validityType) { DARABONBA_PTR_SET_VALUE(validityType_, validityType) };


  protected:
    // The authorization rule ID.
    // 
    // This parameter is required.
    shared_ptr<string> authorizationRuleId_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate a parameter value, but you must make sure that the value is unique among different requests. The ClientToken value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see References [How to ensure idempotence](https://www.alibabacloud.com/help/zh/ecs/developer-reference/how-to-ensure-idempotence).
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // The group ID.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The time range of the validity period. This parameter takes effect only when **ValidityType** is set to **time_bound**.
    shared_ptr<AddGroupToAuthorizationRuleRequest::ValidityPeriod> validityPeriod_ {};
    // The validity type of the relationship. Valid values:
    // - permanent: permanent
    // - time_bound: custom time range.
    // 
    // This parameter is required.
    shared_ptr<string> validityType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
