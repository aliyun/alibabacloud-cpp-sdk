// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEOSSCHECKRESULTSUNFREEZEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEOSSCHECKRESULTSUNFREEZEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class UpdateOssCheckResultsUnfreezeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOssCheckResultsUnfreezeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(FreezeItems, freezeItems_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOssCheckResultsUnfreezeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(FreezeItems, freezeItems_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    UpdateOssCheckResultsUnfreezeRequest() = default ;
    UpdateOssCheckResultsUnfreezeRequest(const UpdateOssCheckResultsUnfreezeRequest &) = default ;
    UpdateOssCheckResultsUnfreezeRequest(UpdateOssCheckResultsUnfreezeRequest &&) = default ;
    UpdateOssCheckResultsUnfreezeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOssCheckResultsUnfreezeRequest() = default ;
    UpdateOssCheckResultsUnfreezeRequest& operator=(const UpdateOssCheckResultsUnfreezeRequest &) = default ;
    UpdateOssCheckResultsUnfreezeRequest& operator=(UpdateOssCheckResultsUnfreezeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && return this->freezeItems_ == nullptr && return this->regionId_ == nullptr && return this->startDate_ == nullptr && return this->taskId_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline UpdateOssCheckResultsUnfreezeRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // freezeItems Field Functions 
    bool hasFreezeItems() const { return this->freezeItems_ != nullptr;};
    void deleteFreezeItems() { this->freezeItems_ = nullptr;};
    inline string freezeItems() const { DARABONBA_PTR_GET_DEFAULT(freezeItems_, "") };
    inline UpdateOssCheckResultsUnfreezeRequest& setFreezeItems(string freezeItems) { DARABONBA_PTR_SET_VALUE(freezeItems_, freezeItems) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateOssCheckResultsUnfreezeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline UpdateOssCheckResultsUnfreezeRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateOssCheckResultsUnfreezeRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> endDate_ = nullptr;
    std::shared_ptr<string> freezeItems_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> startDate_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
