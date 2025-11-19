// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODAIDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODAIDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodAIDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodAIDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIType, AIType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodAIDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIType, AIType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeVodAIDataRequest() = default ;
    DescribeVodAIDataRequest(const DescribeVodAIDataRequest &) = default ;
    DescribeVodAIDataRequest(DescribeVodAIDataRequest &&) = default ;
    DescribeVodAIDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodAIDataRequest() = default ;
    DescribeVodAIDataRequest& operator=(const DescribeVodAIDataRequest &) = default ;
    DescribeVodAIDataRequest& operator=(DescribeVodAIDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->AIType_ == nullptr
        && return this->endTime_ == nullptr && return this->ownerId_ == nullptr && return this->region_ == nullptr && return this->startTime_ == nullptr; };
    // AIType Field Functions 
    bool hasAIType() const { return this->AIType_ != nullptr;};
    void deleteAIType() { this->AIType_ = nullptr;};
    inline string AIType() const { DARABONBA_PTR_GET_DEFAULT(AIType_, "") };
    inline DescribeVodAIDataRequest& setAIType(string AIType) { DARABONBA_PTR_SET_VALUE(AIType_, AIType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodAIDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVodAIDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeVodAIDataRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodAIDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The type of video AI. If you leave this parameter empty, statistics on video AI of all types are returned. Separate multiple types with commas (,). Valid values:
    // 
    // *   **AIVideoCensor**: automated review
    // *   **AIVideoFPShot**: media fingerprinting
    // *   **AIVideoTag**: smart tagging
    std::shared_ptr<string> AIType_ = nullptr;
    // The end of the time range to query. The end time must be later than the start time. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region in which you want to query data. If you leave this parameter empty, data in all regions is returned. Separate multiple regions with commas (,). Valid values:
    // 
    // *   **cn-shanghai**: China (Shanghai)
    // *   **cn-beijing**: China (Beijing)
    // *   **eu-central-1**: Germany (Frankfurt)
    // *   **ap-southeast-1**: Singapore
    std::shared_ptr<string> region_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
