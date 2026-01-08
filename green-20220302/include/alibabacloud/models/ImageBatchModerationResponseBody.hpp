// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEBATCHMODERATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMAGEBATCHMODERATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageBatchModerationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageBatchModerationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ImageBatchModerationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ImageBatchModerationResponseBody() = default ;
    ImageBatchModerationResponseBody(const ImageBatchModerationResponseBody &) = default ;
    ImageBatchModerationResponseBody(ImageBatchModerationResponseBody &&) = default ;
    ImageBatchModerationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageBatchModerationResponseBody() = default ;
    ImageBatchModerationResponseBody& operator=(const ImageBatchModerationResponseBody &) = default ;
    ImageBatchModerationResponseBody& operator=(ImageBatchModerationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataId, dataId_);
        DARABONBA_PTR_TO_JSON(ManualTaskId, manualTaskId_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(Results, results_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataId, dataId_);
        DARABONBA_PTR_FROM_JSON(ManualTaskId, manualTaskId_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(Results, results_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
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
      class Results : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Results& obj) { 
          DARABONBA_PTR_TO_JSON(Ext, ext_);
          DARABONBA_PTR_TO_JSON(Result, result_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_TO_JSON(Service, service_);
        };
        friend void from_json(const Darabonba::Json& j, Results& obj) { 
          DARABONBA_PTR_FROM_JSON(Ext, ext_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_FROM_JSON(Service, service_);
        };
        Results() = default ;
        Results(const Results &) = default ;
        Results(Results &&) = default ;
        Results(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Results() = default ;
        Results& operator=(const Results &) = default ;
        Results& operator=(Results &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Result : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Result& obj) { 
            DARABONBA_PTR_TO_JSON(Confidence, confidence_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Label, label_);
          };
          friend void from_json(const Darabonba::Json& j, Result& obj) { 
            DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
          };
          Result() = default ;
          Result(const Result &) = default ;
          Result(Result &&) = default ;
          Result(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Result() = default ;
          Result& operator=(const Result &) = default ;
          Result& operator=(Result &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->confidence_ == nullptr
        && this->description_ == nullptr && this->label_ == nullptr; };
          // confidence Field Functions 
          bool hasConfidence() const { return this->confidence_ != nullptr;};
          void deleteConfidence() { this->confidence_ = nullptr;};
          inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
          inline Result& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline Result& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        protected:
          // Confidence score, ranging from 0 to 100, rounded to two decimal places. Some labels do not have a confidence score.
          shared_ptr<float> confidence_ {};
          // Description.
          shared_ptr<string> description_ {};
          // The labels returned after image content detection. A single image may have multiple labels and corresponding scores detected.
          shared_ptr<string> label_ {};
        };

        class Ext : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ext& obj) { 
            DARABONBA_PTR_TO_JSON(CustomImage, customImage_);
            DARABONBA_PTR_TO_JSON(LogoData, logoData_);
            DARABONBA_PTR_TO_JSON(PublicFigure, publicFigure_);
            DARABONBA_PTR_TO_JSON(TextInImage, textInImage_);
          };
          friend void from_json(const Darabonba::Json& j, Ext& obj) { 
            DARABONBA_PTR_FROM_JSON(CustomImage, customImage_);
            DARABONBA_PTR_FROM_JSON(LogoData, logoData_);
            DARABONBA_PTR_FROM_JSON(PublicFigure, publicFigure_);
            DARABONBA_PTR_FROM_JSON(TextInImage, textInImage_);
          };
          Ext() = default ;
          Ext(const Ext &) = default ;
          Ext(Ext &&) = default ;
          Ext(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ext() = default ;
          Ext& operator=(const Ext &) = default ;
          Ext& operator=(Ext &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TextInImage : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TextInImage& obj) { 
              DARABONBA_PTR_TO_JSON(CustomText, customText_);
              DARABONBA_PTR_TO_JSON(OcrResult, ocrResult_);
              DARABONBA_PTR_TO_JSON(RiskWord, riskWord_);
            };
            friend void from_json(const Darabonba::Json& j, TextInImage& obj) { 
              DARABONBA_PTR_FROM_JSON(CustomText, customText_);
              DARABONBA_PTR_FROM_JSON(OcrResult, ocrResult_);
              DARABONBA_PTR_FROM_JSON(RiskWord, riskWord_);
            };
            TextInImage() = default ;
            TextInImage(const TextInImage &) = default ;
            TextInImage(TextInImage &&) = default ;
            TextInImage(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TextInImage() = default ;
            TextInImage& operator=(const TextInImage &) = default ;
            TextInImage& operator=(TextInImage &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class OcrResult : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const OcrResult& obj) { 
                DARABONBA_PTR_TO_JSON(Location, location_);
                DARABONBA_PTR_TO_JSON(Text, text_);
              };
              friend void from_json(const Darabonba::Json& j, OcrResult& obj) { 
                DARABONBA_PTR_FROM_JSON(Location, location_);
                DARABONBA_PTR_FROM_JSON(Text, text_);
              };
              OcrResult() = default ;
              OcrResult(const OcrResult &) = default ;
              OcrResult(OcrResult &&) = default ;
              OcrResult(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~OcrResult() = default ;
              OcrResult& operator=(const OcrResult &) = default ;
              OcrResult& operator=(OcrResult &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Location : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Location& obj) { 
                  DARABONBA_PTR_TO_JSON(H, h_);
                  DARABONBA_PTR_TO_JSON(W, w_);
                  DARABONBA_PTR_TO_JSON(X, x_);
                  DARABONBA_PTR_TO_JSON(Y, y_);
                };
                friend void from_json(const Darabonba::Json& j, Location& obj) { 
                  DARABONBA_PTR_FROM_JSON(H, h_);
                  DARABONBA_PTR_FROM_JSON(W, w_);
                  DARABONBA_PTR_FROM_JSON(X, x_);
                  DARABONBA_PTR_FROM_JSON(Y, y_);
                };
                Location() = default ;
                Location(const Location &) = default ;
                Location(Location &&) = default ;
                Location(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Location() = default ;
                Location& operator=(const Location &) = default ;
                Location& operator=(Location &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->h_ == nullptr
        && this->w_ == nullptr && this->x_ == nullptr && this->y_ == nullptr; };
                // h Field Functions 
                bool hasH() const { return this->h_ != nullptr;};
                void deleteH() { this->h_ = nullptr;};
                inline int32_t getH() const { DARABONBA_PTR_GET_DEFAULT(h_, 0) };
                inline Location& setH(int32_t h) { DARABONBA_PTR_SET_VALUE(h_, h) };


                // w Field Functions 
                bool hasW() const { return this->w_ != nullptr;};
                void deleteW() { this->w_ = nullptr;};
                inline int32_t getW() const { DARABONBA_PTR_GET_DEFAULT(w_, 0) };
                inline Location& setW(int32_t w) { DARABONBA_PTR_SET_VALUE(w_, w) };


                // x Field Functions 
                bool hasX() const { return this->x_ != nullptr;};
                void deleteX() { this->x_ = nullptr;};
                inline int32_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0) };
                inline Location& setX(int32_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


                // y Field Functions 
                bool hasY() const { return this->y_ != nullptr;};
                void deleteY() { this->y_ = nullptr;};
                inline int32_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0) };
                inline Location& setY(int32_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


              protected:
                // The height of the text area, in pixels.
                shared_ptr<int32_t> h_ {};
                // The width of the text area, in pixels.
                shared_ptr<int32_t> w_ {};
                // The distance from the top-left corner of the text area to the y-axis, with the top-left corner of the image as the origin, in pixels.
                shared_ptr<int32_t> x_ {};
                // The distance from the top-left corner of the text area to the x-axis, with the top-left corner of the image as the origin, in pixels.
                shared_ptr<int32_t> y_ {};
              };

              virtual bool empty() const override { return this->location_ == nullptr
        && this->text_ == nullptr; };
              // location Field Functions 
              bool hasLocation() const { return this->location_ != nullptr;};
              void deleteLocation() { this->location_ = nullptr;};
              inline const OcrResult::Location & getLocation() const { DARABONBA_PTR_GET_CONST(location_, OcrResult::Location) };
              inline OcrResult::Location getLocation() { DARABONBA_PTR_GET(location_, OcrResult::Location) };
              inline OcrResult& setLocation(const OcrResult::Location & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
              inline OcrResult& setLocation(OcrResult::Location && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


              // text Field Functions 
              bool hasText() const { return this->text_ != nullptr;};
              void deleteText() { this->text_ = nullptr;};
              inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
              inline OcrResult& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


            protected:
              // Text line coordinate information.
              shared_ptr<OcrResult::Location> location_ {};
              // Text information.
              shared_ptr<string> text_ {};
            };

            class CustomText : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const CustomText& obj) { 
                DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
                DARABONBA_PTR_TO_JSON(LibId, libId_);
                DARABONBA_PTR_TO_JSON(LibName, libName_);
              };
              friend void from_json(const Darabonba::Json& j, CustomText& obj) { 
                DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
                DARABONBA_PTR_FROM_JSON(LibId, libId_);
                DARABONBA_PTR_FROM_JSON(LibName, libName_);
              };
              CustomText() = default ;
              CustomText(const CustomText &) = default ;
              CustomText(CustomText &&) = default ;
              CustomText(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~CustomText() = default ;
              CustomText& operator=(const CustomText &) = default ;
              CustomText& operator=(CustomText &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->keyWords_ == nullptr
        && this->libId_ == nullptr && this->libName_ == nullptr; };
              // keyWords Field Functions 
              bool hasKeyWords() const { return this->keyWords_ != nullptr;};
              void deleteKeyWords() { this->keyWords_ = nullptr;};
              inline string getKeyWords() const { DARABONBA_PTR_GET_DEFAULT(keyWords_, "") };
              inline CustomText& setKeyWords(string keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };


              // libId Field Functions 
              bool hasLibId() const { return this->libId_ != nullptr;};
              void deleteLibId() { this->libId_ = nullptr;};
              inline string getLibId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
              inline CustomText& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


              // libName Field Functions 
              bool hasLibName() const { return this->libName_ != nullptr;};
              void deleteLibName() { this->libName_ = nullptr;};
              inline string getLibName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
              inline CustomText& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


            protected:
              // Custom words, separate multiple words with commas.
              shared_ptr<string> keyWords_ {};
              // Custom library ID.
              shared_ptr<string> libId_ {};
              // Custom library name.
              shared_ptr<string> libName_ {};
            };

            virtual bool empty() const override { return this->customText_ == nullptr
        && this->ocrResult_ == nullptr && this->riskWord_ == nullptr; };
            // customText Field Functions 
            bool hasCustomText() const { return this->customText_ != nullptr;};
            void deleteCustomText() { this->customText_ = nullptr;};
            inline const vector<TextInImage::CustomText> & getCustomText() const { DARABONBA_PTR_GET_CONST(customText_, vector<TextInImage::CustomText>) };
            inline vector<TextInImage::CustomText> getCustomText() { DARABONBA_PTR_GET(customText_, vector<TextInImage::CustomText>) };
            inline TextInImage& setCustomText(const vector<TextInImage::CustomText> & customText) { DARABONBA_PTR_SET_VALUE(customText_, customText) };
            inline TextInImage& setCustomText(vector<TextInImage::CustomText> && customText) { DARABONBA_PTR_SET_RVALUE(customText_, customText) };


            // ocrResult Field Functions 
            bool hasOcrResult() const { return this->ocrResult_ != nullptr;};
            void deleteOcrResult() { this->ocrResult_ = nullptr;};
            inline const vector<TextInImage::OcrResult> & getOcrResult() const { DARABONBA_PTR_GET_CONST(ocrResult_, vector<TextInImage::OcrResult>) };
            inline vector<TextInImage::OcrResult> getOcrResult() { DARABONBA_PTR_GET(ocrResult_, vector<TextInImage::OcrResult>) };
            inline TextInImage& setOcrResult(const vector<TextInImage::OcrResult> & ocrResult) { DARABONBA_PTR_SET_VALUE(ocrResult_, ocrResult) };
            inline TextInImage& setOcrResult(vector<TextInImage::OcrResult> && ocrResult) { DARABONBA_PTR_SET_RVALUE(ocrResult_, ocrResult) };


            // riskWord Field Functions 
            bool hasRiskWord() const { return this->riskWord_ != nullptr;};
            void deleteRiskWord() { this->riskWord_ = nullptr;};
            inline const vector<string> & getRiskWord() const { DARABONBA_PTR_GET_CONST(riskWord_, vector<string>) };
            inline vector<string> getRiskWord() { DARABONBA_PTR_GET(riskWord_, vector<string>) };
            inline TextInImage& setRiskWord(const vector<string> & riskWord) { DARABONBA_PTR_SET_VALUE(riskWord_, riskWord) };
            inline TextInImage& setRiskWord(vector<string> && riskWord) { DARABONBA_PTR_SET_RVALUE(riskWord_, riskWord) };


          protected:
            // When a custom text library is matched, return the custom library ID, custom library name, and custom words.
            shared_ptr<vector<TextInImage::CustomText>> customText_ {};
            // Return the text information of each line recognized in the image.
            shared_ptr<vector<TextInImage::OcrResult>> ocrResult_ {};
            // hit risk keywords
            shared_ptr<vector<string>> riskWord_ {};
          };

          class PublicFigure : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PublicFigure& obj) { 
              DARABONBA_PTR_TO_JSON(FigureId, figureId_);
              DARABONBA_PTR_TO_JSON(FigureName, figureName_);
              DARABONBA_PTR_TO_JSON(Location, location_);
            };
            friend void from_json(const Darabonba::Json& j, PublicFigure& obj) { 
              DARABONBA_PTR_FROM_JSON(FigureId, figureId_);
              DARABONBA_PTR_FROM_JSON(FigureName, figureName_);
              DARABONBA_PTR_FROM_JSON(Location, location_);
            };
            PublicFigure() = default ;
            PublicFigure(const PublicFigure &) = default ;
            PublicFigure(PublicFigure &&) = default ;
            PublicFigure(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PublicFigure() = default ;
            PublicFigure& operator=(const PublicFigure &) = default ;
            PublicFigure& operator=(PublicFigure &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Location : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Location& obj) { 
                DARABONBA_PTR_TO_JSON(H, h_);
                DARABONBA_PTR_TO_JSON(W, w_);
                DARABONBA_PTR_TO_JSON(X, x_);
                DARABONBA_PTR_TO_JSON(Y, y_);
              };
              friend void from_json(const Darabonba::Json& j, Location& obj) { 
                DARABONBA_PTR_FROM_JSON(H, h_);
                DARABONBA_PTR_FROM_JSON(W, w_);
                DARABONBA_PTR_FROM_JSON(X, x_);
                DARABONBA_PTR_FROM_JSON(Y, y_);
              };
              Location() = default ;
              Location(const Location &) = default ;
              Location(Location &&) = default ;
              Location(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Location() = default ;
              Location& operator=(const Location &) = default ;
              Location& operator=(Location &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->h_ == nullptr
        && this->w_ == nullptr && this->x_ == nullptr && this->y_ == nullptr; };
              // h Field Functions 
              bool hasH() const { return this->h_ != nullptr;};
              void deleteH() { this->h_ = nullptr;};
              inline int32_t getH() const { DARABONBA_PTR_GET_DEFAULT(h_, 0) };
              inline Location& setH(int32_t h) { DARABONBA_PTR_SET_VALUE(h_, h) };


              // w Field Functions 
              bool hasW() const { return this->w_ != nullptr;};
              void deleteW() { this->w_ = nullptr;};
              inline int32_t getW() const { DARABONBA_PTR_GET_DEFAULT(w_, 0) };
              inline Location& setW(int32_t w) { DARABONBA_PTR_SET_VALUE(w_, w) };


              // x Field Functions 
              bool hasX() const { return this->x_ != nullptr;};
              void deleteX() { this->x_ = nullptr;};
              inline int32_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0) };
              inline Location& setX(int32_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


              // y Field Functions 
              bool hasY() const { return this->y_ != nullptr;};
              void deleteY() { this->y_ = nullptr;};
              inline int32_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0) };
              inline Location& setY(int32_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


            protected:
              // The width of the text area, in pixels.
              shared_ptr<int32_t> h_ {};
              // The height of the text area, in pixels.
              shared_ptr<int32_t> w_ {};
              // The distance from the top-left corner of the text area to the y-axis, with the top-left corner of the image as the origin, in pixels.
              shared_ptr<int32_t> x_ {};
              // The distance from the top-left corner of the text area to the x-axis, with the top-left corner of the image as the origin, in pixels.
              shared_ptr<int32_t> y_ {};
            };

            virtual bool empty() const override { return this->figureId_ == nullptr
        && this->figureName_ == nullptr && this->location_ == nullptr; };
            // figureId Field Functions 
            bool hasFigureId() const { return this->figureId_ != nullptr;};
            void deleteFigureId() { this->figureId_ = nullptr;};
            inline string getFigureId() const { DARABONBA_PTR_GET_DEFAULT(figureId_, "") };
            inline PublicFigure& setFigureId(string figureId) { DARABONBA_PTR_SET_VALUE(figureId_, figureId) };


            // figureName Field Functions 
            bool hasFigureName() const { return this->figureName_ != nullptr;};
            void deleteFigureName() { this->figureName_ = nullptr;};
            inline string getFigureName() const { DARABONBA_PTR_GET_DEFAULT(figureName_, "") };
            inline PublicFigure& setFigureName(string figureName) { DARABONBA_PTR_SET_VALUE(figureName_, figureName) };


            // location Field Functions 
            bool hasLocation() const { return this->location_ != nullptr;};
            void deleteLocation() { this->location_ = nullptr;};
            inline const vector<PublicFigure::Location> & getLocation() const { DARABONBA_PTR_GET_CONST(location_, vector<PublicFigure::Location>) };
            inline vector<PublicFigure::Location> getLocation() { DARABONBA_PTR_GET(location_, vector<PublicFigure::Location>) };
            inline PublicFigure& setLocation(const vector<PublicFigure::Location> & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
            inline PublicFigure& setLocation(vector<PublicFigure::Location> && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


          protected:
            // Identify the encoded information of the person.
            shared_ptr<string> figureId_ {};
            // The identified person\\"s name information.
            shared_ptr<string> figureName_ {};
            // The location information of the identifier.
            shared_ptr<vector<PublicFigure::Location>> location_ {};
          };

          class LogoData : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const LogoData& obj) { 
              DARABONBA_PTR_TO_JSON(Location, location_);
              DARABONBA_PTR_TO_JSON(Logo, logo_);
            };
            friend void from_json(const Darabonba::Json& j, LogoData& obj) { 
              DARABONBA_PTR_FROM_JSON(Location, location_);
              DARABONBA_PTR_FROM_JSON(Logo, logo_);
            };
            LogoData() = default ;
            LogoData(const LogoData &) = default ;
            LogoData(LogoData &&) = default ;
            LogoData(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~LogoData() = default ;
            LogoData& operator=(const LogoData &) = default ;
            LogoData& operator=(LogoData &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Logo : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Logo& obj) { 
                DARABONBA_PTR_TO_JSON(Confidence, confidence_);
                DARABONBA_PTR_TO_JSON(Label, label_);
                DARABONBA_PTR_TO_JSON(Name, name_);
              };
              friend void from_json(const Darabonba::Json& j, Logo& obj) { 
                DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
                DARABONBA_PTR_FROM_JSON(Label, label_);
                DARABONBA_PTR_FROM_JSON(Name, name_);
              };
              Logo() = default ;
              Logo(const Logo &) = default ;
              Logo(Logo &&) = default ;
              Logo(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Logo() = default ;
              Logo& operator=(const Logo &) = default ;
              Logo& operator=(Logo &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->confidence_ == nullptr
        && this->label_ == nullptr && this->name_ == nullptr; };
              // confidence Field Functions 
              bool hasConfidence() const { return this->confidence_ != nullptr;};
              void deleteConfidence() { this->confidence_ = nullptr;};
              inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
              inline Logo& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


              // label Field Functions 
              bool hasLabel() const { return this->label_ != nullptr;};
              void deleteLabel() { this->label_ = nullptr;};
              inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
              inline Logo& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline Logo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            protected:
              // Confidence score, from 0 to 100, rounded to two decimal places.
              shared_ptr<float> confidence_ {};
              // Identify the category.
              shared_ptr<string> label_ {};
              // identifier  name.
              shared_ptr<string> name_ {};
            };

            class Location : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Location& obj) { 
                DARABONBA_PTR_TO_JSON(H, h_);
                DARABONBA_PTR_TO_JSON(W, w_);
                DARABONBA_PTR_TO_JSON(X, x_);
                DARABONBA_PTR_TO_JSON(Y, y_);
              };
              friend void from_json(const Darabonba::Json& j, Location& obj) { 
                DARABONBA_PTR_FROM_JSON(H, h_);
                DARABONBA_PTR_FROM_JSON(W, w_);
                DARABONBA_PTR_FROM_JSON(X, x_);
                DARABONBA_PTR_FROM_JSON(Y, y_);
              };
              Location() = default ;
              Location(const Location &) = default ;
              Location(Location &&) = default ;
              Location(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Location() = default ;
              Location& operator=(const Location &) = default ;
              Location& operator=(Location &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->h_ == nullptr
        && this->w_ == nullptr && this->x_ == nullptr && this->y_ == nullptr; };
              // h Field Functions 
              bool hasH() const { return this->h_ != nullptr;};
              void deleteH() { this->h_ = nullptr;};
              inline int32_t getH() const { DARABONBA_PTR_GET_DEFAULT(h_, 0) };
              inline Location& setH(int32_t h) { DARABONBA_PTR_SET_VALUE(h_, h) };


              // w Field Functions 
              bool hasW() const { return this->w_ != nullptr;};
              void deleteW() { this->w_ = nullptr;};
              inline int32_t getW() const { DARABONBA_PTR_GET_DEFAULT(w_, 0) };
              inline Location& setW(int32_t w) { DARABONBA_PTR_SET_VALUE(w_, w) };


              // x Field Functions 
              bool hasX() const { return this->x_ != nullptr;};
              void deleteX() { this->x_ = nullptr;};
              inline int32_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0) };
              inline Location& setX(int32_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


              // y Field Functions 
              bool hasY() const { return this->y_ != nullptr;};
              void deleteY() { this->y_ = nullptr;};
              inline int32_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0) };
              inline Location& setY(int32_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


            protected:
              // The width of the text area, in pixels.
              shared_ptr<int32_t> h_ {};
              // The height of the text area, in pixels.
              shared_ptr<int32_t> w_ {};
              // The distance from the top-left corner of the text area to the y-axis, with the top-left corner of the image as the origin, in pixels.
              shared_ptr<int32_t> x_ {};
              // The distance from the top-left corner of the text area to the x-axis, with the top-left corner of the image as the origin, in pixels.
              shared_ptr<int32_t> y_ {};
            };

            virtual bool empty() const override { return this->location_ == nullptr
        && this->logo_ == nullptr; };
            // location Field Functions 
            bool hasLocation() const { return this->location_ != nullptr;};
            void deleteLocation() { this->location_ = nullptr;};
            inline const LogoData::Location & getLocation() const { DARABONBA_PTR_GET_CONST(location_, LogoData::Location) };
            inline LogoData::Location getLocation() { DARABONBA_PTR_GET(location_, LogoData::Location) };
            inline LogoData& setLocation(const LogoData::Location & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
            inline LogoData& setLocation(LogoData::Location && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


            // logo Field Functions 
            bool hasLogo() const { return this->logo_ != nullptr;};
            void deleteLogo() { this->logo_ = nullptr;};
            inline const vector<LogoData::Logo> & getLogo() const { DARABONBA_PTR_GET_CONST(logo_, vector<LogoData::Logo>) };
            inline vector<LogoData::Logo> getLogo() { DARABONBA_PTR_GET(logo_, vector<LogoData::Logo>) };
            inline LogoData& setLogo(const vector<LogoData::Logo> & logo) { DARABONBA_PTR_SET_VALUE(logo_, logo) };
            inline LogoData& setLogo(vector<LogoData::Logo> && logo) { DARABONBA_PTR_SET_RVALUE(logo_, logo) };


          protected:
            // The location information of the identifier.
            shared_ptr<LogoData::Location> location_ {};
            // identification information
            shared_ptr<vector<LogoData::Logo>> logo_ {};
          };

          class CustomImage : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CustomImage& obj) { 
              DARABONBA_PTR_TO_JSON(ImageId, imageId_);
              DARABONBA_PTR_TO_JSON(LibId, libId_);
              DARABONBA_PTR_TO_JSON(LibName, libName_);
            };
            friend void from_json(const Darabonba::Json& j, CustomImage& obj) { 
              DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
              DARABONBA_PTR_FROM_JSON(LibId, libId_);
              DARABONBA_PTR_FROM_JSON(LibName, libName_);
            };
            CustomImage() = default ;
            CustomImage(const CustomImage &) = default ;
            CustomImage(CustomImage &&) = default ;
            CustomImage(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CustomImage() = default ;
            CustomImage& operator=(const CustomImage &) = default ;
            CustomImage& operator=(CustomImage &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->imageId_ == nullptr
        && this->libId_ == nullptr && this->libName_ == nullptr; };
            // imageId Field Functions 
            bool hasImageId() const { return this->imageId_ != nullptr;};
            void deleteImageId() { this->imageId_ = nullptr;};
            inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
            inline CustomImage& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


            // libId Field Functions 
            bool hasLibId() const { return this->libId_ != nullptr;};
            void deleteLibId() { this->libId_ = nullptr;};
            inline string getLibId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
            inline CustomImage& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


            // libName Field Functions 
            bool hasLibName() const { return this->libName_ != nullptr;};
            void deleteLibName() { this->libName_ = nullptr;};
            inline string getLibName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
            inline CustomImage& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


          protected:
            // The ID of the hit custom image.
            shared_ptr<string> imageId_ {};
            // Custom library ID
            shared_ptr<string> libId_ {};
            // The name of the hit custom gallery.
            shared_ptr<string> libName_ {};
          };

          virtual bool empty() const override { return this->customImage_ == nullptr
        && this->logoData_ == nullptr && this->publicFigure_ == nullptr && this->textInImage_ == nullptr; };
          // customImage Field Functions 
          bool hasCustomImage() const { return this->customImage_ != nullptr;};
          void deleteCustomImage() { this->customImage_ = nullptr;};
          inline const vector<Ext::CustomImage> & getCustomImage() const { DARABONBA_PTR_GET_CONST(customImage_, vector<Ext::CustomImage>) };
          inline vector<Ext::CustomImage> getCustomImage() { DARABONBA_PTR_GET(customImage_, vector<Ext::CustomImage>) };
          inline Ext& setCustomImage(const vector<Ext::CustomImage> & customImage) { DARABONBA_PTR_SET_VALUE(customImage_, customImage) };
          inline Ext& setCustomImage(vector<Ext::CustomImage> && customImage) { DARABONBA_PTR_SET_RVALUE(customImage_, customImage) };


          // logoData Field Functions 
          bool hasLogoData() const { return this->logoData_ != nullptr;};
          void deleteLogoData() { this->logoData_ = nullptr;};
          inline const Ext::LogoData & getLogoData() const { DARABONBA_PTR_GET_CONST(logoData_, Ext::LogoData) };
          inline Ext::LogoData getLogoData() { DARABONBA_PTR_GET(logoData_, Ext::LogoData) };
          inline Ext& setLogoData(const Ext::LogoData & logoData) { DARABONBA_PTR_SET_VALUE(logoData_, logoData) };
          inline Ext& setLogoData(Ext::LogoData && logoData) { DARABONBA_PTR_SET_RVALUE(logoData_, logoData) };


          // publicFigure Field Functions 
          bool hasPublicFigure() const { return this->publicFigure_ != nullptr;};
          void deletePublicFigure() { this->publicFigure_ = nullptr;};
          inline const vector<Ext::PublicFigure> & getPublicFigure() const { DARABONBA_PTR_GET_CONST(publicFigure_, vector<Ext::PublicFigure>) };
          inline vector<Ext::PublicFigure> getPublicFigure() { DARABONBA_PTR_GET(publicFigure_, vector<Ext::PublicFigure>) };
          inline Ext& setPublicFigure(const vector<Ext::PublicFigure> & publicFigure) { DARABONBA_PTR_SET_VALUE(publicFigure_, publicFigure) };
          inline Ext& setPublicFigure(vector<Ext::PublicFigure> && publicFigure) { DARABONBA_PTR_SET_RVALUE(publicFigure_, publicFigure) };


          // textInImage Field Functions 
          bool hasTextInImage() const { return this->textInImage_ != nullptr;};
          void deleteTextInImage() { this->textInImage_ = nullptr;};
          inline const Ext::TextInImage & getTextInImage() const { DARABONBA_PTR_GET_CONST(textInImage_, Ext::TextInImage) };
          inline Ext::TextInImage getTextInImage() { DARABONBA_PTR_GET(textInImage_, Ext::TextInImage) };
          inline Ext& setTextInImage(const Ext::TextInImage & textInImage) { DARABONBA_PTR_SET_VALUE(textInImage_, textInImage) };
          inline Ext& setTextInImage(Ext::TextInImage && textInImage) { DARABONBA_PTR_SET_RVALUE(textInImage_, textInImage) };


        protected:
          // Custom image library hit information list.
          shared_ptr<vector<Ext::CustomImage>> customImage_ {};
          // Logo identification information.
          shared_ptr<Ext::LogoData> logoData_ {};
          // List of character information.
          shared_ptr<vector<Ext::PublicFigure>> publicFigure_ {};
          // Return the text information from the recognized images.
          shared_ptr<Ext::TextInImage> textInImage_ {};
        };

        virtual bool empty() const override { return this->ext_ == nullptr
        && this->result_ == nullptr && this->riskLevel_ == nullptr && this->service_ == nullptr; };
        // ext Field Functions 
        bool hasExt() const { return this->ext_ != nullptr;};
        void deleteExt() { this->ext_ = nullptr;};
        inline const Results::Ext & getExt() const { DARABONBA_PTR_GET_CONST(ext_, Results::Ext) };
        inline Results::Ext getExt() { DARABONBA_PTR_GET(ext_, Results::Ext) };
        inline Results& setExt(const Results::Ext & ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };
        inline Results& setExt(Results::Ext && ext) { DARABONBA_PTR_SET_RVALUE(ext_, ext) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline const vector<Results::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Results::Result>) };
        inline vector<Results::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Results::Result>) };
        inline Results& setResult(const vector<Results::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
        inline Results& setResult(vector<Results::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline Results& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        // service Field Functions 
        bool hasService() const { return this->service_ != nullptr;};
        void deleteService() { this->service_ = nullptr;};
        inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
        inline Results& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


      protected:
        // Image supplementary reference information.
        shared_ptr<Results::Ext> ext_ {};
        // The risk labels, confidence scores, and other parameters of image detection results, in an array structure.
        shared_ptr<vector<Results::Result>> result_ {};
        // Risk level.
        shared_ptr<string> riskLevel_ {};
        // The enhanced image detection service supports various detection services.
        shared_ptr<string> service_ {};
      };

      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(Confidence, confidence_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Label, label_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->confidence_ == nullptr
        && this->description_ == nullptr && this->label_ == nullptr; };
        // confidence Field Functions 
        bool hasConfidence() const { return this->confidence_ != nullptr;};
        void deleteConfidence() { this->confidence_ = nullptr;};
        inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
        inline Result& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Result& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      protected:
        // Confidence score, ranging from 0 to 100, retained to two decimal places. Some labels do not have a confidence score.
        shared_ptr<float> confidence_ {};
        // Description.
        shared_ptr<string> description_ {};
        // The labels returned after image content detection. A single image may be associated with multiple labels and corresponding scores.
        shared_ptr<string> label_ {};
      };

      virtual bool empty() const override { return this->dataId_ == nullptr
        && this->manualTaskId_ == nullptr && this->result_ == nullptr && this->results_ == nullptr && this->riskLevel_ == nullptr; };
      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline Data& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // manualTaskId Field Functions 
      bool hasManualTaskId() const { return this->manualTaskId_ != nullptr;};
      void deleteManualTaskId() { this->manualTaskId_ = nullptr;};
      inline string getManualTaskId() const { DARABONBA_PTR_GET_DEFAULT(manualTaskId_, "") };
      inline Data& setManualTaskId(string manualTaskId) { DARABONBA_PTR_SET_VALUE(manualTaskId_, manualTaskId) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const vector<Data::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<Data::Results>) };
      inline vector<Data::Results> getResults() { DARABONBA_PTR_GET(results_, vector<Data::Results>) };
      inline Data& setResults(const vector<Data::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline Data& setResults(vector<Data::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Data& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    protected:
      // To detect the data ID corresponding to the object.
      shared_ptr<string> dataId_ {};
      shared_ptr<string> manualTaskId_ {};
      // The risk labels, confidence scores, and other parameters of image detection results, in an array structure.
      shared_ptr<vector<Data::Result>> result_ {};
      // The risk labels, confidence scores, and other parameters for each service\\"s image detection, in an array structure.
      shared_ptr<vector<Data::Results>> results_ {};
      // Risk level.
      shared_ptr<string> riskLevel_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ImageBatchModerationResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ImageBatchModerationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ImageBatchModerationResponseBody::Data) };
    inline ImageBatchModerationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ImageBatchModerationResponseBody::Data) };
    inline ImageBatchModerationResponseBody& setData(const ImageBatchModerationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ImageBatchModerationResponseBody& setData(ImageBatchModerationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline ImageBatchModerationResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImageBatchModerationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Return code. A return of 200 represents success.
    shared_ptr<int32_t> code_ {};
    // The result of image content detection.
    shared_ptr<ImageBatchModerationResponseBody::Data> data_ {};
    // The response message for this request.
    shared_ptr<string> msg_ {};
    // The ID of this invocation request, generated by Alibaba Cloud as a unique identifier for the request, can be used for troubleshooting and pinpointing issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
