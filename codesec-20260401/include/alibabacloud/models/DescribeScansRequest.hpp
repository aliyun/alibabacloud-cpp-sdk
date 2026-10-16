// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCANSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCANSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CodeSec20260401
{
namespace Models
{
  class DescribeScansRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScansRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScansRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskName, taskName_);
    };
    DescribeScansRequest() = default ;
    DescribeScansRequest(const DescribeScansRequest &) = default ;
    DescribeScansRequest(DescribeScansRequest &&) = default ;
    DescribeScansRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScansRequest() = default ;
    DescribeScansRequest& operator=(const DescribeScansRequest &) = default ;
    DescribeScansRequest& operator=(DescribeScansRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->query_ == nullptr && this->status_ == nullptr && this->taskName_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeScansRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeScansRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline DescribeScansRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeScansRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeScansRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The maximum number of entries per page. Default value: 20. Maximum value: 100.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token. To query the first page, leave this parameter empty or do not specify it. To query subsequent pages, pass the nextToken value returned in the previous response. If the nextToken value in the response is empty, the last page is returned.
    shared_ptr<string> nextToken_ {};
    // The query string. You can perform a fuzzy match by project name or prompt.
    shared_ptr<string> query_ {};
    // The status of the task. Valid values:
    // * running: The task is running.
    // * completed: The task is completed.
    // * failed: The task failed.
    shared_ptr<string> status_ {};
    // The name of the task.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CodeSec20260401
#endif
