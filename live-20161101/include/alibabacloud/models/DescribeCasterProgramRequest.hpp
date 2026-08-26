// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERPROGRAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERPROGRAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterProgramRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterProgramRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EpisodeId, episodeId_);
      DARABONBA_PTR_TO_JSON(EpisodeType, episodeType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterProgramRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EpisodeId, episodeId_);
      DARABONBA_PTR_FROM_JSON(EpisodeType, episodeType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCasterProgramRequest() = default ;
    DescribeCasterProgramRequest(const DescribeCasterProgramRequest &) = default ;
    DescribeCasterProgramRequest(DescribeCasterProgramRequest &&) = default ;
    DescribeCasterProgramRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterProgramRequest() = default ;
    DescribeCasterProgramRequest& operator=(const DescribeCasterProgramRequest &) = default ;
    DescribeCasterProgramRequest& operator=(DescribeCasterProgramRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casterId_ == nullptr
        && this->endTime_ == nullptr && this->episodeId_ == nullptr && this->episodeType_ == nullptr && this->ownerId_ == nullptr && this->pageNum_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline DescribeCasterProgramRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeCasterProgramRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // episodeId Field Functions 
    bool hasEpisodeId() const { return this->episodeId_ != nullptr;};
    void deleteEpisodeId() { this->episodeId_ = nullptr;};
    inline string getEpisodeId() const { DARABONBA_PTR_GET_DEFAULT(episodeId_, "") };
    inline DescribeCasterProgramRequest& setEpisodeId(string episodeId) { DARABONBA_PTR_SET_VALUE(episodeId_, episodeId) };


    // episodeType Field Functions 
    bool hasEpisodeType() const { return this->episodeType_ != nullptr;};
    void deleteEpisodeType() { this->episodeType_ = nullptr;};
    inline string getEpisodeType() const { DARABONBA_PTR_GET_DEFAULT(episodeType_, "") };
    inline DescribeCasterProgramRequest& setEpisodeType(string episodeType) { DARABONBA_PTR_SET_VALUE(episodeType_, episodeType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeCasterProgramRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeCasterProgramRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCasterProgramRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCasterProgramRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeCasterProgramRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCasterProgramRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the production studio.
    // 
    // - If you create a production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, use the CasterId value that is returned in the response.
    // 
    // - If you create a production studio in the LIVE console, find the ID on the Cloud Production Studio page. To go to this page, choose **LIVE** > **Production Studio** > **Cloud Production Studio**.
    // 
    // > The name of the production studio in the list on the Cloud Production Studio page is its ID.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    // The end time. The time must be in the *yyyy-MM-dd*T*HH:mm:ss*Z format and in UTC.
    shared_ptr<string> endTime_ {};
    // The ID of the program.
    shared_ptr<string> episodeId_ {};
    // The type of the node. Valid values:
    // 
    // - **Resource**: video source.
    // 
    // - **Component**: component.
    shared_ptr<string> episodeType_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number.
    shared_ptr<int32_t> pageNum_ {};
    // The number of programs on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the region.
    shared_ptr<string> regionId_ {};
    // The start time. The time must be in the *yyyy-MM-dd*T*HH:mm:ss*Z format and in UTC.
    shared_ptr<string> startTime_ {};
    // The status of the program. Valid values:
    // 
    // - **0**: not started
    // 
    // - **1**: playing
    // 
    // - **2**: finished
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
