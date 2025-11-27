// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSREGIONLOGBACKUPFILESRESPONSEBODYITEMSITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSREGIONLOGBACKUPFILESRESPONSEBODYITEMSITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeCrossRegionLogBackupFilesResponseBodyItemsItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossRegionLogBackupFilesResponseBodyItemsItem& obj) { 
      DARABONBA_PTR_TO_JSON(CrossBackupRegion, crossBackupRegion_);
      DARABONBA_PTR_TO_JSON(CrossDownloadLink, crossDownloadLink_);
      DARABONBA_PTR_TO_JSON(CrossIntranetDownloadLink, crossIntranetDownloadLink_);
      DARABONBA_PTR_TO_JSON(CrossLogBackupId, crossLogBackupId_);
      DARABONBA_PTR_TO_JSON(CrossLogBackupSize, crossLogBackupSize_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LinkExpiredTime, linkExpiredTime_);
      DARABONBA_PTR_TO_JSON(LogBeginTime, logBeginTime_);
      DARABONBA_PTR_TO_JSON(LogEndTime, logEndTime_);
      DARABONBA_PTR_TO_JSON(LogFileName, logFileName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossRegionLogBackupFilesResponseBodyItemsItem& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossBackupRegion, crossBackupRegion_);
      DARABONBA_PTR_FROM_JSON(CrossDownloadLink, crossDownloadLink_);
      DARABONBA_PTR_FROM_JSON(CrossIntranetDownloadLink, crossIntranetDownloadLink_);
      DARABONBA_PTR_FROM_JSON(CrossLogBackupId, crossLogBackupId_);
      DARABONBA_PTR_FROM_JSON(CrossLogBackupSize, crossLogBackupSize_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LinkExpiredTime, linkExpiredTime_);
      DARABONBA_PTR_FROM_JSON(LogBeginTime, logBeginTime_);
      DARABONBA_PTR_FROM_JSON(LogEndTime, logEndTime_);
      DARABONBA_PTR_FROM_JSON(LogFileName, logFileName_);
    };
    DescribeCrossRegionLogBackupFilesResponseBodyItemsItem() = default ;
    DescribeCrossRegionLogBackupFilesResponseBodyItemsItem(const DescribeCrossRegionLogBackupFilesResponseBodyItemsItem &) = default ;
    DescribeCrossRegionLogBackupFilesResponseBodyItemsItem(DescribeCrossRegionLogBackupFilesResponseBodyItemsItem &&) = default ;
    DescribeCrossRegionLogBackupFilesResponseBodyItemsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossRegionLogBackupFilesResponseBodyItemsItem() = default ;
    DescribeCrossRegionLogBackupFilesResponseBodyItemsItem& operator=(const DescribeCrossRegionLogBackupFilesResponseBodyItemsItem &) = default ;
    DescribeCrossRegionLogBackupFilesResponseBodyItemsItem& operator=(DescribeCrossRegionLogBackupFilesResponseBodyItemsItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crossBackupRegion_ == nullptr
        && return this->crossDownloadLink_ == nullptr && return this->crossIntranetDownloadLink_ == nullptr && return this->crossLogBackupId_ == nullptr && return this->crossLogBackupSize_ == nullptr && return this->instanceId_ == nullptr
        && return this->linkExpiredTime_ == nullptr && return this->logBeginTime_ == nullptr && return this->logEndTime_ == nullptr && return this->logFileName_ == nullptr; };
    // crossBackupRegion Field Functions 
    bool hasCrossBackupRegion() const { return this->crossBackupRegion_ != nullptr;};
    void deleteCrossBackupRegion() { this->crossBackupRegion_ = nullptr;};
    inline string crossBackupRegion() const { DARABONBA_PTR_GET_DEFAULT(crossBackupRegion_, "") };
    inline DescribeCrossRegionLogBackupFilesResponseBodyItemsItem& setCrossBackupRegion(string crossBackupRegion) { DARABONBA_PTR_SET_VALUE(crossBackupRegion_, crossBackupRegion) };


    // crossDownloadLink Field Functions 
    bool hasCrossDownloadLink() const { return this->crossDownloadLink_ != nullptr;};
    void deleteCrossDownloadLink() { this->crossDownloadLink_ = nullptr;};
    inline string crossDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(crossDownloadLink_, "") };
    inline DescribeCrossRegionLogBackupFilesResponseBodyItemsItem& setCrossDownloadLink(string crossDownloadLink) { DARABONBA_PTR_SET_VALUE(crossDownloadLink_, crossDownloadLink) };


    // crossIntranetDownloadLink Field Functions 
    bool hasCrossIntranetDownloadLink() const { return this->crossIntranetDownloadLink_ != nullptr;};
    void deleteCrossIntranetDownloadLink() { this->crossIntranetDownloadLink_ = nullptr;};
    inline string crossIntranetDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(crossIntranetDownloadLink_, "") };
    inline DescribeCrossRegionLogBackupFilesResponseBodyItemsItem& setCrossIntranetDownloadLink(string crossIntranetDownloadLink) { DARABONBA_PTR_SET_VALUE(crossIntranetDownloadLink_, crossIntranetDownloadLink) };


    // crossLogBackupId Field Functions 
    bool hasCrossLogBackupId() const { return this->crossLogBackupId_ != nullptr;};
    void deleteCrossLogBackupId() { this->crossLogBackupId_ = nullptr;};
    inline int32_t crossLogBackupId() const { DARABONBA_PTR_GET_DEFAULT(crossLogBackupId_, 0) };
    inline DescribeCrossRegionLogBackupFilesResponseBodyItemsItem& setCrossLogBackupId(int32_t crossLogBackupId) { DARABONBA_PTR_SET_VALUE(crossLogBackupId_, crossLogBackupId) };


    // crossLogBackupSize Field Functions 
    bool hasCrossLogBackupSize() const { return this->crossLogBackupSize_ != nullptr;};
    void deleteCrossLogBackupSize() { this->crossLogBackupSize_ = nullptr;};
    inline int64_t crossLogBackupSize() const { DARABONBA_PTR_GET_DEFAULT(crossLogBackupSize_, 0L) };
    inline DescribeCrossRegionLogBackupFilesResponseBodyItemsItem& setCrossLogBackupSize(int64_t crossLogBackupSize) { DARABONBA_PTR_SET_VALUE(crossLogBackupSize_, crossLogBackupSize) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int32_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0) };
    inline DescribeCrossRegionLogBackupFilesResponseBodyItemsItem& setInstanceId(int32_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // linkExpiredTime Field Functions 
    bool hasLinkExpiredTime() const { return this->linkExpiredTime_ != nullptr;};
    void deleteLinkExpiredTime() { this->linkExpiredTime_ = nullptr;};
    inline string linkExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(linkExpiredTime_, "") };
    inline DescribeCrossRegionLogBackupFilesResponseBodyItemsItem& setLinkExpiredTime(string linkExpiredTime) { DARABONBA_PTR_SET_VALUE(linkExpiredTime_, linkExpiredTime) };


    // logBeginTime Field Functions 
    bool hasLogBeginTime() const { return this->logBeginTime_ != nullptr;};
    void deleteLogBeginTime() { this->logBeginTime_ = nullptr;};
    inline string logBeginTime() const { DARABONBA_PTR_GET_DEFAULT(logBeginTime_, "") };
    inline DescribeCrossRegionLogBackupFilesResponseBodyItemsItem& setLogBeginTime(string logBeginTime) { DARABONBA_PTR_SET_VALUE(logBeginTime_, logBeginTime) };


    // logEndTime Field Functions 
    bool hasLogEndTime() const { return this->logEndTime_ != nullptr;};
    void deleteLogEndTime() { this->logEndTime_ = nullptr;};
    inline string logEndTime() const { DARABONBA_PTR_GET_DEFAULT(logEndTime_, "") };
    inline DescribeCrossRegionLogBackupFilesResponseBodyItemsItem& setLogEndTime(string logEndTime) { DARABONBA_PTR_SET_VALUE(logEndTime_, logEndTime) };


    // logFileName Field Functions 
    bool hasLogFileName() const { return this->logFileName_ != nullptr;};
    void deleteLogFileName() { this->logFileName_ = nullptr;};
    inline string logFileName() const { DARABONBA_PTR_GET_DEFAULT(logFileName_, "") };
    inline DescribeCrossRegionLogBackupFilesResponseBodyItemsItem& setLogFileName(string logFileName) { DARABONBA_PTR_SET_VALUE(logFileName_, logFileName) };


  protected:
    // The ID of the destination region within which the cross-region backup file is stored.
    std::shared_ptr<string> crossBackupRegion_ = nullptr;
    // The external URL from which you can download the cross-region log backup file.
    std::shared_ptr<string> crossDownloadLink_ = nullptr;
    // The internal URL from which you can download the cross-region log backup file.
    std::shared_ptr<string> crossIntranetDownloadLink_ = nullptr;
    // The ID of the cross-region log backup file.
    std::shared_ptr<int32_t> crossLogBackupId_ = nullptr;
    // The size of the cross-region log backup file. Unit: bytes.
    std::shared_ptr<int64_t> crossLogBackupSize_ = nullptr;
    // The instance ID.
    std::shared_ptr<int32_t> instanceId_ = nullptr;
    // The time when the URL expires. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> linkExpiredTime_ = nullptr;
    // The start time of the cross-region log backup file. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> logBeginTime_ = nullptr;
    // The end time of the cross-region log backup file. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> logEndTime_ = nullptr;
    // The name of the cross-region log backup file.
    std::shared_ptr<string> logFileName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
