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
        && this->endTime_ == nullptr && this->ownerId_ == nullptr && this->region_ == nullptr && this->startTime_ == nullptr; };
    // AIType Field Functions 
    bool hasAIType() const { return this->AIType_ != nullptr;};
    void deleteAIType() { this->AIType_ = nullptr;};
    inline string getAIType() const { DARABONBA_PTR_GET_DEFAULT(AIType_, "") };
    inline DescribeVodAIDataRequest& setAIType(string AIType) { DARABONBA_PTR_SET_VALUE(AIType_, AIType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodAIDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVodAIDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeVodAIDataRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodAIDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The AI type. By default, all types are returned. You can specify multiple types separated by commas (,). Valid values:
    // - **AIVideoCensor**: automated review.
    // - **AIVideoFPShot**: media fingerprint.
    // - **AIVideoTag**: smart tagging.
    shared_ptr<string> AIType_ {};
    // The end of the time range to query. The end time must be later than the start time. Specify the time in the `yyyy-MM-ddTHH:mm:ssZ` format (UTC).
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The storage region. By default, data in all regions is returned. You can specify multiple regions separated by commas (,). Valid values:
    // - **cn-shanghai**: Shanghai.
    // - **cn-beijing**: Beijing.
    // - **eu-central-1**: Germany.
    // - **ap-southeast-1**: Singapore.
    shared_ptr<string> region_ {};
    // The start of the time range to query. Specify the time in the `yyyy-MM-ddTHH:mm:ssZ` format (UTC).
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
