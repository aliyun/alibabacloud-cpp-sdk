// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLPLANTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLPLANTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSQLPlanTaskResponseBodyTaskList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeSQLPlanTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLPlanTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskList, taskList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLPlanTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
    };
    DescribeSQLPlanTaskResponseBody() = default ;
    DescribeSQLPlanTaskResponseBody(const DescribeSQLPlanTaskResponseBody &) = default ;
    DescribeSQLPlanTaskResponseBody(DescribeSQLPlanTaskResponseBody &&) = default ;
    DescribeSQLPlanTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLPlanTaskResponseBody() = default ;
    DescribeSQLPlanTaskResponseBody& operator=(const DescribeSQLPlanTaskResponseBody &) = default ;
    DescribeSQLPlanTaskResponseBody& operator=(DescribeSQLPlanTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->taskList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSQLPlanTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const vector<DescribeSQLPlanTaskResponseBodyTaskList> & taskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<DescribeSQLPlanTaskResponseBodyTaskList>) };
    inline vector<DescribeSQLPlanTaskResponseBodyTaskList> taskList() { DARABONBA_PTR_GET(taskList_, vector<DescribeSQLPlanTaskResponseBodyTaskList>) };
    inline DescribeSQLPlanTaskResponseBody& setTaskList(const vector<DescribeSQLPlanTaskResponseBodyTaskList> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline DescribeSQLPlanTaskResponseBody& setTaskList(vector<DescribeSQLPlanTaskResponseBodyTaskList> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried task.
    std::shared_ptr<vector<DescribeSQLPlanTaskResponseBodyTaskList>> taskList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
