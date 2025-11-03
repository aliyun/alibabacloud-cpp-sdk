// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSTATISTICSRESPONSEBODYFILESYSTEMSTATISTICSFILESYSTEMSTATISTIC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSTATISTICSRESPONSEBODYFILESYSTEMSTATISTICSFILESYSTEMSTATISTIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic& obj) { 
      DARABONBA_PTR_TO_JSON(ExpiredCount, expiredCount_);
      DARABONBA_PTR_TO_JSON(ExpiringCount, expiringCount_);
      DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_TO_JSON(MeteredSize, meteredSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpiredCount, expiredCount_);
      DARABONBA_PTR_FROM_JSON(ExpiringCount, expiringCount_);
      DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_FROM_JSON(MeteredSize, meteredSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic() = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic(const DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic &) = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic(DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic &&) = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic() = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic& operator=(const DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic &) = default ;
    DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic& operator=(DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expiredCount_ == nullptr
        && return this->expiringCount_ == nullptr && return this->fileSystemType_ == nullptr && return this->meteredSize_ == nullptr && return this->totalCount_ == nullptr; };
    // expiredCount Field Functions 
    bool hasExpiredCount() const { return this->expiredCount_ != nullptr;};
    void deleteExpiredCount() { this->expiredCount_ = nullptr;};
    inline int32_t expiredCount() const { DARABONBA_PTR_GET_DEFAULT(expiredCount_, 0) };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic& setExpiredCount(int32_t expiredCount) { DARABONBA_PTR_SET_VALUE(expiredCount_, expiredCount) };


    // expiringCount Field Functions 
    bool hasExpiringCount() const { return this->expiringCount_ != nullptr;};
    void deleteExpiringCount() { this->expiringCount_ = nullptr;};
    inline int32_t expiringCount() const { DARABONBA_PTR_GET_DEFAULT(expiringCount_, 0) };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic& setExpiringCount(int32_t expiringCount) { DARABONBA_PTR_SET_VALUE(expiringCount_, expiringCount) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string fileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


    // meteredSize Field Functions 
    bool hasMeteredSize() const { return this->meteredSize_ != nullptr;};
    void deleteMeteredSize() { this->meteredSize_ = nullptr;};
    inline int64_t meteredSize() const { DARABONBA_PTR_GET_DEFAULT(meteredSize_, 0L) };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic& setMeteredSize(int64_t meteredSize) { DARABONBA_PTR_SET_VALUE(meteredSize_, meteredSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeFileSystemStatisticsResponseBodyFileSystemStatisticsFileSystemStatistic& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of expired file systems.
    std::shared_ptr<int32_t> expiredCount_ = nullptr;
    // The number of expiring file systems.
    // 
    // File systems whose expiration time is less than or equal to seven days away from the current time are counted.
    std::shared_ptr<int32_t> expiringCount_ = nullptr;
    // The type of the file system.
    std::shared_ptr<string> fileSystemType_ = nullptr;
    // The storage usage of the file system.
    // 
    // The value of this parameter is the maximum storage usage of the file system over the last hour.
    // 
    // Unit: bytes.
    std::shared_ptr<int64_t> meteredSize_ = nullptr;
    // The number of file systems of the current type.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
