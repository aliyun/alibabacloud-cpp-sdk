// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STROGECOLLECTTASK_HPP_
#define ALIBABACLOUD_MODELS_STROGECOLLECTTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class StrogeCollectTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StrogeCollectTask& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationBucketName, destinationBucketName_);
      DARABONBA_PTR_TO_JSON(DestinationPrefix, destinationPrefix_);
      DARABONBA_PTR_TO_JSON(DlfCreated, dlfCreated_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InventoryId, inventoryId_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, StrogeCollectTask& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationBucketName, destinationBucketName_);
      DARABONBA_PTR_FROM_JSON(DestinationPrefix, destinationPrefix_);
      DARABONBA_PTR_FROM_JSON(DlfCreated, dlfCreated_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InventoryId, inventoryId_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    StrogeCollectTask() = default ;
    StrogeCollectTask(const StrogeCollectTask &) = default ;
    StrogeCollectTask(StrogeCollectTask &&) = default ;
    StrogeCollectTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StrogeCollectTask() = default ;
    StrogeCollectTask& operator=(const StrogeCollectTask &) = default ;
    StrogeCollectTask& operator=(StrogeCollectTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationBucketName_ == nullptr
        && return this->destinationPrefix_ == nullptr && return this->dlfCreated_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr
        && return this->inventoryId_ == nullptr && return this->location_ == nullptr && return this->status_ == nullptr && return this->taskType_ == nullptr; };
    // destinationBucketName Field Functions 
    bool hasDestinationBucketName() const { return this->destinationBucketName_ != nullptr;};
    void deleteDestinationBucketName() { this->destinationBucketName_ = nullptr;};
    inline string destinationBucketName() const { DARABONBA_PTR_GET_DEFAULT(destinationBucketName_, "") };
    inline StrogeCollectTask& setDestinationBucketName(string destinationBucketName) { DARABONBA_PTR_SET_VALUE(destinationBucketName_, destinationBucketName) };


    // destinationPrefix Field Functions 
    bool hasDestinationPrefix() const { return this->destinationPrefix_ != nullptr;};
    void deleteDestinationPrefix() { this->destinationPrefix_ = nullptr;};
    inline string destinationPrefix() const { DARABONBA_PTR_GET_DEFAULT(destinationPrefix_, "") };
    inline StrogeCollectTask& setDestinationPrefix(string destinationPrefix) { DARABONBA_PTR_SET_VALUE(destinationPrefix_, destinationPrefix) };


    // dlfCreated Field Functions 
    bool hasDlfCreated() const { return this->dlfCreated_ != nullptr;};
    void deleteDlfCreated() { this->dlfCreated_ = nullptr;};
    inline bool dlfCreated() const { DARABONBA_PTR_GET_DEFAULT(dlfCreated_, false) };
    inline StrogeCollectTask& setDlfCreated(bool dlfCreated) { DARABONBA_PTR_SET_VALUE(dlfCreated_, dlfCreated) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline StrogeCollectTask& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline StrogeCollectTask& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline StrogeCollectTask& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inventoryId Field Functions 
    bool hasInventoryId() const { return this->inventoryId_ != nullptr;};
    void deleteInventoryId() { this->inventoryId_ = nullptr;};
    inline string inventoryId() const { DARABONBA_PTR_GET_DEFAULT(inventoryId_, "") };
    inline StrogeCollectTask& setInventoryId(string inventoryId) { DARABONBA_PTR_SET_VALUE(inventoryId_, inventoryId) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline StrogeCollectTask& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline StrogeCollectTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline StrogeCollectTask& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    std::shared_ptr<string> destinationBucketName_ = nullptr;
    std::shared_ptr<string> destinationPrefix_ = nullptr;
    std::shared_ptr<bool> dlfCreated_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> inventoryId_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
