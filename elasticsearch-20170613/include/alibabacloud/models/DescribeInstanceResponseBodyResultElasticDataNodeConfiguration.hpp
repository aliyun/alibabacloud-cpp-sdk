// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODYRESULTELASTICDATANODECONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODYRESULTELASTICDATANODECONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeInstanceResponseBodyResultElasticDataNodeConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceResponseBodyResultElasticDataNodeConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(amount, amount_);
      DARABONBA_PTR_TO_JSON(disk, disk_);
      DARABONBA_PTR_TO_JSON(diskEncryption, diskEncryption_);
      DARABONBA_PTR_TO_JSON(diskType, diskType_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
      DARABONBA_PTR_TO_JSON(specInfo, specInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceResponseBodyResultElasticDataNodeConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(amount, amount_);
      DARABONBA_PTR_FROM_JSON(disk, disk_);
      DARABONBA_PTR_FROM_JSON(diskEncryption, diskEncryption_);
      DARABONBA_PTR_FROM_JSON(diskType, diskType_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
      DARABONBA_PTR_FROM_JSON(specInfo, specInfo_);
    };
    DescribeInstanceResponseBodyResultElasticDataNodeConfiguration() = default ;
    DescribeInstanceResponseBodyResultElasticDataNodeConfiguration(const DescribeInstanceResponseBodyResultElasticDataNodeConfiguration &) = default ;
    DescribeInstanceResponseBodyResultElasticDataNodeConfiguration(DescribeInstanceResponseBodyResultElasticDataNodeConfiguration &&) = default ;
    DescribeInstanceResponseBodyResultElasticDataNodeConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceResponseBodyResultElasticDataNodeConfiguration() = default ;
    DescribeInstanceResponseBodyResultElasticDataNodeConfiguration& operator=(const DescribeInstanceResponseBodyResultElasticDataNodeConfiguration &) = default ;
    DescribeInstanceResponseBodyResultElasticDataNodeConfiguration& operator=(DescribeInstanceResponseBodyResultElasticDataNodeConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amount_ != nullptr
        && this->disk_ != nullptr && this->diskEncryption_ != nullptr && this->diskType_ != nullptr && this->spec_ != nullptr && this->specInfo_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline DescribeInstanceResponseBodyResultElasticDataNodeConfiguration& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline int32_t disk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
    inline DescribeInstanceResponseBodyResultElasticDataNodeConfiguration& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


    // diskEncryption Field Functions 
    bool hasDiskEncryption() const { return this->diskEncryption_ != nullptr;};
    void deleteDiskEncryption() { this->diskEncryption_ = nullptr;};
    inline bool diskEncryption() const { DARABONBA_PTR_GET_DEFAULT(diskEncryption_, false) };
    inline DescribeInstanceResponseBodyResultElasticDataNodeConfiguration& setDiskEncryption(bool diskEncryption) { DARABONBA_PTR_SET_VALUE(diskEncryption_, diskEncryption) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline DescribeInstanceResponseBodyResultElasticDataNodeConfiguration& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline DescribeInstanceResponseBodyResultElasticDataNodeConfiguration& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // specInfo Field Functions 
    bool hasSpecInfo() const { return this->specInfo_ != nullptr;};
    void deleteSpecInfo() { this->specInfo_ = nullptr;};
    inline string specInfo() const { DARABONBA_PTR_GET_DEFAULT(specInfo_, "") };
    inline DescribeInstanceResponseBodyResultElasticDataNodeConfiguration& setSpecInfo(string specInfo) { DARABONBA_PTR_SET_VALUE(specInfo_, specInfo) };


  protected:
    std::shared_ptr<int32_t> amount_ = nullptr;
    std::shared_ptr<int32_t> disk_ = nullptr;
    std::shared_ptr<bool> diskEncryption_ = nullptr;
    std::shared_ptr<string> diskType_ = nullptr;
    std::shared_ptr<string> spec_ = nullptr;
    std::shared_ptr<string> specInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
