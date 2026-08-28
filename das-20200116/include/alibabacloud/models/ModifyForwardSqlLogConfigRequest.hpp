// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYFORWARDSQLLOGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYFORWARDSQLLOGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class ModifyForwardSqlLogConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyForwardSqlLogConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyForwardSqlLogConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    ModifyForwardSqlLogConfigRequest() = default ;
    ModifyForwardSqlLogConfigRequest(const ModifyForwardSqlLogConfigRequest &) = default ;
    ModifyForwardSqlLogConfigRequest(ModifyForwardSqlLogConfigRequest &&) = default ;
    ModifyForwardSqlLogConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyForwardSqlLogConfigRequest() = default ;
    ModifyForwardSqlLogConfigRequest& operator=(const ModifyForwardSqlLogConfigRequest &) = default ;
    ModifyForwardSqlLogConfigRequest& operator=(ModifyForwardSqlLogConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && this->instanceId_ == nullptr && this->service_ == nullptr && this->source_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ModifyForwardSqlLogConfigRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyForwardSqlLogConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline ModifyForwardSqlLogConfigRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ModifyForwardSqlLogConfigRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // Specifies whether to enable the feature. Valid values:
    // 
    // - **true**: Enable.
    // - **false**: Disable.
    // 
    // This parameter is required.
    shared_ptr<bool> enable_ {};
    // The database instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The service type. Valid values:
    // DAS_OPS: enables TOP KEY delivery.
    // 
    // This parameter is required.
    shared_ptr<string> service_ {};
    // The task source. Valid values:
    // - TOP_KEY: enables TOP KEY delivery.
    // 
    // This parameter is required.
    shared_ptr<string> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
