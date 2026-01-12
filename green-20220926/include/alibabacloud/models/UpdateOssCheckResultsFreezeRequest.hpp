// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEOSSCHECKRESULTSFREEZEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEOSSCHECKRESULTSFREEZEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class UpdateOssCheckResultsFreezeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOssCheckResultsFreezeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(FreezeItems, freezeItems_);
      DARABONBA_PTR_TO_JSON(FreezeRestorePath, freezeRestorePath_);
      DARABONBA_PTR_TO_JSON(FreezeType, freezeType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOssCheckResultsFreezeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(FreezeItems, freezeItems_);
      DARABONBA_PTR_FROM_JSON(FreezeRestorePath, freezeRestorePath_);
      DARABONBA_PTR_FROM_JSON(FreezeType, freezeType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    UpdateOssCheckResultsFreezeRequest() = default ;
    UpdateOssCheckResultsFreezeRequest(const UpdateOssCheckResultsFreezeRequest &) = default ;
    UpdateOssCheckResultsFreezeRequest(UpdateOssCheckResultsFreezeRequest &&) = default ;
    UpdateOssCheckResultsFreezeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOssCheckResultsFreezeRequest() = default ;
    UpdateOssCheckResultsFreezeRequest& operator=(const UpdateOssCheckResultsFreezeRequest &) = default ;
    UpdateOssCheckResultsFreezeRequest& operator=(UpdateOssCheckResultsFreezeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->freezeItems_ == nullptr && this->freezeRestorePath_ == nullptr && this->freezeType_ == nullptr && this->regionId_ == nullptr && this->startDate_ == nullptr
        && this->taskId_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline UpdateOssCheckResultsFreezeRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // freezeItems Field Functions 
    bool hasFreezeItems() const { return this->freezeItems_ != nullptr;};
    void deleteFreezeItems() { this->freezeItems_ = nullptr;};
    inline string getFreezeItems() const { DARABONBA_PTR_GET_DEFAULT(freezeItems_, "") };
    inline UpdateOssCheckResultsFreezeRequest& setFreezeItems(string freezeItems) { DARABONBA_PTR_SET_VALUE(freezeItems_, freezeItems) };


    // freezeRestorePath Field Functions 
    bool hasFreezeRestorePath() const { return this->freezeRestorePath_ != nullptr;};
    void deleteFreezeRestorePath() { this->freezeRestorePath_ = nullptr;};
    inline string getFreezeRestorePath() const { DARABONBA_PTR_GET_DEFAULT(freezeRestorePath_, "") };
    inline UpdateOssCheckResultsFreezeRequest& setFreezeRestorePath(string freezeRestorePath) { DARABONBA_PTR_SET_VALUE(freezeRestorePath_, freezeRestorePath) };


    // freezeType Field Functions 
    bool hasFreezeType() const { return this->freezeType_ != nullptr;};
    void deleteFreezeType() { this->freezeType_ = nullptr;};
    inline string getFreezeType() const { DARABONBA_PTR_GET_DEFAULT(freezeType_, "") };
    inline UpdateOssCheckResultsFreezeRequest& setFreezeType(string freezeType) { DARABONBA_PTR_SET_VALUE(freezeType_, freezeType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateOssCheckResultsFreezeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline UpdateOssCheckResultsFreezeRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateOssCheckResultsFreezeRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> endDate_ {};
    shared_ptr<string> freezeItems_ {};
    shared_ptr<string> freezeRestorePath_ {};
    shared_ptr<string> freezeType_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> startDate_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
