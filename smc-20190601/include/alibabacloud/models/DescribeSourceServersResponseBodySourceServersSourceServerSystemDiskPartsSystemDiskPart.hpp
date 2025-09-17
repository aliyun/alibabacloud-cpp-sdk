// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVERSYSTEMDISKPARTSSYSTEMDISKPART_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVERSYSTEMDISKPARTSSYSTEMDISKPART_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart& obj) { 
      DARABONBA_PTR_TO_JSON(CanBlock, canBlock_);
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(Need, need_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(SizeBytes, sizeBytes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart& obj) { 
      DARABONBA_PTR_FROM_JSON(CanBlock, canBlock_);
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(Need, need_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(SizeBytes, sizeBytes_);
    };
    DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart(const DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart(DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart &&) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart& operator=(const DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart& operator=(DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->canBlock_ != nullptr
        && this->device_ != nullptr && this->need_ != nullptr && this->path_ != nullptr && this->sizeBytes_ != nullptr; };
    // canBlock Field Functions 
    bool hasCanBlock() const { return this->canBlock_ != nullptr;};
    void deleteCanBlock() { this->canBlock_ = nullptr;};
    inline bool canBlock() const { DARABONBA_PTR_GET_DEFAULT(canBlock_, false) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart& setCanBlock(bool canBlock) { DARABONBA_PTR_SET_VALUE(canBlock_, canBlock) };


    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // need Field Functions 
    bool hasNeed() const { return this->need_ != nullptr;};
    void deleteNeed() { this->need_ = nullptr;};
    inline bool need() const { DARABONBA_PTR_GET_DEFAULT(need_, false) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart& setNeed(bool need) { DARABONBA_PTR_SET_VALUE(need_, need) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // sizeBytes Field Functions 
    bool hasSizeBytes() const { return this->sizeBytes_ != nullptr;};
    void deleteSizeBytes() { this->sizeBytes_ = nullptr;};
    inline int64_t sizeBytes() const { DARABONBA_PTR_GET_DEFAULT(sizeBytes_, 0L) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerSystemDiskPartsSystemDiskPart& setSizeBytes(int64_t sizeBytes) { DARABONBA_PTR_SET_VALUE(sizeBytes_, sizeBytes) };


  protected:
    // Indicates whether block replication is enabled for the system disk partition.
    std::shared_ptr<bool> canBlock_ = nullptr;
    // The device ID of the system disk partition.
    std::shared_ptr<string> device_ = nullptr;
    // Indicates whether the system disk partition must be selected.
    std::shared_ptr<bool> need_ = nullptr;
    // The path of the system disk partition.
    std::shared_ptr<string> path_ = nullptr;
    // The size of the system disk partition. Unit: bytes.
    std::shared_ptr<int64_t> sizeBytes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
