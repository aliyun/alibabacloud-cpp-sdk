// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADTASKTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOWNLOADTASKTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDownloadTaskTypeResponseBodyTaskTypeArray.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeDownloadTaskTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDownloadTaskTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskTypeArray, taskTypeArray_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDownloadTaskTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskTypeArray, taskTypeArray_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDownloadTaskTypeResponseBody() = default ;
    DescribeDownloadTaskTypeResponseBody(const DescribeDownloadTaskTypeResponseBody &) = default ;
    DescribeDownloadTaskTypeResponseBody(DescribeDownloadTaskTypeResponseBody &&) = default ;
    DescribeDownloadTaskTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDownloadTaskTypeResponseBody() = default ;
    DescribeDownloadTaskTypeResponseBody& operator=(const DescribeDownloadTaskTypeResponseBody &) = default ;
    DescribeDownloadTaskTypeResponseBody& operator=(DescribeDownloadTaskTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->taskTypeArray_ != nullptr && this->totalCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDownloadTaskTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskTypeArray Field Functions 
    bool hasTaskTypeArray() const { return this->taskTypeArray_ != nullptr;};
    void deleteTaskTypeArray() { this->taskTypeArray_ = nullptr;};
    inline const vector<DescribeDownloadTaskTypeResponseBodyTaskTypeArray> & taskTypeArray() const { DARABONBA_PTR_GET_CONST(taskTypeArray_, vector<DescribeDownloadTaskTypeResponseBodyTaskTypeArray>) };
    inline vector<DescribeDownloadTaskTypeResponseBodyTaskTypeArray> taskTypeArray() { DARABONBA_PTR_GET(taskTypeArray_, vector<DescribeDownloadTaskTypeResponseBodyTaskTypeArray>) };
    inline DescribeDownloadTaskTypeResponseBody& setTaskTypeArray(const vector<DescribeDownloadTaskTypeResponseBodyTaskTypeArray> & taskTypeArray) { DARABONBA_PTR_SET_VALUE(taskTypeArray_, taskTypeArray) };
    inline DescribeDownloadTaskTypeResponseBody& setTaskTypeArray(vector<DescribeDownloadTaskTypeResponseBodyTaskTypeArray> && taskTypeArray) { DARABONBA_PTR_SET_RVALUE(taskTypeArray_, taskTypeArray) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDownloadTaskTypeResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The task types.
    std::shared_ptr<vector<DescribeDownloadTaskTypeResponseBodyTaskTypeArray>> taskTypeArray_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
