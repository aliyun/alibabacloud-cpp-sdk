// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPICTURESEARCHJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPICTURESEARCHJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class CreatePictureSearchJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePictureSearchJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_TO_JSON(BodyThreshold, bodyThreshold_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PictureSearchType, pictureSearchType_);
      DARABONBA_PTR_TO_JSON(SearchPicUrl, searchPicUrl_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePictureSearchJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_FROM_JSON(BodyThreshold, bodyThreshold_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PictureSearchType, pictureSearchType_);
      DARABONBA_PTR_FROM_JSON(SearchPicUrl, searchPicUrl_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    CreatePictureSearchJobRequest() = default ;
    CreatePictureSearchJobRequest(const CreatePictureSearchJobRequest &) = default ;
    CreatePictureSearchJobRequest(CreatePictureSearchJobRequest &&) = default ;
    CreatePictureSearchJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePictureSearchJobRequest() = default ;
    CreatePictureSearchJobRequest& operator=(const CreatePictureSearchJobRequest &) = default ;
    CreatePictureSearchJobRequest& operator=(CreatePictureSearchJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceId_ == nullptr
        && this->bodyThreshold_ == nullptr && this->endTime_ == nullptr && this->pictureSearchType_ == nullptr && this->searchPicUrl_ == nullptr && this->startTime_ == nullptr
        && this->threshold_ == nullptr; };
    // appInstanceId Field Functions 
    bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
    void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
    inline string getAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
    inline CreatePictureSearchJobRequest& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


    // bodyThreshold Field Functions 
    bool hasBodyThreshold() const { return this->bodyThreshold_ != nullptr;};
    void deleteBodyThreshold() { this->bodyThreshold_ = nullptr;};
    inline float getBodyThreshold() const { DARABONBA_PTR_GET_DEFAULT(bodyThreshold_, 0.0) };
    inline CreatePictureSearchJobRequest& setBodyThreshold(float bodyThreshold) { DARABONBA_PTR_SET_VALUE(bodyThreshold_, bodyThreshold) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CreatePictureSearchJobRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pictureSearchType Field Functions 
    bool hasPictureSearchType() const { return this->pictureSearchType_ != nullptr;};
    void deletePictureSearchType() { this->pictureSearchType_ = nullptr;};
    inline int32_t getPictureSearchType() const { DARABONBA_PTR_GET_DEFAULT(pictureSearchType_, 0) };
    inline CreatePictureSearchJobRequest& setPictureSearchType(int32_t pictureSearchType) { DARABONBA_PTR_SET_VALUE(pictureSearchType_, pictureSearchType) };


    // searchPicUrl Field Functions 
    bool hasSearchPicUrl() const { return this->searchPicUrl_ != nullptr;};
    void deleteSearchPicUrl() { this->searchPicUrl_ = nullptr;};
    inline string getSearchPicUrl() const { DARABONBA_PTR_GET_DEFAULT(searchPicUrl_, "") };
    inline CreatePictureSearchJobRequest& setSearchPicUrl(string searchPicUrl) { DARABONBA_PTR_SET_VALUE(searchPicUrl_, searchPicUrl) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreatePictureSearchJobRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline CreatePictureSearchJobRequest& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // Instance ID of the image search application instance. You can call the [QueryPictureSearchApps](https://help.aliyun.com/document_detail/206608.html) operation to query instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> appInstanceId_ {};
    // The threshold for human body search. Valid values: 0 to 1.
    // 
    // To ensure the accuracy of search results, set this parameter to a value greater than or equal to 0.8. If this parameter is not specified, the value of the Threshold parameter is used.
    shared_ptr<float> bodyThreshold_ {};
    // The end time of the search range. The time is a 13-digit timestamp in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The search type. Valid values:
    // 
    // - 1: face
    // - 0: human body
    // 
    // Default value: 1.
    shared_ptr<int32_t> pictureSearchType_ {};
    // The URL of the image to be searched.
    // 
    // This parameter is required.
    shared_ptr<string> searchPicUrl_ {};
    // The start time of the search range. The time is a 13-digit timestamp in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    // The threshold for face search. Valid values: 0 to 1.
    // 
    // To ensure the accuracy of search results, set this parameter to a value between 0.3 and 0.6.
    // 
    // This parameter is required.
    shared_ptr<float> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
