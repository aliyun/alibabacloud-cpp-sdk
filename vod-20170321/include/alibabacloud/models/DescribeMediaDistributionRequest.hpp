// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMEDIADISTRIBUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMEDIADISTRIBUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeMediaDistributionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMediaDistributionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMediaDistributionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
    };
    DescribeMediaDistributionRequest() = default ;
    DescribeMediaDistributionRequest(const DescribeMediaDistributionRequest &) = default ;
    DescribeMediaDistributionRequest(DescribeMediaDistributionRequest &&) = default ;
    DescribeMediaDistributionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMediaDistributionRequest() = default ;
    DescribeMediaDistributionRequest& operator=(const DescribeMediaDistributionRequest &) = default ;
    DescribeMediaDistributionRequest& operator=(DescribeMediaDistributionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->interval_ != nullptr && this->startTime_ != nullptr && this->storageClass_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeMediaDistributionRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeMediaDistributionRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeMediaDistributionRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // storageClass Field Functions 
    bool hasStorageClass() const { return this->storageClass_ != nullptr;};
    void deleteStorageClass() { this->storageClass_ = nullptr;};
    inline string storageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
    inline DescribeMediaDistributionRequest& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


  protected:
    // The end of the time range to query. The end time must be later than the start time. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC. The maximum time range to query is 6 months.
    std::shared_ptr<string> endTime_ = nullptr;
    // The statistical interval. Default value: day. Valid values:
    // 
    // *   hour: natural hour of the start and end time.
    // *   day: natural day of the start and end time.
    // *   week: natural week of the start and end time.
    // *   month: natural month of the start and end time.
    std::shared_ptr<string> interval_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC. The maximum time range to query is 6 months.
    std::shared_ptr<string> startTime_ = nullptr;
    // The hierarchical storage type. Valid values:
    // 
    // *   Standard
    // *   IA
    // *   Archive
    // *   ColdArchive
    // *   SourceIA
    // *   SourceArchive
    // *   SourceColdArchive
    // *   Changing
    // *   SourceChanging
    std::shared_ptr<string> storageClass_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
