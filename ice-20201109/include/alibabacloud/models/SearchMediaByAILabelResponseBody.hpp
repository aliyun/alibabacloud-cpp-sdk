// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIABYAILABELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIABYAILABELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaByAILabelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaByAILabelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(MediaList, mediaList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaByAILabelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(MediaList, mediaList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    SearchMediaByAILabelResponseBody() = default ;
    SearchMediaByAILabelResponseBody(const SearchMediaByAILabelResponseBody &) = default ;
    SearchMediaByAILabelResponseBody(SearchMediaByAILabelResponseBody &&) = default ;
    SearchMediaByAILabelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaByAILabelResponseBody() = default ;
    SearchMediaByAILabelResponseBody& operator=(const SearchMediaByAILabelResponseBody &) = default ;
    SearchMediaByAILabelResponseBody& operator=(SearchMediaByAILabelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaList& obj) { 
        DARABONBA_PTR_TO_JSON(AiData, aiData_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
        DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, MediaList& obj) { 
        DARABONBA_PTR_FROM_JSON(AiData, aiData_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
        DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      MediaList() = default ;
      MediaList(const MediaList &) = default ;
      MediaList(MediaList &&) = default ;
      MediaList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaList() = default ;
      MediaList& operator=(const MediaList &) = default ;
      MediaList& operator=(MediaList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AiData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiData& obj) { 
          DARABONBA_PTR_TO_JSON(AiLabelInfo, aiLabelInfo_);
          DARABONBA_PTR_TO_JSON(AsrInfo, asrInfo_);
          DARABONBA_PTR_TO_JSON(OcrInfo, ocrInfo_);
        };
        friend void from_json(const Darabonba::Json& j, AiData& obj) { 
          DARABONBA_PTR_FROM_JSON(AiLabelInfo, aiLabelInfo_);
          DARABONBA_PTR_FROM_JSON(AsrInfo, asrInfo_);
          DARABONBA_PTR_FROM_JSON(OcrInfo, ocrInfo_);
        };
        AiData() = default ;
        AiData(const AiData &) = default ;
        AiData(AiData &&) = default ;
        AiData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiData() = default ;
        AiData& operator=(const AiData &) = default ;
        AiData& operator=(AiData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OcrInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OcrInfo& obj) { 
            DARABONBA_PTR_TO_JSON(ClipId, clipId_);
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(From, from_);
            DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
            DARABONBA_PTR_TO_JSON(To, to_);
          };
          friend void from_json(const Darabonba::Json& j, OcrInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(ClipId, clipId_);
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(From, from_);
            DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
            DARABONBA_PTR_FROM_JSON(To, to_);
          };
          OcrInfo() = default ;
          OcrInfo(const OcrInfo &) = default ;
          OcrInfo(OcrInfo &&) = default ;
          OcrInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OcrInfo() = default ;
          OcrInfo& operator=(const OcrInfo &) = default ;
          OcrInfo& operator=(OcrInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->clipId_ == nullptr
        && this->content_ == nullptr && this->from_ == nullptr && this->timestamp_ == nullptr && this->to_ == nullptr; };
          // clipId Field Functions 
          bool hasClipId() const { return this->clipId_ != nullptr;};
          void deleteClipId() { this->clipId_ = nullptr;};
          inline string getClipId() const { DARABONBA_PTR_GET_DEFAULT(clipId_, "") };
          inline OcrInfo& setClipId(string clipId) { DARABONBA_PTR_SET_VALUE(clipId_, clipId) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline OcrInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // from Field Functions 
          bool hasFrom() const { return this->from_ != nullptr;};
          void deleteFrom() { this->from_ = nullptr;};
          inline double getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0.0) };
          inline OcrInfo& setFrom(double from) { DARABONBA_PTR_SET_VALUE(from_, from) };


          // timestamp Field Functions 
          bool hasTimestamp() const { return this->timestamp_ != nullptr;};
          void deleteTimestamp() { this->timestamp_ = nullptr;};
          inline double getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0.0) };
          inline OcrInfo& setTimestamp(double timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


          // to Field Functions 
          bool hasTo() const { return this->to_ != nullptr;};
          void deleteTo() { this->to_ = nullptr;};
          inline double getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0.0) };
          inline OcrInfo& setTo(double to) { DARABONBA_PTR_SET_VALUE(to_, to) };


        protected:
          // The ID of the clip.
          shared_ptr<string> clipId_ {};
          // The content of the text.
          shared_ptr<string> content_ {};
          // The start time of the clip.
          shared_ptr<double> from_ {};
          // The timestamp of the clip.
          shared_ptr<double> timestamp_ {};
          // The end time of the clip.
          shared_ptr<double> to_ {};
        };

        class AsrInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AsrInfo& obj) { 
            DARABONBA_PTR_TO_JSON(ClipId, clipId_);
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(From, from_);
            DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
            DARABONBA_PTR_TO_JSON(To, to_);
          };
          friend void from_json(const Darabonba::Json& j, AsrInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(ClipId, clipId_);
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(From, from_);
            DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
            DARABONBA_PTR_FROM_JSON(To, to_);
          };
          AsrInfo() = default ;
          AsrInfo(const AsrInfo &) = default ;
          AsrInfo(AsrInfo &&) = default ;
          AsrInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AsrInfo() = default ;
          AsrInfo& operator=(const AsrInfo &) = default ;
          AsrInfo& operator=(AsrInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->clipId_ == nullptr
        && this->content_ == nullptr && this->from_ == nullptr && this->timestamp_ == nullptr && this->to_ == nullptr; };
          // clipId Field Functions 
          bool hasClipId() const { return this->clipId_ != nullptr;};
          void deleteClipId() { this->clipId_ = nullptr;};
          inline string getClipId() const { DARABONBA_PTR_GET_DEFAULT(clipId_, "") };
          inline AsrInfo& setClipId(string clipId) { DARABONBA_PTR_SET_VALUE(clipId_, clipId) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline AsrInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // from Field Functions 
          bool hasFrom() const { return this->from_ != nullptr;};
          void deleteFrom() { this->from_ = nullptr;};
          inline double getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0.0) };
          inline AsrInfo& setFrom(double from) { DARABONBA_PTR_SET_VALUE(from_, from) };


          // timestamp Field Functions 
          bool hasTimestamp() const { return this->timestamp_ != nullptr;};
          void deleteTimestamp() { this->timestamp_ = nullptr;};
          inline double getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0.0) };
          inline AsrInfo& setTimestamp(double timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


          // to Field Functions 
          bool hasTo() const { return this->to_ != nullptr;};
          void deleteTo() { this->to_ = nullptr;};
          inline double getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0.0) };
          inline AsrInfo& setTo(double to) { DARABONBA_PTR_SET_VALUE(to_, to) };


        protected:
          // The ID of the clip.
          shared_ptr<string> clipId_ {};
          // The content of the audio.
          shared_ptr<string> content_ {};
          // The start time of the clip.
          shared_ptr<double> from_ {};
          // The timestamp of the clip.
          shared_ptr<double> timestamp_ {};
          // The end time of the clip.
          shared_ptr<double> to_ {};
        };

        class AiLabelInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AiLabelInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Category, category_);
            DARABONBA_PTR_TO_JSON(FaceId, faceId_);
            DARABONBA_PTR_TO_JSON(LabelId, labelId_);
            DARABONBA_PTR_TO_JSON(LabelName, labelName_);
            DARABONBA_PTR_TO_JSON(LabelType, labelType_);
            DARABONBA_PTR_TO_JSON(Occurrences, occurrences_);
            DARABONBA_PTR_TO_JSON(Source, source_);
          };
          friend void from_json(const Darabonba::Json& j, AiLabelInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Category, category_);
            DARABONBA_PTR_FROM_JSON(FaceId, faceId_);
            DARABONBA_PTR_FROM_JSON(LabelId, labelId_);
            DARABONBA_PTR_FROM_JSON(LabelName, labelName_);
            DARABONBA_PTR_FROM_JSON(LabelType, labelType_);
            DARABONBA_PTR_FROM_JSON(Occurrences, occurrences_);
            DARABONBA_PTR_FROM_JSON(Source, source_);
          };
          AiLabelInfo() = default ;
          AiLabelInfo(const AiLabelInfo &) = default ;
          AiLabelInfo(AiLabelInfo &&) = default ;
          AiLabelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AiLabelInfo() = default ;
          AiLabelInfo& operator=(const AiLabelInfo &) = default ;
          AiLabelInfo& operator=(AiLabelInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Occurrences : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Occurrences& obj) { 
              DARABONBA_PTR_TO_JSON(ClipId, clipId_);
              DARABONBA_PTR_TO_JSON(Content, content_);
              DARABONBA_PTR_TO_JSON(FinegrainId, finegrainId_);
              DARABONBA_PTR_TO_JSON(FinegrainName, finegrainName_);
              DARABONBA_PTR_TO_JSON(From, from_);
              DARABONBA_PTR_TO_JSON(Image, image_);
              DARABONBA_PTR_TO_JSON(Score, score_);
              DARABONBA_PTR_TO_JSON(TableBatchSeqId, tableBatchSeqId_);
              DARABONBA_PTR_TO_JSON(To, to_);
              DARABONBA_PTR_TO_JSON(Tracks, tracks_);
            };
            friend void from_json(const Darabonba::Json& j, Occurrences& obj) { 
              DARABONBA_PTR_FROM_JSON(ClipId, clipId_);
              DARABONBA_PTR_FROM_JSON(Content, content_);
              DARABONBA_PTR_FROM_JSON(FinegrainId, finegrainId_);
              DARABONBA_PTR_FROM_JSON(FinegrainName, finegrainName_);
              DARABONBA_PTR_FROM_JSON(From, from_);
              DARABONBA_PTR_FROM_JSON(Image, image_);
              DARABONBA_PTR_FROM_JSON(Score, score_);
              DARABONBA_PTR_FROM_JSON(TableBatchSeqId, tableBatchSeqId_);
              DARABONBA_PTR_FROM_JSON(To, to_);
              DARABONBA_PTR_FROM_JSON(Tracks, tracks_);
            };
            Occurrences() = default ;
            Occurrences(const Occurrences &) = default ;
            Occurrences(Occurrences &&) = default ;
            Occurrences(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Occurrences() = default ;
            Occurrences& operator=(const Occurrences &) = default ;
            Occurrences& operator=(Occurrences &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Tracks : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Tracks& obj) { 
                DARABONBA_PTR_TO_JSON(Position, position_);
                DARABONBA_PTR_TO_JSON(Size, size_);
                DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
              };
              friend void from_json(const Darabonba::Json& j, Tracks& obj) { 
                DARABONBA_PTR_FROM_JSON(Position, position_);
                DARABONBA_PTR_FROM_JSON(Size, size_);
                DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
              };
              Tracks() = default ;
              Tracks(const Tracks &) = default ;
              Tracks(Tracks &&) = default ;
              Tracks(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Tracks() = default ;
              Tracks& operator=(const Tracks &) = default ;
              Tracks& operator=(Tracks &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->position_ == nullptr
        && this->size_ == nullptr && this->timestamp_ == nullptr; };
              // position Field Functions 
              bool hasPosition() const { return this->position_ != nullptr;};
              void deletePosition() { this->position_ = nullptr;};
              inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
              inline Tracks& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


              // size Field Functions 
              bool hasSize() const { return this->size_ != nullptr;};
              void deleteSize() { this->size_ = nullptr;};
              inline double getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0.0) };
              inline Tracks& setSize(double size) { DARABONBA_PTR_SET_VALUE(size_, size) };


              // timestamp Field Functions 
              bool hasTimestamp() const { return this->timestamp_ != nullptr;};
              void deleteTimestamp() { this->timestamp_ = nullptr;};
              inline double getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0.0) };
              inline Tracks& setTimestamp(double timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


            protected:
              // The coordinates of the bounding box.
              shared_ptr<string> position_ {};
              // The size of the bounding box.
              shared_ptr<double> size_ {};
              // The timestamp of the track.
              shared_ptr<double> timestamp_ {};
            };

            virtual bool empty() const override { return this->clipId_ == nullptr
        && this->content_ == nullptr && this->finegrainId_ == nullptr && this->finegrainName_ == nullptr && this->from_ == nullptr && this->image_ == nullptr
        && this->score_ == nullptr && this->tableBatchSeqId_ == nullptr && this->to_ == nullptr && this->tracks_ == nullptr; };
            // clipId Field Functions 
            bool hasClipId() const { return this->clipId_ != nullptr;};
            void deleteClipId() { this->clipId_ = nullptr;};
            inline string getClipId() const { DARABONBA_PTR_GET_DEFAULT(clipId_, "") };
            inline Occurrences& setClipId(string clipId) { DARABONBA_PTR_SET_VALUE(clipId_, clipId) };


            // content Field Functions 
            bool hasContent() const { return this->content_ != nullptr;};
            void deleteContent() { this->content_ = nullptr;};
            inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
            inline Occurrences& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


            // finegrainId Field Functions 
            bool hasFinegrainId() const { return this->finegrainId_ != nullptr;};
            void deleteFinegrainId() { this->finegrainId_ = nullptr;};
            inline string getFinegrainId() const { DARABONBA_PTR_GET_DEFAULT(finegrainId_, "") };
            inline Occurrences& setFinegrainId(string finegrainId) { DARABONBA_PTR_SET_VALUE(finegrainId_, finegrainId) };


            // finegrainName Field Functions 
            bool hasFinegrainName() const { return this->finegrainName_ != nullptr;};
            void deleteFinegrainName() { this->finegrainName_ = nullptr;};
            inline string getFinegrainName() const { DARABONBA_PTR_GET_DEFAULT(finegrainName_, "") };
            inline Occurrences& setFinegrainName(string finegrainName) { DARABONBA_PTR_SET_VALUE(finegrainName_, finegrainName) };


            // from Field Functions 
            bool hasFrom() const { return this->from_ != nullptr;};
            void deleteFrom() { this->from_ = nullptr;};
            inline double getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0.0) };
            inline Occurrences& setFrom(double from) { DARABONBA_PTR_SET_VALUE(from_, from) };


            // image Field Functions 
            bool hasImage() const { return this->image_ != nullptr;};
            void deleteImage() { this->image_ = nullptr;};
            inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
            inline Occurrences& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


            // score Field Functions 
            bool hasScore() const { return this->score_ != nullptr;};
            void deleteScore() { this->score_ = nullptr;};
            inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
            inline Occurrences& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


            // tableBatchSeqId Field Functions 
            bool hasTableBatchSeqId() const { return this->tableBatchSeqId_ != nullptr;};
            void deleteTableBatchSeqId() { this->tableBatchSeqId_ = nullptr;};
            inline string getTableBatchSeqId() const { DARABONBA_PTR_GET_DEFAULT(tableBatchSeqId_, "") };
            inline Occurrences& setTableBatchSeqId(string tableBatchSeqId) { DARABONBA_PTR_SET_VALUE(tableBatchSeqId_, tableBatchSeqId) };


            // to Field Functions 
            bool hasTo() const { return this->to_ != nullptr;};
            void deleteTo() { this->to_ = nullptr;};
            inline double getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0.0) };
            inline Occurrences& setTo(double to) { DARABONBA_PTR_SET_VALUE(to_, to) };


            // tracks Field Functions 
            bool hasTracks() const { return this->tracks_ != nullptr;};
            void deleteTracks() { this->tracks_ = nullptr;};
            inline const vector<Occurrences::Tracks> & getTracks() const { DARABONBA_PTR_GET_CONST(tracks_, vector<Occurrences::Tracks>) };
            inline vector<Occurrences::Tracks> getTracks() { DARABONBA_PTR_GET(tracks_, vector<Occurrences::Tracks>) };
            inline Occurrences& setTracks(const vector<Occurrences::Tracks> & tracks) { DARABONBA_PTR_SET_VALUE(tracks_, tracks) };
            inline Occurrences& setTracks(vector<Occurrences::Tracks> && tracks) { DARABONBA_PTR_SET_RVALUE(tracks_, tracks) };


          protected:
            // The ID of the clip.
            shared_ptr<string> clipId_ {};
            // The content of the text.
            shared_ptr<string> content_ {};
            // The fine-grained ID of the entity.
            shared_ptr<string> finegrainId_ {};
            // The fine-grained name of the entity.
            shared_ptr<string> finegrainName_ {};
            // The start time of the clip.
            shared_ptr<double> from_ {};
            // The image that contains the most face information.
            shared_ptr<string> image_ {};
            // The score.
            shared_ptr<double> score_ {};
            // The sequence ID of the vector table.
            shared_ptr<string> tableBatchSeqId_ {};
            // The end time of the clip.
            shared_ptr<double> to_ {};
            // The tracks.
            shared_ptr<vector<Occurrences::Tracks>> tracks_ {};
          };

          virtual bool empty() const override { return this->category_ == nullptr
        && this->faceId_ == nullptr && this->labelId_ == nullptr && this->labelName_ == nullptr && this->labelType_ == nullptr && this->occurrences_ == nullptr
        && this->source_ == nullptr; };
          // category Field Functions 
          bool hasCategory() const { return this->category_ != nullptr;};
          void deleteCategory() { this->category_ = nullptr;};
          inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
          inline AiLabelInfo& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


          // faceId Field Functions 
          bool hasFaceId() const { return this->faceId_ != nullptr;};
          void deleteFaceId() { this->faceId_ = nullptr;};
          inline string getFaceId() const { DARABONBA_PTR_GET_DEFAULT(faceId_, "") };
          inline AiLabelInfo& setFaceId(string faceId) { DARABONBA_PTR_SET_VALUE(faceId_, faceId) };


          // labelId Field Functions 
          bool hasLabelId() const { return this->labelId_ != nullptr;};
          void deleteLabelId() { this->labelId_ = nullptr;};
          inline string getLabelId() const { DARABONBA_PTR_GET_DEFAULT(labelId_, "") };
          inline AiLabelInfo& setLabelId(string labelId) { DARABONBA_PTR_SET_VALUE(labelId_, labelId) };


          // labelName Field Functions 
          bool hasLabelName() const { return this->labelName_ != nullptr;};
          void deleteLabelName() { this->labelName_ = nullptr;};
          inline string getLabelName() const { DARABONBA_PTR_GET_DEFAULT(labelName_, "") };
          inline AiLabelInfo& setLabelName(string labelName) { DARABONBA_PTR_SET_VALUE(labelName_, labelName) };


          // labelType Field Functions 
          bool hasLabelType() const { return this->labelType_ != nullptr;};
          void deleteLabelType() { this->labelType_ = nullptr;};
          inline string getLabelType() const { DARABONBA_PTR_GET_DEFAULT(labelType_, "") };
          inline AiLabelInfo& setLabelType(string labelType) { DARABONBA_PTR_SET_VALUE(labelType_, labelType) };


          // occurrences Field Functions 
          bool hasOccurrences() const { return this->occurrences_ != nullptr;};
          void deleteOccurrences() { this->occurrences_ = nullptr;};
          inline const vector<AiLabelInfo::Occurrences> & getOccurrences() const { DARABONBA_PTR_GET_CONST(occurrences_, vector<AiLabelInfo::Occurrences>) };
          inline vector<AiLabelInfo::Occurrences> getOccurrences() { DARABONBA_PTR_GET(occurrences_, vector<AiLabelInfo::Occurrences>) };
          inline AiLabelInfo& setOccurrences(const vector<AiLabelInfo::Occurrences> & occurrences) { DARABONBA_PTR_SET_VALUE(occurrences_, occurrences) };
          inline AiLabelInfo& setOccurrences(vector<AiLabelInfo::Occurrences> && occurrences) { DARABONBA_PTR_SET_RVALUE(occurrences_, occurrences) };


          // source Field Functions 
          bool hasSource() const { return this->source_ != nullptr;};
          void deleteSource() { this->source_ = nullptr;};
          inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
          inline AiLabelInfo& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        protected:
          // The category.
          shared_ptr<string> category_ {};
          // The ID of the face.
          shared_ptr<string> faceId_ {};
          // The ID of the entity.
          shared_ptr<string> labelId_ {};
          // The name of the entity.
          shared_ptr<string> labelName_ {};
          // The type of the tag.
          shared_ptr<string> labelType_ {};
          // The information about the clips.
          shared_ptr<vector<AiLabelInfo::Occurrences>> occurrences_ {};
          // The source.
          shared_ptr<string> source_ {};
        };

        virtual bool empty() const override { return this->aiLabelInfo_ == nullptr
        && this->asrInfo_ == nullptr && this->ocrInfo_ == nullptr; };
        // aiLabelInfo Field Functions 
        bool hasAiLabelInfo() const { return this->aiLabelInfo_ != nullptr;};
        void deleteAiLabelInfo() { this->aiLabelInfo_ = nullptr;};
        inline const vector<AiData::AiLabelInfo> & getAiLabelInfo() const { DARABONBA_PTR_GET_CONST(aiLabelInfo_, vector<AiData::AiLabelInfo>) };
        inline vector<AiData::AiLabelInfo> getAiLabelInfo() { DARABONBA_PTR_GET(aiLabelInfo_, vector<AiData::AiLabelInfo>) };
        inline AiData& setAiLabelInfo(const vector<AiData::AiLabelInfo> & aiLabelInfo) { DARABONBA_PTR_SET_VALUE(aiLabelInfo_, aiLabelInfo) };
        inline AiData& setAiLabelInfo(vector<AiData::AiLabelInfo> && aiLabelInfo) { DARABONBA_PTR_SET_RVALUE(aiLabelInfo_, aiLabelInfo) };


        // asrInfo Field Functions 
        bool hasAsrInfo() const { return this->asrInfo_ != nullptr;};
        void deleteAsrInfo() { this->asrInfo_ = nullptr;};
        inline const vector<AiData::AsrInfo> & getAsrInfo() const { DARABONBA_PTR_GET_CONST(asrInfo_, vector<AiData::AsrInfo>) };
        inline vector<AiData::AsrInfo> getAsrInfo() { DARABONBA_PTR_GET(asrInfo_, vector<AiData::AsrInfo>) };
        inline AiData& setAsrInfo(const vector<AiData::AsrInfo> & asrInfo) { DARABONBA_PTR_SET_VALUE(asrInfo_, asrInfo) };
        inline AiData& setAsrInfo(vector<AiData::AsrInfo> && asrInfo) { DARABONBA_PTR_SET_RVALUE(asrInfo_, asrInfo) };


        // ocrInfo Field Functions 
        bool hasOcrInfo() const { return this->ocrInfo_ != nullptr;};
        void deleteOcrInfo() { this->ocrInfo_ = nullptr;};
        inline const vector<AiData::OcrInfo> & getOcrInfo() const { DARABONBA_PTR_GET_CONST(ocrInfo_, vector<AiData::OcrInfo>) };
        inline vector<AiData::OcrInfo> getOcrInfo() { DARABONBA_PTR_GET(ocrInfo_, vector<AiData::OcrInfo>) };
        inline AiData& setOcrInfo(const vector<AiData::OcrInfo> & ocrInfo) { DARABONBA_PTR_SET_VALUE(ocrInfo_, ocrInfo) };
        inline AiData& setOcrInfo(vector<AiData::OcrInfo> && ocrInfo) { DARABONBA_PTR_SET_RVALUE(ocrInfo_, ocrInfo) };


      protected:
        // The tags of the AI job.
        shared_ptr<vector<AiData::AiLabelInfo>> aiLabelInfo_ {};
        // The information about audio files.
        shared_ptr<vector<AiData::AsrInfo>> asrInfo_ {};
        // The information about subtitle files.
        shared_ptr<vector<AiData::OcrInfo>> ocrInfo_ {};
      };

      virtual bool empty() const override { return this->aiData_ == nullptr
        && this->appId_ == nullptr && this->coverUrl_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->duration_ == nullptr
        && this->mediaId_ == nullptr && this->modificationTime_ == nullptr && this->size_ == nullptr && this->snapshots_ == nullptr && this->status_ == nullptr
        && this->storageLocation_ == nullptr && this->tags_ == nullptr && this->title_ == nullptr; };
      // aiData Field Functions 
      bool hasAiData() const { return this->aiData_ != nullptr;};
      void deleteAiData() { this->aiData_ = nullptr;};
      inline const MediaList::AiData & getAiData() const { DARABONBA_PTR_GET_CONST(aiData_, MediaList::AiData) };
      inline MediaList::AiData getAiData() { DARABONBA_PTR_GET(aiData_, MediaList::AiData) };
      inline MediaList& setAiData(const MediaList::AiData & aiData) { DARABONBA_PTR_SET_VALUE(aiData_, aiData) };
      inline MediaList& setAiData(MediaList::AiData && aiData) { DARABONBA_PTR_SET_RVALUE(aiData_, aiData) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline MediaList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // coverUrl Field Functions 
      bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
      void deleteCoverUrl() { this->coverUrl_ = nullptr;};
      inline string getCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
      inline MediaList& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline MediaList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline MediaList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline float getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
      inline MediaList& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // mediaId Field Functions 
      bool hasMediaId() const { return this->mediaId_ != nullptr;};
      void deleteMediaId() { this->mediaId_ = nullptr;};
      inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
      inline MediaList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


      // modificationTime Field Functions 
      bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
      void deleteModificationTime() { this->modificationTime_ = nullptr;};
      inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
      inline MediaList& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline MediaList& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // snapshots Field Functions 
      bool hasSnapshots() const { return this->snapshots_ != nullptr;};
      void deleteSnapshots() { this->snapshots_ = nullptr;};
      inline const vector<string> & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<string>) };
      inline vector<string> getSnapshots() { DARABONBA_PTR_GET(snapshots_, vector<string>) };
      inline MediaList& setSnapshots(const vector<string> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
      inline MediaList& setSnapshots(vector<string> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline MediaList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageLocation Field Functions 
      bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
      void deleteStorageLocation() { this->storageLocation_ = nullptr;};
      inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
      inline MediaList& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
      inline MediaList& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline MediaList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // The details of the AI job.
      shared_ptr<MediaList::AiData> aiData_ {};
      // The ID of the application. Default value: app-1000000.
      shared_ptr<string> appId_ {};
      // The URL of the thumbnail.
      shared_ptr<string> coverUrl_ {};
      // The time when the media asset was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The description of the media asset.
      shared_ptr<string> description_ {};
      // The duration. Unit: seconds.
      shared_ptr<float> duration_ {};
      // The ID of the media asset.
      shared_ptr<string> mediaId_ {};
      // The time when the media asset was updated. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> modificationTime_ {};
      // The size of the source file. Unit: bytes.
      shared_ptr<int64_t> size_ {};
      // The array of video snapshot URLs.
      shared_ptr<vector<string>> snapshots_ {};
      // The status of the video.
      // 
      // Valid values:
      // 
      // *   PrepareFail
      // *   UploadFail
      // *   Init
      // *   UploadSucc
      // *   Transcoding
      // *   TranscodeFail
      // *   Deleted
      // *   Normal
      // *   Uploading
      // *   Preparing
      // *   Blocked
      // *   Checking
      shared_ptr<string> status_ {};
      // The storage address.
      shared_ptr<string> storageLocation_ {};
      // The tags of the media asset.
      shared_ptr<string> tags_ {};
      // The title of the media asset.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->mediaList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SearchMediaByAILabelResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // mediaList Field Functions 
    bool hasMediaList() const { return this->mediaList_ != nullptr;};
    void deleteMediaList() { this->mediaList_ = nullptr;};
    inline const vector<SearchMediaByAILabelResponseBody::MediaList> & getMediaList() const { DARABONBA_PTR_GET_CONST(mediaList_, vector<SearchMediaByAILabelResponseBody::MediaList>) };
    inline vector<SearchMediaByAILabelResponseBody::MediaList> getMediaList() { DARABONBA_PTR_GET(mediaList_, vector<SearchMediaByAILabelResponseBody::MediaList>) };
    inline SearchMediaByAILabelResponseBody& setMediaList(const vector<SearchMediaByAILabelResponseBody::MediaList> & mediaList) { DARABONBA_PTR_SET_VALUE(mediaList_, mediaList) };
    inline SearchMediaByAILabelResponseBody& setMediaList(vector<SearchMediaByAILabelResponseBody::MediaList> && mediaList) { DARABONBA_PTR_SET_RVALUE(mediaList_, mediaList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchMediaByAILabelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline SearchMediaByAILabelResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline SearchMediaByAILabelResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The media assets that contain the specified content.
    shared_ptr<vector<SearchMediaByAILabelResponseBody::MediaList>> mediaList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<string> success_ {};
    // The total number of audio and video files that meet the conditions.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
