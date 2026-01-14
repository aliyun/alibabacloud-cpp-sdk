// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKCALLINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TASKCALLINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
namespace Models
{
  class TaskCallInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskCallInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, TaskCallInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    TaskCallInfoResponseBody() = default ;
    TaskCallInfoResponseBody(const TaskCallInfoResponseBody &) = default ;
    TaskCallInfoResponseBody(TaskCallInfoResponseBody &&) = default ;
    TaskCallInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskCallInfoResponseBody() = default ;
    TaskCallInfoResponseBody& operator=(const TaskCallInfoResponseBody &) = default ;
    TaskCallInfoResponseBody& operator=(TaskCallInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(FinishTotal, finishTotal_);
        DARABONBA_PTR_TO_JSON(Total, total_);
        DARABONBA_PTR_TO_JSON(UnCallTotal, unCallTotal_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(FinishTotal, finishTotal_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
        DARABONBA_PTR_FROM_JSON(UnCallTotal, unCallTotal_);
      };
      Model() = default ;
      Model(const Model &) = default ;
      Model(Model &&) = default ;
      Model(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Model() = default ;
      Model& operator=(const Model &) = default ;
      Model& operator=(Model &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->finishTotal_ == nullptr
        && this->total_ == nullptr && this->unCallTotal_ == nullptr; };
      // finishTotal Field Functions 
      bool hasFinishTotal() const { return this->finishTotal_ != nullptr;};
      void deleteFinishTotal() { this->finishTotal_ = nullptr;};
      inline int64_t getFinishTotal() const { DARABONBA_PTR_GET_DEFAULT(finishTotal_, 0L) };
      inline Model& setFinishTotal(int64_t finishTotal) { DARABONBA_PTR_SET_VALUE(finishTotal_, finishTotal) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Model& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      // unCallTotal Field Functions 
      bool hasUnCallTotal() const { return this->unCallTotal_ != nullptr;};
      void deleteUnCallTotal() { this->unCallTotal_ = nullptr;};
      inline int64_t getUnCallTotal() const { DARABONBA_PTR_GET_DEFAULT(unCallTotal_, 0L) };
      inline Model& setUnCallTotal(int64_t unCallTotal) { DARABONBA_PTR_SET_VALUE(unCallTotal_, unCallTotal) };


    protected:
      shared_ptr<int64_t> finishTotal_ {};
      shared_ptr<int64_t> total_ {};
      shared_ptr<int64_t> unCallTotal_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->timestamp_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline TaskCallInfoResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TaskCallInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const TaskCallInfoResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, TaskCallInfoResponseBody::Model) };
    inline TaskCallInfoResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, TaskCallInfoResponseBody::Model) };
    inline TaskCallInfoResponseBody& setModel(const TaskCallInfoResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline TaskCallInfoResponseBody& setModel(TaskCallInfoResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TaskCallInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TaskCallInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline TaskCallInfoResponseBody& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<TaskCallInfoResponseBody::Model> model_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> timestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
