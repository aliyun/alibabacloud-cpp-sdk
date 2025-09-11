// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSUBTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWSUBTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDataFlowSubTasksResponseBodyDataFlowSubTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeDataFlowSubTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataFlowSubTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataFlowSubTask, dataFlowSubTask_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataFlowSubTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataFlowSubTask, dataFlowSubTask_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDataFlowSubTasksResponseBody() = default ;
    DescribeDataFlowSubTasksResponseBody(const DescribeDataFlowSubTasksResponseBody &) = default ;
    DescribeDataFlowSubTasksResponseBody(DescribeDataFlowSubTasksResponseBody &&) = default ;
    DescribeDataFlowSubTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataFlowSubTasksResponseBody() = default ;
    DescribeDataFlowSubTasksResponseBody& operator=(const DescribeDataFlowSubTasksResponseBody &) = default ;
    DescribeDataFlowSubTasksResponseBody& operator=(DescribeDataFlowSubTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataFlowSubTask_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // dataFlowSubTask Field Functions 
    bool hasDataFlowSubTask() const { return this->dataFlowSubTask_ != nullptr;};
    void deleteDataFlowSubTask() { this->dataFlowSubTask_ = nullptr;};
    inline const DescribeDataFlowSubTasksResponseBodyDataFlowSubTask & dataFlowSubTask() const { DARABONBA_PTR_GET_CONST(dataFlowSubTask_, DescribeDataFlowSubTasksResponseBodyDataFlowSubTask) };
    inline DescribeDataFlowSubTasksResponseBodyDataFlowSubTask dataFlowSubTask() { DARABONBA_PTR_GET(dataFlowSubTask_, DescribeDataFlowSubTasksResponseBodyDataFlowSubTask) };
    inline DescribeDataFlowSubTasksResponseBody& setDataFlowSubTask(const DescribeDataFlowSubTasksResponseBodyDataFlowSubTask & dataFlowSubTask) { DARABONBA_PTR_SET_VALUE(dataFlowSubTask_, dataFlowSubTask) };
    inline DescribeDataFlowSubTasksResponseBody& setDataFlowSubTask(DescribeDataFlowSubTasksResponseBodyDataFlowSubTask && dataFlowSubTask) { DARABONBA_PTR_SET_RVALUE(dataFlowSubTask_, dataFlowSubTask) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDataFlowSubTasksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataFlowSubTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about data streaming tasks.
    std::shared_ptr<DescribeDataFlowSubTasksResponseBodyDataFlowSubTask> dataFlowSubTask_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
