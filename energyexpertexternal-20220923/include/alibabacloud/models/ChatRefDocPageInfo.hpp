// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATREFDOCPAGEINFO_HPP_
#define ALIBABACLOUD_MODELS_CHATREFDOCPAGEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class ChatRefDocPageInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatRefDocPageInfo& obj) { 
      DARABONBA_PTR_TO_JSON(angle, angle_);
      DARABONBA_PTR_TO_JSON(excelParseResult, excelParseResult_);
      DARABONBA_PTR_TO_JSON(imageHeight, imageHeight_);
      DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(imageWidth, imageWidth_);
      DARABONBA_PTR_TO_JSON(pageIdCurDoc, pageIdCurDoc_);
      DARABONBA_PTR_TO_JSON(pdfParseResult, pdfParseResult_);
      DARABONBA_PTR_TO_JSON(wordParseResult, wordParseResult_);
    };
    friend void from_json(const Darabonba::Json& j, ChatRefDocPageInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(angle, angle_);
      DARABONBA_PTR_FROM_JSON(excelParseResult, excelParseResult_);
      DARABONBA_PTR_FROM_JSON(imageHeight, imageHeight_);
      DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(imageWidth, imageWidth_);
      DARABONBA_PTR_FROM_JSON(pageIdCurDoc, pageIdCurDoc_);
      DARABONBA_PTR_FROM_JSON(pdfParseResult, pdfParseResult_);
      DARABONBA_PTR_FROM_JSON(wordParseResult, wordParseResult_);
    };
    ChatRefDocPageInfo() = default ;
    ChatRefDocPageInfo(const ChatRefDocPageInfo &) = default ;
    ChatRefDocPageInfo(ChatRefDocPageInfo &&) = default ;
    ChatRefDocPageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatRefDocPageInfo() = default ;
    ChatRefDocPageInfo& operator=(const ChatRefDocPageInfo &) = default ;
    ChatRefDocPageInfo& operator=(ChatRefDocPageInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->angle_ == nullptr
        && this->excelParseResult_ == nullptr && this->imageHeight_ == nullptr && this->imageUrl_ == nullptr && this->imageWidth_ == nullptr && this->pageIdCurDoc_ == nullptr
        && this->pdfParseResult_ == nullptr && this->wordParseResult_ == nullptr; };
    // angle Field Functions 
    bool hasAngle() const { return this->angle_ != nullptr;};
    void deleteAngle() { this->angle_ = nullptr;};
    inline double getAngle() const { DARABONBA_PTR_GET_DEFAULT(angle_, 0.0) };
    inline ChatRefDocPageInfo& setAngle(double angle) { DARABONBA_PTR_SET_VALUE(angle_, angle) };


    // excelParseResult Field Functions 
    bool hasExcelParseResult() const { return this->excelParseResult_ != nullptr;};
    void deleteExcelParseResult() { this->excelParseResult_ = nullptr;};
    inline string getExcelParseResult() const { DARABONBA_PTR_GET_DEFAULT(excelParseResult_, "") };
    inline ChatRefDocPageInfo& setExcelParseResult(string excelParseResult) { DARABONBA_PTR_SET_VALUE(excelParseResult_, excelParseResult) };


    // imageHeight Field Functions 
    bool hasImageHeight() const { return this->imageHeight_ != nullptr;};
    void deleteImageHeight() { this->imageHeight_ = nullptr;};
    inline int32_t getImageHeight() const { DARABONBA_PTR_GET_DEFAULT(imageHeight_, 0) };
    inline ChatRefDocPageInfo& setImageHeight(int32_t imageHeight) { DARABONBA_PTR_SET_VALUE(imageHeight_, imageHeight) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ChatRefDocPageInfo& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // imageWidth Field Functions 
    bool hasImageWidth() const { return this->imageWidth_ != nullptr;};
    void deleteImageWidth() { this->imageWidth_ = nullptr;};
    inline int32_t getImageWidth() const { DARABONBA_PTR_GET_DEFAULT(imageWidth_, 0) };
    inline ChatRefDocPageInfo& setImageWidth(int32_t imageWidth) { DARABONBA_PTR_SET_VALUE(imageWidth_, imageWidth) };


    // pageIdCurDoc Field Functions 
    bool hasPageIdCurDoc() const { return this->pageIdCurDoc_ != nullptr;};
    void deletePageIdCurDoc() { this->pageIdCurDoc_ = nullptr;};
    inline int32_t getPageIdCurDoc() const { DARABONBA_PTR_GET_DEFAULT(pageIdCurDoc_, 0) };
    inline ChatRefDocPageInfo& setPageIdCurDoc(int32_t pageIdCurDoc) { DARABONBA_PTR_SET_VALUE(pageIdCurDoc_, pageIdCurDoc) };


    // pdfParseResult Field Functions 
    bool hasPdfParseResult() const { return this->pdfParseResult_ != nullptr;};
    void deletePdfParseResult() { this->pdfParseResult_ = nullptr;};
    inline string getPdfParseResult() const { DARABONBA_PTR_GET_DEFAULT(pdfParseResult_, "") };
    inline ChatRefDocPageInfo& setPdfParseResult(string pdfParseResult) { DARABONBA_PTR_SET_VALUE(pdfParseResult_, pdfParseResult) };


    // wordParseResult Field Functions 
    bool hasWordParseResult() const { return this->wordParseResult_ != nullptr;};
    void deleteWordParseResult() { this->wordParseResult_ = nullptr;};
    inline string getWordParseResult() const { DARABONBA_PTR_GET_DEFAULT(wordParseResult_, "") };
    inline ChatRefDocPageInfo& setWordParseResult(string wordParseResult) { DARABONBA_PTR_SET_VALUE(wordParseResult_, wordParseResult) };


  protected:
    // The rotation angle of the image after the page is converted to an image.
    shared_ptr<double> angle_ {};
    // Reserved, can be unused for now.
    shared_ptr<string> excelParseResult_ {};
    // The height of the page turns to image.
    shared_ptr<int32_t> imageHeight_ {};
    // - The image URL after the page is converted to an image. 
    // - Note: The image URL will be inaccessible after 24 hours, so you need to save it promptly.
    shared_ptr<string> imageUrl_ {};
    // The width of the page turns to image
    shared_ptr<int32_t> imageWidth_ {};
    // The page index in the current document, starting from 0.
    shared_ptr<int32_t> pageIdCurDoc_ {};
    // Reserved, can be unused for now.
    shared_ptr<string> pdfParseResult_ {};
    // Reserved, can be unused for now.
    shared_ptr<string> wordParseResult_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
