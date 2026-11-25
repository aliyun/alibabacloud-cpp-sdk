// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVideoListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ReferenceIds, referenceIds_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ReferenceIds, referenceIds_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
    };
    GetVideoListRequest() = default ;
    GetVideoListRequest(const GetVideoListRequest &) = default ;
    GetVideoListRequest(GetVideoListRequest &&) = default ;
    GetVideoListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoListRequest() = default ;
    GetVideoListRequest& operator=(const GetVideoListRequest &) = default ;
    GetVideoListRequest& operator=(GetVideoListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cateId_ == nullptr
        && this->endTime_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->referenceIds_ == nullptr && this->sortBy_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->storageLocation_ == nullptr; };
    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline GetVideoListRequest& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetVideoListRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetVideoListRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetVideoListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // referenceIds Field Functions 
    bool hasReferenceIds() const { return this->referenceIds_ != nullptr;};
    void deleteReferenceIds() { this->referenceIds_ = nullptr;};
    inline string getReferenceIds() const { DARABONBA_PTR_GET_DEFAULT(referenceIds_, "") };
    inline GetVideoListRequest& setReferenceIds(string referenceIds) { DARABONBA_PTR_SET_VALUE(referenceIds_, referenceIds) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline GetVideoListRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetVideoListRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVideoListRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline GetVideoListRequest& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


  protected:
    // The category ID. You can obtain the category ID by using one of the following methods:
    // - Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Configuration Management** > **Media Asset Configuration** > **Category Management** to view the category ID.
    // - Call the [Create a category](https://help.aliyun.com/document_detail/56401.html) operation to create a category. The category ID is the value of the CateId response parameter.
    // - Call the [Get categories and subcategories](https://help.aliyun.com/document_detail/56406.html) operation to query categories. The category ID is the value of the CateId response parameter.
    shared_ptr<int64_t> cateId_ {};
    // The end time of the creation time, which must be later than the start time. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format. The time must be in UTC.
    shared_ptr<string> endTime_ {};
    // The current page number. Default value: **1**.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. Default value: **10**. Maximum value: **100**.
    shared_ptr<int32_t> pageSize_ {};
    // The list of custom IDs. You can specify one or more custom IDs separated by commas (,). You can specify up to 20 custom IDs.
    shared_ptr<string> referenceIds_ {};
    // The sorting method of the query results. Valid values:
    // 
    // - **CreationTime:Desc** (default): Sort by creation time in descending order.
    // - **CreationTime:Asc**: Sort by creation time in ascending order.
    shared_ptr<string> sortBy_ {};
    // The start time of the creation time. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format. The time must be in UTC.
    shared_ptr<string> startTime_ {};
    // The video status. You can specify multiple statuses separated by commas (,). Valid values:
    // 
    // - **Uploading**: The video is being uploaded.
    // - **UploadFail**: The video failed to be uploaded.
    // - **UploadSucc**: The video is uploaded.
    // - **Transcoding**: The video is being transcoded.
    // - **TranscodeFail**: The video failed to be transcoded.
    // - **Checking**: The video is being reviewed.
    // - **Blocked**: The video is blocked.
    // - **Normal**: The video is normal.
    // - **ProduceFail**: The video failed to be produced.
    // 
    // For more information about the definitions and limits of video statuses, refer to [Status: video status](~~52839#section-p7c-jgy-070~~).
    shared_ptr<string> status_ {};
    // The storage address of the audio or video file.
    shared_ptr<string> storageLocation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
