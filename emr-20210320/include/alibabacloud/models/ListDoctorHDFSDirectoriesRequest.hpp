// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORHDFSDIRECTORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORHDFSDIRECTORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorHDFSDirectoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorHDFSDirectoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
      DARABONBA_PTR_TO_JSON(DirPath, dirPath_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorHDFSDirectoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
      DARABONBA_PTR_FROM_JSON(DirPath, dirPath_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListDoctorHDFSDirectoriesRequest() = default ;
    ListDoctorHDFSDirectoriesRequest(const ListDoctorHDFSDirectoriesRequest &) = default ;
    ListDoctorHDFSDirectoriesRequest(ListDoctorHDFSDirectoriesRequest &&) = default ;
    ListDoctorHDFSDirectoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorHDFSDirectoriesRequest() = default ;
    ListDoctorHDFSDirectoriesRequest& operator=(const ListDoctorHDFSDirectoriesRequest &) = default ;
    ListDoctorHDFSDirectoriesRequest& operator=(ListDoctorHDFSDirectoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->dateTime_ == nullptr && this->dirPath_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->orderBy_ == nullptr
        && this->orderType_ == nullptr && this->regionId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListDoctorHDFSDirectoriesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dateTime Field Functions 
    bool hasDateTime() const { return this->dateTime_ != nullptr;};
    void deleteDateTime() { this->dateTime_ = nullptr;};
    inline string getDateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
    inline ListDoctorHDFSDirectoriesRequest& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


    // dirPath Field Functions 
    bool hasDirPath() const { return this->dirPath_ != nullptr;};
    void deleteDirPath() { this->dirPath_ = nullptr;};
    inline string getDirPath() const { DARABONBA_PTR_GET_DEFAULT(dirPath_, "") };
    inline ListDoctorHDFSDirectoriesRequest& setDirPath(string dirPath) { DARABONBA_PTR_SET_VALUE(dirPath_, dirPath) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDoctorHDFSDirectoriesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDoctorHDFSDirectoriesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListDoctorHDFSDirectoriesRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListDoctorHDFSDirectoriesRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDoctorHDFSDirectoriesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the cluster.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The date. The value is in the ISO 8601 format. For example, 2023-01-01 represents January 1, 2023.
    // 
    // This parameter is required.
    shared_ptr<string> dateTime_ {};
    // The path of the directory. The directory depth cannot exceed five levels. If you do not specify this parameter, the analysis results of all directories are returned.
    shared_ptr<string> dirPath_ {};
    // The maximum number of entries to return on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The property based on which to sort the query results. Valid values:
    // 
    // - totalFileCount: the total number of files.
    // 
    // - largeFileCount: the number of large files. A large file is 1 GB or larger.
    // 
    // - mediumFileCount: the number of medium-sized files. A medium-sized file is larger than 128 MB and smaller than 1 GB.
    // 
    // - smallFileCount: the number of small files. A small file is larger than 10 MB and less than or equal to 128 MB.
    // 
    // - tinyFileCount: the number of tiny files. A tiny file is larger than 0 MB and less than or equal to 10 MB.
    // 
    // - emptyFileCount: the number of empty files. An empty file is 0 MB in size.
    // 
    // - hotDataSize: the size of hot data. Hot data is data that was accessed in the last 7 days.
    // 
    // - warmDataSize: the size of warm data. Warm data is data that was not accessed in the last 7 days but was accessed in the last 30 days.
    // 
    // - coldDataSize: the size of cold data. Cold data is data that was not accessed in the last 30 days but was accessed in the last 90 days.
    // 
    // - freezeDataSize: the size of freeze data. Freeze data is data that was not accessed in the last 90 days.
    // 
    // - totalDataSize: the total data size.
    // 
    // - totalFileDayGrowthCount: the daily increase in the total number of files.
    // 
    // - largeFileDayGrowthCount: the daily increase in the number of large files. A large file is 1 GB or larger.
    // 
    // - mediumFileDayGrowthCount: the daily increase in the number of medium-sized files. A medium-sized file is larger than 128 MB and smaller than 1 GB.
    // 
    // - smallFileDayGrowthCount: the daily increase in the number of small files. A small file is larger than 10 MB and less than or equal to 128 MB.
    // 
    // - tinyFileDayGrowthCount: the daily increase in the number of tiny files. A tiny file is larger than 0 MB and less than or equal to 10 MB.
    // 
    // - emptyFileDayGrowthCount: the daily increase in the number of empty files. An empty file is 0 MB in size.
    // 
    // - hotDataDayGrowthSize: the daily increase in the size of hot data. Hot data is data that was accessed in the last 7 days.
    // 
    // - warmDataDayGrowthSize: the daily increase in the size of warm data. Warm data is data that was not accessed in the last 7 days but was accessed in the last 30 days.
    // 
    // - coldDataDayGrowthSize: the daily increase in the size of cold data. Cold data is data that was not accessed in the last 30 days but was accessed in the last 90 days.
    // 
    // - freezeDataDayGrowthSize: the daily increase in the size of freeze data. Freeze data is data that was not accessed in the last 90 days.
    // 
    // - totalDataDayGrowthSize: the daily increase in the total data size.
    // 
    // - totalFileCountDayGrowthRatio: the day-over-day growth ratio of the total number of files.
    // 
    // - largeFileCountDayGrowthRatio: the day-over-day growth ratio of the number of large files. A large file is 1 GB or larger.
    // 
    // - mediumFileCountDayGrowthRatio: the day-over-day growth ratio of the number of medium-sized files. A medium-sized file is larger than 128 MB and smaller than 1 GB.
    // 
    // - smallFileCountDayGrowthRatio: the day-over-day growth ratio of the number of small files. A small file is larger than 10 MB and less than or equal to 128 MB.
    // 
    // - tinyFileCountDayGrowthRatio: the day-over-day growth ratio of the number of tiny files. A tiny file is larger than 0 MB and less than or equal to 10 MB.
    // 
    // - emptyFileCountDayGrowthRatio: the day-over-day growth ratio of the number of empty files. An empty file is 0 MB in size.
    shared_ptr<string> orderBy_ {};
    // The sort order. Valid values:
    // 
    // - ASC: ascending
    // 
    // - DESC: descending
    shared_ptr<string> orderType_ {};
    // The ID of the region.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
