// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGETRANSLATIONPRORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMAGETRANSLATIONPRORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ImageTranslationProResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageTranslationProResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ImageTranslationProResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ImageTranslationProResponseBody() = default ;
    ImageTranslationProResponseBody(const ImageTranslationProResponseBody &) = default ;
    ImageTranslationProResponseBody(ImageTranslationProResponseBody &&) = default ;
    ImageTranslationProResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageTranslationProResponseBody() = default ;
    ImageTranslationProResponseBody& operator=(const ImageTranslationProResponseBody &) = default ;
    ImageTranslationProResponseBody& operator=(ImageTranslationProResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(GenFiles, genFiles_);
        DARABONBA_PTR_TO_JSON(ResultList, resultList_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(UsageMap, usageMap_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(GenFiles, genFiles_);
        DARABONBA_PTR_FROM_JSON(ResultList, resultList_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(UsageMap, usageMap_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResultList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResultList& obj) { 
          DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
          DARABONBA_PTR_TO_JSON(Language, language_);
        };
        friend void from_json(const Darabonba::Json& j, ResultList& obj) { 
          DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
          DARABONBA_PTR_FROM_JSON(Language, language_);
        };
        ResultList() = default ;
        ResultList(const ResultList &) = default ;
        ResultList(ResultList &&) = default ;
        ResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResultList() = default ;
        ResultList& operator=(const ResultList &) = default ;
        ResultList& operator=(ResultList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileUrl_ == nullptr
        && this->language_ == nullptr; };
        // fileUrl Field Functions 
        bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
        void deleteFileUrl() { this->fileUrl_ = nullptr;};
        inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
        inline ResultList& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


        // language Field Functions 
        bool hasLanguage() const { return this->language_ != nullptr;};
        void deleteLanguage() { this->language_ = nullptr;};
        inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
        inline ResultList& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      protected:
        // The URL of the image translation result.
        shared_ptr<string> fileUrl_ {};
        // The target language of the image translation.
        shared_ptr<string> language_ {};
      };

      class GenFiles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GenFiles& obj) { 
          DARABONBA_PTR_TO_JSON(EditInfo, editInfo_);
          DARABONBA_PTR_TO_JSON(ResultList, resultList_);
          DARABONBA_PTR_TO_JSON(SrcImage, srcImage_);
        };
        friend void from_json(const Darabonba::Json& j, GenFiles& obj) { 
          DARABONBA_PTR_FROM_JSON(EditInfo, editInfo_);
          DARABONBA_PTR_FROM_JSON(ResultList, resultList_);
          DARABONBA_PTR_FROM_JSON(SrcImage, srcImage_);
        };
        GenFiles() = default ;
        GenFiles(const GenFiles &) = default ;
        GenFiles(GenFiles &&) = default ;
        GenFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GenFiles() = default ;
        GenFiles& operator=(const GenFiles &) = default ;
        GenFiles& operator=(GenFiles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ResultList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResultList& obj) { 
            DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
            DARABONBA_PTR_TO_JSON(Language, language_);
          };
          friend void from_json(const Darabonba::Json& j, ResultList& obj) { 
            DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
            DARABONBA_PTR_FROM_JSON(Language, language_);
          };
          ResultList() = default ;
          ResultList(const ResultList &) = default ;
          ResultList(ResultList &&) = default ;
          ResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResultList() = default ;
          ResultList& operator=(const ResultList &) = default ;
          ResultList& operator=(ResultList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->fileUrl_ == nullptr
        && this->language_ == nullptr; };
          // fileUrl Field Functions 
          bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
          void deleteFileUrl() { this->fileUrl_ = nullptr;};
          inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
          inline ResultList& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


          // language Field Functions 
          bool hasLanguage() const { return this->language_ != nullptr;};
          void deleteLanguage() { this->language_ = nullptr;};
          inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
          inline ResultList& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


        protected:
          // The URL of the translated image file.
          shared_ptr<string> fileUrl_ {};
          // The translation target language.
          shared_ptr<string> language_ {};
        };

        class EditInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EditInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Font, font_);
            DARABONBA_PTR_TO_JSON(GoodsRects, goodsRects_);
            DARABONBA_PTR_TO_JSON(Languages, languages_);
            DARABONBA_PTR_TO_JSON(RepairedUrl, repairedUrl_);
            DARABONBA_PTR_TO_JSON(ResultImageIds, resultImageIds_);
            DARABONBA_PTR_TO_JSON(TextAreas, textAreas_);
          };
          friend void from_json(const Darabonba::Json& j, EditInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Font, font_);
            DARABONBA_PTR_FROM_JSON(GoodsRects, goodsRects_);
            DARABONBA_PTR_FROM_JSON(Languages, languages_);
            DARABONBA_PTR_FROM_JSON(RepairedUrl, repairedUrl_);
            DARABONBA_PTR_FROM_JSON(ResultImageIds, resultImageIds_);
            DARABONBA_PTR_FROM_JSON(TextAreas, textAreas_);
          };
          EditInfo() = default ;
          EditInfo(const EditInfo &) = default ;
          EditInfo(EditInfo &&) = default ;
          EditInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EditInfo() = default ;
          EditInfo& operator=(const EditInfo &) = default ;
          EditInfo& operator=(EditInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TextAreas : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TextAreas& obj) { 
              DARABONBA_PTR_TO_JSON(Color, color_);
              DARABONBA_PTR_TO_JSON(Content, content_);
              DARABONBA_PTR_TO_JSON(Fontsize, fontsize_);
              DARABONBA_PTR_TO_JSON(HorizontalLayout, horizontalLayout_);
              DARABONBA_PTR_TO_JSON(LineCount, lineCount_);
              DARABONBA_PTR_TO_JSON(Texts, texts_);
              DARABONBA_PTR_TO_JSON(VerticalLayout, verticalLayout_);
            };
            friend void from_json(const Darabonba::Json& j, TextAreas& obj) { 
              DARABONBA_PTR_FROM_JSON(Color, color_);
              DARABONBA_PTR_FROM_JSON(Content, content_);
              DARABONBA_PTR_FROM_JSON(Fontsize, fontsize_);
              DARABONBA_PTR_FROM_JSON(HorizontalLayout, horizontalLayout_);
              DARABONBA_PTR_FROM_JSON(LineCount, lineCount_);
              DARABONBA_PTR_FROM_JSON(Texts, texts_);
              DARABONBA_PTR_FROM_JSON(VerticalLayout, verticalLayout_);
            };
            TextAreas() = default ;
            TextAreas(const TextAreas &) = default ;
            TextAreas(TextAreas &&) = default ;
            TextAreas(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TextAreas() = default ;
            TextAreas& operator=(const TextAreas &) = default ;
            TextAreas& operator=(TextAreas &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Texts : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Texts& obj) { 
                DARABONBA_PTR_TO_JSON(Color, color_);
                DARABONBA_PTR_TO_JSON(Fontsize, fontsize_);
                DARABONBA_PTR_TO_JSON(HorizontalLayout, horizontalLayout_);
                DARABONBA_PTR_TO_JSON(ImageRect, imageRect_);
                DARABONBA_PTR_TO_JSON(Language, language_);
                DARABONBA_PTR_TO_JSON(LineCount, lineCount_);
                DARABONBA_PTR_TO_JSON(OvisErrMsg, ovisErrMsg_);
                DARABONBA_PTR_TO_JSON(TextRect, textRect_);
                DARABONBA_PTR_TO_JSON(Valid, valid_);
                DARABONBA_PTR_TO_JSON(Value, value_);
                DARABONBA_PTR_TO_JSON(VerticalLayout, verticalLayout_);
              };
              friend void from_json(const Darabonba::Json& j, Texts& obj) { 
                DARABONBA_PTR_FROM_JSON(Color, color_);
                DARABONBA_PTR_FROM_JSON(Fontsize, fontsize_);
                DARABONBA_PTR_FROM_JSON(HorizontalLayout, horizontalLayout_);
                DARABONBA_PTR_FROM_JSON(ImageRect, imageRect_);
                DARABONBA_PTR_FROM_JSON(Language, language_);
                DARABONBA_PTR_FROM_JSON(LineCount, lineCount_);
                DARABONBA_PTR_FROM_JSON(OvisErrMsg, ovisErrMsg_);
                DARABONBA_PTR_FROM_JSON(TextRect, textRect_);
                DARABONBA_PTR_FROM_JSON(Valid, valid_);
                DARABONBA_PTR_FROM_JSON(Value, value_);
                DARABONBA_PTR_FROM_JSON(VerticalLayout, verticalLayout_);
              };
              Texts() = default ;
              Texts(const Texts &) = default ;
              Texts(Texts &&) = default ;
              Texts(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Texts() = default ;
              Texts& operator=(const Texts &) = default ;
              Texts& operator=(Texts &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class TextRect : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const TextRect& obj) { 
                  DARABONBA_PTR_TO_JSON(Degree, degree_);
                  DARABONBA_PTR_TO_JSON(Height, height_);
                  DARABONBA_PTR_TO_JSON(Left, left_);
                  DARABONBA_PTR_TO_JSON(Top, top_);
                  DARABONBA_PTR_TO_JSON(Width, width_);
                };
                friend void from_json(const Darabonba::Json& j, TextRect& obj) { 
                  DARABONBA_PTR_FROM_JSON(Degree, degree_);
                  DARABONBA_PTR_FROM_JSON(Height, height_);
                  DARABONBA_PTR_FROM_JSON(Left, left_);
                  DARABONBA_PTR_FROM_JSON(Top, top_);
                  DARABONBA_PTR_FROM_JSON(Width, width_);
                };
                TextRect() = default ;
                TextRect(const TextRect &) = default ;
                TextRect(TextRect &&) = default ;
                TextRect(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~TextRect() = default ;
                TextRect& operator=(const TextRect &) = default ;
                TextRect& operator=(TextRect &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->degree_ == nullptr
        && this->height_ == nullptr && this->left_ == nullptr && this->top_ == nullptr && this->width_ == nullptr; };
                // degree Field Functions 
                bool hasDegree() const { return this->degree_ != nullptr;};
                void deleteDegree() { this->degree_ = nullptr;};
                inline int32_t getDegree() const { DARABONBA_PTR_GET_DEFAULT(degree_, 0) };
                inline TextRect& setDegree(int32_t degree) { DARABONBA_PTR_SET_VALUE(degree_, degree) };


                // height Field Functions 
                bool hasHeight() const { return this->height_ != nullptr;};
                void deleteHeight() { this->height_ = nullptr;};
                inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
                inline TextRect& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


                // left Field Functions 
                bool hasLeft() const { return this->left_ != nullptr;};
                void deleteLeft() { this->left_ = nullptr;};
                inline int32_t getLeft() const { DARABONBA_PTR_GET_DEFAULT(left_, 0) };
                inline TextRect& setLeft(int32_t left) { DARABONBA_PTR_SET_VALUE(left_, left) };


                // top Field Functions 
                bool hasTop() const { return this->top_ != nullptr;};
                void deleteTop() { this->top_ = nullptr;};
                inline int32_t getTop() const { DARABONBA_PTR_GET_DEFAULT(top_, 0) };
                inline TextRect& setTop(int32_t top) { DARABONBA_PTR_SET_VALUE(top_, top) };


                // width Field Functions 
                bool hasWidth() const { return this->width_ != nullptr;};
                void deleteWidth() { this->width_ = nullptr;};
                inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
                inline TextRect& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


              protected:
                // The rotation angle of the text box in degrees. A value less than 1 indicates a horizontal text box.
                shared_ptr<int32_t> degree_ {};
                // The height.
                shared_ptr<int32_t> height_ {};
                // The left coordinate.
                shared_ptr<int32_t> left_ {};
                // The top coordinate.
                shared_ptr<int32_t> top_ {};
                // The width.
                shared_ptr<int32_t> width_ {};
              };

              class ImageRect : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ImageRect& obj) { 
                  DARABONBA_PTR_TO_JSON(Degree, degree_);
                  DARABONBA_PTR_TO_JSON(Height, height_);
                  DARABONBA_PTR_TO_JSON(Left, left_);
                  DARABONBA_PTR_TO_JSON(Top, top_);
                  DARABONBA_PTR_TO_JSON(Width, width_);
                };
                friend void from_json(const Darabonba::Json& j, ImageRect& obj) { 
                  DARABONBA_PTR_FROM_JSON(Degree, degree_);
                  DARABONBA_PTR_FROM_JSON(Height, height_);
                  DARABONBA_PTR_FROM_JSON(Left, left_);
                  DARABONBA_PTR_FROM_JSON(Top, top_);
                  DARABONBA_PTR_FROM_JSON(Width, width_);
                };
                ImageRect() = default ;
                ImageRect(const ImageRect &) = default ;
                ImageRect(ImageRect &&) = default ;
                ImageRect(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ImageRect() = default ;
                ImageRect& operator=(const ImageRect &) = default ;
                ImageRect& operator=(ImageRect &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->degree_ == nullptr
        && this->height_ == nullptr && this->left_ == nullptr && this->top_ == nullptr && this->width_ == nullptr; };
                // degree Field Functions 
                bool hasDegree() const { return this->degree_ != nullptr;};
                void deleteDegree() { this->degree_ = nullptr;};
                inline int32_t getDegree() const { DARABONBA_PTR_GET_DEFAULT(degree_, 0) };
                inline ImageRect& setDegree(int32_t degree) { DARABONBA_PTR_SET_VALUE(degree_, degree) };


                // height Field Functions 
                bool hasHeight() const { return this->height_ != nullptr;};
                void deleteHeight() { this->height_ = nullptr;};
                inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
                inline ImageRect& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


                // left Field Functions 
                bool hasLeft() const { return this->left_ != nullptr;};
                void deleteLeft() { this->left_ = nullptr;};
                inline int32_t getLeft() const { DARABONBA_PTR_GET_DEFAULT(left_, 0) };
                inline ImageRect& setLeft(int32_t left) { DARABONBA_PTR_SET_VALUE(left_, left) };


                // top Field Functions 
                bool hasTop() const { return this->top_ != nullptr;};
                void deleteTop() { this->top_ = nullptr;};
                inline int32_t getTop() const { DARABONBA_PTR_GET_DEFAULT(top_, 0) };
                inline ImageRect& setTop(int32_t top) { DARABONBA_PTR_SET_VALUE(top_, top) };


                // width Field Functions 
                bool hasWidth() const { return this->width_ != nullptr;};
                void deleteWidth() { this->width_ = nullptr;};
                inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
                inline ImageRect& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


              protected:
                // The rotation angle of the text box in degrees. A value less than 1 indicates a horizontal text box.
                shared_ptr<int32_t> degree_ {};
                // The height.
                shared_ptr<int32_t> height_ {};
                // The left coordinate.
                shared_ptr<int32_t> left_ {};
                // The top coordinate.
                shared_ptr<int32_t> top_ {};
                // The width.
                shared_ptr<int32_t> width_ {};
              };

              virtual bool empty() const override { return this->color_ == nullptr
        && this->fontsize_ == nullptr && this->horizontalLayout_ == nullptr && this->imageRect_ == nullptr && this->language_ == nullptr && this->lineCount_ == nullptr
        && this->ovisErrMsg_ == nullptr && this->textRect_ == nullptr && this->valid_ == nullptr && this->value_ == nullptr && this->verticalLayout_ == nullptr; };
              // color Field Functions 
              bool hasColor() const { return this->color_ != nullptr;};
              void deleteColor() { this->color_ = nullptr;};
              inline string getColor() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
              inline Texts& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


              // fontsize Field Functions 
              bool hasFontsize() const { return this->fontsize_ != nullptr;};
              void deleteFontsize() { this->fontsize_ = nullptr;};
              inline int32_t getFontsize() const { DARABONBA_PTR_GET_DEFAULT(fontsize_, 0) };
              inline Texts& setFontsize(int32_t fontsize) { DARABONBA_PTR_SET_VALUE(fontsize_, fontsize) };


              // horizontalLayout Field Functions 
              bool hasHorizontalLayout() const { return this->horizontalLayout_ != nullptr;};
              void deleteHorizontalLayout() { this->horizontalLayout_ = nullptr;};
              inline string getHorizontalLayout() const { DARABONBA_PTR_GET_DEFAULT(horizontalLayout_, "") };
              inline Texts& setHorizontalLayout(string horizontalLayout) { DARABONBA_PTR_SET_VALUE(horizontalLayout_, horizontalLayout) };


              // imageRect Field Functions 
              bool hasImageRect() const { return this->imageRect_ != nullptr;};
              void deleteImageRect() { this->imageRect_ = nullptr;};
              inline const Texts::ImageRect & getImageRect() const { DARABONBA_PTR_GET_CONST(imageRect_, Texts::ImageRect) };
              inline Texts::ImageRect getImageRect() { DARABONBA_PTR_GET(imageRect_, Texts::ImageRect) };
              inline Texts& setImageRect(const Texts::ImageRect & imageRect) { DARABONBA_PTR_SET_VALUE(imageRect_, imageRect) };
              inline Texts& setImageRect(Texts::ImageRect && imageRect) { DARABONBA_PTR_SET_RVALUE(imageRect_, imageRect) };


              // language Field Functions 
              bool hasLanguage() const { return this->language_ != nullptr;};
              void deleteLanguage() { this->language_ = nullptr;};
              inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
              inline Texts& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


              // lineCount Field Functions 
              bool hasLineCount() const { return this->lineCount_ != nullptr;};
              void deleteLineCount() { this->lineCount_ = nullptr;};
              inline int32_t getLineCount() const { DARABONBA_PTR_GET_DEFAULT(lineCount_, 0) };
              inline Texts& setLineCount(int32_t lineCount) { DARABONBA_PTR_SET_VALUE(lineCount_, lineCount) };


              // ovisErrMsg Field Functions 
              bool hasOvisErrMsg() const { return this->ovisErrMsg_ != nullptr;};
              void deleteOvisErrMsg() { this->ovisErrMsg_ = nullptr;};
              inline string getOvisErrMsg() const { DARABONBA_PTR_GET_DEFAULT(ovisErrMsg_, "") };
              inline Texts& setOvisErrMsg(string ovisErrMsg) { DARABONBA_PTR_SET_VALUE(ovisErrMsg_, ovisErrMsg) };


              // textRect Field Functions 
              bool hasTextRect() const { return this->textRect_ != nullptr;};
              void deleteTextRect() { this->textRect_ = nullptr;};
              inline const Texts::TextRect & getTextRect() const { DARABONBA_PTR_GET_CONST(textRect_, Texts::TextRect) };
              inline Texts::TextRect getTextRect() { DARABONBA_PTR_GET(textRect_, Texts::TextRect) };
              inline Texts& setTextRect(const Texts::TextRect & textRect) { DARABONBA_PTR_SET_VALUE(textRect_, textRect) };
              inline Texts& setTextRect(Texts::TextRect && textRect) { DARABONBA_PTR_SET_RVALUE(textRect_, textRect) };


              // valid Field Functions 
              bool hasValid() const { return this->valid_ != nullptr;};
              void deleteValid() { this->valid_ = nullptr;};
              inline bool getValid() const { DARABONBA_PTR_GET_DEFAULT(valid_, false) };
              inline Texts& setValid(bool valid) { DARABONBA_PTR_SET_VALUE(valid_, valid) };


              // value Field Functions 
              bool hasValue() const { return this->value_ != nullptr;};
              void deleteValue() { this->value_ = nullptr;};
              inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
              inline Texts& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


              // verticalLayout Field Functions 
              bool hasVerticalLayout() const { return this->verticalLayout_ != nullptr;};
              void deleteVerticalLayout() { this->verticalLayout_ = nullptr;};
              inline string getVerticalLayout() const { DARABONBA_PTR_GET_DEFAULT(verticalLayout_, "") };
              inline Texts& setVerticalLayout(string verticalLayout) { DARABONBA_PTR_SET_VALUE(verticalLayout_, verticalLayout) };


            protected:
              // The color of the translated text.
              shared_ptr<string> color_ {};
              // The font size of the translated text.
              shared_ptr<int32_t> fontsize_ {};
              // The horizontal layout mode. Valid values: center, left, right.
              shared_ptr<string> horizontalLayout_ {};
              // The coordinates of the image inpainting area.
              shared_ptr<Texts::ImageRect> imageRect_ {};
              // The target language code for translation.
              shared_ptr<string> language_ {};
              // The number of lines in the text box.
              shared_ptr<int32_t> lineCount_ {};
              // The Ovis model error message and execution time.
              shared_ptr<string> ovisErrMsg_ {};
              // The coordinates of the text box area.
              shared_ptr<Texts::TextRect> textRect_ {};
              // Indicates whether the TextItem is valid. The item is invalid when this value does not exist or is false.
              shared_ptr<bool> valid_ {};
              // The translated text content.
              shared_ptr<string> value_ {};
              // The vertical layout mode. Valid values: center, top, down.
              shared_ptr<string> verticalLayout_ {};
            };

            virtual bool empty() const override { return this->color_ == nullptr
        && this->content_ == nullptr && this->fontsize_ == nullptr && this->horizontalLayout_ == nullptr && this->lineCount_ == nullptr && this->texts_ == nullptr
        && this->verticalLayout_ == nullptr; };
            // color Field Functions 
            bool hasColor() const { return this->color_ != nullptr;};
            void deleteColor() { this->color_ = nullptr;};
            inline string getColor() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
            inline TextAreas& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


            // content Field Functions 
            bool hasContent() const { return this->content_ != nullptr;};
            void deleteContent() { this->content_ = nullptr;};
            inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
            inline TextAreas& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


            // fontsize Field Functions 
            bool hasFontsize() const { return this->fontsize_ != nullptr;};
            void deleteFontsize() { this->fontsize_ = nullptr;};
            inline int32_t getFontsize() const { DARABONBA_PTR_GET_DEFAULT(fontsize_, 0) };
            inline TextAreas& setFontsize(int32_t fontsize) { DARABONBA_PTR_SET_VALUE(fontsize_, fontsize) };


            // horizontalLayout Field Functions 
            bool hasHorizontalLayout() const { return this->horizontalLayout_ != nullptr;};
            void deleteHorizontalLayout() { this->horizontalLayout_ = nullptr;};
            inline string getHorizontalLayout() const { DARABONBA_PTR_GET_DEFAULT(horizontalLayout_, "") };
            inline TextAreas& setHorizontalLayout(string horizontalLayout) { DARABONBA_PTR_SET_VALUE(horizontalLayout_, horizontalLayout) };


            // lineCount Field Functions 
            bool hasLineCount() const { return this->lineCount_ != nullptr;};
            void deleteLineCount() { this->lineCount_ = nullptr;};
            inline int32_t getLineCount() const { DARABONBA_PTR_GET_DEFAULT(lineCount_, 0) };
            inline TextAreas& setLineCount(int32_t lineCount) { DARABONBA_PTR_SET_VALUE(lineCount_, lineCount) };


            // texts Field Functions 
            bool hasTexts() const { return this->texts_ != nullptr;};
            void deleteTexts() { this->texts_ = nullptr;};
            inline const vector<TextAreas::Texts> & getTexts() const { DARABONBA_PTR_GET_CONST(texts_, vector<TextAreas::Texts>) };
            inline vector<TextAreas::Texts> getTexts() { DARABONBA_PTR_GET(texts_, vector<TextAreas::Texts>) };
            inline TextAreas& setTexts(const vector<TextAreas::Texts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
            inline TextAreas& setTexts(vector<TextAreas::Texts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


            // verticalLayout Field Functions 
            bool hasVerticalLayout() const { return this->verticalLayout_ != nullptr;};
            void deleteVerticalLayout() { this->verticalLayout_ = nullptr;};
            inline string getVerticalLayout() const { DARABONBA_PTR_GET_DEFAULT(verticalLayout_, "") };
            inline TextAreas& setVerticalLayout(string verticalLayout) { DARABONBA_PTR_SET_VALUE(verticalLayout_, verticalLayout) };


          protected:
            // The text color, such as #ffffff.
            shared_ptr<string> color_ {};
            // The original text before translation.
            shared_ptr<string> content_ {};
            // The font size.
            shared_ptr<int32_t> fontsize_ {};
            // The horizontal layout mode. Valid values: center, left, right.
            shared_ptr<string> horizontalLayout_ {};
            // The number of lines in the text box.
            shared_ptr<int32_t> lineCount_ {};
            // The list of translated texts. Each element corresponds to the translation result for one target language.
            shared_ptr<vector<TextAreas::Texts>> texts_ {};
            // The vertical layout mode. Valid values: center, top, down.
            shared_ptr<string> verticalLayout_ {};
          };

          class GoodsRects : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const GoodsRects& obj) { 
              DARABONBA_PTR_TO_JSON(Degree, degree_);
              DARABONBA_PTR_TO_JSON(Height, height_);
              DARABONBA_PTR_TO_JSON(Left, left_);
              DARABONBA_PTR_TO_JSON(Top, top_);
              DARABONBA_PTR_TO_JSON(Width, width_);
            };
            friend void from_json(const Darabonba::Json& j, GoodsRects& obj) { 
              DARABONBA_PTR_FROM_JSON(Degree, degree_);
              DARABONBA_PTR_FROM_JSON(Height, height_);
              DARABONBA_PTR_FROM_JSON(Left, left_);
              DARABONBA_PTR_FROM_JSON(Top, top_);
              DARABONBA_PTR_FROM_JSON(Width, width_);
            };
            GoodsRects() = default ;
            GoodsRects(const GoodsRects &) = default ;
            GoodsRects(GoodsRects &&) = default ;
            GoodsRects(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~GoodsRects() = default ;
            GoodsRects& operator=(const GoodsRects &) = default ;
            GoodsRects& operator=(GoodsRects &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->degree_ == nullptr
        && this->height_ == nullptr && this->left_ == nullptr && this->top_ == nullptr && this->width_ == nullptr; };
            // degree Field Functions 
            bool hasDegree() const { return this->degree_ != nullptr;};
            void deleteDegree() { this->degree_ = nullptr;};
            inline int32_t getDegree() const { DARABONBA_PTR_GET_DEFAULT(degree_, 0) };
            inline GoodsRects& setDegree(int32_t degree) { DARABONBA_PTR_SET_VALUE(degree_, degree) };


            // height Field Functions 
            bool hasHeight() const { return this->height_ != nullptr;};
            void deleteHeight() { this->height_ = nullptr;};
            inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
            inline GoodsRects& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


            // left Field Functions 
            bool hasLeft() const { return this->left_ != nullptr;};
            void deleteLeft() { this->left_ = nullptr;};
            inline int32_t getLeft() const { DARABONBA_PTR_GET_DEFAULT(left_, 0) };
            inline GoodsRects& setLeft(int32_t left) { DARABONBA_PTR_SET_VALUE(left_, left) };


            // top Field Functions 
            bool hasTop() const { return this->top_ != nullptr;};
            void deleteTop() { this->top_ = nullptr;};
            inline int32_t getTop() const { DARABONBA_PTR_GET_DEFAULT(top_, 0) };
            inline GoodsRects& setTop(int32_t top) { DARABONBA_PTR_SET_VALUE(top_, top) };


            // width Field Functions 
            bool hasWidth() const { return this->width_ != nullptr;};
            void deleteWidth() { this->width_ = nullptr;};
            inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
            inline GoodsRects& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


          protected:
            // The rotation angle of the text box in degrees. A value less than 1 indicates a horizontal text box.
            shared_ptr<int32_t> degree_ {};
            // The height.
            shared_ptr<int32_t> height_ {};
            // The left coordinate.
            shared_ptr<int32_t> left_ {};
            // The top coordinate.
            shared_ptr<int32_t> top_ {};
            // The width.
            shared_ptr<int32_t> width_ {};
          };

          virtual bool empty() const override { return this->font_ == nullptr
        && this->goodsRects_ == nullptr && this->languages_ == nullptr && this->repairedUrl_ == nullptr && this->resultImageIds_ == nullptr && this->textAreas_ == nullptr; };
          // font Field Functions 
          bool hasFont() const { return this->font_ != nullptr;};
          void deleteFont() { this->font_ = nullptr;};
          inline const vector<string> & getFont() const { DARABONBA_PTR_GET_CONST(font_, vector<string>) };
          inline vector<string> getFont() { DARABONBA_PTR_GET(font_, vector<string>) };
          inline EditInfo& setFont(const vector<string> & font) { DARABONBA_PTR_SET_VALUE(font_, font) };
          inline EditInfo& setFont(vector<string> && font) { DARABONBA_PTR_SET_RVALUE(font_, font) };


          // goodsRects Field Functions 
          bool hasGoodsRects() const { return this->goodsRects_ != nullptr;};
          void deleteGoodsRects() { this->goodsRects_ = nullptr;};
          inline const EditInfo::GoodsRects & getGoodsRects() const { DARABONBA_PTR_GET_CONST(goodsRects_, EditInfo::GoodsRects) };
          inline EditInfo::GoodsRects getGoodsRects() { DARABONBA_PTR_GET(goodsRects_, EditInfo::GoodsRects) };
          inline EditInfo& setGoodsRects(const EditInfo::GoodsRects & goodsRects) { DARABONBA_PTR_SET_VALUE(goodsRects_, goodsRects) };
          inline EditInfo& setGoodsRects(EditInfo::GoodsRects && goodsRects) { DARABONBA_PTR_SET_RVALUE(goodsRects_, goodsRects) };


          // languages Field Functions 
          bool hasLanguages() const { return this->languages_ != nullptr;};
          void deleteLanguages() { this->languages_ = nullptr;};
          inline const vector<string> & getLanguages() const { DARABONBA_PTR_GET_CONST(languages_, vector<string>) };
          inline vector<string> getLanguages() { DARABONBA_PTR_GET(languages_, vector<string>) };
          inline EditInfo& setLanguages(const vector<string> & languages) { DARABONBA_PTR_SET_VALUE(languages_, languages) };
          inline EditInfo& setLanguages(vector<string> && languages) { DARABONBA_PTR_SET_RVALUE(languages_, languages) };


          // repairedUrl Field Functions 
          bool hasRepairedUrl() const { return this->repairedUrl_ != nullptr;};
          void deleteRepairedUrl() { this->repairedUrl_ = nullptr;};
          inline string getRepairedUrl() const { DARABONBA_PTR_GET_DEFAULT(repairedUrl_, "") };
          inline EditInfo& setRepairedUrl(string repairedUrl) { DARABONBA_PTR_SET_VALUE(repairedUrl_, repairedUrl) };


          // resultImageIds Field Functions 
          bool hasResultImageIds() const { return this->resultImageIds_ != nullptr;};
          void deleteResultImageIds() { this->resultImageIds_ = nullptr;};
          inline const vector<string> & getResultImageIds() const { DARABONBA_PTR_GET_CONST(resultImageIds_, vector<string>) };
          inline vector<string> getResultImageIds() { DARABONBA_PTR_GET(resultImageIds_, vector<string>) };
          inline EditInfo& setResultImageIds(const vector<string> & resultImageIds) { DARABONBA_PTR_SET_VALUE(resultImageIds_, resultImageIds) };
          inline EditInfo& setResultImageIds(vector<string> && resultImageIds) { DARABONBA_PTR_SET_RVALUE(resultImageIds_, resultImageIds) };


          // textAreas Field Functions 
          bool hasTextAreas() const { return this->textAreas_ != nullptr;};
          void deleteTextAreas() { this->textAreas_ = nullptr;};
          inline const vector<EditInfo::TextAreas> & getTextAreas() const { DARABONBA_PTR_GET_CONST(textAreas_, vector<EditInfo::TextAreas>) };
          inline vector<EditInfo::TextAreas> getTextAreas() { DARABONBA_PTR_GET(textAreas_, vector<EditInfo::TextAreas>) };
          inline EditInfo& setTextAreas(const vector<EditInfo::TextAreas> & textAreas) { DARABONBA_PTR_SET_VALUE(textAreas_, textAreas) };
          inline EditInfo& setTextAreas(vector<EditInfo::TextAreas> && textAreas) { DARABONBA_PTR_SET_RVALUE(textAreas_, textAreas) };


        protected:
          // The list of font types.
          shared_ptr<vector<string>> font_ {};
          // The coordinate information of the product bounding box area.
          shared_ptr<EditInfo::GoodsRects> goodsRects_ {};
          // The list of translation target languages.
          shared_ptr<vector<string>> languages_ {};
          // The URL of the image with all text removed.
          shared_ptr<string> repairedUrl_ {};
          // The collection of global IDs of translated images.
          shared_ptr<vector<string>> resultImageIds_ {};
          // The list of text boxes, including all recognized text area information.
          shared_ptr<vector<EditInfo::TextAreas>> textAreas_ {};
        };

        virtual bool empty() const override { return this->editInfo_ == nullptr
        && this->resultList_ == nullptr && this->srcImage_ == nullptr; };
        // editInfo Field Functions 
        bool hasEditInfo() const { return this->editInfo_ != nullptr;};
        void deleteEditInfo() { this->editInfo_ = nullptr;};
        inline const GenFiles::EditInfo & getEditInfo() const { DARABONBA_PTR_GET_CONST(editInfo_, GenFiles::EditInfo) };
        inline GenFiles::EditInfo getEditInfo() { DARABONBA_PTR_GET(editInfo_, GenFiles::EditInfo) };
        inline GenFiles& setEditInfo(const GenFiles::EditInfo & editInfo) { DARABONBA_PTR_SET_VALUE(editInfo_, editInfo) };
        inline GenFiles& setEditInfo(GenFiles::EditInfo && editInfo) { DARABONBA_PTR_SET_RVALUE(editInfo_, editInfo) };


        // resultList Field Functions 
        bool hasResultList() const { return this->resultList_ != nullptr;};
        void deleteResultList() { this->resultList_ = nullptr;};
        inline const vector<GenFiles::ResultList> & getResultList() const { DARABONBA_PTR_GET_CONST(resultList_, vector<GenFiles::ResultList>) };
        inline vector<GenFiles::ResultList> getResultList() { DARABONBA_PTR_GET(resultList_, vector<GenFiles::ResultList>) };
        inline GenFiles& setResultList(const vector<GenFiles::ResultList> & resultList) { DARABONBA_PTR_SET_VALUE(resultList_, resultList) };
        inline GenFiles& setResultList(vector<GenFiles::ResultList> && resultList) { DARABONBA_PTR_SET_RVALUE(resultList_, resultList) };


        // srcImage Field Functions 
        bool hasSrcImage() const { return this->srcImage_ != nullptr;};
        void deleteSrcImage() { this->srcImage_ = nullptr;};
        inline string getSrcImage() const { DARABONBA_PTR_GET_DEFAULT(srcImage_, "") };
        inline GenFiles& setSrcImage(string srcImage) { DARABONBA_PTR_SET_VALUE(srcImage_, srcImage) };


      protected:
        // The editor information, including recognized text areas, product areas, fonts, and other information.
        shared_ptr<GenFiles::EditInfo> editInfo_ {};
        // The collection of translation results.
        shared_ptr<vector<GenFiles::ResultList>> resultList_ {};
        // The URL of the original image.
        shared_ptr<string> srcImage_ {};
      };

      virtual bool empty() const override { return this->genFiles_ == nullptr
        && this->resultList_ == nullptr && this->taskId_ == nullptr && this->usageMap_ == nullptr; };
      // genFiles Field Functions 
      bool hasGenFiles() const { return this->genFiles_ != nullptr;};
      void deleteGenFiles() { this->genFiles_ = nullptr;};
      inline const vector<Data::GenFiles> & getGenFiles() const { DARABONBA_PTR_GET_CONST(genFiles_, vector<Data::GenFiles>) };
      inline vector<Data::GenFiles> getGenFiles() { DARABONBA_PTR_GET(genFiles_, vector<Data::GenFiles>) };
      inline Data& setGenFiles(const vector<Data::GenFiles> & genFiles) { DARABONBA_PTR_SET_VALUE(genFiles_, genFiles) };
      inline Data& setGenFiles(vector<Data::GenFiles> && genFiles) { DARABONBA_PTR_SET_RVALUE(genFiles_, genFiles) };


      // resultList Field Functions 
      bool hasResultList() const { return this->resultList_ != nullptr;};
      void deleteResultList() { this->resultList_ = nullptr;};
      inline const vector<Data::ResultList> & getResultList() const { DARABONBA_PTR_GET_CONST(resultList_, vector<Data::ResultList>) };
      inline vector<Data::ResultList> getResultList() { DARABONBA_PTR_GET(resultList_, vector<Data::ResultList>) };
      inline Data& setResultList(const vector<Data::ResultList> & resultList) { DARABONBA_PTR_SET_VALUE(resultList_, resultList) };
      inline Data& setResultList(vector<Data::ResultList> && resultList) { DARABONBA_PTR_SET_RVALUE(resultList_, resultList) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // usageMap Field Functions 
      bool hasUsageMap() const { return this->usageMap_ != nullptr;};
      void deleteUsageMap() { this->usageMap_ = nullptr;};
      inline const map<string, int64_t> & getUsageMap() const { DARABONBA_PTR_GET_CONST(usageMap_, map<string, int64_t>) };
      inline map<string, int64_t> getUsageMap() { DARABONBA_PTR_GET(usageMap_, map<string, int64_t>) };
      inline Data& setUsageMap(const map<string, int64_t> & usageMap) { DARABONBA_PTR_SET_VALUE(usageMap_, usageMap) };
      inline Data& setUsageMap(map<string, int64_t> && usageMap) { DARABONBA_PTR_SET_RVALUE(usageMap_, usageMap) };


    protected:
      // The editor protocol, including translation result files and editing information.
      shared_ptr<vector<Data::GenFiles>> genFiles_ {};
      // The list of image translation results.
      shared_ptr<vector<Data::ResultList>> resultList_ {};
      // The asynchronous task ID. Not returned for synchronous calls.
      shared_ptr<string> taskId_ {};
      // The usage information, including the number of processed images.
      shared_ptr<map<string, int64_t>> usageMap_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ImageTranslationProResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ImageTranslationProResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ImageTranslationProResponseBody::Data) };
    inline ImageTranslationProResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ImageTranslationProResponseBody::Data) };
    inline ImageTranslationProResponseBody& setData(const ImageTranslationProResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ImageTranslationProResponseBody& setData(ImageTranslationProResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ImageTranslationProResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImageTranslationProResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ImageTranslationProResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. 200 indicates a successful call. For other response codes, see the error code information.
    shared_ptr<string> code_ {};
    // The translation result data. ResultList contains the URL of the translation result. GenFiles contains EditInfo with the recognized text information.
    shared_ptr<ImageTranslationProResponseBody::Data> data_ {};
    // The error message. Returns "Success" for successful calls. Returns specific error information for exceptions, such as "The content contains sensitive data. Try other input."
    shared_ptr<string> message_ {};
    // The request ID, used to identify a unique request call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. true indicates success. false indicates failure.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
