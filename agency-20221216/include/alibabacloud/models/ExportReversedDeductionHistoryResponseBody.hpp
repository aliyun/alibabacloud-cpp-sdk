// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTREVERSEDDEDUCTIONHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTREVERSEDDEDUCTIONHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ExportReversedDeductionHistoryResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class ExportReversedDeductionHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportReversedDeductionHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportReversedDeductionHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ExportReversedDeductionHistoryResponseBody() = default ;
    ExportReversedDeductionHistoryResponseBody(const ExportReversedDeductionHistoryResponseBody &) = default ;
    ExportReversedDeductionHistoryResponseBody(ExportReversedDeductionHistoryResponseBody &&) = default ;
    ExportReversedDeductionHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportReversedDeductionHistoryResponseBody() = default ;
    ExportReversedDeductionHistoryResponseBody& operator=(const ExportReversedDeductionHistoryResponseBody &) = default ;
    ExportReversedDeductionHistoryResponseBody& operator=(ExportReversedDeductionHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ExportReversedDeductionHistoryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ExportReversedDeductionHistoryResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ExportReversedDeductionHistoryResponseBodyData) };
    inline ExportReversedDeductionHistoryResponseBodyData data() { DARABONBA_PTR_GET(data_, ExportReversedDeductionHistoryResponseBodyData) };
    inline ExportReversedDeductionHistoryResponseBody& setData(const ExportReversedDeductionHistoryResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ExportReversedDeductionHistoryResponseBody& setData(ExportReversedDeductionHistoryResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ExportReversedDeductionHistoryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportReversedDeductionHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<ExportReversedDeductionHistoryResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
