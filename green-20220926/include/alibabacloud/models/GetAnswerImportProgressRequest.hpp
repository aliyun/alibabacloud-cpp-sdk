// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETANSWERIMPORTPROGRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETANSWERIMPORTPROGRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetAnswerImportProgressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAnswerImportProgressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAnswerImportProgressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetAnswerImportProgressRequest() = default ;
    GetAnswerImportProgressRequest(const GetAnswerImportProgressRequest &) = default ;
    GetAnswerImportProgressRequest(GetAnswerImportProgressRequest &&) = default ;
    GetAnswerImportProgressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAnswerImportProgressRequest() = default ;
    GetAnswerImportProgressRequest& operator=(const GetAnswerImportProgressRequest &) = default ;
    GetAnswerImportProgressRequest& operator=(GetAnswerImportProgressRequest &&) = default ;
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
    inline GetAnswerImportProgressRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetAnswerImportProgressRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> regionId_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
