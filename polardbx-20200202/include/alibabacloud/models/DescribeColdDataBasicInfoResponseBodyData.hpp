// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLDDATABASICINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLDDATABASICINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeColdDataBasicInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColdDataBasicInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BackupSetCount, backupSetCount_);
      DARABONBA_PTR_TO_JSON(BackupSetSpaceSize, backupSetSpaceSize_);
      DARABONBA_PTR_TO_JSON(CloudProduct, cloudProduct_);
      DARABONBA_PTR_TO_JSON(CurrentSpaceSize, currentSpaceSize_);
      DARABONBA_PTR_TO_JSON(DataRedundancyType, dataRedundancyType_);
      DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_TO_JSON(ReadAccessNum, readAccessNum_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VolumeName, volumeName_);
      DARABONBA_PTR_TO_JSON(WriteAccessNum, writeAccessNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColdDataBasicInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupSetCount, backupSetCount_);
      DARABONBA_PTR_FROM_JSON(BackupSetSpaceSize, backupSetSpaceSize_);
      DARABONBA_PTR_FROM_JSON(CloudProduct, cloudProduct_);
      DARABONBA_PTR_FROM_JSON(CurrentSpaceSize, currentSpaceSize_);
      DARABONBA_PTR_FROM_JSON(DataRedundancyType, dataRedundancyType_);
      DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_FROM_JSON(ReadAccessNum, readAccessNum_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VolumeName, volumeName_);
      DARABONBA_PTR_FROM_JSON(WriteAccessNum, writeAccessNum_);
    };
    DescribeColdDataBasicInfoResponseBodyData() = default ;
    DescribeColdDataBasicInfoResponseBodyData(const DescribeColdDataBasicInfoResponseBodyData &) = default ;
    DescribeColdDataBasicInfoResponseBodyData(DescribeColdDataBasicInfoResponseBodyData &&) = default ;
    DescribeColdDataBasicInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColdDataBasicInfoResponseBodyData() = default ;
    DescribeColdDataBasicInfoResponseBodyData& operator=(const DescribeColdDataBasicInfoResponseBodyData &) = default ;
    DescribeColdDataBasicInfoResponseBodyData& operator=(DescribeColdDataBasicInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupSetCount_ == nullptr
        && return this->backupSetSpaceSize_ == nullptr && return this->cloudProduct_ == nullptr && return this->currentSpaceSize_ == nullptr && return this->dataRedundancyType_ == nullptr && return this->enableStatus_ == nullptr
        && return this->readAccessNum_ == nullptr && return this->regionId_ == nullptr && return this->volumeName_ == nullptr && return this->writeAccessNum_ == nullptr; };
    // backupSetCount Field Functions 
    bool hasBackupSetCount() const { return this->backupSetCount_ != nullptr;};
    void deleteBackupSetCount() { this->backupSetCount_ = nullptr;};
    inline int32_t backupSetCount() const { DARABONBA_PTR_GET_DEFAULT(backupSetCount_, 0) };
    inline DescribeColdDataBasicInfoResponseBodyData& setBackupSetCount(int32_t backupSetCount) { DARABONBA_PTR_SET_VALUE(backupSetCount_, backupSetCount) };


    // backupSetSpaceSize Field Functions 
    bool hasBackupSetSpaceSize() const { return this->backupSetSpaceSize_ != nullptr;};
    void deleteBackupSetSpaceSize() { this->backupSetSpaceSize_ = nullptr;};
    inline double backupSetSpaceSize() const { DARABONBA_PTR_GET_DEFAULT(backupSetSpaceSize_, 0.0) };
    inline DescribeColdDataBasicInfoResponseBodyData& setBackupSetSpaceSize(double backupSetSpaceSize) { DARABONBA_PTR_SET_VALUE(backupSetSpaceSize_, backupSetSpaceSize) };


    // cloudProduct Field Functions 
    bool hasCloudProduct() const { return this->cloudProduct_ != nullptr;};
    void deleteCloudProduct() { this->cloudProduct_ = nullptr;};
    inline string cloudProduct() const { DARABONBA_PTR_GET_DEFAULT(cloudProduct_, "") };
    inline DescribeColdDataBasicInfoResponseBodyData& setCloudProduct(string cloudProduct) { DARABONBA_PTR_SET_VALUE(cloudProduct_, cloudProduct) };


    // currentSpaceSize Field Functions 
    bool hasCurrentSpaceSize() const { return this->currentSpaceSize_ != nullptr;};
    void deleteCurrentSpaceSize() { this->currentSpaceSize_ = nullptr;};
    inline double currentSpaceSize() const { DARABONBA_PTR_GET_DEFAULT(currentSpaceSize_, 0.0) };
    inline DescribeColdDataBasicInfoResponseBodyData& setCurrentSpaceSize(double currentSpaceSize) { DARABONBA_PTR_SET_VALUE(currentSpaceSize_, currentSpaceSize) };


    // dataRedundancyType Field Functions 
    bool hasDataRedundancyType() const { return this->dataRedundancyType_ != nullptr;};
    void deleteDataRedundancyType() { this->dataRedundancyType_ = nullptr;};
    inline string dataRedundancyType() const { DARABONBA_PTR_GET_DEFAULT(dataRedundancyType_, "") };
    inline DescribeColdDataBasicInfoResponseBodyData& setDataRedundancyType(string dataRedundancyType) { DARABONBA_PTR_SET_VALUE(dataRedundancyType_, dataRedundancyType) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline bool enableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, false) };
    inline DescribeColdDataBasicInfoResponseBodyData& setEnableStatus(bool enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // readAccessNum Field Functions 
    bool hasReadAccessNum() const { return this->readAccessNum_ != nullptr;};
    void deleteReadAccessNum() { this->readAccessNum_ = nullptr;};
    inline int64_t readAccessNum() const { DARABONBA_PTR_GET_DEFAULT(readAccessNum_, 0L) };
    inline DescribeColdDataBasicInfoResponseBodyData& setReadAccessNum(int64_t readAccessNum) { DARABONBA_PTR_SET_VALUE(readAccessNum_, readAccessNum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeColdDataBasicInfoResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // volumeName Field Functions 
    bool hasVolumeName() const { return this->volumeName_ != nullptr;};
    void deleteVolumeName() { this->volumeName_ = nullptr;};
    inline string volumeName() const { DARABONBA_PTR_GET_DEFAULT(volumeName_, "") };
    inline DescribeColdDataBasicInfoResponseBodyData& setVolumeName(string volumeName) { DARABONBA_PTR_SET_VALUE(volumeName_, volumeName) };


    // writeAccessNum Field Functions 
    bool hasWriteAccessNum() const { return this->writeAccessNum_ != nullptr;};
    void deleteWriteAccessNum() { this->writeAccessNum_ = nullptr;};
    inline double writeAccessNum() const { DARABONBA_PTR_GET_DEFAULT(writeAccessNum_, 0.0) };
    inline DescribeColdDataBasicInfoResponseBodyData& setWriteAccessNum(double writeAccessNum) { DARABONBA_PTR_SET_VALUE(writeAccessNum_, writeAccessNum) };


  protected:
    std::shared_ptr<int32_t> backupSetCount_ = nullptr;
    std::shared_ptr<double> backupSetSpaceSize_ = nullptr;
    std::shared_ptr<string> cloudProduct_ = nullptr;
    std::shared_ptr<double> currentSpaceSize_ = nullptr;
    std::shared_ptr<string> dataRedundancyType_ = nullptr;
    std::shared_ptr<bool> enableStatus_ = nullptr;
    std::shared_ptr<int64_t> readAccessNum_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> volumeName_ = nullptr;
    std::shared_ptr<double> writeAccessNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
