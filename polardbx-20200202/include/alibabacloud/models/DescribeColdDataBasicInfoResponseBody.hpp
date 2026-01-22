// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLDDATABASICINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLDDATABASICINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeColdDataBasicInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColdDataBasicInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColdDataBasicInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeColdDataBasicInfoResponseBody() = default ;
    DescribeColdDataBasicInfoResponseBody(const DescribeColdDataBasicInfoResponseBody &) = default ;
    DescribeColdDataBasicInfoResponseBody(DescribeColdDataBasicInfoResponseBody &&) = default ;
    DescribeColdDataBasicInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColdDataBasicInfoResponseBody() = default ;
    DescribeColdDataBasicInfoResponseBody& operator=(const DescribeColdDataBasicInfoResponseBody &) = default ;
    DescribeColdDataBasicInfoResponseBody& operator=(DescribeColdDataBasicInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->backupSetCount_ == nullptr
        && this->backupSetSpaceSize_ == nullptr && this->cloudProduct_ == nullptr && this->currentSpaceSize_ == nullptr && this->dataRedundancyType_ == nullptr && this->enableStatus_ == nullptr
        && this->readAccessNum_ == nullptr && this->regionId_ == nullptr && this->volumeName_ == nullptr && this->writeAccessNum_ == nullptr; };
      // backupSetCount Field Functions 
      bool hasBackupSetCount() const { return this->backupSetCount_ != nullptr;};
      void deleteBackupSetCount() { this->backupSetCount_ = nullptr;};
      inline int32_t getBackupSetCount() const { DARABONBA_PTR_GET_DEFAULT(backupSetCount_, 0) };
      inline Data& setBackupSetCount(int32_t backupSetCount) { DARABONBA_PTR_SET_VALUE(backupSetCount_, backupSetCount) };


      // backupSetSpaceSize Field Functions 
      bool hasBackupSetSpaceSize() const { return this->backupSetSpaceSize_ != nullptr;};
      void deleteBackupSetSpaceSize() { this->backupSetSpaceSize_ = nullptr;};
      inline double getBackupSetSpaceSize() const { DARABONBA_PTR_GET_DEFAULT(backupSetSpaceSize_, 0.0) };
      inline Data& setBackupSetSpaceSize(double backupSetSpaceSize) { DARABONBA_PTR_SET_VALUE(backupSetSpaceSize_, backupSetSpaceSize) };


      // cloudProduct Field Functions 
      bool hasCloudProduct() const { return this->cloudProduct_ != nullptr;};
      void deleteCloudProduct() { this->cloudProduct_ = nullptr;};
      inline string getCloudProduct() const { DARABONBA_PTR_GET_DEFAULT(cloudProduct_, "") };
      inline Data& setCloudProduct(string cloudProduct) { DARABONBA_PTR_SET_VALUE(cloudProduct_, cloudProduct) };


      // currentSpaceSize Field Functions 
      bool hasCurrentSpaceSize() const { return this->currentSpaceSize_ != nullptr;};
      void deleteCurrentSpaceSize() { this->currentSpaceSize_ = nullptr;};
      inline double getCurrentSpaceSize() const { DARABONBA_PTR_GET_DEFAULT(currentSpaceSize_, 0.0) };
      inline Data& setCurrentSpaceSize(double currentSpaceSize) { DARABONBA_PTR_SET_VALUE(currentSpaceSize_, currentSpaceSize) };


      // dataRedundancyType Field Functions 
      bool hasDataRedundancyType() const { return this->dataRedundancyType_ != nullptr;};
      void deleteDataRedundancyType() { this->dataRedundancyType_ = nullptr;};
      inline string getDataRedundancyType() const { DARABONBA_PTR_GET_DEFAULT(dataRedundancyType_, "") };
      inline Data& setDataRedundancyType(string dataRedundancyType) { DARABONBA_PTR_SET_VALUE(dataRedundancyType_, dataRedundancyType) };


      // enableStatus Field Functions 
      bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
      void deleteEnableStatus() { this->enableStatus_ = nullptr;};
      inline bool getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, false) };
      inline Data& setEnableStatus(bool enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


      // readAccessNum Field Functions 
      bool hasReadAccessNum() const { return this->readAccessNum_ != nullptr;};
      void deleteReadAccessNum() { this->readAccessNum_ = nullptr;};
      inline int64_t getReadAccessNum() const { DARABONBA_PTR_GET_DEFAULT(readAccessNum_, 0L) };
      inline Data& setReadAccessNum(int64_t readAccessNum) { DARABONBA_PTR_SET_VALUE(readAccessNum_, readAccessNum) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // volumeName Field Functions 
      bool hasVolumeName() const { return this->volumeName_ != nullptr;};
      void deleteVolumeName() { this->volumeName_ = nullptr;};
      inline string getVolumeName() const { DARABONBA_PTR_GET_DEFAULT(volumeName_, "") };
      inline Data& setVolumeName(string volumeName) { DARABONBA_PTR_SET_VALUE(volumeName_, volumeName) };


      // writeAccessNum Field Functions 
      bool hasWriteAccessNum() const { return this->writeAccessNum_ != nullptr;};
      void deleteWriteAccessNum() { this->writeAccessNum_ = nullptr;};
      inline double getWriteAccessNum() const { DARABONBA_PTR_GET_DEFAULT(writeAccessNum_, 0.0) };
      inline Data& setWriteAccessNum(double writeAccessNum) { DARABONBA_PTR_SET_VALUE(writeAccessNum_, writeAccessNum) };


    protected:
      shared_ptr<int32_t> backupSetCount_ {};
      shared_ptr<double> backupSetSpaceSize_ {};
      shared_ptr<string> cloudProduct_ {};
      shared_ptr<double> currentSpaceSize_ {};
      shared_ptr<string> dataRedundancyType_ {};
      shared_ptr<bool> enableStatus_ {};
      shared_ptr<int64_t> readAccessNum_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> volumeName_ {};
      shared_ptr<double> writeAccessNum_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeColdDataBasicInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeColdDataBasicInfoResponseBody::Data) };
    inline DescribeColdDataBasicInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeColdDataBasicInfoResponseBody::Data) };
    inline DescribeColdDataBasicInfoResponseBody& setData(const DescribeColdDataBasicInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeColdDataBasicInfoResponseBody& setData(DescribeColdDataBasicInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeColdDataBasicInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeColdDataBasicInfoResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
