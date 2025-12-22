// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZETAXIINVOICERESPONSEBODYDATAINVOICESITEMSITEMROISIZE_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZETAXIINVOICERESPONSEBODYDATAINVOICESITEMSITEMROISIZE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize& obj) { 
      DARABONBA_PTR_TO_JSON(H, h_);
      DARABONBA_PTR_TO_JSON(W, w_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize& obj) { 
      DARABONBA_PTR_FROM_JSON(H, h_);
      DARABONBA_PTR_FROM_JSON(W, w_);
    };
    RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize() = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize(const RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize &) = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize(RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize &&) = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize() = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize& operator=(const RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize &) = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize& operator=(RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->h_ == nullptr
        && return this->w_ == nullptr; };
    // h Field Functions 
    bool hasH() const { return this->h_ != nullptr;};
    void deleteH() { this->h_ = nullptr;};
    inline float h() const { DARABONBA_PTR_GET_DEFAULT(h_, 0.0) };
    inline RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize& setH(float h) { DARABONBA_PTR_SET_VALUE(h_, h) };


    // w Field Functions 
    bool hasW() const { return this->w_ != nullptr;};
    void deleteW() { this->w_ = nullptr;};
    inline float w() const { DARABONBA_PTR_GET_DEFAULT(w_, 0.0) };
    inline RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize& setW(float w) { DARABONBA_PTR_SET_VALUE(w_, w) };


  protected:
    std::shared_ptr<float> h_ = nullptr;
    std::shared_ptr<float> w_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
