// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDBLACKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDBLACKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
namespace Models
{
  class AddBlacklistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddBlacklistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, AddBlacklistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    AddBlacklistResponseBody() = default ;
    AddBlacklistResponseBody(const AddBlacklistResponseBody &) = default ;
    AddBlacklistResponseBody(AddBlacklistResponseBody &&) = default ;
    AddBlacklistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddBlacklistResponseBody() = default ;
    AddBlacklistResponseBody& operator=(const AddBlacklistResponseBody &) = default ;
    AddBlacklistResponseBody& operator=(AddBlacklistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(UnHandleNumbers, unHandleNumbers_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(UnHandleNumbers, unHandleNumbers_);
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
      virtual bool empty() const override { return this->unHandleNumbers_ == nullptr; };
      // unHandleNumbers Field Functions 
      bool hasUnHandleNumbers() const { return this->unHandleNumbers_ != nullptr;};
      void deleteUnHandleNumbers() { this->unHandleNumbers_ = nullptr;};
      inline const vector<string> & getUnHandleNumbers() const { DARABONBA_PTR_GET_CONST(unHandleNumbers_, vector<string>) };
      inline vector<string> getUnHandleNumbers() { DARABONBA_PTR_GET(unHandleNumbers_, vector<string>) };
      inline Model& setUnHandleNumbers(const vector<string> & unHandleNumbers) { DARABONBA_PTR_SET_VALUE(unHandleNumbers_, unHandleNumbers) };
      inline Model& setUnHandleNumbers(vector<string> && unHandleNumbers) { DARABONBA_PTR_SET_RVALUE(unHandleNumbers_, unHandleNumbers) };


    protected:
      // 错误手机号
      shared_ptr<vector<string>> unHandleNumbers_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->timestamp_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline AddBlacklistResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddBlacklistResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const AddBlacklistResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, AddBlacklistResponseBody::Model) };
    inline AddBlacklistResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, AddBlacklistResponseBody::Model) };
    inline AddBlacklistResponseBody& setModel(const AddBlacklistResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline AddBlacklistResponseBody& setModel(AddBlacklistResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddBlacklistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline AddBlacklistResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline AddBlacklistResponseBody& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<AddBlacklistResponseBody::Model> model_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
    shared_ptr<int64_t> timestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
