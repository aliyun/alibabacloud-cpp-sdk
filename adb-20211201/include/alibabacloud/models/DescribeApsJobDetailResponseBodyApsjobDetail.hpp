// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSJOBDETAILRESPONSEBODYAPSJOBDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSJOBDETAILRESPONSEBODYAPSJOBDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsJobDetailResponseBodyAPSJobDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsJobDetailResponseBodyAPSJobDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DbList, dbList_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointInstanceID, destinationEndpointInstanceID_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointRegion, destinationEndpointRegion_);
      DARABONBA_PTR_TO_JSON(PartitionList, partitionList_);
      DARABONBA_PTR_TO_JSON(SourceEndpointInstanceID, sourceEndpointInstanceID_);
      DARABONBA_PTR_TO_JSON(SourceEndpointRegion, sourceEndpointRegion_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetTableMode, targetTableMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsJobDetailResponseBodyAPSJobDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DbList, dbList_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointInstanceID, destinationEndpointInstanceID_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointRegion, destinationEndpointRegion_);
      DARABONBA_PTR_FROM_JSON(PartitionList, partitionList_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceID, sourceEndpointInstanceID_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointRegion, sourceEndpointRegion_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetTableMode, targetTableMode_);
    };
    DescribeApsJobDetailResponseBodyAPSJobDetail() = default ;
    DescribeApsJobDetailResponseBodyAPSJobDetail(const DescribeApsJobDetailResponseBodyAPSJobDetail &) = default ;
    DescribeApsJobDetailResponseBodyAPSJobDetail(DescribeApsJobDetailResponseBodyAPSJobDetail &&) = default ;
    DescribeApsJobDetailResponseBodyAPSJobDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsJobDetailResponseBodyAPSJobDetail() = default ;
    DescribeApsJobDetailResponseBodyAPSJobDetail& operator=(const DescribeApsJobDetailResponseBodyAPSJobDetail &) = default ;
    DescribeApsJobDetailResponseBodyAPSJobDetail& operator=(DescribeApsJobDetailResponseBodyAPSJobDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbList_ != nullptr
        && this->destinationEndpointInstanceID_ != nullptr && this->destinationEndpointRegion_ != nullptr && this->partitionList_ != nullptr && this->sourceEndpointInstanceID_ != nullptr && this->sourceEndpointRegion_ != nullptr
        && this->status_ != nullptr && this->targetTableMode_ != nullptr; };
    // dbList Field Functions 
    bool hasDbList() const { return this->dbList_ != nullptr;};
    void deleteDbList() { this->dbList_ = nullptr;};
    inline string dbList() const { DARABONBA_PTR_GET_DEFAULT(dbList_, "") };
    inline DescribeApsJobDetailResponseBodyAPSJobDetail& setDbList(string dbList) { DARABONBA_PTR_SET_VALUE(dbList_, dbList) };


    // destinationEndpointInstanceID Field Functions 
    bool hasDestinationEndpointInstanceID() const { return this->destinationEndpointInstanceID_ != nullptr;};
    void deleteDestinationEndpointInstanceID() { this->destinationEndpointInstanceID_ = nullptr;};
    inline string destinationEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointInstanceID_, "") };
    inline DescribeApsJobDetailResponseBodyAPSJobDetail& setDestinationEndpointInstanceID(string destinationEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(destinationEndpointInstanceID_, destinationEndpointInstanceID) };


    // destinationEndpointRegion Field Functions 
    bool hasDestinationEndpointRegion() const { return this->destinationEndpointRegion_ != nullptr;};
    void deleteDestinationEndpointRegion() { this->destinationEndpointRegion_ = nullptr;};
    inline string destinationEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointRegion_, "") };
    inline DescribeApsJobDetailResponseBodyAPSJobDetail& setDestinationEndpointRegion(string destinationEndpointRegion) { DARABONBA_PTR_SET_VALUE(destinationEndpointRegion_, destinationEndpointRegion) };


    // partitionList Field Functions 
    bool hasPartitionList() const { return this->partitionList_ != nullptr;};
    void deletePartitionList() { this->partitionList_ = nullptr;};
    inline string partitionList() const { DARABONBA_PTR_GET_DEFAULT(partitionList_, "") };
    inline DescribeApsJobDetailResponseBodyAPSJobDetail& setPartitionList(string partitionList) { DARABONBA_PTR_SET_VALUE(partitionList_, partitionList) };


    // sourceEndpointInstanceID Field Functions 
    bool hasSourceEndpointInstanceID() const { return this->sourceEndpointInstanceID_ != nullptr;};
    void deleteSourceEndpointInstanceID() { this->sourceEndpointInstanceID_ = nullptr;};
    inline string sourceEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceID_, "") };
    inline DescribeApsJobDetailResponseBodyAPSJobDetail& setSourceEndpointInstanceID(string sourceEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceID_, sourceEndpointInstanceID) };


    // sourceEndpointRegion Field Functions 
    bool hasSourceEndpointRegion() const { return this->sourceEndpointRegion_ != nullptr;};
    void deleteSourceEndpointRegion() { this->sourceEndpointRegion_ = nullptr;};
    inline string sourceEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointRegion_, "") };
    inline DescribeApsJobDetailResponseBodyAPSJobDetail& setSourceEndpointRegion(string sourceEndpointRegion) { DARABONBA_PTR_SET_VALUE(sourceEndpointRegion_, sourceEndpointRegion) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeApsJobDetailResponseBodyAPSJobDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetTableMode Field Functions 
    bool hasTargetTableMode() const { return this->targetTableMode_ != nullptr;};
    void deleteTargetTableMode() { this->targetTableMode_ = nullptr;};
    inline string targetTableMode() const { DARABONBA_PTR_GET_DEFAULT(targetTableMode_, "") };
    inline DescribeApsJobDetailResponseBodyAPSJobDetail& setTargetTableMode(string targetTableMode) { DARABONBA_PTR_SET_VALUE(targetTableMode_, targetTableMode) };


  protected:
    // The objects that are synchronized.
    std::shared_ptr<string> dbList_ = nullptr;
    // The ID of the destination cluster.
    std::shared_ptr<string> destinationEndpointInstanceID_ = nullptr;
    // The region of the destination cluster.
    std::shared_ptr<string> destinationEndpointRegion_ = nullptr;
    // The partitions.
    std::shared_ptr<string> partitionList_ = nullptr;
    // The ID of the source instance.
    std::shared_ptr<string> sourceEndpointInstanceID_ = nullptr;
    // The region of the source instance.
    std::shared_ptr<string> sourceEndpointRegion_ = nullptr;
    // The status of the job.
    std::shared_ptr<string> status_ = nullptr;
    // The mode of the destination table.
    std::shared_ptr<string> targetTableMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
