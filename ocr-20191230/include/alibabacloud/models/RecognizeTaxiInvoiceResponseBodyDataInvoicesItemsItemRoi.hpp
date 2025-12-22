// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZETAXIINVOICERESPONSEBODYDATAINVOICESITEMSITEMROI_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZETAXIINVOICERESPONSEBODYDATAINVOICESITEMSITEMROI_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter.hpp>
#include <alibabacloud/models/RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi& obj) { 
      DARABONBA_PTR_TO_JSON(Angle, angle_);
      DARABONBA_PTR_TO_JSON(Center, center_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi& obj) { 
      DARABONBA_PTR_FROM_JSON(Angle, angle_);
      DARABONBA_PTR_FROM_JSON(Center, center_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi() = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi(const RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi &) = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi(RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi &&) = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi() = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi& operator=(const RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi &) = default ;
    RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi& operator=(RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->angle_ == nullptr
        && return this->center_ == nullptr && return this->size_ == nullptr; };
    // angle Field Functions 
    bool hasAngle() const { return this->angle_ != nullptr;};
    void deleteAngle() { this->angle_ = nullptr;};
    inline float angle() const { DARABONBA_PTR_GET_DEFAULT(angle_, 0.0) };
    inline RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi& setAngle(float angle) { DARABONBA_PTR_SET_VALUE(angle_, angle) };


    // center Field Functions 
    bool hasCenter() const { return this->center_ != nullptr;};
    void deleteCenter() { this->center_ = nullptr;};
    inline const Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter & center() const { DARABONBA_PTR_GET_CONST(center_, Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter) };
    inline Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter center() { DARABONBA_PTR_GET(center_, Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter) };
    inline RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi& setCenter(const Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter & center) { DARABONBA_PTR_SET_VALUE(center_, center) };
    inline RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi& setCenter(Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter && center) { DARABONBA_PTR_SET_RVALUE(center_, center) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline const Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize & size() const { DARABONBA_PTR_GET_CONST(size_, Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize) };
    inline Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize size() { DARABONBA_PTR_GET(size_, Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize) };
    inline RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi& setSize(const Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize & size) { DARABONBA_PTR_SET_VALUE(size_, size) };
    inline RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi& setSize(Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize && size) { DARABONBA_PTR_SET_RVALUE(size_, size) };


  protected:
    std::shared_ptr<float> angle_ = nullptr;
    std::shared_ptr<Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter> center_ = nullptr;
    std::shared_ptr<Models::RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
