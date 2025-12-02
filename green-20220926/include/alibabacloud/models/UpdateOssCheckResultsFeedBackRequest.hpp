// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEOSSCHECKRESULTSFEEDBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEOSSCHECKRESULTSFEEDBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class UpdateOssCheckResultsFeedBackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOssCheckResultsFeedBackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Feedback, feedback_);
      DARABONBA_PTR_TO_JSON(QueryRequestId, queryRequestId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOssCheckResultsFeedBackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
      DARABONBA_PTR_FROM_JSON(QueryRequestId, queryRequestId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    UpdateOssCheckResultsFeedBackRequest() = default ;
    UpdateOssCheckResultsFeedBackRequest(const UpdateOssCheckResultsFeedBackRequest &) = default ;
    UpdateOssCheckResultsFeedBackRequest(UpdateOssCheckResultsFeedBackRequest &&) = default ;
    UpdateOssCheckResultsFeedBackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOssCheckResultsFeedBackRequest() = default ;
    UpdateOssCheckResultsFeedBackRequest& operator=(const UpdateOssCheckResultsFeedBackRequest &) = default ;
    UpdateOssCheckResultsFeedBackRequest& operator=(UpdateOssCheckResultsFeedBackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->feedback_ == nullptr
        && return this->queryRequestId_ == nullptr && return this->regionId_ == nullptr && return this->serviceCode_ == nullptr && return this->taskId_ == nullptr; };
    // feedback Field Functions 
    bool hasFeedback() const { return this->feedback_ != nullptr;};
    void deleteFeedback() { this->feedback_ = nullptr;};
    inline string feedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, "") };
    inline UpdateOssCheckResultsFeedBackRequest& setFeedback(string feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


    // queryRequestId Field Functions 
    bool hasQueryRequestId() const { return this->queryRequestId_ != nullptr;};
    void deleteQueryRequestId() { this->queryRequestId_ = nullptr;};
    inline string queryRequestId() const { DARABONBA_PTR_GET_DEFAULT(queryRequestId_, "") };
    inline UpdateOssCheckResultsFeedBackRequest& setQueryRequestId(string queryRequestId) { DARABONBA_PTR_SET_VALUE(queryRequestId_, queryRequestId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateOssCheckResultsFeedBackRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline UpdateOssCheckResultsFeedBackRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateOssCheckResultsFeedBackRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> feedback_ = nullptr;
    std::shared_ptr<string> queryRequestId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> serviceCode_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
