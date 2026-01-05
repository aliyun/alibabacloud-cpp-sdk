// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOVERYFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RECOVERYFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class RecoveryFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecoveryFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, RecoveryFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    RecoveryFileResponseBody() = default ;
    RecoveryFileResponseBody(const RecoveryFileResponseBody &) = default ;
    RecoveryFileResponseBody(RecoveryFileResponseBody &&) = default ;
    RecoveryFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecoveryFileResponseBody() = default ;
    RecoveryFileResponseBody& operator=(const RecoveryFileResponseBody &) = default ;
    RecoveryFileResponseBody& operator=(RecoveryFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AndroidInstanceId, androidInstanceId_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AndroidInstanceId, androidInstanceId_);
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
      virtual bool empty() const override { return this->androidInstanceId_ == nullptr
        && this->taskId_ == nullptr; };
      // androidInstanceId Field Functions 
      bool hasAndroidInstanceId() const { return this->androidInstanceId_ != nullptr;};
      void deleteAndroidInstanceId() { this->androidInstanceId_ = nullptr;};
      inline string getAndroidInstanceId() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceId_, "") };
      inline Data& setAndroidInstanceId(string androidInstanceId) { DARABONBA_PTR_SET_VALUE(androidInstanceId_, androidInstanceId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The instance ID.
      shared_ptr<string> androidInstanceId_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->taskId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline RecoveryFileResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<RecoveryFileResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<RecoveryFileResponseBody::Data>) };
    inline vector<RecoveryFileResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<RecoveryFileResponseBody::Data>) };
    inline RecoveryFileResponseBody& setData(const vector<RecoveryFileResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RecoveryFileResponseBody& setData(vector<RecoveryFileResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RecoveryFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RecoveryFileResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The number of restored instances.
    shared_ptr<int64_t> count_ {};
    // The backup file that is restored.
    shared_ptr<vector<RecoveryFileResponseBody::Data>> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the batch task.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
