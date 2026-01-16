// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ELASTICDATANODECONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_ELASTICDATANODECONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ElasticDataNodeConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ElasticDataNodeConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(amount, amount_);
      DARABONBA_PTR_TO_JSON(disk, disk_);
      DARABONBA_PTR_TO_JSON(diskEncryption, diskEncryption_);
      DARABONBA_PTR_TO_JSON(diskType, diskType_);
      DARABONBA_PTR_TO_JSON(performanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, ElasticDataNodeConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(amount, amount_);
      DARABONBA_PTR_FROM_JSON(disk, disk_);
      DARABONBA_PTR_FROM_JSON(diskEncryption, diskEncryption_);
      DARABONBA_PTR_FROM_JSON(diskType, diskType_);
      DARABONBA_PTR_FROM_JSON(performanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
    };
    ElasticDataNodeConfiguration() = default ;
    ElasticDataNodeConfiguration(const ElasticDataNodeConfiguration &) = default ;
    ElasticDataNodeConfiguration(ElasticDataNodeConfiguration &&) = default ;
    ElasticDataNodeConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ElasticDataNodeConfiguration() = default ;
    ElasticDataNodeConfiguration& operator=(const ElasticDataNodeConfiguration &) = default ;
    ElasticDataNodeConfiguration& operator=(ElasticDataNodeConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && this->disk_ == nullptr && this->diskEncryption_ == nullptr && this->diskType_ == nullptr && this->performanceLevel_ == nullptr && this->spec_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int64_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
    inline ElasticDataNodeConfiguration& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline int64_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0L) };
    inline ElasticDataNodeConfiguration& setDisk(int64_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


    // diskEncryption Field Functions 
    bool hasDiskEncryption() const { return this->diskEncryption_ != nullptr;};
    void deleteDiskEncryption() { this->diskEncryption_ = nullptr;};
    inline bool getDiskEncryption() const { DARABONBA_PTR_GET_DEFAULT(diskEncryption_, false) };
    inline ElasticDataNodeConfiguration& setDiskEncryption(bool diskEncryption) { DARABONBA_PTR_SET_VALUE(diskEncryption_, diskEncryption) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline ElasticDataNodeConfiguration& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline ElasticDataNodeConfiguration& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline ElasticDataNodeConfiguration& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    shared_ptr<int64_t> amount_ {};
    shared_ptr<int64_t> disk_ {};
    shared_ptr<bool> diskEncryption_ {};
    shared_ptr<string> diskType_ {};
    shared_ptr<string> performanceLevel_ {};
    // This parameter is required.
    shared_ptr<string> spec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
