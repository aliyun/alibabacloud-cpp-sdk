// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERLAYOUTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERLAYOUTSRESPONSEBODY_HPP_
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
  class DescribeCasterLayoutsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterLayoutsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Layouts, layouts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterLayoutsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Layouts, layouts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeCasterLayoutsResponseBody() = default ;
    DescribeCasterLayoutsResponseBody(const DescribeCasterLayoutsResponseBody &) = default ;
    DescribeCasterLayoutsResponseBody(DescribeCasterLayoutsResponseBody &&) = default ;
    DescribeCasterLayoutsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterLayoutsResponseBody() = default ;
    DescribeCasterLayoutsResponseBody& operator=(const DescribeCasterLayoutsResponseBody &) = default ;
    DescribeCasterLayoutsResponseBody& operator=(DescribeCasterLayoutsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Layouts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Layouts& obj) { 
        DARABONBA_PTR_TO_JSON(Layout, layout_);
      };
      friend void from_json(const Darabonba::Json& j, Layouts& obj) { 
        DARABONBA_PTR_FROM_JSON(Layout, layout_);
      };
      Layouts() = default ;
      Layouts(const Layouts &) = default ;
      Layouts(Layouts &&) = default ;
      Layouts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Layouts() = default ;
      Layouts& operator=(const Layouts &) = default ;
      Layouts& operator=(Layouts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Layout : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Layout& obj) { 
          DARABONBA_PTR_TO_JSON(AudioLayers, audioLayers_);
          DARABONBA_PTR_TO_JSON(BlendList, blendList_);
          DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
          DARABONBA_PTR_TO_JSON(MixList, mixList_);
          DARABONBA_PTR_TO_JSON(VideoLayers, videoLayers_);
        };
        friend void from_json(const Darabonba::Json& j, Layout& obj) { 
          DARABONBA_PTR_FROM_JSON(AudioLayers, audioLayers_);
          DARABONBA_PTR_FROM_JSON(BlendList, blendList_);
          DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
          DARABONBA_PTR_FROM_JSON(MixList, mixList_);
          DARABONBA_PTR_FROM_JSON(VideoLayers, videoLayers_);
        };
        Layout() = default ;
        Layout(const Layout &) = default ;
        Layout(Layout &&) = default ;
        Layout(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Layout() = default ;
        Layout& operator=(const Layout &) = default ;
        Layout& operator=(Layout &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VideoLayers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VideoLayers& obj) { 
            DARABONBA_PTR_TO_JSON(VideoLayer, videoLayer_);
          };
          friend void from_json(const Darabonba::Json& j, VideoLayers& obj) { 
            DARABONBA_PTR_FROM_JSON(VideoLayer, videoLayer_);
          };
          VideoLayers() = default ;
          VideoLayers(const VideoLayers &) = default ;
          VideoLayers(VideoLayers &&) = default ;
          VideoLayers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VideoLayers() = default ;
          VideoLayers& operator=(const VideoLayers &) = default ;
          VideoLayers& operator=(VideoLayers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class VideoLayer : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VideoLayer& obj) { 
              DARABONBA_PTR_TO_JSON(FillMode, fillMode_);
              DARABONBA_PTR_TO_JSON(FixedDelayDuration, fixedDelayDuration_);
              DARABONBA_PTR_TO_JSON(HeightNormalized, heightNormalized_);
              DARABONBA_PTR_TO_JSON(PositionNormalizeds, positionNormalizeds_);
              DARABONBA_PTR_TO_JSON(PositionRefer, positionRefer_);
              DARABONBA_PTR_TO_JSON(WidthNormalized, widthNormalized_);
            };
            friend void from_json(const Darabonba::Json& j, VideoLayer& obj) { 
              DARABONBA_PTR_FROM_JSON(FillMode, fillMode_);
              DARABONBA_PTR_FROM_JSON(FixedDelayDuration, fixedDelayDuration_);
              DARABONBA_PTR_FROM_JSON(HeightNormalized, heightNormalized_);
              DARABONBA_PTR_FROM_JSON(PositionNormalizeds, positionNormalizeds_);
              DARABONBA_PTR_FROM_JSON(PositionRefer, positionRefer_);
              DARABONBA_PTR_FROM_JSON(WidthNormalized, widthNormalized_);
            };
            VideoLayer() = default ;
            VideoLayer(const VideoLayer &) = default ;
            VideoLayer(VideoLayer &&) = default ;
            VideoLayer(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VideoLayer() = default ;
            VideoLayer& operator=(const VideoLayer &) = default ;
            VideoLayer& operator=(VideoLayer &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class PositionNormalizeds : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const PositionNormalizeds& obj) { 
                DARABONBA_PTR_TO_JSON(Position, position_);
              };
              friend void from_json(const Darabonba::Json& j, PositionNormalizeds& obj) { 
                DARABONBA_PTR_FROM_JSON(Position, position_);
              };
              PositionNormalizeds() = default ;
              PositionNormalizeds(const PositionNormalizeds &) = default ;
              PositionNormalizeds(PositionNormalizeds &&) = default ;
              PositionNormalizeds(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~PositionNormalizeds() = default ;
              PositionNormalizeds& operator=(const PositionNormalizeds &) = default ;
              PositionNormalizeds& operator=(PositionNormalizeds &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->position_ == nullptr; };
              // position Field Functions 
              bool hasPosition() const { return this->position_ != nullptr;};
              void deletePosition() { this->position_ = nullptr;};
              inline const vector<float> & getPosition() const { DARABONBA_PTR_GET_CONST(position_, vector<float>) };
              inline vector<float> getPosition() { DARABONBA_PTR_GET(position_, vector<float>) };
              inline PositionNormalizeds& setPosition(const vector<float> & position) { DARABONBA_PTR_SET_VALUE(position_, position) };
              inline PositionNormalizeds& setPosition(vector<float> && position) { DARABONBA_PTR_SET_RVALUE(position_, position) };


            protected:
              shared_ptr<vector<float>> position_ {};
            };

            virtual bool empty() const override { return this->fillMode_ == nullptr
        && this->fixedDelayDuration_ == nullptr && this->heightNormalized_ == nullptr && this->positionNormalizeds_ == nullptr && this->positionRefer_ == nullptr && this->widthNormalized_ == nullptr; };
            // fillMode Field Functions 
            bool hasFillMode() const { return this->fillMode_ != nullptr;};
            void deleteFillMode() { this->fillMode_ = nullptr;};
            inline string getFillMode() const { DARABONBA_PTR_GET_DEFAULT(fillMode_, "") };
            inline VideoLayer& setFillMode(string fillMode) { DARABONBA_PTR_SET_VALUE(fillMode_, fillMode) };


            // fixedDelayDuration Field Functions 
            bool hasFixedDelayDuration() const { return this->fixedDelayDuration_ != nullptr;};
            void deleteFixedDelayDuration() { this->fixedDelayDuration_ = nullptr;};
            inline int32_t getFixedDelayDuration() const { DARABONBA_PTR_GET_DEFAULT(fixedDelayDuration_, 0) };
            inline VideoLayer& setFixedDelayDuration(int32_t fixedDelayDuration) { DARABONBA_PTR_SET_VALUE(fixedDelayDuration_, fixedDelayDuration) };


            // heightNormalized Field Functions 
            bool hasHeightNormalized() const { return this->heightNormalized_ != nullptr;};
            void deleteHeightNormalized() { this->heightNormalized_ = nullptr;};
            inline float getHeightNormalized() const { DARABONBA_PTR_GET_DEFAULT(heightNormalized_, 0.0) };
            inline VideoLayer& setHeightNormalized(float heightNormalized) { DARABONBA_PTR_SET_VALUE(heightNormalized_, heightNormalized) };


            // positionNormalizeds Field Functions 
            bool hasPositionNormalizeds() const { return this->positionNormalizeds_ != nullptr;};
            void deletePositionNormalizeds() { this->positionNormalizeds_ = nullptr;};
            inline const VideoLayer::PositionNormalizeds & getPositionNormalizeds() const { DARABONBA_PTR_GET_CONST(positionNormalizeds_, VideoLayer::PositionNormalizeds) };
            inline VideoLayer::PositionNormalizeds getPositionNormalizeds() { DARABONBA_PTR_GET(positionNormalizeds_, VideoLayer::PositionNormalizeds) };
            inline VideoLayer& setPositionNormalizeds(const VideoLayer::PositionNormalizeds & positionNormalizeds) { DARABONBA_PTR_SET_VALUE(positionNormalizeds_, positionNormalizeds) };
            inline VideoLayer& setPositionNormalizeds(VideoLayer::PositionNormalizeds && positionNormalizeds) { DARABONBA_PTR_SET_RVALUE(positionNormalizeds_, positionNormalizeds) };


            // positionRefer Field Functions 
            bool hasPositionRefer() const { return this->positionRefer_ != nullptr;};
            void deletePositionRefer() { this->positionRefer_ = nullptr;};
            inline string getPositionRefer() const { DARABONBA_PTR_GET_DEFAULT(positionRefer_, "") };
            inline VideoLayer& setPositionRefer(string positionRefer) { DARABONBA_PTR_SET_VALUE(positionRefer_, positionRefer) };


            // widthNormalized Field Functions 
            bool hasWidthNormalized() const { return this->widthNormalized_ != nullptr;};
            void deleteWidthNormalized() { this->widthNormalized_ = nullptr;};
            inline float getWidthNormalized() const { DARABONBA_PTR_GET_DEFAULT(widthNormalized_, 0.0) };
            inline VideoLayer& setWidthNormalized(float widthNormalized) { DARABONBA_PTR_SET_VALUE(widthNormalized_, widthNormalized) };


          protected:
            shared_ptr<string> fillMode_ {};
            shared_ptr<int32_t> fixedDelayDuration_ {};
            shared_ptr<float> heightNormalized_ {};
            shared_ptr<VideoLayer::PositionNormalizeds> positionNormalizeds_ {};
            shared_ptr<string> positionRefer_ {};
            shared_ptr<float> widthNormalized_ {};
          };

          virtual bool empty() const override { return this->videoLayer_ == nullptr; };
          // videoLayer Field Functions 
          bool hasVideoLayer() const { return this->videoLayer_ != nullptr;};
          void deleteVideoLayer() { this->videoLayer_ = nullptr;};
          inline const vector<VideoLayers::VideoLayer> & getVideoLayer() const { DARABONBA_PTR_GET_CONST(videoLayer_, vector<VideoLayers::VideoLayer>) };
          inline vector<VideoLayers::VideoLayer> getVideoLayer() { DARABONBA_PTR_GET(videoLayer_, vector<VideoLayers::VideoLayer>) };
          inline VideoLayers& setVideoLayer(const vector<VideoLayers::VideoLayer> & videoLayer) { DARABONBA_PTR_SET_VALUE(videoLayer_, videoLayer) };
          inline VideoLayers& setVideoLayer(vector<VideoLayers::VideoLayer> && videoLayer) { DARABONBA_PTR_SET_RVALUE(videoLayer_, videoLayer) };


        protected:
          shared_ptr<vector<VideoLayers::VideoLayer>> videoLayer_ {};
        };

        class MixList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MixList& obj) { 
            DARABONBA_PTR_TO_JSON(LocationId, locationId_);
          };
          friend void from_json(const Darabonba::Json& j, MixList& obj) { 
            DARABONBA_PTR_FROM_JSON(LocationId, locationId_);
          };
          MixList() = default ;
          MixList(const MixList &) = default ;
          MixList(MixList &&) = default ;
          MixList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MixList() = default ;
          MixList& operator=(const MixList &) = default ;
          MixList& operator=(MixList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->locationId_ == nullptr; };
          // locationId Field Functions 
          bool hasLocationId() const { return this->locationId_ != nullptr;};
          void deleteLocationId() { this->locationId_ = nullptr;};
          inline const vector<string> & getLocationId() const { DARABONBA_PTR_GET_CONST(locationId_, vector<string>) };
          inline vector<string> getLocationId() { DARABONBA_PTR_GET(locationId_, vector<string>) };
          inline MixList& setLocationId(const vector<string> & locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };
          inline MixList& setLocationId(vector<string> && locationId) { DARABONBA_PTR_SET_RVALUE(locationId_, locationId) };


        protected:
          shared_ptr<vector<string>> locationId_ {};
        };

        class BlendList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BlendList& obj) { 
            DARABONBA_PTR_TO_JSON(LocationId, locationId_);
          };
          friend void from_json(const Darabonba::Json& j, BlendList& obj) { 
            DARABONBA_PTR_FROM_JSON(LocationId, locationId_);
          };
          BlendList() = default ;
          BlendList(const BlendList &) = default ;
          BlendList(BlendList &&) = default ;
          BlendList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BlendList() = default ;
          BlendList& operator=(const BlendList &) = default ;
          BlendList& operator=(BlendList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->locationId_ == nullptr; };
          // locationId Field Functions 
          bool hasLocationId() const { return this->locationId_ != nullptr;};
          void deleteLocationId() { this->locationId_ = nullptr;};
          inline const vector<string> & getLocationId() const { DARABONBA_PTR_GET_CONST(locationId_, vector<string>) };
          inline vector<string> getLocationId() { DARABONBA_PTR_GET(locationId_, vector<string>) };
          inline BlendList& setLocationId(const vector<string> & locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };
          inline BlendList& setLocationId(vector<string> && locationId) { DARABONBA_PTR_SET_RVALUE(locationId_, locationId) };


        protected:
          shared_ptr<vector<string>> locationId_ {};
        };

        class AudioLayers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AudioLayers& obj) { 
            DARABONBA_PTR_TO_JSON(AudioLayer, audioLayer_);
          };
          friend void from_json(const Darabonba::Json& j, AudioLayers& obj) { 
            DARABONBA_PTR_FROM_JSON(AudioLayer, audioLayer_);
          };
          AudioLayers() = default ;
          AudioLayers(const AudioLayers &) = default ;
          AudioLayers(AudioLayers &&) = default ;
          AudioLayers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AudioLayers() = default ;
          AudioLayers& operator=(const AudioLayers &) = default ;
          AudioLayers& operator=(AudioLayers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AudioLayer : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AudioLayer& obj) { 
              DARABONBA_PTR_TO_JSON(FixedDelayDuration, fixedDelayDuration_);
              DARABONBA_PTR_TO_JSON(ValidChannel, validChannel_);
              DARABONBA_PTR_TO_JSON(VolumeRate, volumeRate_);
            };
            friend void from_json(const Darabonba::Json& j, AudioLayer& obj) { 
              DARABONBA_PTR_FROM_JSON(FixedDelayDuration, fixedDelayDuration_);
              DARABONBA_PTR_FROM_JSON(ValidChannel, validChannel_);
              DARABONBA_PTR_FROM_JSON(VolumeRate, volumeRate_);
            };
            AudioLayer() = default ;
            AudioLayer(const AudioLayer &) = default ;
            AudioLayer(AudioLayer &&) = default ;
            AudioLayer(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AudioLayer() = default ;
            AudioLayer& operator=(const AudioLayer &) = default ;
            AudioLayer& operator=(AudioLayer &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->fixedDelayDuration_ == nullptr
        && this->validChannel_ == nullptr && this->volumeRate_ == nullptr; };
            // fixedDelayDuration Field Functions 
            bool hasFixedDelayDuration() const { return this->fixedDelayDuration_ != nullptr;};
            void deleteFixedDelayDuration() { this->fixedDelayDuration_ = nullptr;};
            inline int32_t getFixedDelayDuration() const { DARABONBA_PTR_GET_DEFAULT(fixedDelayDuration_, 0) };
            inline AudioLayer& setFixedDelayDuration(int32_t fixedDelayDuration) { DARABONBA_PTR_SET_VALUE(fixedDelayDuration_, fixedDelayDuration) };


            // validChannel Field Functions 
            bool hasValidChannel() const { return this->validChannel_ != nullptr;};
            void deleteValidChannel() { this->validChannel_ = nullptr;};
            inline string getValidChannel() const { DARABONBA_PTR_GET_DEFAULT(validChannel_, "") };
            inline AudioLayer& setValidChannel(string validChannel) { DARABONBA_PTR_SET_VALUE(validChannel_, validChannel) };


            // volumeRate Field Functions 
            bool hasVolumeRate() const { return this->volumeRate_ != nullptr;};
            void deleteVolumeRate() { this->volumeRate_ = nullptr;};
            inline float getVolumeRate() const { DARABONBA_PTR_GET_DEFAULT(volumeRate_, 0.0) };
            inline AudioLayer& setVolumeRate(float volumeRate) { DARABONBA_PTR_SET_VALUE(volumeRate_, volumeRate) };


          protected:
            shared_ptr<int32_t> fixedDelayDuration_ {};
            shared_ptr<string> validChannel_ {};
            shared_ptr<float> volumeRate_ {};
          };

          virtual bool empty() const override { return this->audioLayer_ == nullptr; };
          // audioLayer Field Functions 
          bool hasAudioLayer() const { return this->audioLayer_ != nullptr;};
          void deleteAudioLayer() { this->audioLayer_ = nullptr;};
          inline const vector<AudioLayers::AudioLayer> & getAudioLayer() const { DARABONBA_PTR_GET_CONST(audioLayer_, vector<AudioLayers::AudioLayer>) };
          inline vector<AudioLayers::AudioLayer> getAudioLayer() { DARABONBA_PTR_GET(audioLayer_, vector<AudioLayers::AudioLayer>) };
          inline AudioLayers& setAudioLayer(const vector<AudioLayers::AudioLayer> & audioLayer) { DARABONBA_PTR_SET_VALUE(audioLayer_, audioLayer) };
          inline AudioLayers& setAudioLayer(vector<AudioLayers::AudioLayer> && audioLayer) { DARABONBA_PTR_SET_RVALUE(audioLayer_, audioLayer) };


        protected:
          shared_ptr<vector<AudioLayers::AudioLayer>> audioLayer_ {};
        };

        virtual bool empty() const override { return this->audioLayers_ == nullptr
        && this->blendList_ == nullptr && this->layoutId_ == nullptr && this->mixList_ == nullptr && this->videoLayers_ == nullptr; };
        // audioLayers Field Functions 
        bool hasAudioLayers() const { return this->audioLayers_ != nullptr;};
        void deleteAudioLayers() { this->audioLayers_ = nullptr;};
        inline const Layout::AudioLayers & getAudioLayers() const { DARABONBA_PTR_GET_CONST(audioLayers_, Layout::AudioLayers) };
        inline Layout::AudioLayers getAudioLayers() { DARABONBA_PTR_GET(audioLayers_, Layout::AudioLayers) };
        inline Layout& setAudioLayers(const Layout::AudioLayers & audioLayers) { DARABONBA_PTR_SET_VALUE(audioLayers_, audioLayers) };
        inline Layout& setAudioLayers(Layout::AudioLayers && audioLayers) { DARABONBA_PTR_SET_RVALUE(audioLayers_, audioLayers) };


        // blendList Field Functions 
        bool hasBlendList() const { return this->blendList_ != nullptr;};
        void deleteBlendList() { this->blendList_ = nullptr;};
        inline const Layout::BlendList & getBlendList() const { DARABONBA_PTR_GET_CONST(blendList_, Layout::BlendList) };
        inline Layout::BlendList getBlendList() { DARABONBA_PTR_GET(blendList_, Layout::BlendList) };
        inline Layout& setBlendList(const Layout::BlendList & blendList) { DARABONBA_PTR_SET_VALUE(blendList_, blendList) };
        inline Layout& setBlendList(Layout::BlendList && blendList) { DARABONBA_PTR_SET_RVALUE(blendList_, blendList) };


        // layoutId Field Functions 
        bool hasLayoutId() const { return this->layoutId_ != nullptr;};
        void deleteLayoutId() { this->layoutId_ = nullptr;};
        inline string getLayoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
        inline Layout& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


        // mixList Field Functions 
        bool hasMixList() const { return this->mixList_ != nullptr;};
        void deleteMixList() { this->mixList_ = nullptr;};
        inline const Layout::MixList & getMixList() const { DARABONBA_PTR_GET_CONST(mixList_, Layout::MixList) };
        inline Layout::MixList getMixList() { DARABONBA_PTR_GET(mixList_, Layout::MixList) };
        inline Layout& setMixList(const Layout::MixList & mixList) { DARABONBA_PTR_SET_VALUE(mixList_, mixList) };
        inline Layout& setMixList(Layout::MixList && mixList) { DARABONBA_PTR_SET_RVALUE(mixList_, mixList) };


        // videoLayers Field Functions 
        bool hasVideoLayers() const { return this->videoLayers_ != nullptr;};
        void deleteVideoLayers() { this->videoLayers_ = nullptr;};
        inline const Layout::VideoLayers & getVideoLayers() const { DARABONBA_PTR_GET_CONST(videoLayers_, Layout::VideoLayers) };
        inline Layout::VideoLayers getVideoLayers() { DARABONBA_PTR_GET(videoLayers_, Layout::VideoLayers) };
        inline Layout& setVideoLayers(const Layout::VideoLayers & videoLayers) { DARABONBA_PTR_SET_VALUE(videoLayers_, videoLayers) };
        inline Layout& setVideoLayers(Layout::VideoLayers && videoLayers) { DARABONBA_PTR_SET_RVALUE(videoLayers_, videoLayers) };


      protected:
        shared_ptr<Layout::AudioLayers> audioLayers_ {};
        shared_ptr<Layout::BlendList> blendList_ {};
        shared_ptr<string> layoutId_ {};
        shared_ptr<Layout::MixList> mixList_ {};
        shared_ptr<Layout::VideoLayers> videoLayers_ {};
      };

      virtual bool empty() const override { return this->layout_ == nullptr; };
      // layout Field Functions 
      bool hasLayout() const { return this->layout_ != nullptr;};
      void deleteLayout() { this->layout_ = nullptr;};
      inline const vector<Layouts::Layout> & getLayout() const { DARABONBA_PTR_GET_CONST(layout_, vector<Layouts::Layout>) };
      inline vector<Layouts::Layout> getLayout() { DARABONBA_PTR_GET(layout_, vector<Layouts::Layout>) };
      inline Layouts& setLayout(const vector<Layouts::Layout> & layout) { DARABONBA_PTR_SET_VALUE(layout_, layout) };
      inline Layouts& setLayout(vector<Layouts::Layout> && layout) { DARABONBA_PTR_SET_RVALUE(layout_, layout) };


    protected:
      shared_ptr<vector<Layouts::Layout>> layout_ {};
    };

    virtual bool empty() const override { return this->layouts_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // layouts Field Functions 
    bool hasLayouts() const { return this->layouts_ != nullptr;};
    void deleteLayouts() { this->layouts_ = nullptr;};
    inline const DescribeCasterLayoutsResponseBody::Layouts & getLayouts() const { DARABONBA_PTR_GET_CONST(layouts_, DescribeCasterLayoutsResponseBody::Layouts) };
    inline DescribeCasterLayoutsResponseBody::Layouts getLayouts() { DARABONBA_PTR_GET(layouts_, DescribeCasterLayoutsResponseBody::Layouts) };
    inline DescribeCasterLayoutsResponseBody& setLayouts(const DescribeCasterLayoutsResponseBody::Layouts & layouts) { DARABONBA_PTR_SET_VALUE(layouts_, layouts) };
    inline DescribeCasterLayoutsResponseBody& setLayouts(DescribeCasterLayoutsResponseBody::Layouts && layouts) { DARABONBA_PTR_SET_RVALUE(layouts_, layouts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCasterLayoutsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeCasterLayoutsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<DescribeCasterLayoutsResponseBody::Layouts> layouts_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
