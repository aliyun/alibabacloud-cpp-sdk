// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETPOLICYACCESSTIMERANGECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETPOLICYACCESSTIMERANGECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class SetPolicyAccessTimeRangeConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetPolicyAccessTimeRangeConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessTimeRangeConfig, accessTimeRangeConfig_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetPolicyAccessTimeRangeConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessTimeRangeConfig, accessTimeRangeConfig_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetPolicyAccessTimeRangeConfigRequest() = default ;
    SetPolicyAccessTimeRangeConfigRequest(const SetPolicyAccessTimeRangeConfigRequest &) = default ;
    SetPolicyAccessTimeRangeConfigRequest(SetPolicyAccessTimeRangeConfigRequest &&) = default ;
    SetPolicyAccessTimeRangeConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetPolicyAccessTimeRangeConfigRequest() = default ;
    SetPolicyAccessTimeRangeConfigRequest& operator=(const SetPolicyAccessTimeRangeConfigRequest &) = default ;
    SetPolicyAccessTimeRangeConfigRequest& operator=(SetPolicyAccessTimeRangeConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessTimeRangeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessTimeRangeConfig& obj) { 
        DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      };
      friend void from_json(const Darabonba::Json& j, AccessTimeRangeConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      };
      AccessTimeRangeConfig() = default ;
      AccessTimeRangeConfig(const AccessTimeRangeConfig &) = default ;
      AccessTimeRangeConfig(AccessTimeRangeConfig &&) = default ;
      AccessTimeRangeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessTimeRangeConfig() = default ;
      AccessTimeRangeConfig& operator=(const AccessTimeRangeConfig &) = default ;
      AccessTimeRangeConfig& operator=(AccessTimeRangeConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EffectiveTime : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EffectiveTime& obj) { 
          DARABONBA_PTR_TO_JSON(Days, days_);
          DARABONBA_PTR_TO_JSON(Hours, hours_);
        };
        friend void from_json(const Darabonba::Json& j, EffectiveTime& obj) { 
          DARABONBA_PTR_FROM_JSON(Days, days_);
          DARABONBA_PTR_FROM_JSON(Hours, hours_);
        };
        EffectiveTime() = default ;
        EffectiveTime(const EffectiveTime &) = default ;
        EffectiveTime(EffectiveTime &&) = default ;
        EffectiveTime(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EffectiveTime() = default ;
        EffectiveTime& operator=(const EffectiveTime &) = default ;
        EffectiveTime& operator=(EffectiveTime &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->days_ == nullptr
        && this->hours_ == nullptr; };
        // days Field Functions 
        bool hasDays() const { return this->days_ != nullptr;};
        void deleteDays() { this->days_ = nullptr;};
        inline const vector<int32_t> & getDays() const { DARABONBA_PTR_GET_CONST(days_, vector<int32_t>) };
        inline vector<int32_t> getDays() { DARABONBA_PTR_GET(days_, vector<int32_t>) };
        inline EffectiveTime& setDays(const vector<int32_t> & days) { DARABONBA_PTR_SET_VALUE(days_, days) };
        inline EffectiveTime& setDays(vector<int32_t> && days) { DARABONBA_PTR_SET_RVALUE(days_, days) };


        // hours Field Functions 
        bool hasHours() const { return this->hours_ != nullptr;};
        void deleteHours() { this->hours_ = nullptr;};
        inline const vector<int32_t> & getHours() const { DARABONBA_PTR_GET_CONST(hours_, vector<int32_t>) };
        inline vector<int32_t> getHours() { DARABONBA_PTR_GET(hours_, vector<int32_t>) };
        inline EffectiveTime& setHours(const vector<int32_t> & hours) { DARABONBA_PTR_SET_VALUE(hours_, hours) };
        inline EffectiveTime& setHours(vector<int32_t> && hours) { DARABONBA_PTR_SET_RVALUE(hours_, hours) };


      protected:
        // The days of the week during which users can log on to the assets.
        shared_ptr<vector<int32_t>> days_ {};
        // The time periods of the day during which users can log on to the assets.
        shared_ptr<vector<int32_t>> hours_ {};
      };

      virtual bool empty() const override { return this->effectiveTime_ == nullptr; };
      // effectiveTime Field Functions 
      bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
      void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
      inline const vector<AccessTimeRangeConfig::EffectiveTime> & getEffectiveTime() const { DARABONBA_PTR_GET_CONST(effectiveTime_, vector<AccessTimeRangeConfig::EffectiveTime>) };
      inline vector<AccessTimeRangeConfig::EffectiveTime> getEffectiveTime() { DARABONBA_PTR_GET(effectiveTime_, vector<AccessTimeRangeConfig::EffectiveTime>) };
      inline AccessTimeRangeConfig& setEffectiveTime(const vector<AccessTimeRangeConfig::EffectiveTime> & effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };
      inline AccessTimeRangeConfig& setEffectiveTime(vector<AccessTimeRangeConfig::EffectiveTime> && effectiveTime) { DARABONBA_PTR_SET_RVALUE(effectiveTime_, effectiveTime) };


    protected:
      // The details about the periods during which users can log on to the assets.
      shared_ptr<vector<AccessTimeRangeConfig::EffectiveTime>> effectiveTime_ {};
    };

    virtual bool empty() const override { return this->accessTimeRangeConfig_ == nullptr
        && this->instanceId_ == nullptr && this->policyId_ == nullptr && this->regionId_ == nullptr; };
    // accessTimeRangeConfig Field Functions 
    bool hasAccessTimeRangeConfig() const { return this->accessTimeRangeConfig_ != nullptr;};
    void deleteAccessTimeRangeConfig() { this->accessTimeRangeConfig_ = nullptr;};
    inline const SetPolicyAccessTimeRangeConfigRequest::AccessTimeRangeConfig & getAccessTimeRangeConfig() const { DARABONBA_PTR_GET_CONST(accessTimeRangeConfig_, SetPolicyAccessTimeRangeConfigRequest::AccessTimeRangeConfig) };
    inline SetPolicyAccessTimeRangeConfigRequest::AccessTimeRangeConfig getAccessTimeRangeConfig() { DARABONBA_PTR_GET(accessTimeRangeConfig_, SetPolicyAccessTimeRangeConfigRequest::AccessTimeRangeConfig) };
    inline SetPolicyAccessTimeRangeConfigRequest& setAccessTimeRangeConfig(const SetPolicyAccessTimeRangeConfigRequest::AccessTimeRangeConfig & accessTimeRangeConfig) { DARABONBA_PTR_SET_VALUE(accessTimeRangeConfig_, accessTimeRangeConfig) };
    inline SetPolicyAccessTimeRangeConfigRequest& setAccessTimeRangeConfig(SetPolicyAccessTimeRangeConfigRequest::AccessTimeRangeConfig && accessTimeRangeConfig) { DARABONBA_PTR_SET_RVALUE(accessTimeRangeConfig_, accessTimeRangeConfig) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetPolicyAccessTimeRangeConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline SetPolicyAccessTimeRangeConfigRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetPolicyAccessTimeRangeConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The logon period limits.
    // 
    // This parameter is required.
    shared_ptr<SetPolicyAccessTimeRangeConfigRequest::AccessTimeRangeConfig> accessTimeRangeConfig_ {};
    // The bastion host ID.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The control policy ID.
    // 
    // >  You can call the [ListPolicies](https://help.aliyun.com/document_detail/2758876.html) operation to query the control policy ID.
    // 
    // This parameter is required.
    shared_ptr<string> policyId_ {};
    // The region ID of the bastion host.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
