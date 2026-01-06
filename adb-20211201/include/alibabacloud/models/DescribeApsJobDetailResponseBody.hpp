// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSJOBDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSJOBDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsJobDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsJobDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(APSJobDetail, APSJobDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsJobDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(APSJobDetail, APSJobDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApsJobDetailResponseBody() = default ;
    DescribeApsJobDetailResponseBody(const DescribeApsJobDetailResponseBody &) = default ;
    DescribeApsJobDetailResponseBody(DescribeApsJobDetailResponseBody &&) = default ;
    DescribeApsJobDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsJobDetailResponseBody() = default ;
    DescribeApsJobDetailResponseBody& operator=(const DescribeApsJobDetailResponseBody &) = default ;
    DescribeApsJobDetailResponseBody& operator=(DescribeApsJobDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class APSJobDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const APSJobDetail& obj) { 
        DARABONBA_PTR_TO_JSON(DbList, dbList_);
        DARABONBA_PTR_TO_JSON(DestinationEndpointInstanceID, destinationEndpointInstanceID_);
        DARABONBA_PTR_TO_JSON(DestinationEndpointRegion, destinationEndpointRegion_);
        DARABONBA_PTR_TO_JSON(PartitionList, partitionList_);
        DARABONBA_PTR_TO_JSON(SourceEndpointInstanceID, sourceEndpointInstanceID_);
        DARABONBA_PTR_TO_JSON(SourceEndpointRegion, sourceEndpointRegion_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TargetTableMode, targetTableMode_);
      };
      friend void from_json(const Darabonba::Json& j, APSJobDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(DbList, dbList_);
        DARABONBA_PTR_FROM_JSON(DestinationEndpointInstanceID, destinationEndpointInstanceID_);
        DARABONBA_PTR_FROM_JSON(DestinationEndpointRegion, destinationEndpointRegion_);
        DARABONBA_PTR_FROM_JSON(PartitionList, partitionList_);
        DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceID, sourceEndpointInstanceID_);
        DARABONBA_PTR_FROM_JSON(SourceEndpointRegion, sourceEndpointRegion_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TargetTableMode, targetTableMode_);
      };
      APSJobDetail() = default ;
      APSJobDetail(const APSJobDetail &) = default ;
      APSJobDetail(APSJobDetail &&) = default ;
      APSJobDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~APSJobDetail() = default ;
      APSJobDetail& operator=(const APSJobDetail &) = default ;
      APSJobDetail& operator=(APSJobDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dbList_ == nullptr
        && this->destinationEndpointInstanceID_ == nullptr && this->destinationEndpointRegion_ == nullptr && this->partitionList_ == nullptr && this->sourceEndpointInstanceID_ == nullptr && this->sourceEndpointRegion_ == nullptr
        && this->status_ == nullptr && this->targetTableMode_ == nullptr; };
      // dbList Field Functions 
      bool hasDbList() const { return this->dbList_ != nullptr;};
      void deleteDbList() { this->dbList_ = nullptr;};
      inline string getDbList() const { DARABONBA_PTR_GET_DEFAULT(dbList_, "") };
      inline APSJobDetail& setDbList(string dbList) { DARABONBA_PTR_SET_VALUE(dbList_, dbList) };


      // destinationEndpointInstanceID Field Functions 
      bool hasDestinationEndpointInstanceID() const { return this->destinationEndpointInstanceID_ != nullptr;};
      void deleteDestinationEndpointInstanceID() { this->destinationEndpointInstanceID_ = nullptr;};
      inline string getDestinationEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointInstanceID_, "") };
      inline APSJobDetail& setDestinationEndpointInstanceID(string destinationEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(destinationEndpointInstanceID_, destinationEndpointInstanceID) };


      // destinationEndpointRegion Field Functions 
      bool hasDestinationEndpointRegion() const { return this->destinationEndpointRegion_ != nullptr;};
      void deleteDestinationEndpointRegion() { this->destinationEndpointRegion_ = nullptr;};
      inline string getDestinationEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointRegion_, "") };
      inline APSJobDetail& setDestinationEndpointRegion(string destinationEndpointRegion) { DARABONBA_PTR_SET_VALUE(destinationEndpointRegion_, destinationEndpointRegion) };


      // partitionList Field Functions 
      bool hasPartitionList() const { return this->partitionList_ != nullptr;};
      void deletePartitionList() { this->partitionList_ = nullptr;};
      inline string getPartitionList() const { DARABONBA_PTR_GET_DEFAULT(partitionList_, "") };
      inline APSJobDetail& setPartitionList(string partitionList) { DARABONBA_PTR_SET_VALUE(partitionList_, partitionList) };


      // sourceEndpointInstanceID Field Functions 
      bool hasSourceEndpointInstanceID() const { return this->sourceEndpointInstanceID_ != nullptr;};
      void deleteSourceEndpointInstanceID() { this->sourceEndpointInstanceID_ = nullptr;};
      inline string getSourceEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceID_, "") };
      inline APSJobDetail& setSourceEndpointInstanceID(string sourceEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceID_, sourceEndpointInstanceID) };


      // sourceEndpointRegion Field Functions 
      bool hasSourceEndpointRegion() const { return this->sourceEndpointRegion_ != nullptr;};
      void deleteSourceEndpointRegion() { this->sourceEndpointRegion_ = nullptr;};
      inline string getSourceEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointRegion_, "") };
      inline APSJobDetail& setSourceEndpointRegion(string sourceEndpointRegion) { DARABONBA_PTR_SET_VALUE(sourceEndpointRegion_, sourceEndpointRegion) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline APSJobDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // targetTableMode Field Functions 
      bool hasTargetTableMode() const { return this->targetTableMode_ != nullptr;};
      void deleteTargetTableMode() { this->targetTableMode_ = nullptr;};
      inline string getTargetTableMode() const { DARABONBA_PTR_GET_DEFAULT(targetTableMode_, "") };
      inline APSJobDetail& setTargetTableMode(string targetTableMode) { DARABONBA_PTR_SET_VALUE(targetTableMode_, targetTableMode) };


    protected:
      // The objects that are synchronized.
      shared_ptr<string> dbList_ {};
      // The ID of the destination cluster.
      shared_ptr<string> destinationEndpointInstanceID_ {};
      // The region of the destination cluster.
      shared_ptr<string> destinationEndpointRegion_ {};
      // The partitions.
      shared_ptr<string> partitionList_ {};
      // The ID of the source instance.
      shared_ptr<string> sourceEndpointInstanceID_ {};
      // The region of the source instance.
      shared_ptr<string> sourceEndpointRegion_ {};
      // The status of the job.
      shared_ptr<string> status_ {};
      // The mode of the destination table.
      shared_ptr<string> targetTableMode_ {};
    };

    virtual bool empty() const override { return this->APSJobDetail_ == nullptr
        && this->requestId_ == nullptr; };
    // APSJobDetail Field Functions 
    bool hasAPSJobDetail() const { return this->APSJobDetail_ != nullptr;};
    void deleteAPSJobDetail() { this->APSJobDetail_ = nullptr;};
    inline const DescribeApsJobDetailResponseBody::APSJobDetail & getAPSJobDetail() const { DARABONBA_PTR_GET_CONST(APSJobDetail_, DescribeApsJobDetailResponseBody::APSJobDetail) };
    inline DescribeApsJobDetailResponseBody::APSJobDetail getAPSJobDetail() { DARABONBA_PTR_GET(APSJobDetail_, DescribeApsJobDetailResponseBody::APSJobDetail) };
    inline DescribeApsJobDetailResponseBody& setAPSJobDetail(const DescribeApsJobDetailResponseBody::APSJobDetail & aPSJobDetail) { DARABONBA_PTR_SET_VALUE(APSJobDetail_, aPSJobDetail) };
    inline DescribeApsJobDetailResponseBody& setAPSJobDetail(DescribeApsJobDetailResponseBody::APSJobDetail && aPSJobDetail) { DARABONBA_PTR_SET_RVALUE(APSJobDetail_, aPSJobDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApsJobDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried job.
    shared_ptr<DescribeApsJobDetailResponseBody::APSJobDetail> APSJobDetail_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
