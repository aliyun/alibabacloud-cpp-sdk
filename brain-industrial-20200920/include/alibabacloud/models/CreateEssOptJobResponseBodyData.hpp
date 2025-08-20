// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEESSOPTJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEESSOPTJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEssOptJobResponseBodyDataResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class CreateEssOptJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEssOptJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Completed, completed_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Response, response_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEssOptJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Completed, completed_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Response, response_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateEssOptJobResponseBodyData() = default ;
    CreateEssOptJobResponseBodyData(const CreateEssOptJobResponseBodyData &) = default ;
    CreateEssOptJobResponseBodyData(CreateEssOptJobResponseBodyData &&) = default ;
    CreateEssOptJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEssOptJobResponseBodyData() = default ;
    CreateEssOptJobResponseBodyData& operator=(const CreateEssOptJobResponseBodyData &) = default ;
    CreateEssOptJobResponseBodyData& operator=(CreateEssOptJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->completed_ != nullptr
        && this->createTime_ != nullptr && this->error_ != nullptr && this->jobId_ != nullptr && this->progress_ != nullptr && this->response_ != nullptr
        && this->status_ != nullptr; };
    // completed Field Functions 
    bool hasCompleted() const { return this->completed_ != nullptr;};
    void deleteCompleted() { this->completed_ = nullptr;};
    inline bool completed() const { DARABONBA_PTR_GET_DEFAULT(completed_, false) };
    inline CreateEssOptJobResponseBodyData& setCompleted(bool completed) { DARABONBA_PTR_SET_VALUE(completed_, completed) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CreateEssOptJobResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline CreateEssOptJobResponseBodyData& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline CreateEssOptJobResponseBodyData& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline CreateEssOptJobResponseBodyData& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // response Field Functions 
    bool hasResponse() const { return this->response_ != nullptr;};
    void deleteResponse() { this->response_ = nullptr;};
    inline const Models::CreateEssOptJobResponseBodyDataResponse & response() const { DARABONBA_PTR_GET_CONST(response_, Models::CreateEssOptJobResponseBodyDataResponse) };
    inline Models::CreateEssOptJobResponseBodyDataResponse response() { DARABONBA_PTR_GET(response_, Models::CreateEssOptJobResponseBodyDataResponse) };
    inline CreateEssOptJobResponseBodyData& setResponse(const Models::CreateEssOptJobResponseBodyDataResponse & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
    inline CreateEssOptJobResponseBodyData& setResponse(Models::CreateEssOptJobResponseBodyDataResponse && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateEssOptJobResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<bool> completed_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> error_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<int32_t> progress_ = nullptr;
    std::shared_ptr<Models::CreateEssOptJobResponseBodyDataResponse> response_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
