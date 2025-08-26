// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZETAXIINVOICERESPONSEBODYDATAINVOICES_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZETAXIINVOICERESPONSEBODYDATAINVOICES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeTaxiInvoiceResponseBodyDataInvoicesItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeTaxiInvoiceResponseBodyDataInvoices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeTaxiInvoiceResponseBodyDataInvoices& obj) { 
      DARABONBA_PTR_TO_JSON(InvoiceRoi, invoiceRoi_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RotateType, rotateType_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeTaxiInvoiceResponseBodyDataInvoices& obj) { 
      DARABONBA_PTR_FROM_JSON(InvoiceRoi, invoiceRoi_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RotateType, rotateType_);
    };
    RecognizeTaxiInvoiceResponseBodyDataInvoices() = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoices(const RecognizeTaxiInvoiceResponseBodyDataInvoices &) = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoices(RecognizeTaxiInvoiceResponseBodyDataInvoices &&) = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoices() = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoices& operator=(const RecognizeTaxiInvoiceResponseBodyDataInvoices &) = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoices& operator=(RecognizeTaxiInvoiceResponseBodyDataInvoices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->invoiceRoi_ != nullptr
        && this->items_ != nullptr && this->rotateType_ != nullptr; };
    // invoiceRoi Field Functions 
    bool hasInvoiceRoi() const { return this->invoiceRoi_ != nullptr;};
    void deleteInvoiceRoi() { this->invoiceRoi_ = nullptr;};
    inline const Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi & invoiceRoi() const { DARABONBA_PTR_GET_CONST(invoiceRoi_, Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi) };
    inline Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi invoiceRoi() { DARABONBA_PTR_GET(invoiceRoi_, Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi) };
    inline RecognizeTaxiInvoiceResponseBodyDataInvoices& setInvoiceRoi(const Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi & invoiceRoi) { DARABONBA_PTR_SET_VALUE(invoiceRoi_, invoiceRoi) };
    inline RecognizeTaxiInvoiceResponseBodyDataInvoices& setInvoiceRoi(Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi && invoiceRoi) { DARABONBA_PTR_SET_RVALUE(invoiceRoi_, invoiceRoi) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItems>) };
    inline vector<Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItems> items() { DARABONBA_PTR_GET(items_, vector<Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItems>) };
    inline RecognizeTaxiInvoiceResponseBodyDataInvoices& setItems(const vector<Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline RecognizeTaxiInvoiceResponseBodyDataInvoices& setItems(vector<Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // rotateType Field Functions 
    bool hasRotateType() const { return this->rotateType_ != nullptr;};
    void deleteRotateType() { this->rotateType_ = nullptr;};
    inline int32_t rotateType() const { DARABONBA_PTR_GET_DEFAULT(rotateType_, 0) };
    inline RecognizeTaxiInvoiceResponseBodyDataInvoices& setRotateType(int32_t rotateType) { DARABONBA_PTR_SET_VALUE(rotateType_, rotateType) };


  protected:
    std::shared_ptr<Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi> invoiceRoi_ = nullptr;
    std::shared_ptr<vector<Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItems>> items_ = nullptr;
    std::shared_ptr<int32_t> rotateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
