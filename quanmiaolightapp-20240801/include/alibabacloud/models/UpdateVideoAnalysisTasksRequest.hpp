// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVIDEOANALYSISTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVIDEOANALYSISTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class UpdateVideoAnalysisTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVideoAnalysisTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(taskIds, taskIds_);
      DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVideoAnalysisTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(taskIds, taskIds_);
      DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
    };
    UpdateVideoAnalysisTasksRequest() = default ;
    UpdateVideoAnalysisTasksRequest(const UpdateVideoAnalysisTasksRequest &) = default ;
    UpdateVideoAnalysisTasksRequest(UpdateVideoAnalysisTasksRequest &&) = default ;
    UpdateVideoAnalysisTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVideoAnalysisTasksRequest() = default ;
    UpdateVideoAnalysisTasksRequest& operator=(const UpdateVideoAnalysisTasksRequest &) = default ;
    UpdateVideoAnalysisTasksRequest& operator=(UpdateVideoAnalysisTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskIds_ != nullptr
        && this->taskStatus_ != nullptr; };
    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<string> & taskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<string>) };
    inline vector<string> taskIds() { DARABONBA_PTR_GET(taskIds_, vector<string>) };
    inline UpdateVideoAnalysisTasksRequest& setTaskIds(const vector<string> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline UpdateVideoAnalysisTasksRequest& setTaskIds(vector<string> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline UpdateVideoAnalysisTasksRequest& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> taskIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
