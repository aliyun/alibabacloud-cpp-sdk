// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETDETAILBYUUIDRESPONSEBODYASSETDETAILDISKINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETASSETDETAILBYUUIDRESPONSEBODYASSETDETAILDISKINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAssetDetailByUuidResponseBodyAssetDetailDiskInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetDetailByUuidResponseBodyAssetDetailDiskInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(DiskName, diskName_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      DARABONBA_PTR_TO_JSON(TotalSizeByte, totalSizeByte_);
      DARABONBA_PTR_TO_JSON(UseSize, useSize_);
      DARABONBA_PTR_TO_JSON(UseSizeByte, useSizeByte_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetDetailByUuidResponseBodyAssetDetailDiskInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
      DARABONBA_PTR_FROM_JSON(TotalSizeByte, totalSizeByte_);
      DARABONBA_PTR_FROM_JSON(UseSize, useSize_);
      DARABONBA_PTR_FROM_JSON(UseSizeByte, useSizeByte_);
    };
    GetAssetDetailByUuidResponseBodyAssetDetailDiskInfoList() = default ;
    GetAssetDetailByUuidResponseBodyAssetDetailDiskInfoList(const GetAssetDetailByUuidResponseBodyAssetDetailDiskInfoList &) = default ;
    GetAssetDetailByUuidResponseBodyAssetDetailDiskInfoList(GetAssetDetailByUuidResponseBodyAssetDetailDiskInfoList &&) = default ;
    GetAssetDetailByUuidResponseBodyAssetDetailDiskInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetDetailByUuidResponseBodyAssetDetailDiskInfoList() = default ;
    GetAssetDetailByUuidResponseBodyAssetDetailDiskInfoList& operator=(const GetAssetDetailByUuidResponseBodyAssetDetailDiskInfoList &) = default ;
    GetAssetDetailByUuidResponseBodyAssetDetailDiskInfoList& operator=(GetAssetDetailByUuidResponseBodyAssetDetailDiskInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskName_ == nullptr
        && return this->totalSize_ == nullptr && return this->totalSizeByte_ == nullptr && return this->useSize_ == nullptr && return this->useSizeByte_ == nullptr; };
    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string diskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline GetAssetDetailByUuidResponseBodyAssetDetailDiskInfoList& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline GetAssetDetailByUuidResponseBodyAssetDetailDiskInfoList& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    // totalSizeByte Field Functions 
    bool hasTotalSizeByte() const { return this->totalSizeByte_ != nullptr;};
    void deleteTotalSizeByte() { this->totalSizeByte_ = nullptr;};
    inline int64_t totalSizeByte() const { DARABONBA_PTR_GET_DEFAULT(totalSizeByte_, 0L) };
    inline GetAssetDetailByUuidResponseBodyAssetDetailDiskInfoList& setTotalSizeByte(int64_t totalSizeByte) { DARABONBA_PTR_SET_VALUE(totalSizeByte_, totalSizeByte) };


    // useSize Field Functions 
    bool hasUseSize() const { return this->useSize_ != nullptr;};
    void deleteUseSize() { this->useSize_ = nullptr;};
    inline int64_t useSize() const { DARABONBA_PTR_GET_DEFAULT(useSize_, 0L) };
    inline GetAssetDetailByUuidResponseBodyAssetDetailDiskInfoList& setUseSize(int64_t useSize) { DARABONBA_PTR_SET_VALUE(useSize_, useSize) };


    // useSizeByte Field Functions 
    bool hasUseSizeByte() const { return this->useSizeByte_ != nullptr;};
    void deleteUseSizeByte() { this->useSizeByte_ = nullptr;};
    inline int64_t useSizeByte() const { DARABONBA_PTR_GET_DEFAULT(useSizeByte_, 0L) };
    inline GetAssetDetailByUuidResponseBodyAssetDetailDiskInfoList& setUseSizeByte(int64_t useSizeByte) { DARABONBA_PTR_SET_VALUE(useSizeByte_, useSizeByte) };


  protected:
    // The name of the disk.
    std::shared_ptr<string> diskName_ = nullptr;
    // The total disk space. Unit: GB.
    std::shared_ptr<int64_t> totalSize_ = nullptr;
    // The total disk space. Unit: bytes.
    std::shared_ptr<int64_t> totalSizeByte_ = nullptr;
    // The amount of the used disk space. Unit: GB.
    std::shared_ptr<int64_t> useSize_ = nullptr;
    // The amount of the used disk space. Unit: bytes.
    std::shared_ptr<int64_t> useSizeByte_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
