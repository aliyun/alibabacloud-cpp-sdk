// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamTranscodeInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamTranscodeInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainTranscodeList, domainTranscodeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamTranscodeInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainTranscodeList, domainTranscodeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveStreamTranscodeInfoResponseBody() = default ;
    DescribeLiveStreamTranscodeInfoResponseBody(const DescribeLiveStreamTranscodeInfoResponseBody &) = default ;
    DescribeLiveStreamTranscodeInfoResponseBody(DescribeLiveStreamTranscodeInfoResponseBody &&) = default ;
    DescribeLiveStreamTranscodeInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamTranscodeInfoResponseBody() = default ;
    DescribeLiveStreamTranscodeInfoResponseBody& operator=(const DescribeLiveStreamTranscodeInfoResponseBody &) = default ;
    DescribeLiveStreamTranscodeInfoResponseBody& operator=(DescribeLiveStreamTranscodeInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainTranscodeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainTranscodeList& obj) { 
        DARABONBA_PTR_TO_JSON(DomainTranscodeInfo, domainTranscodeInfo_);
      };
      friend void from_json(const Darabonba::Json& j, DomainTranscodeList& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainTranscodeInfo, domainTranscodeInfo_);
      };
      DomainTranscodeList() = default ;
      DomainTranscodeList(const DomainTranscodeList &) = default ;
      DomainTranscodeList(DomainTranscodeList &&) = default ;
      DomainTranscodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainTranscodeList() = default ;
      DomainTranscodeList& operator=(const DomainTranscodeList &) = default ;
      DomainTranscodeList& operator=(DomainTranscodeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DomainTranscodeInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainTranscodeInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CustomTranscodeParameters, customTranscodeParameters_);
          DARABONBA_PTR_TO_JSON(EncryptParameters, encryptParameters_);
          DARABONBA_PTR_TO_JSON(IsLazy, isLazy_);
          DARABONBA_PTR_TO_JSON(TranscodeApp, transcodeApp_);
          DARABONBA_PTR_TO_JSON(TranscodeName, transcodeName_);
          DARABONBA_PTR_TO_JSON(TranscodeTemplate, transcodeTemplate_);
        };
        friend void from_json(const Darabonba::Json& j, DomainTranscodeInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CustomTranscodeParameters, customTranscodeParameters_);
          DARABONBA_PTR_FROM_JSON(EncryptParameters, encryptParameters_);
          DARABONBA_PTR_FROM_JSON(IsLazy, isLazy_);
          DARABONBA_PTR_FROM_JSON(TranscodeApp, transcodeApp_);
          DARABONBA_PTR_FROM_JSON(TranscodeName, transcodeName_);
          DARABONBA_PTR_FROM_JSON(TranscodeTemplate, transcodeTemplate_);
        };
        DomainTranscodeInfo() = default ;
        DomainTranscodeInfo(const DomainTranscodeInfo &) = default ;
        DomainTranscodeInfo(DomainTranscodeInfo &&) = default ;
        DomainTranscodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainTranscodeInfo() = default ;
        DomainTranscodeInfo& operator=(const DomainTranscodeInfo &) = default ;
        DomainTranscodeInfo& operator=(DomainTranscodeInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EncryptParameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EncryptParameters& obj) { 
            DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
            DARABONBA_PTR_TO_JSON(KmsKeyExpireInterval, kmsKeyExpireInterval_);
            DARABONBA_PTR_TO_JSON(KmsKeyID, kmsKeyID_);
          };
          friend void from_json(const Darabonba::Json& j, EncryptParameters& obj) { 
            DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
            DARABONBA_PTR_FROM_JSON(KmsKeyExpireInterval, kmsKeyExpireInterval_);
            DARABONBA_PTR_FROM_JSON(KmsKeyID, kmsKeyID_);
          };
          EncryptParameters() = default ;
          EncryptParameters(const EncryptParameters &) = default ;
          EncryptParameters(EncryptParameters &&) = default ;
          EncryptParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EncryptParameters() = default ;
          EncryptParameters& operator=(const EncryptParameters &) = default ;
          EncryptParameters& operator=(EncryptParameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->encryptType_ == nullptr
        && this->kmsKeyExpireInterval_ == nullptr && this->kmsKeyID_ == nullptr; };
          // encryptType Field Functions 
          bool hasEncryptType() const { return this->encryptType_ != nullptr;};
          void deleteEncryptType() { this->encryptType_ = nullptr;};
          inline string getEncryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
          inline EncryptParameters& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


          // kmsKeyExpireInterval Field Functions 
          bool hasKmsKeyExpireInterval() const { return this->kmsKeyExpireInterval_ != nullptr;};
          void deleteKmsKeyExpireInterval() { this->kmsKeyExpireInterval_ = nullptr;};
          inline string getKmsKeyExpireInterval() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyExpireInterval_, "") };
          inline EncryptParameters& setKmsKeyExpireInterval(string kmsKeyExpireInterval) { DARABONBA_PTR_SET_VALUE(kmsKeyExpireInterval_, kmsKeyExpireInterval) };


          // kmsKeyID Field Functions 
          bool hasKmsKeyID() const { return this->kmsKeyID_ != nullptr;};
          void deleteKmsKeyID() { this->kmsKeyID_ = nullptr;};
          inline string getKmsKeyID() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyID_, "") };
          inline EncryptParameters& setKmsKeyID(string kmsKeyID) { DARABONBA_PTR_SET_VALUE(kmsKeyID_, kmsKeyID) };


        protected:
          shared_ptr<string> encryptType_ {};
          shared_ptr<string> kmsKeyExpireInterval_ {};
          shared_ptr<string> kmsKeyID_ {};
        };

        class CustomTranscodeParameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CustomTranscodeParameters& obj) { 
            DARABONBA_PTR_TO_JSON(AudioBitrate, audioBitrate_);
            DARABONBA_PTR_TO_JSON(AudioChannelNum, audioChannelNum_);
            DARABONBA_PTR_TO_JSON(AudioCodec, audioCodec_);
            DARABONBA_PTR_TO_JSON(AudioProfile, audioProfile_);
            DARABONBA_PTR_TO_JSON(AudioRate, audioRate_);
            DARABONBA_PTR_TO_JSON(Bframes, bframes_);
            DARABONBA_ANY_TO_JSON(BitrateWithSource, bitrateWithSource_);
            DARABONBA_PTR_TO_JSON(DeInterlaced, deInterlaced_);
            DARABONBA_ANY_TO_JSON(ExtWithSource, extWithSource_);
            DARABONBA_PTR_TO_JSON(FPS, FPS_);
            DARABONBA_ANY_TO_JSON(FpsWithSource, fpsWithSource_);
            DARABONBA_PTR_TO_JSON(Gop, gop_);
            DARABONBA_PTR_TO_JSON(Height, height_);
            DARABONBA_ANY_TO_JSON(ResWithSource, resWithSource_);
            DARABONBA_PTR_TO_JSON(RtsFlag, rtsFlag_);
            DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
            DARABONBA_PTR_TO_JSON(VideoBitrate, videoBitrate_);
            DARABONBA_PTR_TO_JSON(VideoProfile, videoProfile_);
            DARABONBA_PTR_TO_JSON(Width, width_);
          };
          friend void from_json(const Darabonba::Json& j, CustomTranscodeParameters& obj) { 
            DARABONBA_PTR_FROM_JSON(AudioBitrate, audioBitrate_);
            DARABONBA_PTR_FROM_JSON(AudioChannelNum, audioChannelNum_);
            DARABONBA_PTR_FROM_JSON(AudioCodec, audioCodec_);
            DARABONBA_PTR_FROM_JSON(AudioProfile, audioProfile_);
            DARABONBA_PTR_FROM_JSON(AudioRate, audioRate_);
            DARABONBA_PTR_FROM_JSON(Bframes, bframes_);
            DARABONBA_ANY_FROM_JSON(BitrateWithSource, bitrateWithSource_);
            DARABONBA_PTR_FROM_JSON(DeInterlaced, deInterlaced_);
            DARABONBA_ANY_FROM_JSON(ExtWithSource, extWithSource_);
            DARABONBA_PTR_FROM_JSON(FPS, FPS_);
            DARABONBA_ANY_FROM_JSON(FpsWithSource, fpsWithSource_);
            DARABONBA_PTR_FROM_JSON(Gop, gop_);
            DARABONBA_PTR_FROM_JSON(Height, height_);
            DARABONBA_ANY_FROM_JSON(ResWithSource, resWithSource_);
            DARABONBA_PTR_FROM_JSON(RtsFlag, rtsFlag_);
            DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
            DARABONBA_PTR_FROM_JSON(VideoBitrate, videoBitrate_);
            DARABONBA_PTR_FROM_JSON(VideoProfile, videoProfile_);
            DARABONBA_PTR_FROM_JSON(Width, width_);
          };
          CustomTranscodeParameters() = default ;
          CustomTranscodeParameters(const CustomTranscodeParameters &) = default ;
          CustomTranscodeParameters(CustomTranscodeParameters &&) = default ;
          CustomTranscodeParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CustomTranscodeParameters() = default ;
          CustomTranscodeParameters& operator=(const CustomTranscodeParameters &) = default ;
          CustomTranscodeParameters& operator=(CustomTranscodeParameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->audioBitrate_ == nullptr
        && this->audioChannelNum_ == nullptr && this->audioCodec_ == nullptr && this->audioProfile_ == nullptr && this->audioRate_ == nullptr && this->bframes_ == nullptr
        && this->bitrateWithSource_ == nullptr && this->deInterlaced_ == nullptr && this->extWithSource_ == nullptr && this->FPS_ == nullptr && this->fpsWithSource_ == nullptr
        && this->gop_ == nullptr && this->height_ == nullptr && this->resWithSource_ == nullptr && this->rtsFlag_ == nullptr && this->templateType_ == nullptr
        && this->videoBitrate_ == nullptr && this->videoProfile_ == nullptr && this->width_ == nullptr; };
          // audioBitrate Field Functions 
          bool hasAudioBitrate() const { return this->audioBitrate_ != nullptr;};
          void deleteAudioBitrate() { this->audioBitrate_ = nullptr;};
          inline int32_t getAudioBitrate() const { DARABONBA_PTR_GET_DEFAULT(audioBitrate_, 0) };
          inline CustomTranscodeParameters& setAudioBitrate(int32_t audioBitrate) { DARABONBA_PTR_SET_VALUE(audioBitrate_, audioBitrate) };


          // audioChannelNum Field Functions 
          bool hasAudioChannelNum() const { return this->audioChannelNum_ != nullptr;};
          void deleteAudioChannelNum() { this->audioChannelNum_ = nullptr;};
          inline int32_t getAudioChannelNum() const { DARABONBA_PTR_GET_DEFAULT(audioChannelNum_, 0) };
          inline CustomTranscodeParameters& setAudioChannelNum(int32_t audioChannelNum) { DARABONBA_PTR_SET_VALUE(audioChannelNum_, audioChannelNum) };


          // audioCodec Field Functions 
          bool hasAudioCodec() const { return this->audioCodec_ != nullptr;};
          void deleteAudioCodec() { this->audioCodec_ = nullptr;};
          inline string getAudioCodec() const { DARABONBA_PTR_GET_DEFAULT(audioCodec_, "") };
          inline CustomTranscodeParameters& setAudioCodec(string audioCodec) { DARABONBA_PTR_SET_VALUE(audioCodec_, audioCodec) };


          // audioProfile Field Functions 
          bool hasAudioProfile() const { return this->audioProfile_ != nullptr;};
          void deleteAudioProfile() { this->audioProfile_ = nullptr;};
          inline string getAudioProfile() const { DARABONBA_PTR_GET_DEFAULT(audioProfile_, "") };
          inline CustomTranscodeParameters& setAudioProfile(string audioProfile) { DARABONBA_PTR_SET_VALUE(audioProfile_, audioProfile) };


          // audioRate Field Functions 
          bool hasAudioRate() const { return this->audioRate_ != nullptr;};
          void deleteAudioRate() { this->audioRate_ = nullptr;};
          inline int32_t getAudioRate() const { DARABONBA_PTR_GET_DEFAULT(audioRate_, 0) };
          inline CustomTranscodeParameters& setAudioRate(int32_t audioRate) { DARABONBA_PTR_SET_VALUE(audioRate_, audioRate) };


          // bframes Field Functions 
          bool hasBframes() const { return this->bframes_ != nullptr;};
          void deleteBframes() { this->bframes_ = nullptr;};
          inline string getBframes() const { DARABONBA_PTR_GET_DEFAULT(bframes_, "") };
          inline CustomTranscodeParameters& setBframes(string bframes) { DARABONBA_PTR_SET_VALUE(bframes_, bframes) };


          // bitrateWithSource Field Functions 
          bool hasBitrateWithSource() const { return this->bitrateWithSource_ != nullptr;};
          void deleteBitrateWithSource() { this->bitrateWithSource_ = nullptr;};
          inline           const Darabonba::Json & getBitrateWithSource() const { DARABONBA_GET(bitrateWithSource_) };
          Darabonba::Json & getBitrateWithSource() { DARABONBA_GET(bitrateWithSource_) };
          inline CustomTranscodeParameters& setBitrateWithSource(const Darabonba::Json & bitrateWithSource) { DARABONBA_SET_VALUE(bitrateWithSource_, bitrateWithSource) };
          inline CustomTranscodeParameters& setBitrateWithSource(Darabonba::Json && bitrateWithSource) { DARABONBA_SET_RVALUE(bitrateWithSource_, bitrateWithSource) };


          // deInterlaced Field Functions 
          bool hasDeInterlaced() const { return this->deInterlaced_ != nullptr;};
          void deleteDeInterlaced() { this->deInterlaced_ = nullptr;};
          inline bool getDeInterlaced() const { DARABONBA_PTR_GET_DEFAULT(deInterlaced_, false) };
          inline CustomTranscodeParameters& setDeInterlaced(bool deInterlaced) { DARABONBA_PTR_SET_VALUE(deInterlaced_, deInterlaced) };


          // extWithSource Field Functions 
          bool hasExtWithSource() const { return this->extWithSource_ != nullptr;};
          void deleteExtWithSource() { this->extWithSource_ = nullptr;};
          inline           const Darabonba::Json & getExtWithSource() const { DARABONBA_GET(extWithSource_) };
          Darabonba::Json & getExtWithSource() { DARABONBA_GET(extWithSource_) };
          inline CustomTranscodeParameters& setExtWithSource(const Darabonba::Json & extWithSource) { DARABONBA_SET_VALUE(extWithSource_, extWithSource) };
          inline CustomTranscodeParameters& setExtWithSource(Darabonba::Json && extWithSource) { DARABONBA_SET_RVALUE(extWithSource_, extWithSource) };


          // FPS Field Functions 
          bool hasFPS() const { return this->FPS_ != nullptr;};
          void deleteFPS() { this->FPS_ = nullptr;};
          inline int32_t getFPS() const { DARABONBA_PTR_GET_DEFAULT(FPS_, 0) };
          inline CustomTranscodeParameters& setFPS(int32_t FPS) { DARABONBA_PTR_SET_VALUE(FPS_, FPS) };


          // fpsWithSource Field Functions 
          bool hasFpsWithSource() const { return this->fpsWithSource_ != nullptr;};
          void deleteFpsWithSource() { this->fpsWithSource_ = nullptr;};
          inline           const Darabonba::Json & getFpsWithSource() const { DARABONBA_GET(fpsWithSource_) };
          Darabonba::Json & getFpsWithSource() { DARABONBA_GET(fpsWithSource_) };
          inline CustomTranscodeParameters& setFpsWithSource(const Darabonba::Json & fpsWithSource) { DARABONBA_SET_VALUE(fpsWithSource_, fpsWithSource) };
          inline CustomTranscodeParameters& setFpsWithSource(Darabonba::Json && fpsWithSource) { DARABONBA_SET_RVALUE(fpsWithSource_, fpsWithSource) };


          // gop Field Functions 
          bool hasGop() const { return this->gop_ != nullptr;};
          void deleteGop() { this->gop_ = nullptr;};
          inline string getGop() const { DARABONBA_PTR_GET_DEFAULT(gop_, "") };
          inline CustomTranscodeParameters& setGop(string gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };


          // height Field Functions 
          bool hasHeight() const { return this->height_ != nullptr;};
          void deleteHeight() { this->height_ = nullptr;};
          inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
          inline CustomTranscodeParameters& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


          // resWithSource Field Functions 
          bool hasResWithSource() const { return this->resWithSource_ != nullptr;};
          void deleteResWithSource() { this->resWithSource_ = nullptr;};
          inline           const Darabonba::Json & getResWithSource() const { DARABONBA_GET(resWithSource_) };
          Darabonba::Json & getResWithSource() { DARABONBA_GET(resWithSource_) };
          inline CustomTranscodeParameters& setResWithSource(const Darabonba::Json & resWithSource) { DARABONBA_SET_VALUE(resWithSource_, resWithSource) };
          inline CustomTranscodeParameters& setResWithSource(Darabonba::Json && resWithSource) { DARABONBA_SET_RVALUE(resWithSource_, resWithSource) };


          // rtsFlag Field Functions 
          bool hasRtsFlag() const { return this->rtsFlag_ != nullptr;};
          void deleteRtsFlag() { this->rtsFlag_ = nullptr;};
          inline string getRtsFlag() const { DARABONBA_PTR_GET_DEFAULT(rtsFlag_, "") };
          inline CustomTranscodeParameters& setRtsFlag(string rtsFlag) { DARABONBA_PTR_SET_VALUE(rtsFlag_, rtsFlag) };


          // templateType Field Functions 
          bool hasTemplateType() const { return this->templateType_ != nullptr;};
          void deleteTemplateType() { this->templateType_ = nullptr;};
          inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
          inline CustomTranscodeParameters& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


          // videoBitrate Field Functions 
          bool hasVideoBitrate() const { return this->videoBitrate_ != nullptr;};
          void deleteVideoBitrate() { this->videoBitrate_ = nullptr;};
          inline int32_t getVideoBitrate() const { DARABONBA_PTR_GET_DEFAULT(videoBitrate_, 0) };
          inline CustomTranscodeParameters& setVideoBitrate(int32_t videoBitrate) { DARABONBA_PTR_SET_VALUE(videoBitrate_, videoBitrate) };


          // videoProfile Field Functions 
          bool hasVideoProfile() const { return this->videoProfile_ != nullptr;};
          void deleteVideoProfile() { this->videoProfile_ = nullptr;};
          inline string getVideoProfile() const { DARABONBA_PTR_GET_DEFAULT(videoProfile_, "") };
          inline CustomTranscodeParameters& setVideoProfile(string videoProfile) { DARABONBA_PTR_SET_VALUE(videoProfile_, videoProfile) };


          // width Field Functions 
          bool hasWidth() const { return this->width_ != nullptr;};
          void deleteWidth() { this->width_ = nullptr;};
          inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
          inline CustomTranscodeParameters& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


        protected:
          shared_ptr<int32_t> audioBitrate_ {};
          shared_ptr<int32_t> audioChannelNum_ {};
          shared_ptr<string> audioCodec_ {};
          shared_ptr<string> audioProfile_ {};
          shared_ptr<int32_t> audioRate_ {};
          shared_ptr<string> bframes_ {};
          Darabonba::Json bitrateWithSource_ {};
          shared_ptr<bool> deInterlaced_ {};
          Darabonba::Json extWithSource_ {};
          shared_ptr<int32_t> FPS_ {};
          Darabonba::Json fpsWithSource_ {};
          shared_ptr<string> gop_ {};
          shared_ptr<int32_t> height_ {};
          Darabonba::Json resWithSource_ {};
          shared_ptr<string> rtsFlag_ {};
          shared_ptr<string> templateType_ {};
          shared_ptr<int32_t> videoBitrate_ {};
          shared_ptr<string> videoProfile_ {};
          shared_ptr<int32_t> width_ {};
        };

        virtual bool empty() const override { return this->customTranscodeParameters_ == nullptr
        && this->encryptParameters_ == nullptr && this->isLazy_ == nullptr && this->transcodeApp_ == nullptr && this->transcodeName_ == nullptr && this->transcodeTemplate_ == nullptr; };
        // customTranscodeParameters Field Functions 
        bool hasCustomTranscodeParameters() const { return this->customTranscodeParameters_ != nullptr;};
        void deleteCustomTranscodeParameters() { this->customTranscodeParameters_ = nullptr;};
        inline const DomainTranscodeInfo::CustomTranscodeParameters & getCustomTranscodeParameters() const { DARABONBA_PTR_GET_CONST(customTranscodeParameters_, DomainTranscodeInfo::CustomTranscodeParameters) };
        inline DomainTranscodeInfo::CustomTranscodeParameters getCustomTranscodeParameters() { DARABONBA_PTR_GET(customTranscodeParameters_, DomainTranscodeInfo::CustomTranscodeParameters) };
        inline DomainTranscodeInfo& setCustomTranscodeParameters(const DomainTranscodeInfo::CustomTranscodeParameters & customTranscodeParameters) { DARABONBA_PTR_SET_VALUE(customTranscodeParameters_, customTranscodeParameters) };
        inline DomainTranscodeInfo& setCustomTranscodeParameters(DomainTranscodeInfo::CustomTranscodeParameters && customTranscodeParameters) { DARABONBA_PTR_SET_RVALUE(customTranscodeParameters_, customTranscodeParameters) };


        // encryptParameters Field Functions 
        bool hasEncryptParameters() const { return this->encryptParameters_ != nullptr;};
        void deleteEncryptParameters() { this->encryptParameters_ = nullptr;};
        inline const DomainTranscodeInfo::EncryptParameters & getEncryptParameters() const { DARABONBA_PTR_GET_CONST(encryptParameters_, DomainTranscodeInfo::EncryptParameters) };
        inline DomainTranscodeInfo::EncryptParameters getEncryptParameters() { DARABONBA_PTR_GET(encryptParameters_, DomainTranscodeInfo::EncryptParameters) };
        inline DomainTranscodeInfo& setEncryptParameters(const DomainTranscodeInfo::EncryptParameters & encryptParameters) { DARABONBA_PTR_SET_VALUE(encryptParameters_, encryptParameters) };
        inline DomainTranscodeInfo& setEncryptParameters(DomainTranscodeInfo::EncryptParameters && encryptParameters) { DARABONBA_PTR_SET_RVALUE(encryptParameters_, encryptParameters) };


        // isLazy Field Functions 
        bool hasIsLazy() const { return this->isLazy_ != nullptr;};
        void deleteIsLazy() { this->isLazy_ = nullptr;};
        inline bool getIsLazy() const { DARABONBA_PTR_GET_DEFAULT(isLazy_, false) };
        inline DomainTranscodeInfo& setIsLazy(bool isLazy) { DARABONBA_PTR_SET_VALUE(isLazy_, isLazy) };


        // transcodeApp Field Functions 
        bool hasTranscodeApp() const { return this->transcodeApp_ != nullptr;};
        void deleteTranscodeApp() { this->transcodeApp_ = nullptr;};
        inline string getTranscodeApp() const { DARABONBA_PTR_GET_DEFAULT(transcodeApp_, "") };
        inline DomainTranscodeInfo& setTranscodeApp(string transcodeApp) { DARABONBA_PTR_SET_VALUE(transcodeApp_, transcodeApp) };


        // transcodeName Field Functions 
        bool hasTranscodeName() const { return this->transcodeName_ != nullptr;};
        void deleteTranscodeName() { this->transcodeName_ = nullptr;};
        inline string getTranscodeName() const { DARABONBA_PTR_GET_DEFAULT(transcodeName_, "") };
        inline DomainTranscodeInfo& setTranscodeName(string transcodeName) { DARABONBA_PTR_SET_VALUE(transcodeName_, transcodeName) };


        // transcodeTemplate Field Functions 
        bool hasTranscodeTemplate() const { return this->transcodeTemplate_ != nullptr;};
        void deleteTranscodeTemplate() { this->transcodeTemplate_ = nullptr;};
        inline string getTranscodeTemplate() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplate_, "") };
        inline DomainTranscodeInfo& setTranscodeTemplate(string transcodeTemplate) { DARABONBA_PTR_SET_VALUE(transcodeTemplate_, transcodeTemplate) };


      protected:
        shared_ptr<DomainTranscodeInfo::CustomTranscodeParameters> customTranscodeParameters_ {};
        shared_ptr<DomainTranscodeInfo::EncryptParameters> encryptParameters_ {};
        shared_ptr<bool> isLazy_ {};
        shared_ptr<string> transcodeApp_ {};
        shared_ptr<string> transcodeName_ {};
        shared_ptr<string> transcodeTemplate_ {};
      };

      virtual bool empty() const override { return this->domainTranscodeInfo_ == nullptr; };
      // domainTranscodeInfo Field Functions 
      bool hasDomainTranscodeInfo() const { return this->domainTranscodeInfo_ != nullptr;};
      void deleteDomainTranscodeInfo() { this->domainTranscodeInfo_ = nullptr;};
      inline const vector<DomainTranscodeList::DomainTranscodeInfo> & getDomainTranscodeInfo() const { DARABONBA_PTR_GET_CONST(domainTranscodeInfo_, vector<DomainTranscodeList::DomainTranscodeInfo>) };
      inline vector<DomainTranscodeList::DomainTranscodeInfo> getDomainTranscodeInfo() { DARABONBA_PTR_GET(domainTranscodeInfo_, vector<DomainTranscodeList::DomainTranscodeInfo>) };
      inline DomainTranscodeList& setDomainTranscodeInfo(const vector<DomainTranscodeList::DomainTranscodeInfo> & domainTranscodeInfo) { DARABONBA_PTR_SET_VALUE(domainTranscodeInfo_, domainTranscodeInfo) };
      inline DomainTranscodeList& setDomainTranscodeInfo(vector<DomainTranscodeList::DomainTranscodeInfo> && domainTranscodeInfo) { DARABONBA_PTR_SET_RVALUE(domainTranscodeInfo_, domainTranscodeInfo) };


    protected:
      shared_ptr<vector<DomainTranscodeList::DomainTranscodeInfo>> domainTranscodeInfo_ {};
    };

    virtual bool empty() const override { return this->domainTranscodeList_ == nullptr
        && this->requestId_ == nullptr; };
    // domainTranscodeList Field Functions 
    bool hasDomainTranscodeList() const { return this->domainTranscodeList_ != nullptr;};
    void deleteDomainTranscodeList() { this->domainTranscodeList_ = nullptr;};
    inline const DescribeLiveStreamTranscodeInfoResponseBody::DomainTranscodeList & getDomainTranscodeList() const { DARABONBA_PTR_GET_CONST(domainTranscodeList_, DescribeLiveStreamTranscodeInfoResponseBody::DomainTranscodeList) };
    inline DescribeLiveStreamTranscodeInfoResponseBody::DomainTranscodeList getDomainTranscodeList() { DARABONBA_PTR_GET(domainTranscodeList_, DescribeLiveStreamTranscodeInfoResponseBody::DomainTranscodeList) };
    inline DescribeLiveStreamTranscodeInfoResponseBody& setDomainTranscodeList(const DescribeLiveStreamTranscodeInfoResponseBody::DomainTranscodeList & domainTranscodeList) { DARABONBA_PTR_SET_VALUE(domainTranscodeList_, domainTranscodeList) };
    inline DescribeLiveStreamTranscodeInfoResponseBody& setDomainTranscodeList(DescribeLiveStreamTranscodeInfoResponseBody::DomainTranscodeList && domainTranscodeList) { DARABONBA_PTR_SET_RVALUE(domainTranscodeList_, domainTranscodeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamTranscodeInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeLiveStreamTranscodeInfoResponseBody::DomainTranscodeList> domainTranscodeList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
