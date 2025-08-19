// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterTasksResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterTasksResponseBodyTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(page_info, pageInfo_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(page_info, pageInfo_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(tasks, tasks_);
    };
    DescribeClusterTasksResponseBody() = default ;
    DescribeClusterTasksResponseBody(const DescribeClusterTasksResponseBody &) = default ;
    DescribeClusterTasksResponseBody(DescribeClusterTasksResponseBody &&) = default ;
    DescribeClusterTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterTasksResponseBody() = default ;
    DescribeClusterTasksResponseBody& operator=(const DescribeClusterTasksResponseBody &) = default ;
    DescribeClusterTasksResponseBody& operator=(DescribeClusterTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->requestId_ != nullptr && this->tasks_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeClusterTasksResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeClusterTasksResponseBodyPageInfo) };
    inline DescribeClusterTasksResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeClusterTasksResponseBodyPageInfo) };
    inline DescribeClusterTasksResponseBody& setPageInfo(const DescribeClusterTasksResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeClusterTasksResponseBody& setPageInfo(DescribeClusterTasksResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<DescribeClusterTasksResponseBodyTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<DescribeClusterTasksResponseBodyTasks>) };
    inline vector<DescribeClusterTasksResponseBodyTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<DescribeClusterTasksResponseBodyTasks>) };
    inline DescribeClusterTasksResponseBody& setTasks(const vector<DescribeClusterTasksResponseBodyTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline DescribeClusterTasksResponseBody& setTasks(vector<DescribeClusterTasksResponseBodyTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribeClusterTasksResponseBodyPageInfo> pageInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the tasks.
    std::shared_ptr<vector<DescribeClusterTasksResponseBodyTasks>> tasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
