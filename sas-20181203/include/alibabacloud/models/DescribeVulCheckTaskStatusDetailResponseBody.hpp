// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULCHECKTASKSTATUSDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULCHECKTASKSTATUSDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulCheckTaskStatusDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulCheckTaskStatusDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskStatuses, taskStatuses_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulCheckTaskStatusDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskStatuses, taskStatuses_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVulCheckTaskStatusDetailResponseBody() = default ;
    DescribeVulCheckTaskStatusDetailResponseBody(const DescribeVulCheckTaskStatusDetailResponseBody &) = default ;
    DescribeVulCheckTaskStatusDetailResponseBody(DescribeVulCheckTaskStatusDetailResponseBody &&) = default ;
    DescribeVulCheckTaskStatusDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulCheckTaskStatusDetailResponseBody() = default ;
    DescribeVulCheckTaskStatusDetailResponseBody& operator=(const DescribeVulCheckTaskStatusDetailResponseBody &) = default ;
    DescribeVulCheckTaskStatusDetailResponseBody& operator=(DescribeVulCheckTaskStatusDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->taskStatuses_ != nullptr && this->totalCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVulCheckTaskStatusDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskStatuses Field Functions 
    bool hasTaskStatuses() const { return this->taskStatuses_ != nullptr;};
    void deleteTaskStatuses() { this->taskStatuses_ = nullptr;};
    inline const vector<DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses> & taskStatuses() const { DARABONBA_PTR_GET_CONST(taskStatuses_, vector<DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses>) };
    inline vector<DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses> taskStatuses() { DARABONBA_PTR_GET(taskStatuses_, vector<DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses>) };
    inline DescribeVulCheckTaskStatusDetailResponseBody& setTaskStatuses(const vector<DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses> & taskStatuses) { DARABONBA_PTR_SET_VALUE(taskStatuses_, taskStatuses) };
    inline DescribeVulCheckTaskStatusDetailResponseBody& setTaskStatuses(vector<DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses> && taskStatuses) { DARABONBA_PTR_SET_RVALUE(taskStatuses_, taskStatuses) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVulCheckTaskStatusDetailResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the status information about the vulnerability scan tasks on the server.
    std::shared_ptr<vector<DescribeVulCheckTaskStatusDetailResponseBodyTaskStatuses>> taskStatuses_ = nullptr;
    // The total number of vulnerability scan tasks on the server.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
