// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECROSSZONEMIGRATIONJOBREQUESTDISK_HPP_
#define ALIBABACLOUD_MODELS_CREATECROSSZONEMIGRATIONJOBREQUESTDISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class CreateCrossZoneMigrationJobRequestDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCrossZoneMigrationJobRequestDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCrossZoneMigrationJobRequestDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
    };
    CreateCrossZoneMigrationJobRequestDisk() = default ;
    CreateCrossZoneMigrationJobRequestDisk(const CreateCrossZoneMigrationJobRequestDisk &) = default ;
    CreateCrossZoneMigrationJobRequestDisk(CreateCrossZoneMigrationJobRequestDisk &&) = default ;
    CreateCrossZoneMigrationJobRequestDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCrossZoneMigrationJobRequestDisk() = default ;
    CreateCrossZoneMigrationJobRequestDisk& operator=(const CreateCrossZoneMigrationJobRequestDisk &) = default ;
    CreateCrossZoneMigrationJobRequestDisk& operator=(CreateCrossZoneMigrationJobRequestDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->diskId_ != nullptr && this->performanceLevel_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateCrossZoneMigrationJobRequestDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline CreateCrossZoneMigrationJobRequestDisk& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline CreateCrossZoneMigrationJobRequestDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


  protected:
    // The disk category. A value of cloud_essd indicates enhanced SSD (ESSD).
    std::shared_ptr<string> category_ = nullptr;
    // The disk ID.
    std::shared_ptr<string> diskId_ = nullptr;
    // The performance level of the ESSD. Valid values:
    // 
    // *   PL0: A single ESSD can deliver up to 10,000 random read/write IOPS.
    // *   PL1: A single ESSD can deliver up to 50,000 random read/write IOPS.
    // *   PL2: A single ESSD can deliver up to 100,000 random read/write IOPS.
    // *   PL3: A single ESSD can deliver up to 1,000,000 random read/write IOPS.
    std::shared_ptr<string> performanceLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
