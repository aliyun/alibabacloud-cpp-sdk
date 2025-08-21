// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODYRESULTNODESPEC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODYRESULTNODESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeInstanceResponseBodyResultNodeSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceResponseBodyResultNodeSpec& obj) { 
      DARABONBA_PTR_TO_JSON(disk, disk_);
      DARABONBA_PTR_TO_JSON(diskEncryption, diskEncryption_);
      DARABONBA_PTR_TO_JSON(diskType, diskType_);
      DARABONBA_PTR_TO_JSON(performanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
      DARABONBA_PTR_TO_JSON(specInfo, specInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceResponseBodyResultNodeSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(disk, disk_);
      DARABONBA_PTR_FROM_JSON(diskEncryption, diskEncryption_);
      DARABONBA_PTR_FROM_JSON(diskType, diskType_);
      DARABONBA_PTR_FROM_JSON(performanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
      DARABONBA_PTR_FROM_JSON(specInfo, specInfo_);
    };
    DescribeInstanceResponseBodyResultNodeSpec() = default ;
    DescribeInstanceResponseBodyResultNodeSpec(const DescribeInstanceResponseBodyResultNodeSpec &) = default ;
    DescribeInstanceResponseBodyResultNodeSpec(DescribeInstanceResponseBodyResultNodeSpec &&) = default ;
    DescribeInstanceResponseBodyResultNodeSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceResponseBodyResultNodeSpec() = default ;
    DescribeInstanceResponseBodyResultNodeSpec& operator=(const DescribeInstanceResponseBodyResultNodeSpec &) = default ;
    DescribeInstanceResponseBodyResultNodeSpec& operator=(DescribeInstanceResponseBodyResultNodeSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->disk_ != nullptr
        && this->diskEncryption_ != nullptr && this->diskType_ != nullptr && this->performanceLevel_ != nullptr && this->spec_ != nullptr && this->specInfo_ != nullptr; };
    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline int32_t disk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
    inline DescribeInstanceResponseBodyResultNodeSpec& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


    // diskEncryption Field Functions 
    bool hasDiskEncryption() const { return this->diskEncryption_ != nullptr;};
    void deleteDiskEncryption() { this->diskEncryption_ = nullptr;};
    inline bool diskEncryption() const { DARABONBA_PTR_GET_DEFAULT(diskEncryption_, false) };
    inline DescribeInstanceResponseBodyResultNodeSpec& setDiskEncryption(bool diskEncryption) { DARABONBA_PTR_SET_VALUE(diskEncryption_, diskEncryption) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline DescribeInstanceResponseBodyResultNodeSpec& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline DescribeInstanceResponseBodyResultNodeSpec& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline DescribeInstanceResponseBodyResultNodeSpec& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // specInfo Field Functions 
    bool hasSpecInfo() const { return this->specInfo_ != nullptr;};
    void deleteSpecInfo() { this->specInfo_ = nullptr;};
    inline string specInfo() const { DARABONBA_PTR_GET_DEFAULT(specInfo_, "") };
    inline DescribeInstanceResponseBodyResultNodeSpec& setSpecInfo(string specInfo) { DARABONBA_PTR_SET_VALUE(specInfo_, specInfo) };


  protected:
    std::shared_ptr<int32_t> disk_ = nullptr;
    std::shared_ptr<bool> diskEncryption_ = nullptr;
    std::shared_ptr<string> diskType_ = nullptr;
    std::shared_ptr<string> performanceLevel_ = nullptr;
    std::shared_ptr<string> spec_ = nullptr;
    std::shared_ptr<string> specInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
