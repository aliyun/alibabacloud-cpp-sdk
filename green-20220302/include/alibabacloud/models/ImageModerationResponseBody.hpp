// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODY_HPP_
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
  class ImageModerationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageModerationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ImageModerationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ImageModerationResponseBody() = default ;
    ImageModerationResponseBody(const ImageModerationResponseBody &) = default ;
    ImageModerationResponseBody(ImageModerationResponseBody &&) = default ;
    ImageModerationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageModerationResponseBody() = default ;
    ImageModerationResponseBody& operator=(const ImageModerationResponseBody &) = default ;
    ImageModerationResponseBody& operator=(ImageModerationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(DataId, dataId_);
        DARABONBA_PTR_TO_JSON(Ext, ext_);
        DARABONBA_PTR_TO_JSON(ManualTaskId, manualTaskId_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(DataId, dataId_);
        DARABONBA_PTR_FROM_JSON(Ext, ext_);
        DARABONBA_PTR_FROM_JSON(ManualTaskId, manualTaskId_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(Confidence, confidence_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
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
        && this->description_ == nullptr && this->label_ == nullptr && this->riskLevel_ == nullptr; };
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


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline Result& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      protected:
        // The score of the confidence level. Valid values: 0 to 100. The value is accurate to two decimal places. Some labels do not have scores of confidence levels.
        shared_ptr<float> confidence_ {};
        // The description of the result.
        shared_ptr<string> description_ {};
        // The labels returned after the image moderation. Multiple risk labels and the corresponding scores of confidence levels may be returned for an image.
        shared_ptr<string> label_ {};
        // Risk Level
        shared_ptr<string> riskLevel_ {};
      };

      class Ext : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ext& obj) { 
          DARABONBA_PTR_TO_JSON(AigcData, aigcData_);
          DARABONBA_PTR_TO_JSON(CustomImage, customImage_);
          DARABONBA_PTR_TO_JSON(FaceData, faceData_);
          DARABONBA_PTR_TO_JSON(LogoData, logoData_);
          DARABONBA_PTR_TO_JSON(OcrResult, ocrResult_);
          DARABONBA_PTR_TO_JSON(PublicFigure, publicFigure_);
          DARABONBA_PTR_TO_JSON(Recognition, recognition_);
          DARABONBA_PTR_TO_JSON(TextInImage, textInImage_);
          DARABONBA_PTR_TO_JSON(VlContent, vlContent_);
        };
        friend void from_json(const Darabonba::Json& j, Ext& obj) { 
          DARABONBA_PTR_FROM_JSON(AigcData, aigcData_);
          DARABONBA_PTR_FROM_JSON(CustomImage, customImage_);
          DARABONBA_PTR_FROM_JSON(FaceData, faceData_);
          DARABONBA_PTR_FROM_JSON(LogoData, logoData_);
          DARABONBA_PTR_FROM_JSON(OcrResult, ocrResult_);
          DARABONBA_PTR_FROM_JSON(PublicFigure, publicFigure_);
          DARABONBA_PTR_FROM_JSON(Recognition, recognition_);
          DARABONBA_PTR_FROM_JSON(TextInImage, textInImage_);
          DARABONBA_PTR_FROM_JSON(VlContent, vlContent_);
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
        class VlContent : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VlContent& obj) { 
            DARABONBA_PTR_TO_JSON(OutputText, outputText_);
          };
          friend void from_json(const Darabonba::Json& j, VlContent& obj) { 
            DARABONBA_PTR_FROM_JSON(OutputText, outputText_);
          };
          VlContent() = default ;
          VlContent(const VlContent &) = default ;
          VlContent(VlContent &&) = default ;
          VlContent(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VlContent() = default ;
          VlContent& operator=(const VlContent &) = default ;
          VlContent& operator=(VlContent &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->outputText_ == nullptr; };
          // outputText Field Functions 
          bool hasOutputText() const { return this->outputText_ != nullptr;};
          void deleteOutputText() { this->outputText_ = nullptr;};
          inline string getOutputText() const { DARABONBA_PTR_GET_DEFAULT(outputText_, "") };
          inline VlContent& setOutputText(string outputText) { DARABONBA_PTR_SET_VALUE(outputText_, outputText) };


        protected:
          // the vl output content
          shared_ptr<string> outputText_ {};
        };

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
              // The distance between the upper-left corner of the text area and the y-axis, using the upper-left corner of the image as the coordinate origin, in pixels.
              shared_ptr<int32_t> x_ {};
              // The distance between the upper left corner of the text area and the x-axis, with the upper left corner of the image as the coordinate origin, in pixels.
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
            // Location information.
            shared_ptr<OcrResult::Location> location_ {};
            // The text information in the recognized image.
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
            // Custom words, multiple words separated by commas.
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
          // When a custom text library is hit, the custom library ID, custom library name, and custom word are returned.
          shared_ptr<vector<TextInImage::CustomText>> customText_ {};
          // Returns the text information in the recognized image.
          shared_ptr<vector<TextInImage::OcrResult>> ocrResult_ {};
          // The risk words that are hit. Multiple words are separated by commas (,).
          shared_ptr<vector<string>> riskWord_ {};
        };

        class Recognition : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Recognition& obj) { 
            DARABONBA_PTR_TO_JSON(Classification, classification_);
            DARABONBA_PTR_TO_JSON(Confidence, confidence_);
          };
          friend void from_json(const Darabonba::Json& j, Recognition& obj) { 
            DARABONBA_PTR_FROM_JSON(Classification, classification_);
            DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
          };
          Recognition() = default ;
          Recognition(const Recognition &) = default ;
          Recognition(Recognition &&) = default ;
          Recognition(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Recognition() = default ;
          Recognition& operator=(const Recognition &) = default ;
          Recognition& operator=(Recognition &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->classification_ == nullptr
        && this->confidence_ == nullptr; };
          // classification Field Functions 
          bool hasClassification() const { return this->classification_ != nullptr;};
          void deleteClassification() { this->classification_ = nullptr;};
          inline string getClassification() const { DARABONBA_PTR_GET_DEFAULT(classification_, "") };
          inline Recognition& setClassification(string classification) { DARABONBA_PTR_SET_VALUE(classification_, classification) };


          // confidence Field Functions 
          bool hasConfidence() const { return this->confidence_ != nullptr;};
          void deleteConfidence() { this->confidence_ = nullptr;};
          inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
          inline Recognition& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


        protected:
          // The category of image recognition.
          shared_ptr<string> classification_ {};
          // The score of the confidence level. Valid values: 0 to 100. The value is accurate to two decimal places. Some labels do not have scores of confidence levels.
          shared_ptr<float> confidence_ {};
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
            // The height
            shared_ptr<int32_t> h_ {};
            // The weight
            shared_ptr<int32_t> w_ {};
            // X coordinate
            shared_ptr<int32_t> x_ {};
            // Y coordinate
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
          // Identified person coding information.
          shared_ptr<string> figureId_ {};
          // Identified person name information.
          shared_ptr<string> figureName_ {};
          // the data array of location info
          shared_ptr<vector<PublicFigure::Location>> location_ {};
        };

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
            // The distance between the upper-left corner of the text area and the y-axis, using the upper-left corner of the image as the coordinate origin, in pixels.
            shared_ptr<int32_t> x_ {};
            // The distance between the upper left corner of the text area and the x-axis, with the upper left corner of the image as the coordinate origin, in pixels.
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
          // Location information.
          shared_ptr<OcrResult::Location> location_ {};
          // The text information in the recognized image.
          shared_ptr<string> text_ {};
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
            // The score of the confidence level. Valid values: 0 to 100. The value is accurate to two decimal places. Some labels do not have scores of confidence levels.
            shared_ptr<float> confidence_ {};
            // Logo category.
            shared_ptr<string> label_ {};
            // Logo name.
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
            // The height of the text area, in pixels.
            shared_ptr<int32_t> h_ {};
            // The width of the text area, in pixels.
            shared_ptr<int32_t> w_ {};
            // The distance between the upper-left corner of the text area and the y-axis, using the upper-left corner of the image as the coordinate origin, in pixels.
            shared_ptr<int32_t> x_ {};
            // The distance between the upper left corner of the text area and the x-axis, with the upper left corner of the image as the coordinate origin, in pixels.
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
          // Location information.
          shared_ptr<LogoData::Location> location_ {};
          // Logo information.
          shared_ptr<vector<LogoData::Logo>> logo_ {};
        };

        class FaceData : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FaceData& obj) { 
            DARABONBA_PTR_TO_JSON(Age, age_);
            DARABONBA_PTR_TO_JSON(Bang, bang_);
            DARABONBA_PTR_TO_JSON(Gender, gender_);
            DARABONBA_PTR_TO_JSON(Glasses, glasses_);
            DARABONBA_PTR_TO_JSON(Hairstyle, hairstyle_);
            DARABONBA_PTR_TO_JSON(Hat, hat_);
            DARABONBA_PTR_TO_JSON(Location, location_);
            DARABONBA_PTR_TO_JSON(Mask, mask_);
            DARABONBA_PTR_TO_JSON(Mustache, mustache_);
            DARABONBA_PTR_TO_JSON(Quality, quality_);
            DARABONBA_PTR_TO_JSON(Smile, smile_);
          };
          friend void from_json(const Darabonba::Json& j, FaceData& obj) { 
            DARABONBA_PTR_FROM_JSON(Age, age_);
            DARABONBA_PTR_FROM_JSON(Bang, bang_);
            DARABONBA_PTR_FROM_JSON(Gender, gender_);
            DARABONBA_PTR_FROM_JSON(Glasses, glasses_);
            DARABONBA_PTR_FROM_JSON(Hairstyle, hairstyle_);
            DARABONBA_PTR_FROM_JSON(Hat, hat_);
            DARABONBA_PTR_FROM_JSON(Location, location_);
            DARABONBA_PTR_FROM_JSON(Mask, mask_);
            DARABONBA_PTR_FROM_JSON(Mustache, mustache_);
            DARABONBA_PTR_FROM_JSON(Quality, quality_);
            DARABONBA_PTR_FROM_JSON(Smile, smile_);
          };
          FaceData() = default ;
          FaceData(const FaceData &) = default ;
          FaceData(FaceData &&) = default ;
          FaceData(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FaceData() = default ;
          FaceData& operator=(const FaceData &) = default ;
          FaceData& operator=(FaceData &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Quality : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Quality& obj) { 
              DARABONBA_PTR_TO_JSON(Blur, blur_);
              DARABONBA_PTR_TO_JSON(Integrity, integrity_);
              DARABONBA_PTR_TO_JSON(Pitch, pitch_);
              DARABONBA_PTR_TO_JSON(Roll, roll_);
              DARABONBA_PTR_TO_JSON(Yaw, yaw_);
            };
            friend void from_json(const Darabonba::Json& j, Quality& obj) { 
              DARABONBA_PTR_FROM_JSON(Blur, blur_);
              DARABONBA_PTR_FROM_JSON(Integrity, integrity_);
              DARABONBA_PTR_FROM_JSON(Pitch, pitch_);
              DARABONBA_PTR_FROM_JSON(Roll, roll_);
              DARABONBA_PTR_FROM_JSON(Yaw, yaw_);
            };
            Quality() = default ;
            Quality(const Quality &) = default ;
            Quality(Quality &&) = default ;
            Quality(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Quality() = default ;
            Quality& operator=(const Quality &) = default ;
            Quality& operator=(Quality &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->blur_ == nullptr
        && this->integrity_ == nullptr && this->pitch_ == nullptr && this->roll_ == nullptr && this->yaw_ == nullptr; };
            // blur Field Functions 
            bool hasBlur() const { return this->blur_ != nullptr;};
            void deleteBlur() { this->blur_ = nullptr;};
            inline float getBlur() const { DARABONBA_PTR_GET_DEFAULT(blur_, 0.0) };
            inline Quality& setBlur(float blur) { DARABONBA_PTR_SET_VALUE(blur_, blur) };


            // integrity Field Functions 
            bool hasIntegrity() const { return this->integrity_ != nullptr;};
            void deleteIntegrity() { this->integrity_ = nullptr;};
            inline float getIntegrity() const { DARABONBA_PTR_GET_DEFAULT(integrity_, 0.0) };
            inline Quality& setIntegrity(float integrity) { DARABONBA_PTR_SET_VALUE(integrity_, integrity) };


            // pitch Field Functions 
            bool hasPitch() const { return this->pitch_ != nullptr;};
            void deletePitch() { this->pitch_ = nullptr;};
            inline float getPitch() const { DARABONBA_PTR_GET_DEFAULT(pitch_, 0.0) };
            inline Quality& setPitch(float pitch) { DARABONBA_PTR_SET_VALUE(pitch_, pitch) };


            // roll Field Functions 
            bool hasRoll() const { return this->roll_ != nullptr;};
            void deleteRoll() { this->roll_ = nullptr;};
            inline float getRoll() const { DARABONBA_PTR_GET_DEFAULT(roll_, 0.0) };
            inline Quality& setRoll(float roll) { DARABONBA_PTR_SET_VALUE(roll_, roll) };


            // yaw Field Functions 
            bool hasYaw() const { return this->yaw_ != nullptr;};
            void deleteYaw() { this->yaw_ = nullptr;};
            inline float getYaw() const { DARABONBA_PTR_GET_DEFAULT(yaw_, 0.0) };
            inline Quality& setYaw(float yaw) { DARABONBA_PTR_SET_VALUE(yaw_, yaw) };


          protected:
            // The blur of the face image. Valid values: 0 to 100. The higher the score, the more fuzzy it is.
            // Recommended values: 0 to 25.
            shared_ptr<float> blur_ {};
            // The integrity of the human face. Recommended values:80 to 100.
            shared_ptr<float> integrity_ {};
            // The head-up or head-down angle of the face.
            // Recommended values:-30 to 30.
            shared_ptr<float> pitch_ {};
            // The plane rotation angle of the face.
            // Recommended values:-30 to 30.
            shared_ptr<float> roll_ {};
            // The left and right shaking angle of the human face.
            // Recommended values:-30 to 30.
            shared_ptr<float> yaw_ {};
          };

          class Mustache : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Mustache& obj) { 
              DARABONBA_PTR_TO_JSON(Confidence, confidence_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Mustache& obj) { 
              DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Mustache() = default ;
            Mustache(const Mustache &) = default ;
            Mustache(Mustache &&) = default ;
            Mustache(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Mustache() = default ;
            Mustache& operator=(const Mustache &) = default ;
            Mustache& operator=(Mustache &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->confidence_ == nullptr
        && this->value_ == nullptr; };
            // confidence Field Functions 
            bool hasConfidence() const { return this->confidence_ != nullptr;};
            void deleteConfidence() { this->confidence_ = nullptr;};
            inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
            inline Mustache& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Mustache& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The confidence level of the result of the beard. Valid values: 0 to 100. A higher value indicates a more credible result.
            shared_ptr<float> confidence_ {};
            // The identification result of whether there is a beard.Valid values:
            // 
            // - Has:have a beard.
            // 
            // - None:No beard.
            shared_ptr<string> value_ {};
          };

          class Mask : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Mask& obj) { 
              DARABONBA_PTR_TO_JSON(Confidence, confidence_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Mask& obj) { 
              DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Mask() = default ;
            Mask(const Mask &) = default ;
            Mask(Mask &&) = default ;
            Mask(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Mask() = default ;
            Mask& operator=(const Mask &) = default ;
            Mask& operator=(Mask &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->confidence_ == nullptr
        && this->value_ == nullptr; };
            // confidence Field Functions 
            bool hasConfidence() const { return this->confidence_ != nullptr;};
            void deleteConfidence() { this->confidence_ = nullptr;};
            inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
            inline Mask& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Mask& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The confidence level of the result of wearing the mask. Valid values: 0 to 100. A higher value indicates a more credible result.
            shared_ptr<float> confidence_ {};
            // The recognition result of whether to wear a mask. Valid values:
            // 
            // - Wear a mask.
            // 
            //  - None: No mask.
            shared_ptr<string> value_ {};
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
            // The height of the face area. Unit: pixels.
            shared_ptr<int32_t> h_ {};
            // The width of the face area. Unit: pixels.
            shared_ptr<int32_t> w_ {};
            // The distance from the upper-left corner of the face area to the y-axis with the upper-left corner of the image as the coordinate origin. Unit: pixels.
            shared_ptr<int32_t> x_ {};
            // The distance from the upper-left corner of the face area to the x-axis with the upper-left corner of the image as the coordinate origin. Unit: pixels.
            shared_ptr<int32_t> y_ {};
          };

          class Hat : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Hat& obj) { 
              DARABONBA_PTR_TO_JSON(Confidence, confidence_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Hat& obj) { 
              DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Hat() = default ;
            Hat(const Hat &) = default ;
            Hat(Hat &&) = default ;
            Hat(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Hat() = default ;
            Hat& operator=(const Hat &) = default ;
            Hat& operator=(Hat &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->confidence_ == nullptr
        && this->value_ == nullptr; };
            // confidence Field Functions 
            bool hasConfidence() const { return this->confidence_ != nullptr;};
            void deleteConfidence() { this->confidence_ = nullptr;};
            inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
            inline Hat& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Hat& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The confidence level of the result of wearing the hat. Valid values: 0 to 100. A higher value indicates a more credible result.
            shared_ptr<float> confidence_ {};
            // The recognition result of whether to wear the hat. Valid values:
            // 
            // - Wear: Wear a hat.
            // 
            // - None: No hat.
            shared_ptr<string> value_ {};
          };

          class Hairstyle : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Hairstyle& obj) { 
              DARABONBA_PTR_TO_JSON(Confidence, confidence_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Hairstyle& obj) { 
              DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Hairstyle() = default ;
            Hairstyle(const Hairstyle &) = default ;
            Hairstyle(Hairstyle &&) = default ;
            Hairstyle(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Hairstyle() = default ;
            Hairstyle& operator=(const Hairstyle &) = default ;
            Hairstyle& operator=(Hairstyle &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->confidence_ == nullptr
        && this->value_ == nullptr; };
            // confidence Field Functions 
            bool hasConfidence() const { return this->confidence_ != nullptr;};
            void deleteConfidence() { this->confidence_ = nullptr;};
            inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
            inline Hairstyle& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Hairstyle& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The confidence level of the hairstyle recognition result. Valid values: 0 to 100. A higher value indicates a more credible result.
            shared_ptr<float> confidence_ {};
            // The hairstyle recognition result. Valid values:
            // 
            // - Bald: bald head.
            // 
            // - Long: Long hair.
            // 
            // - Short: Short hair.
            shared_ptr<string> value_ {};
          };

          class Gender : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Gender& obj) { 
              DARABONBA_PTR_TO_JSON(Confidence, confidence_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Gender& obj) { 
              DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Gender() = default ;
            Gender(const Gender &) = default ;
            Gender(Gender &&) = default ;
            Gender(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Gender() = default ;
            Gender& operator=(const Gender &) = default ;
            Gender& operator=(Gender &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->confidence_ == nullptr
        && this->value_ == nullptr; };
            // confidence Field Functions 
            bool hasConfidence() const { return this->confidence_ != nullptr;};
            void deleteConfidence() { this->confidence_ = nullptr;};
            inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
            inline Gender& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Gender& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The confidence level of the gender recognition result. Valid values: 0 to 100. A higher value indicates a more credible result.
            shared_ptr<float> confidence_ {};
            // The gender recognition result. Valid values:
            // 
            // - Male
            // 
            // - FeMale
            shared_ptr<string> value_ {};
          };

          class Bang : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Bang& obj) { 
              DARABONBA_PTR_TO_JSON(Confidence, confidence_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Bang& obj) { 
              DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Bang() = default ;
            Bang(const Bang &) = default ;
            Bang(Bang &&) = default ;
            Bang(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Bang() = default ;
            Bang& operator=(const Bang &) = default ;
            Bang& operator=(Bang &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->confidence_ == nullptr
        && this->value_ == nullptr; };
            // confidence Field Functions 
            bool hasConfidence() const { return this->confidence_ != nullptr;};
            void deleteConfidence() { this->confidence_ = nullptr;};
            inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
            inline Bang& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Bang& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The confidence level of the bang recognition result. Valid values: 0 to 100. A higher value indicates a more credible result.
            shared_ptr<float> confidence_ {};
            // Indicates whether the recognition result of bangs is available.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->age_ == nullptr
        && this->bang_ == nullptr && this->gender_ == nullptr && this->glasses_ == nullptr && this->hairstyle_ == nullptr && this->hat_ == nullptr
        && this->location_ == nullptr && this->mask_ == nullptr && this->mustache_ == nullptr && this->quality_ == nullptr && this->smile_ == nullptr; };
          // age Field Functions 
          bool hasAge() const { return this->age_ != nullptr;};
          void deleteAge() { this->age_ = nullptr;};
          inline int32_t getAge() const { DARABONBA_PTR_GET_DEFAULT(age_, 0) };
          inline FaceData& setAge(int32_t age) { DARABONBA_PTR_SET_VALUE(age_, age) };


          // bang Field Functions 
          bool hasBang() const { return this->bang_ != nullptr;};
          void deleteBang() { this->bang_ = nullptr;};
          inline const FaceData::Bang & getBang() const { DARABONBA_PTR_GET_CONST(bang_, FaceData::Bang) };
          inline FaceData::Bang getBang() { DARABONBA_PTR_GET(bang_, FaceData::Bang) };
          inline FaceData& setBang(const FaceData::Bang & bang) { DARABONBA_PTR_SET_VALUE(bang_, bang) };
          inline FaceData& setBang(FaceData::Bang && bang) { DARABONBA_PTR_SET_RVALUE(bang_, bang) };


          // gender Field Functions 
          bool hasGender() const { return this->gender_ != nullptr;};
          void deleteGender() { this->gender_ = nullptr;};
          inline const FaceData::Gender & getGender() const { DARABONBA_PTR_GET_CONST(gender_, FaceData::Gender) };
          inline FaceData::Gender getGender() { DARABONBA_PTR_GET(gender_, FaceData::Gender) };
          inline FaceData& setGender(const FaceData::Gender & gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };
          inline FaceData& setGender(FaceData::Gender && gender) { DARABONBA_PTR_SET_RVALUE(gender_, gender) };


          // glasses Field Functions 
          bool hasGlasses() const { return this->glasses_ != nullptr;};
          void deleteGlasses() { this->glasses_ = nullptr;};
          inline string getGlasses() const { DARABONBA_PTR_GET_DEFAULT(glasses_, "") };
          inline FaceData& setGlasses(string glasses) { DARABONBA_PTR_SET_VALUE(glasses_, glasses) };


          // hairstyle Field Functions 
          bool hasHairstyle() const { return this->hairstyle_ != nullptr;};
          void deleteHairstyle() { this->hairstyle_ = nullptr;};
          inline const FaceData::Hairstyle & getHairstyle() const { DARABONBA_PTR_GET_CONST(hairstyle_, FaceData::Hairstyle) };
          inline FaceData::Hairstyle getHairstyle() { DARABONBA_PTR_GET(hairstyle_, FaceData::Hairstyle) };
          inline FaceData& setHairstyle(const FaceData::Hairstyle & hairstyle) { DARABONBA_PTR_SET_VALUE(hairstyle_, hairstyle) };
          inline FaceData& setHairstyle(FaceData::Hairstyle && hairstyle) { DARABONBA_PTR_SET_RVALUE(hairstyle_, hairstyle) };


          // hat Field Functions 
          bool hasHat() const { return this->hat_ != nullptr;};
          void deleteHat() { this->hat_ = nullptr;};
          inline const FaceData::Hat & getHat() const { DARABONBA_PTR_GET_CONST(hat_, FaceData::Hat) };
          inline FaceData::Hat getHat() { DARABONBA_PTR_GET(hat_, FaceData::Hat) };
          inline FaceData& setHat(const FaceData::Hat & hat) { DARABONBA_PTR_SET_VALUE(hat_, hat) };
          inline FaceData& setHat(FaceData::Hat && hat) { DARABONBA_PTR_SET_RVALUE(hat_, hat) };


          // location Field Functions 
          bool hasLocation() const { return this->location_ != nullptr;};
          void deleteLocation() { this->location_ = nullptr;};
          inline const FaceData::Location & getLocation() const { DARABONBA_PTR_GET_CONST(location_, FaceData::Location) };
          inline FaceData::Location getLocation() { DARABONBA_PTR_GET(location_, FaceData::Location) };
          inline FaceData& setLocation(const FaceData::Location & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
          inline FaceData& setLocation(FaceData::Location && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


          // mask Field Functions 
          bool hasMask() const { return this->mask_ != nullptr;};
          void deleteMask() { this->mask_ = nullptr;};
          inline const FaceData::Mask & getMask() const { DARABONBA_PTR_GET_CONST(mask_, FaceData::Mask) };
          inline FaceData::Mask getMask() { DARABONBA_PTR_GET(mask_, FaceData::Mask) };
          inline FaceData& setMask(const FaceData::Mask & mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };
          inline FaceData& setMask(FaceData::Mask && mask) { DARABONBA_PTR_SET_RVALUE(mask_, mask) };


          // mustache Field Functions 
          bool hasMustache() const { return this->mustache_ != nullptr;};
          void deleteMustache() { this->mustache_ = nullptr;};
          inline const FaceData::Mustache & getMustache() const { DARABONBA_PTR_GET_CONST(mustache_, FaceData::Mustache) };
          inline FaceData::Mustache getMustache() { DARABONBA_PTR_GET(mustache_, FaceData::Mustache) };
          inline FaceData& setMustache(const FaceData::Mustache & mustache) { DARABONBA_PTR_SET_VALUE(mustache_, mustache) };
          inline FaceData& setMustache(FaceData::Mustache && mustache) { DARABONBA_PTR_SET_RVALUE(mustache_, mustache) };


          // quality Field Functions 
          bool hasQuality() const { return this->quality_ != nullptr;};
          void deleteQuality() { this->quality_ = nullptr;};
          inline const FaceData::Quality & getQuality() const { DARABONBA_PTR_GET_CONST(quality_, FaceData::Quality) };
          inline FaceData::Quality getQuality() { DARABONBA_PTR_GET(quality_, FaceData::Quality) };
          inline FaceData& setQuality(const FaceData::Quality & quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };
          inline FaceData& setQuality(FaceData::Quality && quality) { DARABONBA_PTR_SET_RVALUE(quality_, quality) };


          // smile Field Functions 
          bool hasSmile() const { return this->smile_ != nullptr;};
          void deleteSmile() { this->smile_ = nullptr;};
          inline float getSmile() const { DARABONBA_PTR_GET_DEFAULT(smile_, 0.0) };
          inline FaceData& setSmile(float smile) { DARABONBA_PTR_SET_VALUE(smile_, smile) };


        protected:
          // The age recognition result.
          shared_ptr<int32_t> age_ {};
          // Indicates whether the recognition result of bangs is available.
          shared_ptr<FaceData::Bang> bang_ {};
          // The gender recognition result.
          shared_ptr<FaceData::Gender> gender_ {};
          // The recognition result of whether to wear glasses.
          // 
          // - None: No glasses.
          // 
          // - Wear: Wear glasses.
          // 
          // - Sunglass: Wear sunglasses.
          shared_ptr<string> glasses_ {};
          // The hairstyle recognition result.
          shared_ptr<FaceData::Hairstyle> hairstyle_ {};
          // The recognition result of whether to wear a hat.
          shared_ptr<FaceData::Hat> hat_ {};
          // The location of the face.
          shared_ptr<FaceData::Location> location_ {};
          // The recognition result of whether to wear a mask.
          shared_ptr<FaceData::Mask> mask_ {};
          // The identification result of whether there is a beard.
          shared_ptr<FaceData::Mustache> mustache_ {};
          // The quality information of the face image.
          shared_ptr<FaceData::Quality> quality_ {};
          // The smiling degree of the face.
          shared_ptr<float> smile_ {};
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
          // The image ID.
          shared_ptr<string> imageId_ {};
          // The image library ID.
          shared_ptr<string> libId_ {};
          // The image library name.
          shared_ptr<string> libName_ {};
        };

        class AigcData : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AigcData& obj) { 
            DARABONBA_PTR_TO_JSON(AIGC, AIGC_);
          };
          friend void from_json(const Darabonba::Json& j, AigcData& obj) { 
            DARABONBA_PTR_FROM_JSON(AIGC, AIGC_);
          };
          AigcData() = default ;
          AigcData(const AigcData &) = default ;
          AigcData(AigcData &&) = default ;
          AigcData(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AigcData() = default ;
          AigcData& operator=(const AigcData &) = default ;
          AigcData& operator=(AigcData &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AIGC : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AIGC& obj) { 
              DARABONBA_PTR_TO_JSON(ContentProducer, contentProducer_);
              DARABONBA_PTR_TO_JSON(ContentPropagator, contentPropagator_);
              DARABONBA_PTR_TO_JSON(Label, label_);
              DARABONBA_PTR_TO_JSON(ProduceID, produceID_);
              DARABONBA_PTR_TO_JSON(PropagateID, propagateID_);
              DARABONBA_PTR_TO_JSON(ReservedCode1, reservedCode1_);
              DARABONBA_PTR_TO_JSON(ReservedCode2, reservedCode2_);
            };
            friend void from_json(const Darabonba::Json& j, AIGC& obj) { 
              DARABONBA_PTR_FROM_JSON(ContentProducer, contentProducer_);
              DARABONBA_PTR_FROM_JSON(ContentPropagator, contentPropagator_);
              DARABONBA_PTR_FROM_JSON(Label, label_);
              DARABONBA_PTR_FROM_JSON(ProduceID, produceID_);
              DARABONBA_PTR_FROM_JSON(PropagateID, propagateID_);
              DARABONBA_PTR_FROM_JSON(ReservedCode1, reservedCode1_);
              DARABONBA_PTR_FROM_JSON(ReservedCode2, reservedCode2_);
            };
            AIGC() = default ;
            AIGC(const AIGC &) = default ;
            AIGC(AIGC &&) = default ;
            AIGC(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AIGC() = default ;
            AIGC& operator=(const AIGC &) = default ;
            AIGC& operator=(AIGC &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->contentProducer_ == nullptr
        && this->contentPropagator_ == nullptr && this->label_ == nullptr && this->produceID_ == nullptr && this->propagateID_ == nullptr && this->reservedCode1_ == nullptr
        && this->reservedCode2_ == nullptr; };
            // contentProducer Field Functions 
            bool hasContentProducer() const { return this->contentProducer_ != nullptr;};
            void deleteContentProducer() { this->contentProducer_ = nullptr;};
            inline string getContentProducer() const { DARABONBA_PTR_GET_DEFAULT(contentProducer_, "") };
            inline AIGC& setContentProducer(string contentProducer) { DARABONBA_PTR_SET_VALUE(contentProducer_, contentProducer) };


            // contentPropagator Field Functions 
            bool hasContentPropagator() const { return this->contentPropagator_ != nullptr;};
            void deleteContentPropagator() { this->contentPropagator_ = nullptr;};
            inline string getContentPropagator() const { DARABONBA_PTR_GET_DEFAULT(contentPropagator_, "") };
            inline AIGC& setContentPropagator(string contentPropagator) { DARABONBA_PTR_SET_VALUE(contentPropagator_, contentPropagator) };


            // label Field Functions 
            bool hasLabel() const { return this->label_ != nullptr;};
            void deleteLabel() { this->label_ = nullptr;};
            inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
            inline AIGC& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


            // produceID Field Functions 
            bool hasProduceID() const { return this->produceID_ != nullptr;};
            void deleteProduceID() { this->produceID_ = nullptr;};
            inline string getProduceID() const { DARABONBA_PTR_GET_DEFAULT(produceID_, "") };
            inline AIGC& setProduceID(string produceID) { DARABONBA_PTR_SET_VALUE(produceID_, produceID) };


            // propagateID Field Functions 
            bool hasPropagateID() const { return this->propagateID_ != nullptr;};
            void deletePropagateID() { this->propagateID_ = nullptr;};
            inline string getPropagateID() const { DARABONBA_PTR_GET_DEFAULT(propagateID_, "") };
            inline AIGC& setPropagateID(string propagateID) { DARABONBA_PTR_SET_VALUE(propagateID_, propagateID) };


            // reservedCode1 Field Functions 
            bool hasReservedCode1() const { return this->reservedCode1_ != nullptr;};
            void deleteReservedCode1() { this->reservedCode1_ = nullptr;};
            inline string getReservedCode1() const { DARABONBA_PTR_GET_DEFAULT(reservedCode1_, "") };
            inline AIGC& setReservedCode1(string reservedCode1) { DARABONBA_PTR_SET_VALUE(reservedCode1_, reservedCode1) };


            // reservedCode2 Field Functions 
            bool hasReservedCode2() const { return this->reservedCode2_ != nullptr;};
            void deleteReservedCode2() { this->reservedCode2_ = nullptr;};
            inline string getReservedCode2() const { DARABONBA_PTR_GET_DEFAULT(reservedCode2_, "") };
            inline AIGC& setReservedCode2(string reservedCode2) { DARABONBA_PTR_SET_VALUE(reservedCode2_, reservedCode2) };


          protected:
            shared_ptr<string> contentProducer_ {};
            shared_ptr<string> contentPropagator_ {};
            shared_ptr<string> label_ {};
            shared_ptr<string> produceID_ {};
            shared_ptr<string> propagateID_ {};
            shared_ptr<string> reservedCode1_ {};
            shared_ptr<string> reservedCode2_ {};
          };

          virtual bool empty() const override { return this->AIGC_ == nullptr; };
          // AIGC Field Functions 
          bool hasAIGC() const { return this->AIGC_ != nullptr;};
          void deleteAIGC() { this->AIGC_ = nullptr;};
          inline const AigcData::AIGC & getAIGC() const { DARABONBA_PTR_GET_CONST(AIGC_, AigcData::AIGC) };
          inline AigcData::AIGC getAIGC() { DARABONBA_PTR_GET(AIGC_, AigcData::AIGC) };
          inline AigcData& setAIGC(const AigcData::AIGC & aIGC) { DARABONBA_PTR_SET_VALUE(AIGC_, aIGC) };
          inline AigcData& setAIGC(AigcData::AIGC && aIGC) { DARABONBA_PTR_SET_RVALUE(AIGC_, aIGC) };


        protected:
          shared_ptr<AigcData::AIGC> AIGC_ {};
        };

        virtual bool empty() const override { return this->aigcData_ == nullptr
        && this->customImage_ == nullptr && this->faceData_ == nullptr && this->logoData_ == nullptr && this->ocrResult_ == nullptr && this->publicFigure_ == nullptr
        && this->recognition_ == nullptr && this->textInImage_ == nullptr && this->vlContent_ == nullptr; };
        // aigcData Field Functions 
        bool hasAigcData() const { return this->aigcData_ != nullptr;};
        void deleteAigcData() { this->aigcData_ = nullptr;};
        inline const Ext::AigcData & getAigcData() const { DARABONBA_PTR_GET_CONST(aigcData_, Ext::AigcData) };
        inline Ext::AigcData getAigcData() { DARABONBA_PTR_GET(aigcData_, Ext::AigcData) };
        inline Ext& setAigcData(const Ext::AigcData & aigcData) { DARABONBA_PTR_SET_VALUE(aigcData_, aigcData) };
        inline Ext& setAigcData(Ext::AigcData && aigcData) { DARABONBA_PTR_SET_RVALUE(aigcData_, aigcData) };


        // customImage Field Functions 
        bool hasCustomImage() const { return this->customImage_ != nullptr;};
        void deleteCustomImage() { this->customImage_ = nullptr;};
        inline const vector<Ext::CustomImage> & getCustomImage() const { DARABONBA_PTR_GET_CONST(customImage_, vector<Ext::CustomImage>) };
        inline vector<Ext::CustomImage> getCustomImage() { DARABONBA_PTR_GET(customImage_, vector<Ext::CustomImage>) };
        inline Ext& setCustomImage(const vector<Ext::CustomImage> & customImage) { DARABONBA_PTR_SET_VALUE(customImage_, customImage) };
        inline Ext& setCustomImage(vector<Ext::CustomImage> && customImage) { DARABONBA_PTR_SET_RVALUE(customImage_, customImage) };


        // faceData Field Functions 
        bool hasFaceData() const { return this->faceData_ != nullptr;};
        void deleteFaceData() { this->faceData_ = nullptr;};
        inline const vector<Ext::FaceData> & getFaceData() const { DARABONBA_PTR_GET_CONST(faceData_, vector<Ext::FaceData>) };
        inline vector<Ext::FaceData> getFaceData() { DARABONBA_PTR_GET(faceData_, vector<Ext::FaceData>) };
        inline Ext& setFaceData(const vector<Ext::FaceData> & faceData) { DARABONBA_PTR_SET_VALUE(faceData_, faceData) };
        inline Ext& setFaceData(vector<Ext::FaceData> && faceData) { DARABONBA_PTR_SET_RVALUE(faceData_, faceData) };


        // logoData Field Functions 
        bool hasLogoData() const { return this->logoData_ != nullptr;};
        void deleteLogoData() { this->logoData_ = nullptr;};
        inline const vector<Ext::LogoData> & getLogoData() const { DARABONBA_PTR_GET_CONST(logoData_, vector<Ext::LogoData>) };
        inline vector<Ext::LogoData> getLogoData() { DARABONBA_PTR_GET(logoData_, vector<Ext::LogoData>) };
        inline Ext& setLogoData(const vector<Ext::LogoData> & logoData) { DARABONBA_PTR_SET_VALUE(logoData_, logoData) };
        inline Ext& setLogoData(vector<Ext::LogoData> && logoData) { DARABONBA_PTR_SET_RVALUE(logoData_, logoData) };


        // ocrResult Field Functions 
        bool hasOcrResult() const { return this->ocrResult_ != nullptr;};
        void deleteOcrResult() { this->ocrResult_ = nullptr;};
        inline const vector<Ext::OcrResult> & getOcrResult() const { DARABONBA_PTR_GET_CONST(ocrResult_, vector<Ext::OcrResult>) };
        inline vector<Ext::OcrResult> getOcrResult() { DARABONBA_PTR_GET(ocrResult_, vector<Ext::OcrResult>) };
        inline Ext& setOcrResult(const vector<Ext::OcrResult> & ocrResult) { DARABONBA_PTR_SET_VALUE(ocrResult_, ocrResult) };
        inline Ext& setOcrResult(vector<Ext::OcrResult> && ocrResult) { DARABONBA_PTR_SET_RVALUE(ocrResult_, ocrResult) };


        // publicFigure Field Functions 
        bool hasPublicFigure() const { return this->publicFigure_ != nullptr;};
        void deletePublicFigure() { this->publicFigure_ = nullptr;};
        inline const vector<Ext::PublicFigure> & getPublicFigure() const { DARABONBA_PTR_GET_CONST(publicFigure_, vector<Ext::PublicFigure>) };
        inline vector<Ext::PublicFigure> getPublicFigure() { DARABONBA_PTR_GET(publicFigure_, vector<Ext::PublicFigure>) };
        inline Ext& setPublicFigure(const vector<Ext::PublicFigure> & publicFigure) { DARABONBA_PTR_SET_VALUE(publicFigure_, publicFigure) };
        inline Ext& setPublicFigure(vector<Ext::PublicFigure> && publicFigure) { DARABONBA_PTR_SET_RVALUE(publicFigure_, publicFigure) };


        // recognition Field Functions 
        bool hasRecognition() const { return this->recognition_ != nullptr;};
        void deleteRecognition() { this->recognition_ = nullptr;};
        inline const vector<Ext::Recognition> & getRecognition() const { DARABONBA_PTR_GET_CONST(recognition_, vector<Ext::Recognition>) };
        inline vector<Ext::Recognition> getRecognition() { DARABONBA_PTR_GET(recognition_, vector<Ext::Recognition>) };
        inline Ext& setRecognition(const vector<Ext::Recognition> & recognition) { DARABONBA_PTR_SET_VALUE(recognition_, recognition) };
        inline Ext& setRecognition(vector<Ext::Recognition> && recognition) { DARABONBA_PTR_SET_RVALUE(recognition_, recognition) };


        // textInImage Field Functions 
        bool hasTextInImage() const { return this->textInImage_ != nullptr;};
        void deleteTextInImage() { this->textInImage_ = nullptr;};
        inline const Ext::TextInImage & getTextInImage() const { DARABONBA_PTR_GET_CONST(textInImage_, Ext::TextInImage) };
        inline Ext::TextInImage getTextInImage() { DARABONBA_PTR_GET(textInImage_, Ext::TextInImage) };
        inline Ext& setTextInImage(const Ext::TextInImage & textInImage) { DARABONBA_PTR_SET_VALUE(textInImage_, textInImage) };
        inline Ext& setTextInImage(Ext::TextInImage && textInImage) { DARABONBA_PTR_SET_RVALUE(textInImage_, textInImage) };


        // vlContent Field Functions 
        bool hasVlContent() const { return this->vlContent_ != nullptr;};
        void deleteVlContent() { this->vlContent_ = nullptr;};
        inline const Ext::VlContent & getVlContent() const { DARABONBA_PTR_GET_CONST(vlContent_, Ext::VlContent) };
        inline Ext::VlContent getVlContent() { DARABONBA_PTR_GET(vlContent_, Ext::VlContent) };
        inline Ext& setVlContent(const Ext::VlContent & vlContent) { DARABONBA_PTR_SET_VALUE(vlContent_, vlContent) };
        inline Ext& setVlContent(Ext::VlContent && vlContent) { DARABONBA_PTR_SET_RVALUE(vlContent_, vlContent) };


      protected:
        shared_ptr<Ext::AigcData> aigcData_ {};
        // If a custom image library is hit, information about the hit custom image library is returned.
        shared_ptr<vector<Ext::CustomImage>> customImage_ {};
        // The returned face attribute information
        shared_ptr<vector<Ext::FaceData>> faceData_ {};
        // Logo information.
        shared_ptr<vector<Ext::LogoData>> logoData_ {};
        // Returns the text information in the recognized image.
        shared_ptr<vector<Ext::OcrResult>> ocrResult_ {};
        // Person information list.
        shared_ptr<vector<Ext::PublicFigure>> publicFigure_ {};
        // The result of image recognition.
        shared_ptr<vector<Ext::Recognition>> recognition_ {};
        // Returns the text information in the hit image.
        shared_ptr<Ext::TextInImage> textInImage_ {};
        // the vl output content
        shared_ptr<Ext::VlContent> vlContent_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->dataId_ == nullptr && this->ext_ == nullptr && this->manualTaskId_ == nullptr && this->result_ == nullptr && this->riskLevel_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Data& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline Data& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // ext Field Functions 
      bool hasExt() const { return this->ext_ != nullptr;};
      void deleteExt() { this->ext_ = nullptr;};
      inline const Data::Ext & getExt() const { DARABONBA_PTR_GET_CONST(ext_, Data::Ext) };
      inline Data::Ext getExt() { DARABONBA_PTR_GET(ext_, Data::Ext) };
      inline Data& setExt(const Data::Ext & ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };
      inline Data& setExt(Data::Ext && ext) { DARABONBA_PTR_SET_RVALUE(ext_, ext) };


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


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Data& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    protected:
      shared_ptr<string> accountId_ {};
      // The ID of the moderated object.
      // 
      // >  If you specify the dataId parameter in the request, the value of the dataId parameter is returned in the response.
      shared_ptr<string> dataId_ {};
      // Auxiliary reference information.
      shared_ptr<Data::Ext> ext_ {};
      shared_ptr<string> manualTaskId_ {};
      // The results of image moderation parameters such as the label parameter and the confidence parameter, which are an array structure.
      shared_ptr<vector<Data::Result>> result_ {};
      // Risk Level.
      shared_ptr<string> riskLevel_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ImageModerationResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ImageModerationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ImageModerationResponseBody::Data) };
    inline ImageModerationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ImageModerationResponseBody::Data) };
    inline ImageModerationResponseBody& setData(const ImageModerationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ImageModerationResponseBody& setData(ImageModerationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline ImageModerationResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImageModerationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned HTTP status code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The moderation results.
    shared_ptr<ImageModerationResponseBody::Data> data_ {};
    // The message that is returned in response to the request.
    shared_ptr<string> msg_ {};
    // The request ID, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
