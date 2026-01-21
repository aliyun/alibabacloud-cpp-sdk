// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYUSERSLSLOGSTORAGETIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYUSERSLSLOGSTORAGETIMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyUserSlsLogStorageTimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyUserSlsLogStorageTimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LogVersion, logVersion_);
      DARABONBA_PTR_TO_JSON(SlsRegionId, slsRegionId_);
      DARABONBA_PTR_TO_JSON(StorageTime, storageTime_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyUserSlsLogStorageTimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LogVersion, logVersion_);
      DARABONBA_PTR_FROM_JSON(SlsRegionId, slsRegionId_);
      DARABONBA_PTR_FROM_JSON(StorageTime, storageTime_);
    };
    ModifyUserSlsLogStorageTimeRequest() = default ;
    ModifyUserSlsLogStorageTimeRequest(const ModifyUserSlsLogStorageTimeRequest &) = default ;
    ModifyUserSlsLogStorageTimeRequest(ModifyUserSlsLogStorageTimeRequest &&) = default ;
    ModifyUserSlsLogStorageTimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyUserSlsLogStorageTimeRequest() = default ;
    ModifyUserSlsLogStorageTimeRequest& operator=(const ModifyUserSlsLogStorageTimeRequest &) = default ;
    ModifyUserSlsLogStorageTimeRequest& operator=(ModifyUserSlsLogStorageTimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->logVersion_ == nullptr && this->slsRegionId_ == nullptr && this->storageTime_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyUserSlsLogStorageTimeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logVersion Field Functions 
    bool hasLogVersion() const { return this->logVersion_ != nullptr;};
    void deleteLogVersion() { this->logVersion_ = nullptr;};
    inline int32_t getLogVersion() const { DARABONBA_PTR_GET_DEFAULT(logVersion_, 0) };
    inline ModifyUserSlsLogStorageTimeRequest& setLogVersion(int32_t logVersion) { DARABONBA_PTR_SET_VALUE(logVersion_, logVersion) };


    // slsRegionId Field Functions 
    bool hasSlsRegionId() const { return this->slsRegionId_ != nullptr;};
    void deleteSlsRegionId() { this->slsRegionId_ = nullptr;};
    inline string getSlsRegionId() const { DARABONBA_PTR_GET_DEFAULT(slsRegionId_, "") };
    inline ModifyUserSlsLogStorageTimeRequest& setSlsRegionId(string slsRegionId) { DARABONBA_PTR_SET_VALUE(slsRegionId_, slsRegionId) };


    // storageTime Field Functions 
    bool hasStorageTime() const { return this->storageTime_ != nullptr;};
    void deleteStorageTime() { this->storageTime_ = nullptr;};
    inline int32_t getStorageTime() const { DARABONBA_PTR_GET_DEFAULT(storageTime_, 0) };
    inline ModifyUserSlsLogStorageTimeRequest& setStorageTime(int32_t storageTime) { DARABONBA_PTR_SET_VALUE(storageTime_, storageTime) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> logVersion_ {};
    shared_ptr<string> slsRegionId_ {};
    // This parameter is required.
    shared_ptr<int32_t> storageTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
