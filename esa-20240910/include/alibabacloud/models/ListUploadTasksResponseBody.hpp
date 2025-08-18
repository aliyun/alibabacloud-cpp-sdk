// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUPLOADTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUPLOADTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUploadTasksResponseBodyTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListUploadTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUploadTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, ListUploadTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    ListUploadTasksResponseBody() = default ;
    ListUploadTasksResponseBody(const ListUploadTasksResponseBody &) = default ;
    ListUploadTasksResponseBody(ListUploadTasksResponseBody &&) = default ;
    ListUploadTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUploadTasksResponseBody() = default ;
    ListUploadTasksResponseBody& operator=(const ListUploadTasksResponseBody &) = default ;
    ListUploadTasksResponseBody& operator=(ListUploadTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->tasks_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUploadTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<ListUploadTasksResponseBodyTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<ListUploadTasksResponseBodyTasks>) };
    inline vector<ListUploadTasksResponseBodyTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<ListUploadTasksResponseBodyTasks>) };
    inline ListUploadTasksResponseBody& setTasks(const vector<ListUploadTasksResponseBodyTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ListUploadTasksResponseBody& setTasks(vector<ListUploadTasksResponseBodyTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The file upload tasks.
    std::shared_ptr<vector<ListUploadTasksResponseBodyTasks>> tasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
