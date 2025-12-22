// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVATINVOICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVATINVOICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RecognizeVATInvoiceResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeVATInvoiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVATInvoiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVATInvoiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RecognizeVATInvoiceResponseBody() = default ;
    RecognizeVATInvoiceResponseBody(const RecognizeVATInvoiceResponseBody &) = default ;
    RecognizeVATInvoiceResponseBody(RecognizeVATInvoiceResponseBody &&) = default ;
    RecognizeVATInvoiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVATInvoiceResponseBody() = default ;
    RecognizeVATInvoiceResponseBody& operator=(const RecognizeVATInvoiceResponseBody &) = default ;
    RecognizeVATInvoiceResponseBody& operator=(RecognizeVATInvoiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RecognizeVATInvoiceResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, RecognizeVATInvoiceResponseBodyData) };
    inline RecognizeVATInvoiceResponseBodyData data() { DARABONBA_PTR_GET(data_, RecognizeVATInvoiceResponseBodyData) };
    inline RecognizeVATInvoiceResponseBody& setData(const RecognizeVATInvoiceResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RecognizeVATInvoiceResponseBody& setData(RecognizeVATInvoiceResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RecognizeVATInvoiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RecognizeVATInvoiceResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
