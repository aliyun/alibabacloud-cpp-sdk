// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class RecognizeVideoCastCrewListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVideoCastCrewListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVideoCastCrewListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RecognizeVideoCastCrewListResponseBody() = default ;
    RecognizeVideoCastCrewListResponseBody(const RecognizeVideoCastCrewListResponseBody &) = default ;
    RecognizeVideoCastCrewListResponseBody(RecognizeVideoCastCrewListResponseBody &&) = default ;
    RecognizeVideoCastCrewListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVideoCastCrewListResponseBody() = default ;
    RecognizeVideoCastCrewListResponseBody& operator=(const RecognizeVideoCastCrewListResponseBody &) = default ;
    RecognizeVideoCastCrewListResponseBody& operator=(RecognizeVideoCastCrewListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CastResults, castResults_);
        DARABONBA_PTR_TO_JSON(OcrResults, ocrResults_);
        DARABONBA_PTR_TO_JSON(OcrResultsUrl, ocrResultsUrl_);
        DARABONBA_PTR_TO_JSON(OcrVideoResultsUrl, ocrVideoResultsUrl_);
        DARABONBA_PTR_TO_JSON(SubtitlesResults, subtitlesResults_);
        DARABONBA_PTR_TO_JSON(VideoOcrResults, videoOcrResults_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CastResults, castResults_);
        DARABONBA_PTR_FROM_JSON(OcrResults, ocrResults_);
        DARABONBA_PTR_FROM_JSON(OcrResultsUrl, ocrResultsUrl_);
        DARABONBA_PTR_FROM_JSON(OcrVideoResultsUrl, ocrVideoResultsUrl_);
        DARABONBA_PTR_FROM_JSON(SubtitlesResults, subtitlesResults_);
        DARABONBA_PTR_FROM_JSON(VideoOcrResults, videoOcrResults_);
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
      class VideoOcrResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VideoOcrResults& obj) { 
          DARABONBA_PTR_TO_JSON(DetailInfo, detailInfo_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, VideoOcrResults& obj) { 
          DARABONBA_PTR_FROM_JSON(DetailInfo, detailInfo_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        VideoOcrResults() = default ;
        VideoOcrResults(const VideoOcrResults &) = default ;
        VideoOcrResults(VideoOcrResults &&) = default ;
        VideoOcrResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VideoOcrResults() = default ;
        VideoOcrResults& operator=(const VideoOcrResults &) = default ;
        VideoOcrResults& operator=(VideoOcrResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DetailInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DetailInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Boxes, boxes_);
            DARABONBA_PTR_TO_JSON(Position, position_);
            DARABONBA_PTR_TO_JSON(Score, score_);
            DARABONBA_PTR_TO_JSON(Text, text_);
            DARABONBA_PTR_TO_JSON(TextType, textType_);
          };
          friend void from_json(const Darabonba::Json& j, DetailInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Boxes, boxes_);
            DARABONBA_PTR_FROM_JSON(Position, position_);
            DARABONBA_PTR_FROM_JSON(Score, score_);
            DARABONBA_PTR_FROM_JSON(Text, text_);
            DARABONBA_PTR_FROM_JSON(TextType, textType_);
          };
          DetailInfo() = default ;
          DetailInfo(const DetailInfo &) = default ;
          DetailInfo(DetailInfo &&) = default ;
          DetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DetailInfo() = default ;
          DetailInfo& operator=(const DetailInfo &) = default ;
          DetailInfo& operator=(DetailInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Position : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Position& obj) { 
              DARABONBA_PTR_TO_JSON(X, x_);
              DARABONBA_PTR_TO_JSON(Y, y_);
            };
            friend void from_json(const Darabonba::Json& j, Position& obj) { 
              DARABONBA_PTR_FROM_JSON(X, x_);
              DARABONBA_PTR_FROM_JSON(Y, y_);
            };
            Position() = default ;
            Position(const Position &) = default ;
            Position(Position &&) = default ;
            Position(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Position() = default ;
            Position& operator=(const Position &) = default ;
            Position& operator=(Position &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->x_ == nullptr
        && this->y_ == nullptr; };
            // x Field Functions 
            bool hasX() const { return this->x_ != nullptr;};
            void deleteX() { this->x_ = nullptr;};
            inline int64_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0L) };
            inline Position& setX(int64_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


            // y Field Functions 
            bool hasY() const { return this->y_ != nullptr;};
            void deleteY() { this->y_ = nullptr;};
            inline int64_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0L) };
            inline Position& setY(int64_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


          protected:
            shared_ptr<int64_t> x_ {};
            shared_ptr<int64_t> y_ {};
          };

          virtual bool empty() const override { return this->boxes_ == nullptr
        && this->position_ == nullptr && this->score_ == nullptr && this->text_ == nullptr && this->textType_ == nullptr; };
          // boxes Field Functions 
          bool hasBoxes() const { return this->boxes_ != nullptr;};
          void deleteBoxes() { this->boxes_ = nullptr;};
          inline const vector<int64_t> & getBoxes() const { DARABONBA_PTR_GET_CONST(boxes_, vector<int64_t>) };
          inline vector<int64_t> getBoxes() { DARABONBA_PTR_GET(boxes_, vector<int64_t>) };
          inline DetailInfo& setBoxes(const vector<int64_t> & boxes) { DARABONBA_PTR_SET_VALUE(boxes_, boxes) };
          inline DetailInfo& setBoxes(vector<int64_t> && boxes) { DARABONBA_PTR_SET_RVALUE(boxes_, boxes) };


          // position Field Functions 
          bool hasPosition() const { return this->position_ != nullptr;};
          void deletePosition() { this->position_ = nullptr;};
          inline const vector<DetailInfo::Position> & getPosition() const { DARABONBA_PTR_GET_CONST(position_, vector<DetailInfo::Position>) };
          inline vector<DetailInfo::Position> getPosition() { DARABONBA_PTR_GET(position_, vector<DetailInfo::Position>) };
          inline DetailInfo& setPosition(const vector<DetailInfo::Position> & position) { DARABONBA_PTR_SET_VALUE(position_, position) };
          inline DetailInfo& setPosition(vector<DetailInfo::Position> && position) { DARABONBA_PTR_SET_RVALUE(position_, position) };


          // score Field Functions 
          bool hasScore() const { return this->score_ != nullptr;};
          void deleteScore() { this->score_ = nullptr;};
          inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
          inline DetailInfo& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline DetailInfo& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


          // textType Field Functions 
          bool hasTextType() const { return this->textType_ != nullptr;};
          void deleteTextType() { this->textType_ = nullptr;};
          inline int64_t getTextType() const { DARABONBA_PTR_GET_DEFAULT(textType_, 0L) };
          inline DetailInfo& setTextType(int64_t textType) { DARABONBA_PTR_SET_VALUE(textType_, textType) };


        protected:
          shared_ptr<vector<int64_t>> boxes_ {};
          shared_ptr<vector<DetailInfo::Position>> position_ {};
          shared_ptr<float> score_ {};
          shared_ptr<string> text_ {};
          shared_ptr<int64_t> textType_ {};
        };

        virtual bool empty() const override { return this->detailInfo_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr; };
        // detailInfo Field Functions 
        bool hasDetailInfo() const { return this->detailInfo_ != nullptr;};
        void deleteDetailInfo() { this->detailInfo_ = nullptr;};
        inline const vector<VideoOcrResults::DetailInfo> & getDetailInfo() const { DARABONBA_PTR_GET_CONST(detailInfo_, vector<VideoOcrResults::DetailInfo>) };
        inline vector<VideoOcrResults::DetailInfo> getDetailInfo() { DARABONBA_PTR_GET(detailInfo_, vector<VideoOcrResults::DetailInfo>) };
        inline VideoOcrResults& setDetailInfo(const vector<VideoOcrResults::DetailInfo> & detailInfo) { DARABONBA_PTR_SET_VALUE(detailInfo_, detailInfo) };
        inline VideoOcrResults& setDetailInfo(vector<VideoOcrResults::DetailInfo> && detailInfo) { DARABONBA_PTR_SET_RVALUE(detailInfo_, detailInfo) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline float getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0.0) };
        inline VideoOcrResults& setEndTime(float endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline float getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
        inline VideoOcrResults& setStartTime(float startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<vector<VideoOcrResults::DetailInfo>> detailInfo_ {};
        shared_ptr<float> endTime_ {};
        shared_ptr<float> startTime_ {};
      };

      class SubtitlesResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubtitlesResults& obj) { 
          DARABONBA_PTR_TO_JSON(SubtitlesAllResults, subtitlesAllResults_);
          DARABONBA_PTR_TO_JSON(SubtitlesAllResultsUrl, subtitlesAllResultsUrl_);
          DARABONBA_PTR_TO_JSON(SubtitlesChineseResults, subtitlesChineseResults_);
          DARABONBA_PTR_TO_JSON(SubtitlesChineseResultsUrl, subtitlesChineseResultsUrl_);
          DARABONBA_ANY_TO_JSON(SubtitlesEnglishResults, subtitlesEnglishResults_);
          DARABONBA_PTR_TO_JSON(SubtitlesEnglishResultsUrl, subtitlesEnglishResultsUrl_);
        };
        friend void from_json(const Darabonba::Json& j, SubtitlesResults& obj) { 
          DARABONBA_PTR_FROM_JSON(SubtitlesAllResults, subtitlesAllResults_);
          DARABONBA_PTR_FROM_JSON(SubtitlesAllResultsUrl, subtitlesAllResultsUrl_);
          DARABONBA_PTR_FROM_JSON(SubtitlesChineseResults, subtitlesChineseResults_);
          DARABONBA_PTR_FROM_JSON(SubtitlesChineseResultsUrl, subtitlesChineseResultsUrl_);
          DARABONBA_ANY_FROM_JSON(SubtitlesEnglishResults, subtitlesEnglishResults_);
          DARABONBA_PTR_FROM_JSON(SubtitlesEnglishResultsUrl, subtitlesEnglishResultsUrl_);
        };
        SubtitlesResults() = default ;
        SubtitlesResults(const SubtitlesResults &) = default ;
        SubtitlesResults(SubtitlesResults &&) = default ;
        SubtitlesResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubtitlesResults() = default ;
        SubtitlesResults& operator=(const SubtitlesResults &) = default ;
        SubtitlesResults& operator=(SubtitlesResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->subtitlesAllResults_ == nullptr
        && this->subtitlesAllResultsUrl_ == nullptr && this->subtitlesChineseResults_ == nullptr && this->subtitlesChineseResultsUrl_ == nullptr && this->subtitlesEnglishResults_ == nullptr && this->subtitlesEnglishResultsUrl_ == nullptr; };
        // subtitlesAllResults Field Functions 
        bool hasSubtitlesAllResults() const { return this->subtitlesAllResults_ != nullptr;};
        void deleteSubtitlesAllResults() { this->subtitlesAllResults_ = nullptr;};
        inline const map<string, string> & getSubtitlesAllResults() const { DARABONBA_PTR_GET_CONST(subtitlesAllResults_, map<string, string>) };
        inline map<string, string> getSubtitlesAllResults() { DARABONBA_PTR_GET(subtitlesAllResults_, map<string, string>) };
        inline SubtitlesResults& setSubtitlesAllResults(const map<string, string> & subtitlesAllResults) { DARABONBA_PTR_SET_VALUE(subtitlesAllResults_, subtitlesAllResults) };
        inline SubtitlesResults& setSubtitlesAllResults(map<string, string> && subtitlesAllResults) { DARABONBA_PTR_SET_RVALUE(subtitlesAllResults_, subtitlesAllResults) };


        // subtitlesAllResultsUrl Field Functions 
        bool hasSubtitlesAllResultsUrl() const { return this->subtitlesAllResultsUrl_ != nullptr;};
        void deleteSubtitlesAllResultsUrl() { this->subtitlesAllResultsUrl_ = nullptr;};
        inline string getSubtitlesAllResultsUrl() const { DARABONBA_PTR_GET_DEFAULT(subtitlesAllResultsUrl_, "") };
        inline SubtitlesResults& setSubtitlesAllResultsUrl(string subtitlesAllResultsUrl) { DARABONBA_PTR_SET_VALUE(subtitlesAllResultsUrl_, subtitlesAllResultsUrl) };


        // subtitlesChineseResults Field Functions 
        bool hasSubtitlesChineseResults() const { return this->subtitlesChineseResults_ != nullptr;};
        void deleteSubtitlesChineseResults() { this->subtitlesChineseResults_ = nullptr;};
        inline const map<string, string> & getSubtitlesChineseResults() const { DARABONBA_PTR_GET_CONST(subtitlesChineseResults_, map<string, string>) };
        inline map<string, string> getSubtitlesChineseResults() { DARABONBA_PTR_GET(subtitlesChineseResults_, map<string, string>) };
        inline SubtitlesResults& setSubtitlesChineseResults(const map<string, string> & subtitlesChineseResults) { DARABONBA_PTR_SET_VALUE(subtitlesChineseResults_, subtitlesChineseResults) };
        inline SubtitlesResults& setSubtitlesChineseResults(map<string, string> && subtitlesChineseResults) { DARABONBA_PTR_SET_RVALUE(subtitlesChineseResults_, subtitlesChineseResults) };


        // subtitlesChineseResultsUrl Field Functions 
        bool hasSubtitlesChineseResultsUrl() const { return this->subtitlesChineseResultsUrl_ != nullptr;};
        void deleteSubtitlesChineseResultsUrl() { this->subtitlesChineseResultsUrl_ = nullptr;};
        inline string getSubtitlesChineseResultsUrl() const { DARABONBA_PTR_GET_DEFAULT(subtitlesChineseResultsUrl_, "") };
        inline SubtitlesResults& setSubtitlesChineseResultsUrl(string subtitlesChineseResultsUrl) { DARABONBA_PTR_SET_VALUE(subtitlesChineseResultsUrl_, subtitlesChineseResultsUrl) };


        // subtitlesEnglishResults Field Functions 
        bool hasSubtitlesEnglishResults() const { return this->subtitlesEnglishResults_ != nullptr;};
        void deleteSubtitlesEnglishResults() { this->subtitlesEnglishResults_ = nullptr;};
        inline         const Darabonba::Json & getSubtitlesEnglishResults() const { DARABONBA_GET(subtitlesEnglishResults_) };
        Darabonba::Json & getSubtitlesEnglishResults() { DARABONBA_GET(subtitlesEnglishResults_) };
        inline SubtitlesResults& setSubtitlesEnglishResults(const Darabonba::Json & subtitlesEnglishResults) { DARABONBA_SET_VALUE(subtitlesEnglishResults_, subtitlesEnglishResults) };
        inline SubtitlesResults& setSubtitlesEnglishResults(Darabonba::Json && subtitlesEnglishResults) { DARABONBA_SET_RVALUE(subtitlesEnglishResults_, subtitlesEnglishResults) };


        // subtitlesEnglishResultsUrl Field Functions 
        bool hasSubtitlesEnglishResultsUrl() const { return this->subtitlesEnglishResultsUrl_ != nullptr;};
        void deleteSubtitlesEnglishResultsUrl() { this->subtitlesEnglishResultsUrl_ = nullptr;};
        inline string getSubtitlesEnglishResultsUrl() const { DARABONBA_PTR_GET_DEFAULT(subtitlesEnglishResultsUrl_, "") };
        inline SubtitlesResults& setSubtitlesEnglishResultsUrl(string subtitlesEnglishResultsUrl) { DARABONBA_PTR_SET_VALUE(subtitlesEnglishResultsUrl_, subtitlesEnglishResultsUrl) };


      protected:
        shared_ptr<map<string, string>> subtitlesAllResults_ {};
        shared_ptr<string> subtitlesAllResultsUrl_ {};
        shared_ptr<map<string, string>> subtitlesChineseResults_ {};
        shared_ptr<string> subtitlesChineseResultsUrl_ {};
        Darabonba::Json subtitlesEnglishResults_ {};
        shared_ptr<string> subtitlesEnglishResultsUrl_ {};
      };

      class OcrResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OcrResults& obj) { 
          DARABONBA_PTR_TO_JSON(DetailInfo, detailInfo_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, OcrResults& obj) { 
          DARABONBA_PTR_FROM_JSON(DetailInfo, detailInfo_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        OcrResults() = default ;
        OcrResults(const OcrResults &) = default ;
        OcrResults(OcrResults &&) = default ;
        OcrResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OcrResults() = default ;
        OcrResults& operator=(const OcrResults &) = default ;
        OcrResults& operator=(OcrResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DetailInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DetailInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Boxes, boxes_);
            DARABONBA_PTR_TO_JSON(CharProbs, charProbs_);
            DARABONBA_PTR_TO_JSON(FrameIndex, frameIndex_);
            DARABONBA_PTR_TO_JSON(Position, position_);
            DARABONBA_PTR_TO_JSON(Score, score_);
            DARABONBA_PTR_TO_JSON(Text, text_);
            DARABONBA_PTR_TO_JSON(TextProb, textProb_);
            DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
            DARABONBA_PTR_TO_JSON(TrackId, trackId_);
          };
          friend void from_json(const Darabonba::Json& j, DetailInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Boxes, boxes_);
            DARABONBA_PTR_FROM_JSON(CharProbs, charProbs_);
            DARABONBA_PTR_FROM_JSON(FrameIndex, frameIndex_);
            DARABONBA_PTR_FROM_JSON(Position, position_);
            DARABONBA_PTR_FROM_JSON(Score, score_);
            DARABONBA_PTR_FROM_JSON(Text, text_);
            DARABONBA_PTR_FROM_JSON(TextProb, textProb_);
            DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
            DARABONBA_PTR_FROM_JSON(TrackId, trackId_);
          };
          DetailInfo() = default ;
          DetailInfo(const DetailInfo &) = default ;
          DetailInfo(DetailInfo &&) = default ;
          DetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DetailInfo() = default ;
          DetailInfo& operator=(const DetailInfo &) = default ;
          DetailInfo& operator=(DetailInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Position : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Position& obj) { 
              DARABONBA_PTR_TO_JSON(X, x_);
              DARABONBA_PTR_TO_JSON(Y, y_);
            };
            friend void from_json(const Darabonba::Json& j, Position& obj) { 
              DARABONBA_PTR_FROM_JSON(X, x_);
              DARABONBA_PTR_FROM_JSON(Y, y_);
            };
            Position() = default ;
            Position(const Position &) = default ;
            Position(Position &&) = default ;
            Position(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Position() = default ;
            Position& operator=(const Position &) = default ;
            Position& operator=(Position &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->x_ == nullptr
        && this->y_ == nullptr; };
            // x Field Functions 
            bool hasX() const { return this->x_ != nullptr;};
            void deleteX() { this->x_ = nullptr;};
            inline int64_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0L) };
            inline Position& setX(int64_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


            // y Field Functions 
            bool hasY() const { return this->y_ != nullptr;};
            void deleteY() { this->y_ = nullptr;};
            inline int64_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0L) };
            inline Position& setY(int64_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


          protected:
            shared_ptr<int64_t> x_ {};
            shared_ptr<int64_t> y_ {};
          };

          virtual bool empty() const override { return this->boxes_ == nullptr
        && this->charProbs_ == nullptr && this->frameIndex_ == nullptr && this->position_ == nullptr && this->score_ == nullptr && this->text_ == nullptr
        && this->textProb_ == nullptr && this->timeStamp_ == nullptr && this->trackId_ == nullptr; };
          // boxes Field Functions 
          bool hasBoxes() const { return this->boxes_ != nullptr;};
          void deleteBoxes() { this->boxes_ = nullptr;};
          inline const vector<int32_t> & getBoxes() const { DARABONBA_PTR_GET_CONST(boxes_, vector<int32_t>) };
          inline vector<int32_t> getBoxes() { DARABONBA_PTR_GET(boxes_, vector<int32_t>) };
          inline DetailInfo& setBoxes(const vector<int32_t> & boxes) { DARABONBA_PTR_SET_VALUE(boxes_, boxes) };
          inline DetailInfo& setBoxes(vector<int32_t> && boxes) { DARABONBA_PTR_SET_RVALUE(boxes_, boxes) };


          // charProbs Field Functions 
          bool hasCharProbs() const { return this->charProbs_ != nullptr;};
          void deleteCharProbs() { this->charProbs_ = nullptr;};
          inline const vector<vector<float>> & getCharProbs() const { DARABONBA_PTR_GET_CONST(charProbs_, vector<vector<float>>) };
          inline vector<vector<float>> getCharProbs() { DARABONBA_PTR_GET(charProbs_, vector<vector<float>>) };
          inline DetailInfo& setCharProbs(const vector<vector<float>> & charProbs) { DARABONBA_PTR_SET_VALUE(charProbs_, charProbs) };
          inline DetailInfo& setCharProbs(vector<vector<float>> && charProbs) { DARABONBA_PTR_SET_RVALUE(charProbs_, charProbs) };


          // frameIndex Field Functions 
          bool hasFrameIndex() const { return this->frameIndex_ != nullptr;};
          void deleteFrameIndex() { this->frameIndex_ = nullptr;};
          inline int64_t getFrameIndex() const { DARABONBA_PTR_GET_DEFAULT(frameIndex_, 0L) };
          inline DetailInfo& setFrameIndex(int64_t frameIndex) { DARABONBA_PTR_SET_VALUE(frameIndex_, frameIndex) };


          // position Field Functions 
          bool hasPosition() const { return this->position_ != nullptr;};
          void deletePosition() { this->position_ = nullptr;};
          inline const vector<DetailInfo::Position> & getPosition() const { DARABONBA_PTR_GET_CONST(position_, vector<DetailInfo::Position>) };
          inline vector<DetailInfo::Position> getPosition() { DARABONBA_PTR_GET(position_, vector<DetailInfo::Position>) };
          inline DetailInfo& setPosition(const vector<DetailInfo::Position> & position) { DARABONBA_PTR_SET_VALUE(position_, position) };
          inline DetailInfo& setPosition(vector<DetailInfo::Position> && position) { DARABONBA_PTR_SET_RVALUE(position_, position) };


          // score Field Functions 
          bool hasScore() const { return this->score_ != nullptr;};
          void deleteScore() { this->score_ = nullptr;};
          inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
          inline DetailInfo& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline DetailInfo& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


          // textProb Field Functions 
          bool hasTextProb() const { return this->textProb_ != nullptr;};
          void deleteTextProb() { this->textProb_ = nullptr;};
          inline float getTextProb() const { DARABONBA_PTR_GET_DEFAULT(textProb_, 0.0) };
          inline DetailInfo& setTextProb(float textProb) { DARABONBA_PTR_SET_VALUE(textProb_, textProb) };


          // timeStamp Field Functions 
          bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
          void deleteTimeStamp() { this->timeStamp_ = nullptr;};
          inline float getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0.0) };
          inline DetailInfo& setTimeStamp(float timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


          // trackId Field Functions 
          bool hasTrackId() const { return this->trackId_ != nullptr;};
          void deleteTrackId() { this->trackId_ = nullptr;};
          inline int64_t getTrackId() const { DARABONBA_PTR_GET_DEFAULT(trackId_, 0L) };
          inline DetailInfo& setTrackId(int64_t trackId) { DARABONBA_PTR_SET_VALUE(trackId_, trackId) };


        protected:
          shared_ptr<vector<int32_t>> boxes_ {};
          shared_ptr<vector<vector<float>>> charProbs_ {};
          shared_ptr<int64_t> frameIndex_ {};
          shared_ptr<vector<DetailInfo::Position>> position_ {};
          shared_ptr<float> score_ {};
          shared_ptr<string> text_ {};
          shared_ptr<float> textProb_ {};
          shared_ptr<float> timeStamp_ {};
          shared_ptr<int64_t> trackId_ {};
        };

        virtual bool empty() const override { return this->detailInfo_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr; };
        // detailInfo Field Functions 
        bool hasDetailInfo() const { return this->detailInfo_ != nullptr;};
        void deleteDetailInfo() { this->detailInfo_ = nullptr;};
        inline const vector<OcrResults::DetailInfo> & getDetailInfo() const { DARABONBA_PTR_GET_CONST(detailInfo_, vector<OcrResults::DetailInfo>) };
        inline vector<OcrResults::DetailInfo> getDetailInfo() { DARABONBA_PTR_GET(detailInfo_, vector<OcrResults::DetailInfo>) };
        inline OcrResults& setDetailInfo(const vector<OcrResults::DetailInfo> & detailInfo) { DARABONBA_PTR_SET_VALUE(detailInfo_, detailInfo) };
        inline OcrResults& setDetailInfo(vector<OcrResults::DetailInfo> && detailInfo) { DARABONBA_PTR_SET_RVALUE(detailInfo_, detailInfo) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline float getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0.0) };
        inline OcrResults& setEndTime(float endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline float getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
        inline OcrResults& setStartTime(float startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<vector<OcrResults::DetailInfo>> detailInfo_ {};
        shared_ptr<float> endTime_ {};
        shared_ptr<float> startTime_ {};
      };

      class CastResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CastResults& obj) { 
          DARABONBA_PTR_TO_JSON(DetailInfo, detailInfo_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, CastResults& obj) { 
          DARABONBA_PTR_FROM_JSON(DetailInfo, detailInfo_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        CastResults() = default ;
        CastResults(const CastResults &) = default ;
        CastResults(CastResults &&) = default ;
        CastResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CastResults() = default ;
        CastResults& operator=(const CastResults &) = default ;
        CastResults& operator=(CastResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->detailInfo_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr; };
        // detailInfo Field Functions 
        bool hasDetailInfo() const { return this->detailInfo_ != nullptr;};
        void deleteDetailInfo() { this->detailInfo_ = nullptr;};
        inline const map<string, string> & getDetailInfo() const { DARABONBA_PTR_GET_CONST(detailInfo_, map<string, string>) };
        inline map<string, string> getDetailInfo() { DARABONBA_PTR_GET(detailInfo_, map<string, string>) };
        inline CastResults& setDetailInfo(const map<string, string> & detailInfo) { DARABONBA_PTR_SET_VALUE(detailInfo_, detailInfo) };
        inline CastResults& setDetailInfo(map<string, string> && detailInfo) { DARABONBA_PTR_SET_RVALUE(detailInfo_, detailInfo) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline float getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0.0) };
        inline CastResults& setEndTime(float endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline float getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
        inline CastResults& setStartTime(float startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<map<string, string>> detailInfo_ {};
        shared_ptr<float> endTime_ {};
        shared_ptr<float> startTime_ {};
      };

      virtual bool empty() const override { return this->castResults_ == nullptr
        && this->ocrResults_ == nullptr && this->ocrResultsUrl_ == nullptr && this->ocrVideoResultsUrl_ == nullptr && this->subtitlesResults_ == nullptr && this->videoOcrResults_ == nullptr; };
      // castResults Field Functions 
      bool hasCastResults() const { return this->castResults_ != nullptr;};
      void deleteCastResults() { this->castResults_ = nullptr;};
      inline const vector<Data::CastResults> & getCastResults() const { DARABONBA_PTR_GET_CONST(castResults_, vector<Data::CastResults>) };
      inline vector<Data::CastResults> getCastResults() { DARABONBA_PTR_GET(castResults_, vector<Data::CastResults>) };
      inline Data& setCastResults(const vector<Data::CastResults> & castResults) { DARABONBA_PTR_SET_VALUE(castResults_, castResults) };
      inline Data& setCastResults(vector<Data::CastResults> && castResults) { DARABONBA_PTR_SET_RVALUE(castResults_, castResults) };


      // ocrResults Field Functions 
      bool hasOcrResults() const { return this->ocrResults_ != nullptr;};
      void deleteOcrResults() { this->ocrResults_ = nullptr;};
      inline const vector<Data::OcrResults> & getOcrResults() const { DARABONBA_PTR_GET_CONST(ocrResults_, vector<Data::OcrResults>) };
      inline vector<Data::OcrResults> getOcrResults() { DARABONBA_PTR_GET(ocrResults_, vector<Data::OcrResults>) };
      inline Data& setOcrResults(const vector<Data::OcrResults> & ocrResults) { DARABONBA_PTR_SET_VALUE(ocrResults_, ocrResults) };
      inline Data& setOcrResults(vector<Data::OcrResults> && ocrResults) { DARABONBA_PTR_SET_RVALUE(ocrResults_, ocrResults) };


      // ocrResultsUrl Field Functions 
      bool hasOcrResultsUrl() const { return this->ocrResultsUrl_ != nullptr;};
      void deleteOcrResultsUrl() { this->ocrResultsUrl_ = nullptr;};
      inline string getOcrResultsUrl() const { DARABONBA_PTR_GET_DEFAULT(ocrResultsUrl_, "") };
      inline Data& setOcrResultsUrl(string ocrResultsUrl) { DARABONBA_PTR_SET_VALUE(ocrResultsUrl_, ocrResultsUrl) };


      // ocrVideoResultsUrl Field Functions 
      bool hasOcrVideoResultsUrl() const { return this->ocrVideoResultsUrl_ != nullptr;};
      void deleteOcrVideoResultsUrl() { this->ocrVideoResultsUrl_ = nullptr;};
      inline string getOcrVideoResultsUrl() const { DARABONBA_PTR_GET_DEFAULT(ocrVideoResultsUrl_, "") };
      inline Data& setOcrVideoResultsUrl(string ocrVideoResultsUrl) { DARABONBA_PTR_SET_VALUE(ocrVideoResultsUrl_, ocrVideoResultsUrl) };


      // subtitlesResults Field Functions 
      bool hasSubtitlesResults() const { return this->subtitlesResults_ != nullptr;};
      void deleteSubtitlesResults() { this->subtitlesResults_ = nullptr;};
      inline const vector<Data::SubtitlesResults> & getSubtitlesResults() const { DARABONBA_PTR_GET_CONST(subtitlesResults_, vector<Data::SubtitlesResults>) };
      inline vector<Data::SubtitlesResults> getSubtitlesResults() { DARABONBA_PTR_GET(subtitlesResults_, vector<Data::SubtitlesResults>) };
      inline Data& setSubtitlesResults(const vector<Data::SubtitlesResults> & subtitlesResults) { DARABONBA_PTR_SET_VALUE(subtitlesResults_, subtitlesResults) };
      inline Data& setSubtitlesResults(vector<Data::SubtitlesResults> && subtitlesResults) { DARABONBA_PTR_SET_RVALUE(subtitlesResults_, subtitlesResults) };


      // videoOcrResults Field Functions 
      bool hasVideoOcrResults() const { return this->videoOcrResults_ != nullptr;};
      void deleteVideoOcrResults() { this->videoOcrResults_ = nullptr;};
      inline const vector<Data::VideoOcrResults> & getVideoOcrResults() const { DARABONBA_PTR_GET_CONST(videoOcrResults_, vector<Data::VideoOcrResults>) };
      inline vector<Data::VideoOcrResults> getVideoOcrResults() { DARABONBA_PTR_GET(videoOcrResults_, vector<Data::VideoOcrResults>) };
      inline Data& setVideoOcrResults(const vector<Data::VideoOcrResults> & videoOcrResults) { DARABONBA_PTR_SET_VALUE(videoOcrResults_, videoOcrResults) };
      inline Data& setVideoOcrResults(vector<Data::VideoOcrResults> && videoOcrResults) { DARABONBA_PTR_SET_RVALUE(videoOcrResults_, videoOcrResults) };


    protected:
      shared_ptr<vector<Data::CastResults>> castResults_ {};
      shared_ptr<vector<Data::OcrResults>> ocrResults_ {};
      shared_ptr<string> ocrResultsUrl_ {};
      shared_ptr<string> ocrVideoResultsUrl_ {};
      shared_ptr<vector<Data::SubtitlesResults>> subtitlesResults_ {};
      shared_ptr<vector<Data::VideoOcrResults>> videoOcrResults_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RecognizeVideoCastCrewListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RecognizeVideoCastCrewListResponseBody::Data) };
    inline RecognizeVideoCastCrewListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RecognizeVideoCastCrewListResponseBody::Data) };
    inline RecognizeVideoCastCrewListResponseBody& setData(const RecognizeVideoCastCrewListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RecognizeVideoCastCrewListResponseBody& setData(RecognizeVideoCastCrewListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RecognizeVideoCastCrewListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RecognizeVideoCastCrewListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<RecognizeVideoCastCrewListResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
