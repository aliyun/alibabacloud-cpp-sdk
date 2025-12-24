// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROCESSTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROCESSTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeProcessTasksResponseBodyPage.hpp>
#include <vector>
#include <alibabacloud/models/DescribeProcessTasksResponseBodyProcessTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeProcessTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProcessTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(ProcessTasks, processTasks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProcessTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(ProcessTasks, processTasks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeProcessTasksResponseBody() = default ;
    DescribeProcessTasksResponseBody(const DescribeProcessTasksResponseBody &) = default ;
    DescribeProcessTasksResponseBody(DescribeProcessTasksResponseBody &&) = default ;
    DescribeProcessTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProcessTasksResponseBody() = default ;
    DescribeProcessTasksResponseBody& operator=(const DescribeProcessTasksResponseBody &) = default ;
    DescribeProcessTasksResponseBody& operator=(DescribeProcessTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->page_ == nullptr
        && return this->processTasks_ == nullptr && return this->requestId_ == nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const DescribeProcessTasksResponseBodyPage & page() const { DARABONBA_PTR_GET_CONST(page_, DescribeProcessTasksResponseBodyPage) };
    inline DescribeProcessTasksResponseBodyPage page() { DARABONBA_PTR_GET(page_, DescribeProcessTasksResponseBodyPage) };
    inline DescribeProcessTasksResponseBody& setPage(const DescribeProcessTasksResponseBodyPage & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline DescribeProcessTasksResponseBody& setPage(DescribeProcessTasksResponseBodyPage && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // processTasks Field Functions 
    bool hasProcessTasks() const { return this->processTasks_ != nullptr;};
    void deleteProcessTasks() { this->processTasks_ = nullptr;};
    inline const vector<DescribeProcessTasksResponseBodyProcessTasks> & processTasks() const { DARABONBA_PTR_GET_CONST(processTasks_, vector<DescribeProcessTasksResponseBodyProcessTasks>) };
    inline vector<DescribeProcessTasksResponseBodyProcessTasks> processTasks() { DARABONBA_PTR_GET(processTasks_, vector<DescribeProcessTasksResponseBodyProcessTasks>) };
    inline DescribeProcessTasksResponseBody& setProcessTasks(const vector<DescribeProcessTasksResponseBodyProcessTasks> & processTasks) { DARABONBA_PTR_SET_VALUE(processTasks_, processTasks) };
    inline DescribeProcessTasksResponseBody& setProcessTasks(vector<DescribeProcessTasksResponseBodyProcessTasks> && processTasks) { DARABONBA_PTR_SET_RVALUE(processTasks_, processTasks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProcessTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribeProcessTasksResponseBodyPage> page_ = nullptr;
    // The handling tasks.
    std::shared_ptr<vector<DescribeProcessTasksResponseBodyProcessTasks>> processTasks_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
