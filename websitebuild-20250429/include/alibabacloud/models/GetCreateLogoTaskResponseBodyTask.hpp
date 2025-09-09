// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCREATELOGOTASKRESPONSEBODYTASK_HPP_
#define ALIBABACLOUD_MODELS_GETCREATELOGOTASKRESPONSEBODYTASK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetCreateLogoTaskResponseBodyTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCreateLogoTaskResponseBodyTask& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(Urls, urls_);
    };
    friend void from_json(const Darabonba::Json& j, GetCreateLogoTaskResponseBodyTask& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(Urls, urls_);
    };
    GetCreateLogoTaskResponseBodyTask() = default ;
    GetCreateLogoTaskResponseBodyTask(const GetCreateLogoTaskResponseBodyTask &) = default ;
    GetCreateLogoTaskResponseBodyTask(GetCreateLogoTaskResponseBodyTask &&) = default ;
    GetCreateLogoTaskResponseBodyTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCreateLogoTaskResponseBodyTask() = default ;
    GetCreateLogoTaskResponseBodyTask& operator=(const GetCreateLogoTaskResponseBodyTask &) = default ;
    GetCreateLogoTaskResponseBodyTask& operator=(GetCreateLogoTaskResponseBodyTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskId_ != nullptr
        && this->taskStatus_ != nullptr && this->urls_ != nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetCreateLogoTaskResponseBodyTask& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline GetCreateLogoTaskResponseBodyTask& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // urls Field Functions 
    bool hasUrls() const { return this->urls_ != nullptr;};
    void deleteUrls() { this->urls_ = nullptr;};
    inline const vector<string> & urls() const { DARABONBA_PTR_GET_CONST(urls_, vector<string>) };
    inline vector<string> urls() { DARABONBA_PTR_GET(urls_, vector<string>) };
    inline GetCreateLogoTaskResponseBodyTask& setUrls(const vector<string> & urls) { DARABONBA_PTR_SET_VALUE(urls_, urls) };
    inline GetCreateLogoTaskResponseBodyTask& setUrls(vector<string> && urls) { DARABONBA_PTR_SET_RVALUE(urls_, urls) };


  protected:
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
    std::shared_ptr<vector<string>> urls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
