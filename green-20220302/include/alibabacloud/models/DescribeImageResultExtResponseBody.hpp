// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGERESULTEXTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGERESULTEXTRESPONSEBODY_HPP_
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
  class DescribeImageResultExtResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageResultExtResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageResultExtResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageResultExtResponseBody() = default ;
    DescribeImageResultExtResponseBody(const DescribeImageResultExtResponseBody &) = default ;
    DescribeImageResultExtResponseBody(DescribeImageResultExtResponseBody &&) = default ;
    DescribeImageResultExtResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageResultExtResponseBody() = default ;
    DescribeImageResultExtResponseBody& operator=(const DescribeImageResultExtResponseBody &) = default ;
    DescribeImageResultExtResponseBody& operator=(DescribeImageResultExtResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CustomImage, customImage_);
        DARABONBA_PTR_TO_JSON(PublicFigure, publicFigure_);
        DARABONBA_PTR_TO_JSON(TextInImage, textInImage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomImage, customImage_);
        DARABONBA_PTR_FROM_JSON(PublicFigure, publicFigure_);
        DARABONBA_PTR_FROM_JSON(TextInImage, textInImage_);
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
      class TextInImage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TextInImage& obj) { 
          DARABONBA_PTR_TO_JSON(CustomTexts, customTexts_);
          DARABONBA_PTR_TO_JSON(OcrDatas, ocrDatas_);
          DARABONBA_PTR_TO_JSON(RiskWords, riskWords_);
        };
        friend void from_json(const Darabonba::Json& j, TextInImage& obj) { 
          DARABONBA_PTR_FROM_JSON(CustomTexts, customTexts_);
          DARABONBA_PTR_FROM_JSON(OcrDatas, ocrDatas_);
          DARABONBA_PTR_FROM_JSON(RiskWords, riskWords_);
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
        class CustomTexts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CustomTexts& obj) { 
            DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
            DARABONBA_PTR_TO_JSON(LibId, libId_);
            DARABONBA_PTR_TO_JSON(LibName, libName_);
          };
          friend void from_json(const Darabonba::Json& j, CustomTexts& obj) { 
            DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
            DARABONBA_PTR_FROM_JSON(LibId, libId_);
            DARABONBA_PTR_FROM_JSON(LibName, libName_);
          };
          CustomTexts() = default ;
          CustomTexts(const CustomTexts &) = default ;
          CustomTexts(CustomTexts &&) = default ;
          CustomTexts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CustomTexts() = default ;
          CustomTexts& operator=(const CustomTexts &) = default ;
          CustomTexts& operator=(CustomTexts &&) = default ;
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
          inline CustomTexts& setKeyWords(string keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };


          // libId Field Functions 
          bool hasLibId() const { return this->libId_ != nullptr;};
          void deleteLibId() { this->libId_ = nullptr;};
          inline string getLibId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
          inline CustomTexts& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


          // libName Field Functions 
          bool hasLibName() const { return this->libName_ != nullptr;};
          void deleteLibName() { this->libName_ = nullptr;};
          inline string getLibName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
          inline CustomTexts& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


        protected:
          // Custom words, multiple words separated by commas.
          shared_ptr<string> keyWords_ {};
          // Custom library ID.
          shared_ptr<string> libId_ {};
          // Custom library name.
          shared_ptr<string> libName_ {};
        };

        virtual bool empty() const override { return this->customTexts_ == nullptr
        && this->ocrDatas_ == nullptr && this->riskWords_ == nullptr; };
        // customTexts Field Functions 
        bool hasCustomTexts() const { return this->customTexts_ != nullptr;};
        void deleteCustomTexts() { this->customTexts_ = nullptr;};
        inline const vector<TextInImage::CustomTexts> & getCustomTexts() const { DARABONBA_PTR_GET_CONST(customTexts_, vector<TextInImage::CustomTexts>) };
        inline vector<TextInImage::CustomTexts> getCustomTexts() { DARABONBA_PTR_GET(customTexts_, vector<TextInImage::CustomTexts>) };
        inline TextInImage& setCustomTexts(const vector<TextInImage::CustomTexts> & customTexts) { DARABONBA_PTR_SET_VALUE(customTexts_, customTexts) };
        inline TextInImage& setCustomTexts(vector<TextInImage::CustomTexts> && customTexts) { DARABONBA_PTR_SET_RVALUE(customTexts_, customTexts) };


        // ocrDatas Field Functions 
        bool hasOcrDatas() const { return this->ocrDatas_ != nullptr;};
        void deleteOcrDatas() { this->ocrDatas_ = nullptr;};
        inline const vector<string> & getOcrDatas() const { DARABONBA_PTR_GET_CONST(ocrDatas_, vector<string>) };
        inline vector<string> getOcrDatas() { DARABONBA_PTR_GET(ocrDatas_, vector<string>) };
        inline TextInImage& setOcrDatas(const vector<string> & ocrDatas) { DARABONBA_PTR_SET_VALUE(ocrDatas_, ocrDatas) };
        inline TextInImage& setOcrDatas(vector<string> && ocrDatas) { DARABONBA_PTR_SET_RVALUE(ocrDatas_, ocrDatas) };


        // riskWords Field Functions 
        bool hasRiskWords() const { return this->riskWords_ != nullptr;};
        void deleteRiskWords() { this->riskWords_ = nullptr;};
        inline const vector<string> & getRiskWords() const { DARABONBA_PTR_GET_CONST(riskWords_, vector<string>) };
        inline vector<string> getRiskWords() { DARABONBA_PTR_GET(riskWords_, vector<string>) };
        inline TextInImage& setRiskWords(const vector<string> & riskWords) { DARABONBA_PTR_SET_VALUE(riskWords_, riskWords) };
        inline TextInImage& setRiskWords(vector<string> && riskWords) { DARABONBA_PTR_SET_RVALUE(riskWords_, riskWords) };


      protected:
        // When a custom text library is hit, the custom library ID, custom library name, and custom word are returned.
        shared_ptr<vector<TextInImage::CustomTexts>> customTexts_ {};
        // Returns the text information in the recognized image.
        shared_ptr<vector<string>> ocrDatas_ {};
        // The risk words that are hit. Multiple words are separated by commas (,).
        shared_ptr<vector<string>> riskWords_ {};
      };

      class PublicFigure : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PublicFigure& obj) { 
          DARABONBA_PTR_TO_JSON(FigureId, figureId_);
        };
        friend void from_json(const Darabonba::Json& j, PublicFigure& obj) { 
          DARABONBA_PTR_FROM_JSON(FigureId, figureId_);
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
        virtual bool empty() const override { return this->figureId_ == nullptr; };
        // figureId Field Functions 
        bool hasFigureId() const { return this->figureId_ != nullptr;};
        void deleteFigureId() { this->figureId_ = nullptr;};
        inline string getFigureId() const { DARABONBA_PTR_GET_DEFAULT(figureId_, "") };
        inline PublicFigure& setFigureId(string figureId) { DARABONBA_PTR_SET_VALUE(figureId_, figureId) };


      protected:
        // Identified person coding information.
        shared_ptr<string> figureId_ {};
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

      virtual bool empty() const override { return this->customImage_ == nullptr
        && this->publicFigure_ == nullptr && this->textInImage_ == nullptr; };
      // customImage Field Functions 
      bool hasCustomImage() const { return this->customImage_ != nullptr;};
      void deleteCustomImage() { this->customImage_ = nullptr;};
      inline const vector<Data::CustomImage> & getCustomImage() const { DARABONBA_PTR_GET_CONST(customImage_, vector<Data::CustomImage>) };
      inline vector<Data::CustomImage> getCustomImage() { DARABONBA_PTR_GET(customImage_, vector<Data::CustomImage>) };
      inline Data& setCustomImage(const vector<Data::CustomImage> & customImage) { DARABONBA_PTR_SET_VALUE(customImage_, customImage) };
      inline Data& setCustomImage(vector<Data::CustomImage> && customImage) { DARABONBA_PTR_SET_RVALUE(customImage_, customImage) };


      // publicFigure Field Functions 
      bool hasPublicFigure() const { return this->publicFigure_ != nullptr;};
      void deletePublicFigure() { this->publicFigure_ = nullptr;};
      inline const vector<Data::PublicFigure> & getPublicFigure() const { DARABONBA_PTR_GET_CONST(publicFigure_, vector<Data::PublicFigure>) };
      inline vector<Data::PublicFigure> getPublicFigure() { DARABONBA_PTR_GET(publicFigure_, vector<Data::PublicFigure>) };
      inline Data& setPublicFigure(const vector<Data::PublicFigure> & publicFigure) { DARABONBA_PTR_SET_VALUE(publicFigure_, publicFigure) };
      inline Data& setPublicFigure(vector<Data::PublicFigure> && publicFigure) { DARABONBA_PTR_SET_RVALUE(publicFigure_, publicFigure) };


      // textInImage Field Functions 
      bool hasTextInImage() const { return this->textInImage_ != nullptr;};
      void deleteTextInImage() { this->textInImage_ = nullptr;};
      inline const Data::TextInImage & getTextInImage() const { DARABONBA_PTR_GET_CONST(textInImage_, Data::TextInImage) };
      inline Data::TextInImage getTextInImage() { DARABONBA_PTR_GET(textInImage_, Data::TextInImage) };
      inline Data& setTextInImage(const Data::TextInImage & textInImage) { DARABONBA_PTR_SET_VALUE(textInImage_, textInImage) };
      inline Data& setTextInImage(Data::TextInImage && textInImage) { DARABONBA_PTR_SET_RVALUE(textInImage_, textInImage) };


    protected:
      // If a custom image library is hit, information about the hit custom image library is returned.
      shared_ptr<vector<Data::CustomImage>> customImage_ {};
      // Person information list.
      shared_ptr<vector<Data::PublicFigure>> publicFigure_ {};
      // Returns the text information in the hit image.
      shared_ptr<Data::TextInImage> textInImage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeImageResultExtResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeImageResultExtResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeImageResultExtResponseBody::Data) };
    inline DescribeImageResultExtResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeImageResultExtResponseBody::Data) };
    inline DescribeImageResultExtResponseBody& setData(const DescribeImageResultExtResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeImageResultExtResponseBody& setData(DescribeImageResultExtResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline DescribeImageResultExtResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageResultExtResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<DescribeImageResultExtResponseBody::Data> data_ {};
    // The message that is returned in response to the request.
    shared_ptr<string> msg_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
