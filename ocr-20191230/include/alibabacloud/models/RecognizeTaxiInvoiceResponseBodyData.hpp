// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZETAXIINVOICERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZETAXIINVOICERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeTaxiInvoiceResponseBodyDataInvoices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeTaxiInvoiceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeTaxiInvoiceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Invoices, invoices_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeTaxiInvoiceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Invoices, invoices_);
    };
    RecognizeTaxiInvoiceResponseBodyData() = default ;
    RecognizeTaxiInvoiceResponseBodyData(const RecognizeTaxiInvoiceResponseBodyData &) = default ;
    RecognizeTaxiInvoiceResponseBodyData(RecognizeTaxiInvoiceResponseBodyData &&) = default ;
    RecognizeTaxiInvoiceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeTaxiInvoiceResponseBodyData() = default ;
    RecognizeTaxiInvoiceResponseBodyData& operator=(const RecognizeTaxiInvoiceResponseBodyData &) = default ;
    RecognizeTaxiInvoiceResponseBodyData& operator=(RecognizeTaxiInvoiceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->invoices_ != nullptr; };
    // invoices Field Functions 
    bool hasInvoices() const { return this->invoices_ != nullptr;};
    void deleteInvoices() { this->invoices_ = nullptr;};
    inline const vector<Models::RecognizeTaxiInvoiceResponseBodyDataInvoices> & invoices() const { DARABONBA_PTR_GET_CONST(invoices_, vector<Models::RecognizeTaxiInvoiceResponseBodyDataInvoices>) };
    inline vector<Models::RecognizeTaxiInvoiceResponseBodyDataInvoices> invoices() { DARABONBA_PTR_GET(invoices_, vector<Models::RecognizeTaxiInvoiceResponseBodyDataInvoices>) };
    inline RecognizeTaxiInvoiceResponseBodyData& setInvoices(const vector<Models::RecognizeTaxiInvoiceResponseBodyDataInvoices> & invoices) { DARABONBA_PTR_SET_VALUE(invoices_, invoices) };
    inline RecognizeTaxiInvoiceResponseBodyData& setInvoices(vector<Models::RecognizeTaxiInvoiceResponseBodyDataInvoices> && invoices) { DARABONBA_PTR_SET_RVALUE(invoices_, invoices) };


  protected:
    std::shared_ptr<vector<Models::RecognizeTaxiInvoiceResponseBodyDataInvoices>> invoices_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
