// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSAVINGSPLANSDISCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSAVINGSPLANSDISCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QuerySavingsPlansDiscountResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QuerySavingsPlansDiscountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySavingsPlansDiscountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySavingsPlansDiscountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySavingsPlansDiscountResponseBody() = default ;
    QuerySavingsPlansDiscountResponseBody(const QuerySavingsPlansDiscountResponseBody &) = default ;
    QuerySavingsPlansDiscountResponseBody(QuerySavingsPlansDiscountResponseBody &&) = default ;
    QuerySavingsPlansDiscountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySavingsPlansDiscountResponseBody() = default ;
    QuerySavingsPlansDiscountResponseBody& operator=(const QuerySavingsPlansDiscountResponseBody &) = default ;
    QuerySavingsPlansDiscountResponseBody& operator=(QuerySavingsPlansDiscountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySavingsPlansDiscountResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QuerySavingsPlansDiscountResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, QuerySavingsPlansDiscountResponseBodyData) };
    inline QuerySavingsPlansDiscountResponseBodyData data() { DARABONBA_PTR_GET(data_, QuerySavingsPlansDiscountResponseBodyData) };
    inline QuerySavingsPlansDiscountResponseBody& setData(const QuerySavingsPlansDiscountResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QuerySavingsPlansDiscountResponseBody& setData(QuerySavingsPlansDiscountResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySavingsPlansDiscountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySavingsPlansDiscountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QuerySavingsPlansDiscountResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned.
    std::shared_ptr<string> code_ = nullptr;
    // data
    std::shared_ptr<QuerySavingsPlansDiscountResponseBodyData> data_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
