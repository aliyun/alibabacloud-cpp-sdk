// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZETAXIINVOICERESPONSEBODYDATAINVOICESINVOICEROI_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZETAXIINVOICERESPONSEBODYDATAINVOICESINVOICEROI_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi& obj) { 
      DARABONBA_PTR_TO_JSON(H, h_);
      DARABONBA_PTR_TO_JSON(W, w_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi& obj) { 
      DARABONBA_PTR_FROM_JSON(H, h_);
      DARABONBA_PTR_FROM_JSON(W, w_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi() = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi(const RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi &) = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi(RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi &&) = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi() = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi& operator=(const RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi &) = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi& operator=(RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->h_ == nullptr
        && return this->w_ == nullptr && return this->x_ == nullptr && return this->y_ == nullptr; };
    // h Field Functions 
    bool hasH() const { return this->h_ != nullptr;};
    void deleteH() { this->h_ = nullptr;};
    inline float h() const { DARABONBA_PTR_GET_DEFAULT(h_, 0.0) };
    inline RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi& setH(float h) { DARABONBA_PTR_SET_VALUE(h_, h) };


    // w Field Functions 
    bool hasW() const { return this->w_ != nullptr;};
    void deleteW() { this->w_ = nullptr;};
    inline float w() const { DARABONBA_PTR_GET_DEFAULT(w_, 0.0) };
    inline RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi& setW(float w) { DARABONBA_PTR_SET_VALUE(w_, w) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline float x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline float y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    std::shared_ptr<float> h_ = nullptr;
    std::shared_ptr<float> w_ = nullptr;
    std::shared_ptr<float> x_ = nullptr;
    std::shared_ptr<float> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
