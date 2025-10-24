// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCREENSHOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESCREENSHOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateScreenshotResponseBodyTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateScreenshotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScreenshotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScreenshotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    CreateScreenshotResponseBody() = default ;
    CreateScreenshotResponseBody(const CreateScreenshotResponseBody &) = default ;
    CreateScreenshotResponseBody(CreateScreenshotResponseBody &&) = default ;
    CreateScreenshotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScreenshotResponseBody() = default ;
    CreateScreenshotResponseBody& operator=(const CreateScreenshotResponseBody &) = default ;
    CreateScreenshotResponseBody& operator=(CreateScreenshotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->tasks_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateScreenshotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<CreateScreenshotResponseBodyTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<CreateScreenshotResponseBodyTasks>) };
    inline vector<CreateScreenshotResponseBodyTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<CreateScreenshotResponseBodyTasks>) };
    inline CreateScreenshotResponseBody& setTasks(const vector<CreateScreenshotResponseBodyTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline CreateScreenshotResponseBody& setTasks(vector<CreateScreenshotResponseBodyTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // The ID of the request. If the request fails, share this ID with technical support to help diagnose the issue.
    std::shared_ptr<string> requestId_ = nullptr;
    // The tasks.
    std::shared_ptr<vector<CreateScreenshotResponseBodyTasks>> tasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
