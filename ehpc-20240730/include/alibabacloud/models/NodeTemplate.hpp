// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODETEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_NODETEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class NodeTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(DataDisks, dataDisks_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EnableHT, enableHT_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
    };
    friend void from_json(const Darabonba::Json& j, NodeTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(DataDisks, dataDisks_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EnableHT, enableHT_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
    };
    NodeTemplate() = default ;
    NodeTemplate(const NodeTemplate &) = default ;
    NodeTemplate(NodeTemplate &&) = default ;
    NodeTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeTemplate() = default ;
    NodeTemplate& operator=(const NodeTemplate &) = default ;
    NodeTemplate& operator=(NodeTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SystemDisk : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemDisk& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(Size, size_);
      };
      friend void from_json(const Darabonba::Json& j, SystemDisk& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
      };
      SystemDisk() = default ;
      SystemDisk(const SystemDisk &) = default ;
      SystemDisk(SystemDisk &&) = default ;
      SystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemDisk() = default ;
      SystemDisk& operator=(const SystemDisk &) = default ;
      SystemDisk& operator=(SystemDisk &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->level_ == nullptr && this->size_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline SystemDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline SystemDisk& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline SystemDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      shared_ptr<string> category_ {};
      shared_ptr<string> level_ {};
      shared_ptr<int32_t> size_ {};
    };

    class DataDisks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataDisks& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(DeleteWithInstance, deleteWithInstance_);
        DARABONBA_PTR_TO_JSON(Device, device_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(MountDir, mountDir_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      };
      friend void from_json(const Darabonba::Json& j, DataDisks& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(DeleteWithInstance, deleteWithInstance_);
        DARABONBA_PTR_FROM_JSON(Device, device_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(MountDir, mountDir_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      };
      DataDisks() = default ;
      DataDisks(const DataDisks &) = default ;
      DataDisks(DataDisks &&) = default ;
      DataDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataDisks() = default ;
      DataDisks& operator=(const DataDisks &) = default ;
      DataDisks& operator=(DataDisks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->deleteWithInstance_ == nullptr && this->device_ == nullptr && this->level_ == nullptr && this->mountDir_ == nullptr && this->size_ == nullptr
        && this->snapshotId_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline DataDisks& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // deleteWithInstance Field Functions 
      bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
      void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
      inline bool getDeleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, false) };
      inline DataDisks& setDeleteWithInstance(bool deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


      // device Field Functions 
      bool hasDevice() const { return this->device_ != nullptr;};
      void deleteDevice() { this->device_ = nullptr;};
      inline string getDevice() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
      inline DataDisks& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline DataDisks& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // mountDir Field Functions 
      bool hasMountDir() const { return this->mountDir_ != nullptr;};
      void deleteMountDir() { this->mountDir_ = nullptr;};
      inline string getMountDir() const { DARABONBA_PTR_GET_DEFAULT(mountDir_, "") };
      inline DataDisks& setMountDir(string mountDir) { DARABONBA_PTR_SET_VALUE(mountDir_, mountDir) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline DataDisks& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // snapshotId Field Functions 
      bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
      void deleteSnapshotId() { this->snapshotId_ = nullptr;};
      inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
      inline DataDisks& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    protected:
      shared_ptr<string> category_ {};
      shared_ptr<bool> deleteWithInstance_ {};
      shared_ptr<string> device_ {};
      shared_ptr<string> level_ {};
      shared_ptr<string> mountDir_ {};
      shared_ptr<int32_t> size_ {};
      shared_ptr<string> snapshotId_ {};
    };

    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->autoRenewPeriod_ == nullptr && this->dataDisks_ == nullptr && this->duration_ == nullptr && this->enableHT_ == nullptr && this->imageId_ == nullptr
        && this->instanceChargeType_ == nullptr && this->instanceType_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->spotPriceLimit_ == nullptr
        && this->spotStrategy_ == nullptr && this->systemDisk_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline NodeTemplate& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int32_t getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
    inline NodeTemplate& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // dataDisks Field Functions 
    bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
    void deleteDataDisks() { this->dataDisks_ = nullptr;};
    inline const vector<NodeTemplate::DataDisks> & getDataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, vector<NodeTemplate::DataDisks>) };
    inline vector<NodeTemplate::DataDisks> getDataDisks() { DARABONBA_PTR_GET(dataDisks_, vector<NodeTemplate::DataDisks>) };
    inline NodeTemplate& setDataDisks(const vector<NodeTemplate::DataDisks> & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
    inline NodeTemplate& setDataDisks(vector<NodeTemplate::DataDisks> && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline NodeTemplate& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // enableHT Field Functions 
    bool hasEnableHT() const { return this->enableHT_ != nullptr;};
    void deleteEnableHT() { this->enableHT_ = nullptr;};
    inline bool getEnableHT() const { DARABONBA_PTR_GET_DEFAULT(enableHT_, false) };
    inline NodeTemplate& setEnableHT(bool enableHT) { DARABONBA_PTR_SET_VALUE(enableHT_, enableHT) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline NodeTemplate& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline NodeTemplate& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline NodeTemplate& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline NodeTemplate& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline NodeTemplate& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline float getSpotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
    inline NodeTemplate& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline NodeTemplate& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const NodeTemplate::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, NodeTemplate::SystemDisk) };
    inline NodeTemplate::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, NodeTemplate::SystemDisk) };
    inline NodeTemplate& setSystemDisk(const NodeTemplate::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline NodeTemplate& setSystemDisk(NodeTemplate::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


  protected:
    shared_ptr<bool> autoRenew_ {};
    shared_ptr<int32_t> autoRenewPeriod_ {};
    shared_ptr<vector<NodeTemplate::DataDisks>> dataDisks_ {};
    shared_ptr<int32_t> duration_ {};
    shared_ptr<bool> enableHT_ {};
    shared_ptr<string> imageId_ {};
    shared_ptr<string> instanceChargeType_ {};
    shared_ptr<string> instanceType_ {};
    shared_ptr<int32_t> period_ {};
    shared_ptr<string> periodUnit_ {};
    shared_ptr<float> spotPriceLimit_ {};
    shared_ptr<string> spotStrategy_ {};
    shared_ptr<NodeTemplate::SystemDisk> systemDisk_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
