// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCHECKINSTANCERESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCHECKINSTANCERESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class VerifyCheckInstanceResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCheckInstanceResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCheckInstanceResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    VerifyCheckInstanceResultResponseBody() = default ;
    VerifyCheckInstanceResultResponseBody(const VerifyCheckInstanceResultResponseBody &) = default ;
    VerifyCheckInstanceResultResponseBody(VerifyCheckInstanceResultResponseBody &&) = default ;
    VerifyCheckInstanceResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCheckInstanceResultResponseBody() = default ;
    VerifyCheckInstanceResultResponseBody& operator=(const VerifyCheckInstanceResultResponseBody &) = default ;
    VerifyCheckInstanceResultResponseBody& operator=(VerifyCheckInstanceResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FailInstances, failInstances_);
        DARABONBA_PTR_TO_JSON(OperateCode, operateCode_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FailInstances, failInstances_);
        DARABONBA_PTR_FROM_JSON(OperateCode, operateCode_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
      virtual bool empty() const override { return this->failInstances_ == nullptr
        && this->operateCode_ == nullptr && this->taskId_ == nullptr; };
      // failInstances Field Functions 
      bool hasFailInstances() const { return this->failInstances_ != nullptr;};
      void deleteFailInstances() { this->failInstances_ = nullptr;};
      inline const vector<string> & getFailInstances() const { DARABONBA_PTR_GET_CONST(failInstances_, vector<string>) };
      inline vector<string> getFailInstances() { DARABONBA_PTR_GET(failInstances_, vector<string>) };
      inline Data& setFailInstances(const vector<string> & failInstances) { DARABONBA_PTR_SET_VALUE(failInstances_, failInstances) };
      inline Data& setFailInstances(vector<string> && failInstances) { DARABONBA_PTR_SET_RVALUE(failInstances_, failInstances) };


      // operateCode Field Functions 
      bool hasOperateCode() const { return this->operateCode_ != nullptr;};
      void deleteOperateCode() { this->operateCode_ = nullptr;};
      inline string getOperateCode() const { DARABONBA_PTR_GET_DEFAULT(operateCode_, "") };
      inline Data& setOperateCode(string operateCode) { DARABONBA_PTR_SET_VALUE(operateCode_, operateCode) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // An array consisting of instances that failed the check.
      shared_ptr<vector<string>> failInstances_ {};
      // The operation code of the task that checks the configurations of cloud services. Valid values:
      // 
      // *   **Throttling**
      // *   **ActionTrialUnauthorized**
      shared_ptr<string> operateCode_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const VerifyCheckInstanceResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, VerifyCheckInstanceResultResponseBody::Data) };
    inline VerifyCheckInstanceResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, VerifyCheckInstanceResultResponseBody::Data) };
    inline VerifyCheckInstanceResultResponseBody& setData(const VerifyCheckInstanceResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline VerifyCheckInstanceResultResponseBody& setData(VerifyCheckInstanceResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyCheckInstanceResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<VerifyCheckInstanceResultResponseBody::Data> data_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
