// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOVERANDROIDINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RECOVERANDROIDINSTANCERESPONSEBODY_HPP_
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
  class RecoverAndroidInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecoverAndroidInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, RecoverAndroidInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    RecoverAndroidInstanceResponseBody() = default ;
    RecoverAndroidInstanceResponseBody(const RecoverAndroidInstanceResponseBody &) = default ;
    RecoverAndroidInstanceResponseBody(RecoverAndroidInstanceResponseBody &&) = default ;
    RecoverAndroidInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecoverAndroidInstanceResponseBody() = default ;
    RecoverAndroidInstanceResponseBody& operator=(const RecoverAndroidInstanceResponseBody &) = default ;
    RecoverAndroidInstanceResponseBody& operator=(RecoverAndroidInstanceResponseBody &&) = default ;
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
      shared_ptr<string> androidInstanceId_ {};
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->taskId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline RecoverAndroidInstanceResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<RecoverAndroidInstanceResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<RecoverAndroidInstanceResponseBody::Data>) };
    inline vector<RecoverAndroidInstanceResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<RecoverAndroidInstanceResponseBody::Data>) };
    inline RecoverAndroidInstanceResponseBody& setData(const vector<RecoverAndroidInstanceResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RecoverAndroidInstanceResponseBody& setData(vector<RecoverAndroidInstanceResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RecoverAndroidInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RecoverAndroidInstanceResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<int64_t> count_ {};
    shared_ptr<vector<RecoverAndroidInstanceResponseBody::Data>> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
