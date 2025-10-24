// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FETCHFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FetchFileResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class FetchFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, FetchFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    FetchFileResponseBody() = default ;
    FetchFileResponseBody(const FetchFileResponseBody &) = default ;
    FetchFileResponseBody(FetchFileResponseBody &&) = default ;
    FetchFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchFileResponseBody() = default ;
    FetchFileResponseBody& operator=(const FetchFileResponseBody &) = default ;
    FetchFileResponseBody& operator=(FetchFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr && return this->taskId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<FetchFileResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<FetchFileResponseBodyData>) };
    inline vector<FetchFileResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<FetchFileResponseBodyData>) };
    inline FetchFileResponseBody& setData(const vector<FetchFileResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline FetchFileResponseBody& setData(vector<FetchFileResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FetchFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline FetchFileResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The objects that are returned.
    std::shared_ptr<vector<FetchFileResponseBodyData>> data_ = nullptr;
    // The ID of the request. If the request fails, share this ID with technical support to help diagnose the issue.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the batch task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
