// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELSTOCKOSSCHECKTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELSTOCKOSSCHECKTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class CancelStockOssCheckTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelStockOssCheckTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelStockOssCheckTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CancelStockOssCheckTaskRequest() = default ;
    CancelStockOssCheckTaskRequest(const CancelStockOssCheckTaskRequest &) = default ;
    CancelStockOssCheckTaskRequest(CancelStockOssCheckTaskRequest &&) = default ;
    CancelStockOssCheckTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelStockOssCheckTaskRequest() = default ;
    CancelStockOssCheckTaskRequest& operator=(const CancelStockOssCheckTaskRequest &) = default ;
    CancelStockOssCheckTaskRequest& operator=(CancelStockOssCheckTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->taskId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CancelStockOssCheckTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CancelStockOssCheckTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Region ID
    shared_ptr<string> regionId_ {};
    // The task ID.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
