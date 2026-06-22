// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KOPILOTFEEDBACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_KOPILOTFEEDBACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaKopilot20260414
{
namespace Models
{
  class KopilotFeedbackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KopilotFeedbackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, KopilotFeedbackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    KopilotFeedbackResponseBody() = default ;
    KopilotFeedbackResponseBody(const KopilotFeedbackResponseBody &) = default ;
    KopilotFeedbackResponseBody(KopilotFeedbackResponseBody &&) = default ;
    KopilotFeedbackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KopilotFeedbackResponseBody() = default ;
    KopilotFeedbackResponseBody& operator=(const KopilotFeedbackResponseBody &) = default ;
    KopilotFeedbackResponseBody& operator=(KopilotFeedbackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline KopilotFeedbackResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const map<string, int64_t> & getData() const { DARABONBA_PTR_GET_CONST(data_, map<string, int64_t>) };
    inline map<string, int64_t> getData() { DARABONBA_PTR_GET(data_, map<string, int64_t>) };
    inline KopilotFeedbackResponseBody& setData(const map<string, int64_t> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline KopilotFeedbackResponseBody& setData(map<string, int64_t> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline KopilotFeedbackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline KopilotFeedbackResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<map<string, int64_t>> data_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaKopilot20260414
#endif
