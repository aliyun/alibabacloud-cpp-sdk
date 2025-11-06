// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCREATELOGOTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCREATELOGOTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetCreateLogoTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCreateLogoTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCreateLogoTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetCreateLogoTaskRequest() = default ;
    GetCreateLogoTaskRequest(const GetCreateLogoTaskRequest &) = default ;
    GetCreateLogoTaskRequest(GetCreateLogoTaskRequest &&) = default ;
    GetCreateLogoTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCreateLogoTaskRequest() = default ;
    GetCreateLogoTaskRequest& operator=(const GetCreateLogoTaskRequest &) = default ;
    GetCreateLogoTaskRequest& operator=(GetCreateLogoTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetCreateLogoTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
