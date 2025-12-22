// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEQRCODERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEQRCODERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeQrCodeResponseBodyDataElements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeQrCodeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeQrCodeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Elements, elements_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeQrCodeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
    };
    RecognizeQrCodeResponseBodyData() = default ;
    RecognizeQrCodeResponseBodyData(const RecognizeQrCodeResponseBodyData &) = default ;
    RecognizeQrCodeResponseBodyData(RecognizeQrCodeResponseBodyData &&) = default ;
    RecognizeQrCodeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeQrCodeResponseBodyData() = default ;
    RecognizeQrCodeResponseBodyData& operator=(const RecognizeQrCodeResponseBodyData &) = default ;
    RecognizeQrCodeResponseBodyData& operator=(RecognizeQrCodeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elements_ == nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Models::RecognizeQrCodeResponseBodyDataElements> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Models::RecognizeQrCodeResponseBodyDataElements>) };
    inline vector<Models::RecognizeQrCodeResponseBodyDataElements> elements() { DARABONBA_PTR_GET(elements_, vector<Models::RecognizeQrCodeResponseBodyDataElements>) };
    inline RecognizeQrCodeResponseBodyData& setElements(const vector<Models::RecognizeQrCodeResponseBodyDataElements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline RecognizeQrCodeResponseBodyData& setElements(vector<Models::RecognizeQrCodeResponseBodyDataElements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


  protected:
    std::shared_ptr<vector<Models::RecognizeQrCodeResponseBodyDataElements>> elements_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
