// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTIMAGETEXTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETECTIMAGETEXTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OCRContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DetectImageTextsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectImageTextsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OCRContents, OCRContents_);
      DARABONBA_PTR_TO_JSON(OCRTexts, OCRTexts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetectImageTextsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OCRContents, OCRContents_);
      DARABONBA_PTR_FROM_JSON(OCRTexts, OCRTexts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DetectImageTextsResponseBody() = default ;
    DetectImageTextsResponseBody(const DetectImageTextsResponseBody &) = default ;
    DetectImageTextsResponseBody(DetectImageTextsResponseBody &&) = default ;
    DetectImageTextsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectImageTextsResponseBody() = default ;
    DetectImageTextsResponseBody& operator=(const DetectImageTextsResponseBody &) = default ;
    DetectImageTextsResponseBody& operator=(DetectImageTextsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->OCRContents_ != nullptr
        && this->OCRTexts_ != nullptr && this->requestId_ != nullptr; };
    // OCRContents Field Functions 
    bool hasOCRContents() const { return this->OCRContents_ != nullptr;};
    void deleteOCRContents() { this->OCRContents_ = nullptr;};
    inline const vector<OCRContents> & OCRContents() const { DARABONBA_PTR_GET_CONST(OCRContents_, vector<OCRContents>) };
    inline vector<OCRContents> OCRContents() { DARABONBA_PTR_GET(OCRContents_, vector<OCRContents>) };
    inline DetectImageTextsResponseBody& setOCRContents(const vector<OCRContents> & OCRContents) { DARABONBA_PTR_SET_VALUE(OCRContents_, OCRContents) };
    inline DetectImageTextsResponseBody& setOCRContents(vector<OCRContents> && OCRContents) { DARABONBA_PTR_SET_RVALUE(OCRContents_, OCRContents) };


    // OCRTexts Field Functions 
    bool hasOCRTexts() const { return this->OCRTexts_ != nullptr;};
    void deleteOCRTexts() { this->OCRTexts_ = nullptr;};
    inline string OCRTexts() const { DARABONBA_PTR_GET_DEFAULT(OCRTexts_, "") };
    inline DetectImageTextsResponseBody& setOCRTexts(string OCRTexts) { DARABONBA_PTR_SET_VALUE(OCRTexts_, OCRTexts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetectImageTextsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // OCR text blocks.
    std::shared_ptr<vector<OCRContents>> OCRContents_ = nullptr;
    // The full Optical Character Recognition (OCR) text, which is spliced by using the content of OCRContents.
    std::shared_ptr<string> OCRTexts_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
