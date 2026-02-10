// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCHECKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCHECKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(OperateCode, operateCode_);
        DARABONBA_PTR_TO_JSON(ThrottlingTimeSecond, throttlingTimeSecond_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(OperateCode, operateCode_);
        DARABONBA_PTR_FROM_JSON(ThrottlingTimeSecond, throttlingTimeSecond_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->operateCode_ == nullptr
        && this->throttlingTimeSecond_ == nullptr; };
      // operateCode Field Functions 
      bool hasOperateCode() const { return this->operateCode_ != nullptr;};
      void deleteOperateCode() { this->operateCode_ = nullptr;};
      inline string getOperateCode() const { DARABONBA_PTR_GET_DEFAULT(operateCode_, "") };
      inline Data& setOperateCode(string operateCode) { DARABONBA_PTR_SET_VALUE(operateCode_, operateCode) };


      // throttlingTimeSecond Field Functions 
      bool hasThrottlingTimeSecond() const { return this->throttlingTimeSecond_ != nullptr;};
      void deleteThrottlingTimeSecond() { this->throttlingTimeSecond_ = nullptr;};
      inline int32_t getThrottlingTimeSecond() const { DARABONBA_PTR_GET_DEFAULT(throttlingTimeSecond_, 0) };
      inline Data& setThrottlingTimeSecond(int32_t throttlingTimeSecond) { DARABONBA_PTR_SET_VALUE(throttlingTimeSecond_, throttlingTimeSecond) };


    protected:
      // The operation code of the configuration assessment task.
      // 
      // *   **Throttling**: frequency limit
      // *   **AuthorizationExhaust**: insufficient quota
      shared_ptr<string> operateCode_ {};
      // The throttling duration. Unit: seconds.
      shared_ptr<int32_t> throttlingTimeSecond_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->taskId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SubmitCheckResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SubmitCheckResponseBody::Data) };
    inline SubmitCheckResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SubmitCheckResponseBody::Data) };
    inline SubmitCheckResponseBody& setData(const SubmitCheckResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SubmitCheckResponseBody& setData(SubmitCheckResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitCheckResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SubmitCheckResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The data returned if the call is successful.
    shared_ptr<SubmitCheckResponseBody::Data> data_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The ID of the configuration assessment task.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
