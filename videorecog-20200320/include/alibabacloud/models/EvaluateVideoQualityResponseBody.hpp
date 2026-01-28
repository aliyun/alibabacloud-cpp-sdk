// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATEVIDEOQUALITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EVALUATEVIDEOQUALITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class EvaluateVideoQualityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluateVideoQualityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluateVideoQualityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    EvaluateVideoQualityResponseBody() = default ;
    EvaluateVideoQualityResponseBody(const EvaluateVideoQualityResponseBody &) = default ;
    EvaluateVideoQualityResponseBody(EvaluateVideoQualityResponseBody &&) = default ;
    EvaluateVideoQualityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluateVideoQualityResponseBody() = default ;
    EvaluateVideoQualityResponseBody& operator=(const EvaluateVideoQualityResponseBody &) = default ;
    EvaluateVideoQualityResponseBody& operator=(EvaluateVideoQualityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(JsonUrl, jsonUrl_);
        DARABONBA_PTR_TO_JSON(PdfUrl, pdfUrl_);
        DARABONBA_PTR_TO_JSON(VideoQualityInfo, videoQualityInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(JsonUrl, jsonUrl_);
        DARABONBA_PTR_FROM_JSON(PdfUrl, pdfUrl_);
        DARABONBA_PTR_FROM_JSON(VideoQualityInfo, videoQualityInfo_);
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
      class VideoQualityInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VideoQualityInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Blurriness, blurriness_);
          DARABONBA_PTR_TO_JSON(ColorContrast, colorContrast_);
          DARABONBA_PTR_TO_JSON(ColorSaturation, colorSaturation_);
          DARABONBA_PTR_TO_JSON(Colorfulness, colorfulness_);
          DARABONBA_PTR_TO_JSON(CompressiveStrength, compressiveStrength_);
          DARABONBA_PTR_TO_JSON(Luminance, luminance_);
          DARABONBA_PTR_TO_JSON(MosScore, mosScore_);
          DARABONBA_PTR_TO_JSON(NoiseIntensity, noiseIntensity_);
        };
        friend void from_json(const Darabonba::Json& j, VideoQualityInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Blurriness, blurriness_);
          DARABONBA_PTR_FROM_JSON(ColorContrast, colorContrast_);
          DARABONBA_PTR_FROM_JSON(ColorSaturation, colorSaturation_);
          DARABONBA_PTR_FROM_JSON(Colorfulness, colorfulness_);
          DARABONBA_PTR_FROM_JSON(CompressiveStrength, compressiveStrength_);
          DARABONBA_PTR_FROM_JSON(Luminance, luminance_);
          DARABONBA_PTR_FROM_JSON(MosScore, mosScore_);
          DARABONBA_PTR_FROM_JSON(NoiseIntensity, noiseIntensity_);
        };
        VideoQualityInfo() = default ;
        VideoQualityInfo(const VideoQualityInfo &) = default ;
        VideoQualityInfo(VideoQualityInfo &&) = default ;
        VideoQualityInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VideoQualityInfo() = default ;
        VideoQualityInfo& operator=(const VideoQualityInfo &) = default ;
        VideoQualityInfo& operator=(VideoQualityInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->blurriness_ == nullptr
        && this->colorContrast_ == nullptr && this->colorSaturation_ == nullptr && this->colorfulness_ == nullptr && this->compressiveStrength_ == nullptr && this->luminance_ == nullptr
        && this->mosScore_ == nullptr && this->noiseIntensity_ == nullptr; };
        // blurriness Field Functions 
        bool hasBlurriness() const { return this->blurriness_ != nullptr;};
        void deleteBlurriness() { this->blurriness_ = nullptr;};
        inline float getBlurriness() const { DARABONBA_PTR_GET_DEFAULT(blurriness_, 0.0) };
        inline VideoQualityInfo& setBlurriness(float blurriness) { DARABONBA_PTR_SET_VALUE(blurriness_, blurriness) };


        // colorContrast Field Functions 
        bool hasColorContrast() const { return this->colorContrast_ != nullptr;};
        void deleteColorContrast() { this->colorContrast_ = nullptr;};
        inline float getColorContrast() const { DARABONBA_PTR_GET_DEFAULT(colorContrast_, 0.0) };
        inline VideoQualityInfo& setColorContrast(float colorContrast) { DARABONBA_PTR_SET_VALUE(colorContrast_, colorContrast) };


        // colorSaturation Field Functions 
        bool hasColorSaturation() const { return this->colorSaturation_ != nullptr;};
        void deleteColorSaturation() { this->colorSaturation_ = nullptr;};
        inline float getColorSaturation() const { DARABONBA_PTR_GET_DEFAULT(colorSaturation_, 0.0) };
        inline VideoQualityInfo& setColorSaturation(float colorSaturation) { DARABONBA_PTR_SET_VALUE(colorSaturation_, colorSaturation) };


        // colorfulness Field Functions 
        bool hasColorfulness() const { return this->colorfulness_ != nullptr;};
        void deleteColorfulness() { this->colorfulness_ = nullptr;};
        inline float getColorfulness() const { DARABONBA_PTR_GET_DEFAULT(colorfulness_, 0.0) };
        inline VideoQualityInfo& setColorfulness(float colorfulness) { DARABONBA_PTR_SET_VALUE(colorfulness_, colorfulness) };


        // compressiveStrength Field Functions 
        bool hasCompressiveStrength() const { return this->compressiveStrength_ != nullptr;};
        void deleteCompressiveStrength() { this->compressiveStrength_ = nullptr;};
        inline float getCompressiveStrength() const { DARABONBA_PTR_GET_DEFAULT(compressiveStrength_, 0.0) };
        inline VideoQualityInfo& setCompressiveStrength(float compressiveStrength) { DARABONBA_PTR_SET_VALUE(compressiveStrength_, compressiveStrength) };


        // luminance Field Functions 
        bool hasLuminance() const { return this->luminance_ != nullptr;};
        void deleteLuminance() { this->luminance_ = nullptr;};
        inline float getLuminance() const { DARABONBA_PTR_GET_DEFAULT(luminance_, 0.0) };
        inline VideoQualityInfo& setLuminance(float luminance) { DARABONBA_PTR_SET_VALUE(luminance_, luminance) };


        // mosScore Field Functions 
        bool hasMosScore() const { return this->mosScore_ != nullptr;};
        void deleteMosScore() { this->mosScore_ = nullptr;};
        inline float getMosScore() const { DARABONBA_PTR_GET_DEFAULT(mosScore_, 0.0) };
        inline VideoQualityInfo& setMosScore(float mosScore) { DARABONBA_PTR_SET_VALUE(mosScore_, mosScore) };


        // noiseIntensity Field Functions 
        bool hasNoiseIntensity() const { return this->noiseIntensity_ != nullptr;};
        void deleteNoiseIntensity() { this->noiseIntensity_ = nullptr;};
        inline float getNoiseIntensity() const { DARABONBA_PTR_GET_DEFAULT(noiseIntensity_, 0.0) };
        inline VideoQualityInfo& setNoiseIntensity(float noiseIntensity) { DARABONBA_PTR_SET_VALUE(noiseIntensity_, noiseIntensity) };


      protected:
        shared_ptr<float> blurriness_ {};
        shared_ptr<float> colorContrast_ {};
        shared_ptr<float> colorSaturation_ {};
        shared_ptr<float> colorfulness_ {};
        shared_ptr<float> compressiveStrength_ {};
        shared_ptr<float> luminance_ {};
        shared_ptr<float> mosScore_ {};
        shared_ptr<float> noiseIntensity_ {};
      };

      virtual bool empty() const override { return this->jsonUrl_ == nullptr
        && this->pdfUrl_ == nullptr && this->videoQualityInfo_ == nullptr; };
      // jsonUrl Field Functions 
      bool hasJsonUrl() const { return this->jsonUrl_ != nullptr;};
      void deleteJsonUrl() { this->jsonUrl_ = nullptr;};
      inline string getJsonUrl() const { DARABONBA_PTR_GET_DEFAULT(jsonUrl_, "") };
      inline Data& setJsonUrl(string jsonUrl) { DARABONBA_PTR_SET_VALUE(jsonUrl_, jsonUrl) };


      // pdfUrl Field Functions 
      bool hasPdfUrl() const { return this->pdfUrl_ != nullptr;};
      void deletePdfUrl() { this->pdfUrl_ = nullptr;};
      inline string getPdfUrl() const { DARABONBA_PTR_GET_DEFAULT(pdfUrl_, "") };
      inline Data& setPdfUrl(string pdfUrl) { DARABONBA_PTR_SET_VALUE(pdfUrl_, pdfUrl) };


      // videoQualityInfo Field Functions 
      bool hasVideoQualityInfo() const { return this->videoQualityInfo_ != nullptr;};
      void deleteVideoQualityInfo() { this->videoQualityInfo_ = nullptr;};
      inline const Data::VideoQualityInfo & getVideoQualityInfo() const { DARABONBA_PTR_GET_CONST(videoQualityInfo_, Data::VideoQualityInfo) };
      inline Data::VideoQualityInfo getVideoQualityInfo() { DARABONBA_PTR_GET(videoQualityInfo_, Data::VideoQualityInfo) };
      inline Data& setVideoQualityInfo(const Data::VideoQualityInfo & videoQualityInfo) { DARABONBA_PTR_SET_VALUE(videoQualityInfo_, videoQualityInfo) };
      inline Data& setVideoQualityInfo(Data::VideoQualityInfo && videoQualityInfo) { DARABONBA_PTR_SET_RVALUE(videoQualityInfo_, videoQualityInfo) };


    protected:
      shared_ptr<string> jsonUrl_ {};
      shared_ptr<string> pdfUrl_ {};
      shared_ptr<Data::VideoQualityInfo> videoQualityInfo_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const EvaluateVideoQualityResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, EvaluateVideoQualityResponseBody::Data) };
    inline EvaluateVideoQualityResponseBody::Data getData() { DARABONBA_PTR_GET(data_, EvaluateVideoQualityResponseBody::Data) };
    inline EvaluateVideoQualityResponseBody& setData(const EvaluateVideoQualityResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline EvaluateVideoQualityResponseBody& setData(EvaluateVideoQualityResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EvaluateVideoQualityResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EvaluateVideoQualityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<EvaluateVideoQualityResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
