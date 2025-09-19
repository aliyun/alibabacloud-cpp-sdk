// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETINSTANCERECORDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETINSTANCERECORDCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class SetInstanceRecordConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetInstanceRecordConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(ExpirationDays, expirationDays_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RecordStorageTarget, recordStorageTarget_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetInstanceRecordConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(ExpirationDays, expirationDays_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RecordStorageTarget, recordStorageTarget_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SetInstanceRecordConfigRequest() = default ;
    SetInstanceRecordConfigRequest(const SetInstanceRecordConfigRequest &) = default ;
    SetInstanceRecordConfigRequest(SetInstanceRecordConfigRequest &&) = default ;
    SetInstanceRecordConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetInstanceRecordConfigRequest() = default ;
    SetInstanceRecordConfigRequest& operator=(const SetInstanceRecordConfigRequest &) = default ;
    SetInstanceRecordConfigRequest& operator=(SetInstanceRecordConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->expirationDays_ != nullptr && this->instanceId_ != nullptr && this->recordStorageTarget_ != nullptr && this->regionId_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline SetInstanceRecordConfigRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // expirationDays Field Functions 
    bool hasExpirationDays() const { return this->expirationDays_ != nullptr;};
    void deleteExpirationDays() { this->expirationDays_ = nullptr;};
    inline int32_t expirationDays() const { DARABONBA_PTR_GET_DEFAULT(expirationDays_, 0) };
    inline SetInstanceRecordConfigRequest& setExpirationDays(int32_t expirationDays) { DARABONBA_PTR_SET_VALUE(expirationDays_, expirationDays) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetInstanceRecordConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // recordStorageTarget Field Functions 
    bool hasRecordStorageTarget() const { return this->recordStorageTarget_ != nullptr;};
    void deleteRecordStorageTarget() { this->recordStorageTarget_ = nullptr;};
    inline string recordStorageTarget() const { DARABONBA_PTR_GET_DEFAULT(recordStorageTarget_, "") };
    inline SetInstanceRecordConfigRequest& setRecordStorageTarget(string recordStorageTarget) { DARABONBA_PTR_SET_VALUE(recordStorageTarget_, recordStorageTarget) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetInstanceRecordConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<int32_t> expirationDays_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> recordStorageTarget_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif
