// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SendFileResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class SendFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, SendFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    SendFileResponseBody() = default ;
    SendFileResponseBody(const SendFileResponseBody &) = default ;
    SendFileResponseBody(SendFileResponseBody &&) = default ;
    SendFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendFileResponseBody() = default ;
    SendFileResponseBody& operator=(const SendFileResponseBody &) = default ;
    SendFileResponseBody& operator=(SendFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr && return this->taskId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<SendFileResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<SendFileResponseBodyData>) };
    inline vector<SendFileResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<SendFileResponseBodyData>) };
    inline SendFileResponseBody& setData(const vector<SendFileResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SendFileResponseBody& setData(vector<SendFileResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SendFileResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The objects that are returned.
    std::shared_ptr<vector<SendFileResponseBodyData>> data_ = nullptr;
    // The ID of the request. If the request fails, share this ID with technical support to help diagnose the issue.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the batch task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
