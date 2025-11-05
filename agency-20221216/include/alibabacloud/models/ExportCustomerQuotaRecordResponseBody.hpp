// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTCUSTOMERQUOTARECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTCUSTOMERQUOTARECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ExportCustomerQuotaRecordResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class ExportCustomerQuotaRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportCustomerQuotaRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportCustomerQuotaRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ExportCustomerQuotaRecordResponseBody() = default ;
    ExportCustomerQuotaRecordResponseBody(const ExportCustomerQuotaRecordResponseBody &) = default ;
    ExportCustomerQuotaRecordResponseBody(ExportCustomerQuotaRecordResponseBody &&) = default ;
    ExportCustomerQuotaRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportCustomerQuotaRecordResponseBody() = default ;
    ExportCustomerQuotaRecordResponseBody& operator=(const ExportCustomerQuotaRecordResponseBody &) = default ;
    ExportCustomerQuotaRecordResponseBody& operator=(ExportCustomerQuotaRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->msg_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ExportCustomerQuotaRecordResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ExportCustomerQuotaRecordResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ExportCustomerQuotaRecordResponseBodyData) };
    inline ExportCustomerQuotaRecordResponseBodyData data() { DARABONBA_PTR_GET(data_, ExportCustomerQuotaRecordResponseBodyData) };
    inline ExportCustomerQuotaRecordResponseBody& setData(const ExportCustomerQuotaRecordResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ExportCustomerQuotaRecordResponseBody& setData(ExportCustomerQuotaRecordResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline ExportCustomerQuotaRecordResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportCustomerQuotaRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Code
    std::shared_ptr<string> code_ = nullptr;
    // Data
    std::shared_ptr<ExportCustomerQuotaRecordResponseBodyData> data_ = nullptr;
    // Description
    std::shared_ptr<string> msg_ = nullptr;
    // ID of the Request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
