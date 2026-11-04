// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PICTURESEARCHPICTUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PICTURESEARCHPICTUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class PictureSearchPictureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PictureSearchPictureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_TO_JSON(ContainPicUrl, containPicUrl_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PictureSearchType, pictureSearchType_);
      DARABONBA_PTR_TO_JSON(SearchPicUrl, searchPicUrl_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, PictureSearchPictureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_FROM_JSON(ContainPicUrl, containPicUrl_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PictureSearchType, pictureSearchType_);
      DARABONBA_PTR_FROM_JSON(SearchPicUrl, searchPicUrl_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    PictureSearchPictureRequest() = default ;
    PictureSearchPictureRequest(const PictureSearchPictureRequest &) = default ;
    PictureSearchPictureRequest(PictureSearchPictureRequest &&) = default ;
    PictureSearchPictureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PictureSearchPictureRequest() = default ;
    PictureSearchPictureRequest& operator=(const PictureSearchPictureRequest &) = default ;
    PictureSearchPictureRequest& operator=(PictureSearchPictureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceId_ == nullptr
        && this->containPicUrl_ == nullptr && this->currentPage_ == nullptr && this->endTime_ == nullptr && this->pageSize_ == nullptr && this->pictureSearchType_ == nullptr
        && this->searchPicUrl_ == nullptr && this->startTime_ == nullptr && this->threshold_ == nullptr; };
    // appInstanceId Field Functions 
    bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
    void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
    inline string getAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
    inline PictureSearchPictureRequest& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


    // containPicUrl Field Functions 
    bool hasContainPicUrl() const { return this->containPicUrl_ != nullptr;};
    void deleteContainPicUrl() { this->containPicUrl_ = nullptr;};
    inline bool getContainPicUrl() const { DARABONBA_PTR_GET_DEFAULT(containPicUrl_, false) };
    inline PictureSearchPictureRequest& setContainPicUrl(bool containPicUrl) { DARABONBA_PTR_SET_VALUE(containPicUrl_, containPicUrl) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline PictureSearchPictureRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline PictureSearchPictureRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline PictureSearchPictureRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pictureSearchType Field Functions 
    bool hasPictureSearchType() const { return this->pictureSearchType_ != nullptr;};
    void deletePictureSearchType() { this->pictureSearchType_ = nullptr;};
    inline int32_t getPictureSearchType() const { DARABONBA_PTR_GET_DEFAULT(pictureSearchType_, 0) };
    inline PictureSearchPictureRequest& setPictureSearchType(int32_t pictureSearchType) { DARABONBA_PTR_SET_VALUE(pictureSearchType_, pictureSearchType) };


    // searchPicUrl Field Functions 
    bool hasSearchPicUrl() const { return this->searchPicUrl_ != nullptr;};
    void deleteSearchPicUrl() { this->searchPicUrl_ = nullptr;};
    inline string getSearchPicUrl() const { DARABONBA_PTR_GET_DEFAULT(searchPicUrl_, "") };
    inline PictureSearchPictureRequest& setSearchPicUrl(string searchPicUrl) { DARABONBA_PTR_SET_VALUE(searchPicUrl_, searchPicUrl) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline PictureSearchPictureRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline PictureSearchPictureRequest& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // Instance ID of the image search application instance. You can call the [QueryPictureSearchApps](https://help.aliyun.com/document_detail/206608.html) operation to query instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> appInstanceId_ {};
    // Specifies whether the response includes the image URL.
    // 
    // > Currently, the response is returned regardless of whether this parameter is set to true or false.
    // 
    // This parameter is required.
    shared_ptr<bool> containPicUrl_ {};
    // The page number of the page to return. Pages start from page 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The end time of the search range. The time is a 13-digit timestamp in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The number of entries to return on each page. Maximum value: 10.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The search type. Valid values:
    // - **1** (default): face
    // - **0**: human body
    shared_ptr<int32_t> pictureSearchType_ {};
    // The URL of the image to search for.
    // 
    // This parameter is required.
    shared_ptr<string> searchPicUrl_ {};
    // The start time of the search range. The time is a 13-digit timestamp in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    // The search threshold. Valid values: 0 to 1.
    // 
    // > Set the search threshold to a value greater than or equal to 0.3 to ensure a match with the detected object.
    // 
    // This parameter is required.
    shared_ptr<float> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
