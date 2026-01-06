// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPSJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPSJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateAPSJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAPSJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApsJobName, apsJobName_);
      DARABONBA_PTR_TO_JSON(DbList, dbList_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointInstanceID, destinationEndpointInstanceID_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointPassword, destinationEndpointPassword_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointUserName, destinationEndpointUserName_);
      DARABONBA_PTR_TO_JSON(PartitionList, partitionList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SourceEndpointInstanceID, sourceEndpointInstanceID_);
      DARABONBA_PTR_TO_JSON(SourceEndpointPassword, sourceEndpointPassword_);
      DARABONBA_PTR_TO_JSON(SourceEndpointRegion, sourceEndpointRegion_);
      DARABONBA_PTR_TO_JSON(SourceEndpointUserName, sourceEndpointUserName_);
      DARABONBA_PTR_TO_JSON(TargetTableMode, targetTableMode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAPSJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApsJobName, apsJobName_);
      DARABONBA_PTR_FROM_JSON(DbList, dbList_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointInstanceID, destinationEndpointInstanceID_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointPassword, destinationEndpointPassword_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointUserName, destinationEndpointUserName_);
      DARABONBA_PTR_FROM_JSON(PartitionList, partitionList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceID, sourceEndpointInstanceID_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointPassword, sourceEndpointPassword_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointRegion, sourceEndpointRegion_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointUserName, sourceEndpointUserName_);
      DARABONBA_PTR_FROM_JSON(TargetTableMode, targetTableMode_);
    };
    CreateAPSJobRequest() = default ;
    CreateAPSJobRequest(const CreateAPSJobRequest &) = default ;
    CreateAPSJobRequest(CreateAPSJobRequest &&) = default ;
    CreateAPSJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAPSJobRequest() = default ;
    CreateAPSJobRequest& operator=(const CreateAPSJobRequest &) = default ;
    CreateAPSJobRequest& operator=(CreateAPSJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apsJobName_ == nullptr
        && this->dbList_ == nullptr && this->destinationEndpointInstanceID_ == nullptr && this->destinationEndpointPassword_ == nullptr && this->destinationEndpointUserName_ == nullptr && this->partitionList_ == nullptr
        && this->regionId_ == nullptr && this->sourceEndpointInstanceID_ == nullptr && this->sourceEndpointPassword_ == nullptr && this->sourceEndpointRegion_ == nullptr && this->sourceEndpointUserName_ == nullptr
        && this->targetTableMode_ == nullptr; };
    // apsJobName Field Functions 
    bool hasApsJobName() const { return this->apsJobName_ != nullptr;};
    void deleteApsJobName() { this->apsJobName_ = nullptr;};
    inline string getApsJobName() const { DARABONBA_PTR_GET_DEFAULT(apsJobName_, "") };
    inline CreateAPSJobRequest& setApsJobName(string apsJobName) { DARABONBA_PTR_SET_VALUE(apsJobName_, apsJobName) };


    // dbList Field Functions 
    bool hasDbList() const { return this->dbList_ != nullptr;};
    void deleteDbList() { this->dbList_ = nullptr;};
    inline string getDbList() const { DARABONBA_PTR_GET_DEFAULT(dbList_, "") };
    inline CreateAPSJobRequest& setDbList(string dbList) { DARABONBA_PTR_SET_VALUE(dbList_, dbList) };


    // destinationEndpointInstanceID Field Functions 
    bool hasDestinationEndpointInstanceID() const { return this->destinationEndpointInstanceID_ != nullptr;};
    void deleteDestinationEndpointInstanceID() { this->destinationEndpointInstanceID_ = nullptr;};
    inline string getDestinationEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointInstanceID_, "") };
    inline CreateAPSJobRequest& setDestinationEndpointInstanceID(string destinationEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(destinationEndpointInstanceID_, destinationEndpointInstanceID) };


    // destinationEndpointPassword Field Functions 
    bool hasDestinationEndpointPassword() const { return this->destinationEndpointPassword_ != nullptr;};
    void deleteDestinationEndpointPassword() { this->destinationEndpointPassword_ = nullptr;};
    inline string getDestinationEndpointPassword() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointPassword_, "") };
    inline CreateAPSJobRequest& setDestinationEndpointPassword(string destinationEndpointPassword) { DARABONBA_PTR_SET_VALUE(destinationEndpointPassword_, destinationEndpointPassword) };


    // destinationEndpointUserName Field Functions 
    bool hasDestinationEndpointUserName() const { return this->destinationEndpointUserName_ != nullptr;};
    void deleteDestinationEndpointUserName() { this->destinationEndpointUserName_ = nullptr;};
    inline string getDestinationEndpointUserName() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointUserName_, "") };
    inline CreateAPSJobRequest& setDestinationEndpointUserName(string destinationEndpointUserName) { DARABONBA_PTR_SET_VALUE(destinationEndpointUserName_, destinationEndpointUserName) };


    // partitionList Field Functions 
    bool hasPartitionList() const { return this->partitionList_ != nullptr;};
    void deletePartitionList() { this->partitionList_ = nullptr;};
    inline string getPartitionList() const { DARABONBA_PTR_GET_DEFAULT(partitionList_, "") };
    inline CreateAPSJobRequest& setPartitionList(string partitionList) { DARABONBA_PTR_SET_VALUE(partitionList_, partitionList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAPSJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sourceEndpointInstanceID Field Functions 
    bool hasSourceEndpointInstanceID() const { return this->sourceEndpointInstanceID_ != nullptr;};
    void deleteSourceEndpointInstanceID() { this->sourceEndpointInstanceID_ = nullptr;};
    inline string getSourceEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceID_, "") };
    inline CreateAPSJobRequest& setSourceEndpointInstanceID(string sourceEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceID_, sourceEndpointInstanceID) };


    // sourceEndpointPassword Field Functions 
    bool hasSourceEndpointPassword() const { return this->sourceEndpointPassword_ != nullptr;};
    void deleteSourceEndpointPassword() { this->sourceEndpointPassword_ = nullptr;};
    inline string getSourceEndpointPassword() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointPassword_, "") };
    inline CreateAPSJobRequest& setSourceEndpointPassword(string sourceEndpointPassword) { DARABONBA_PTR_SET_VALUE(sourceEndpointPassword_, sourceEndpointPassword) };


    // sourceEndpointRegion Field Functions 
    bool hasSourceEndpointRegion() const { return this->sourceEndpointRegion_ != nullptr;};
    void deleteSourceEndpointRegion() { this->sourceEndpointRegion_ = nullptr;};
    inline string getSourceEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointRegion_, "") };
    inline CreateAPSJobRequest& setSourceEndpointRegion(string sourceEndpointRegion) { DARABONBA_PTR_SET_VALUE(sourceEndpointRegion_, sourceEndpointRegion) };


    // sourceEndpointUserName Field Functions 
    bool hasSourceEndpointUserName() const { return this->sourceEndpointUserName_ != nullptr;};
    void deleteSourceEndpointUserName() { this->sourceEndpointUserName_ = nullptr;};
    inline string getSourceEndpointUserName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointUserName_, "") };
    inline CreateAPSJobRequest& setSourceEndpointUserName(string sourceEndpointUserName) { DARABONBA_PTR_SET_VALUE(sourceEndpointUserName_, sourceEndpointUserName) };


    // targetTableMode Field Functions 
    bool hasTargetTableMode() const { return this->targetTableMode_ != nullptr;};
    void deleteTargetTableMode() { this->targetTableMode_ = nullptr;};
    inline string getTargetTableMode() const { DARABONBA_PTR_GET_DEFAULT(targetTableMode_, "") };
    inline CreateAPSJobRequest& setTargetTableMode(string targetTableMode) { DARABONBA_PTR_SET_VALUE(targetTableMode_, targetTableMode) };


  protected:
    // The name of the synchronization job.
    // 
    // This parameter is required.
    shared_ptr<string> apsJobName_ {};
    // The objects to be synchronized.
    // 
    // This parameter is required.
    shared_ptr<string> dbList_ {};
    // The name of the database account of the destination cluster.
    // 
    // This parameter is required.
    shared_ptr<string> destinationEndpointInstanceID_ {};
    // The password of the database account of the destination cluster.
    shared_ptr<string> destinationEndpointPassword_ {};
    // The name of the database account of the destination cluster.
    shared_ptr<string> destinationEndpointUserName_ {};
    // The partitions.
    shared_ptr<string> partitionList_ {};
    // The region ID.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/143074.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the source instance or cluster.
    // 
    // This parameter is required.
    shared_ptr<string> sourceEndpointInstanceID_ {};
    // The password of the database account of the source instance.
    shared_ptr<string> sourceEndpointPassword_ {};
    // The region ID of the source instance.
    shared_ptr<string> sourceEndpointRegion_ {};
    // The name of the database account of the source instance.
    shared_ptr<string> sourceEndpointUserName_ {};
    // The mode of the destination table.
    shared_ptr<string> targetTableMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
