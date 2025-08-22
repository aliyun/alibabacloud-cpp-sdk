// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNREFRESHTASKBYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNREFRESHTASKBYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnRefreshTaskByIdResponseBodyTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnRefreshTaskByIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnRefreshTaskByIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnRefreshTaskByIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDcdnRefreshTaskByIdResponseBody() = default ;
    DescribeDcdnRefreshTaskByIdResponseBody(const DescribeDcdnRefreshTaskByIdResponseBody &) = default ;
    DescribeDcdnRefreshTaskByIdResponseBody(DescribeDcdnRefreshTaskByIdResponseBody &&) = default ;
    DescribeDcdnRefreshTaskByIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnRefreshTaskByIdResponseBody() = default ;
    DescribeDcdnRefreshTaskByIdResponseBody& operator=(const DescribeDcdnRefreshTaskByIdResponseBody &) = default ;
    DescribeDcdnRefreshTaskByIdResponseBody& operator=(DescribeDcdnRefreshTaskByIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->tasks_ != nullptr && this->totalCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnRefreshTaskByIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<DescribeDcdnRefreshTaskByIdResponseBodyTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<DescribeDcdnRefreshTaskByIdResponseBodyTasks>) };
    inline vector<DescribeDcdnRefreshTaskByIdResponseBodyTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<DescribeDcdnRefreshTaskByIdResponseBodyTasks>) };
    inline DescribeDcdnRefreshTaskByIdResponseBody& setTasks(const vector<DescribeDcdnRefreshTaskByIdResponseBodyTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline DescribeDcdnRefreshTaskByIdResponseBody& setTasks(vector<DescribeDcdnRefreshTaskByIdResponseBodyTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDcdnRefreshTaskByIdResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // A list of prefetch or refresh tasks.
    std::shared_ptr<vector<DescribeDcdnRefreshTaskByIdResponseBodyTasks>> tasks_ = nullptr;
    // The total number of tasks.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
