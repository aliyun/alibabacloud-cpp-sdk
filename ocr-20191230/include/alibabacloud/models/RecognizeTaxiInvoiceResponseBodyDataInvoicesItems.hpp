// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZETAXIINVOICERESPONSEBODYDATAINVOICESITEMS_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZETAXIINVOICERESPONSEBODYDATAINVOICESITEMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeTaxiInvoiceResponseBodyDataInvoicesItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeTaxiInvoiceResponseBodyDataInvoicesItems& obj) { 
      DARABONBA_PTR_TO_JSON(ItemRoi, itemRoi_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeTaxiInvoiceResponseBodyDataInvoicesItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ItemRoi, itemRoi_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    RecognizeTaxiInvoiceResponseBodyDataInvoicesItems() = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoicesItems(const RecognizeTaxiInvoiceResponseBodyDataInvoicesItems &) = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoicesItems(RecognizeTaxiInvoiceResponseBodyDataInvoicesItems &&) = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoicesItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoicesItems() = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoicesItems& operator=(const RecognizeTaxiInvoiceResponseBodyDataInvoicesItems &) = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoicesItems& operator=(RecognizeTaxiInvoiceResponseBodyDataInvoicesItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->itemRoi_ != nullptr
        && this->text_ != nullptr; };
    // itemRoi Field Functions 
    bool hasItemRoi() const { return this->itemRoi_ != nullptr;};
    void deleteItemRoi() { this->itemRoi_ = nullptr;};
    inline const Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi & itemRoi() const { DARABONBA_PTR_GET_CONST(itemRoi_, Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi) };
    inline Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi itemRoi() { DARABONBA_PTR_GET(itemRoi_, Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi) };
    inline RecognizeTaxiInvoiceResponseBodyDataInvoicesItems& setItemRoi(const Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi & itemRoi) { DARABONBA_PTR_SET_VALUE(itemRoi_, itemRoi) };
    inline RecognizeTaxiInvoiceResponseBodyDataInvoicesItems& setItemRoi(Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi && itemRoi) { DARABONBA_PTR_SET_RVALUE(itemRoi_, itemRoi) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RecognizeTaxiInvoiceResponseBodyDataInvoicesItems& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi> itemRoi_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
