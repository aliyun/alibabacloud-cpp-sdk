// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCHECKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCHECKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitCheckResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SubmitCheckResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCheckResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCheckResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    SubmitCheckResponseBody() = default ;
    SubmitCheckResponseBody(const SubmitCheckResponseBody &) = default ;
    SubmitCheckResponseBody(SubmitCheckResponseBody &&) = default ;
    SubmitCheckResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCheckResponseBody() = default ;
    SubmitCheckResponseBody& operator=(const SubmitCheckResponseBody &) = default ;
    SubmitCheckResponseBody& operator=(SubmitCheckResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr && return this->taskId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SubmitCheckResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, SubmitCheckResponseBodyData) };
    inline SubmitCheckResponseBodyData data() { DARABONBA_PTR_GET(data_, SubmitCheckResponseBodyData) };
    inline SubmitCheckResponseBody& setData(const SubmitCheckResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SubmitCheckResponseBody& setData(SubmitCheckResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitCheckResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SubmitCheckResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The data returned if the call is successful.
    std::shared_ptr<SubmitCheckResponseBodyData> data_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the configuration assessment task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
