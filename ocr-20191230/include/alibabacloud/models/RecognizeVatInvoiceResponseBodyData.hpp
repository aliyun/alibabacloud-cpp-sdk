// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVATINVOICERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVATINVOICERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RecognizeVATInvoiceResponseBodyDataBox.hpp>
#include <alibabacloud/models/RecognizeVATInvoiceResponseBodyDataContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeVATInvoiceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVATInvoiceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Box, box_);
      DARABONBA_PTR_TO_JSON(Content, content_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVATInvoiceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Box, box_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
    };
    RecognizeVATInvoiceResponseBodyData() = default ;
    RecognizeVATInvoiceResponseBodyData(const RecognizeVATInvoiceResponseBodyData &) = default ;
    RecognizeVATInvoiceResponseBodyData(RecognizeVATInvoiceResponseBodyData &&) = default ;
    RecognizeVATInvoiceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVATInvoiceResponseBodyData() = default ;
    RecognizeVATInvoiceResponseBodyData& operator=(const RecognizeVATInvoiceResponseBodyData &) = default ;
    RecognizeVATInvoiceResponseBodyData& operator=(RecognizeVATInvoiceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->box_ == nullptr
        && return this->content_ == nullptr; };
    // box Field Functions 
    bool hasBox() const { return this->box_ != nullptr;};
    void deleteBox() { this->box_ = nullptr;};
    inline const Models::RecognizeVATInvoiceResponseBodyDataBox & box() const { DARABONBA_PTR_GET_CONST(box_, Models::RecognizeVATInvoiceResponseBodyDataBox) };
    inline Models::RecognizeVATInvoiceResponseBodyDataBox box() { DARABONBA_PTR_GET(box_, Models::RecognizeVATInvoiceResponseBodyDataBox) };
    inline RecognizeVATInvoiceResponseBodyData& setBox(const Models::RecognizeVATInvoiceResponseBodyDataBox & box) { DARABONBA_PTR_SET_VALUE(box_, box) };
    inline RecognizeVATInvoiceResponseBodyData& setBox(Models::RecognizeVATInvoiceResponseBodyDataBox && box) { DARABONBA_PTR_SET_RVALUE(box_, box) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const Models::RecognizeVATInvoiceResponseBodyDataContent & content() const { DARABONBA_PTR_GET_CONST(content_, Models::RecognizeVATInvoiceResponseBodyDataContent) };
    inline Models::RecognizeVATInvoiceResponseBodyDataContent content() { DARABONBA_PTR_GET(content_, Models::RecognizeVATInvoiceResponseBodyDataContent) };
    inline RecognizeVATInvoiceResponseBodyData& setContent(const Models::RecognizeVATInvoiceResponseBodyDataContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline RecognizeVATInvoiceResponseBodyData& setContent(Models::RecognizeVATInvoiceResponseBodyDataContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


  protected:
    std::shared_ptr<Models::RecognizeVATInvoiceResponseBodyDataBox> box_ = nullptr;
    std::shared_ptr<Models::RecognizeVATInvoiceResponseBodyDataContent> content_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
