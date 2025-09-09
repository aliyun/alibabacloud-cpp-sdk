// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCELEVELTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSINSTANCELEVELTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDrdsInstanceLevelTasksResponseBodyTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsInstanceLevelTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsInstanceLevelTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsInstanceLevelTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    DescribeDrdsInstanceLevelTasksResponseBody() = default ;
    DescribeDrdsInstanceLevelTasksResponseBody(const DescribeDrdsInstanceLevelTasksResponseBody &) = default ;
    DescribeDrdsInstanceLevelTasksResponseBody(DescribeDrdsInstanceLevelTasksResponseBody &&) = default ;
    DescribeDrdsInstanceLevelTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsInstanceLevelTasksResponseBody() = default ;
    DescribeDrdsInstanceLevelTasksResponseBody& operator=(const DescribeDrdsInstanceLevelTasksResponseBody &) = default ;
    DescribeDrdsInstanceLevelTasksResponseBody& operator=(DescribeDrdsInstanceLevelTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->success_ != nullptr && this->tasks_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDrdsInstanceLevelTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDrdsInstanceLevelTasksResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const DescribeDrdsInstanceLevelTasksResponseBodyTasks & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, DescribeDrdsInstanceLevelTasksResponseBodyTasks) };
    inline DescribeDrdsInstanceLevelTasksResponseBodyTasks tasks() { DARABONBA_PTR_GET(tasks_, DescribeDrdsInstanceLevelTasksResponseBodyTasks) };
    inline DescribeDrdsInstanceLevelTasksResponseBody& setTasks(const DescribeDrdsInstanceLevelTasksResponseBodyTasks & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline DescribeDrdsInstanceLevelTasksResponseBody& setTasks(DescribeDrdsInstanceLevelTasksResponseBodyTasks && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
    // The list of returned unfinished tasks.
    std::shared_ptr<DescribeDrdsInstanceLevelTasksResponseBodyTasks> tasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
