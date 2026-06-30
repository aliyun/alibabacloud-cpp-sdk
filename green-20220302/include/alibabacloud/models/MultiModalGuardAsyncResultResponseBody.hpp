// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MULTIMODALGUARDASYNCRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MULTIMODALGUARDASYNCRESULTRESPONSEBODY_HPP_
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
  class MultiModalGuardAsyncResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MultiModalGuardAsyncResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, MultiModalGuardAsyncResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    MultiModalGuardAsyncResultResponseBody() = default ;
    MultiModalGuardAsyncResultResponseBody(const MultiModalGuardAsyncResultResponseBody &) = default ;
    MultiModalGuardAsyncResultResponseBody(MultiModalGuardAsyncResultResponseBody &&) = default ;
    MultiModalGuardAsyncResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MultiModalGuardAsyncResultResponseBody() = default ;
    MultiModalGuardAsyncResultResponseBody& operator=(const MultiModalGuardAsyncResultResponseBody &) = default ;
    MultiModalGuardAsyncResultResponseBody& operator=(MultiModalGuardAsyncResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AudioResult, audioResult_);
        DARABONBA_PTR_TO_JSON(DataId, dataId_);
        DARABONBA_PTR_TO_JSON(FrameResult, frameResult_);
        DARABONBA_PTR_TO_JSON(LiveId, liveId_);
        DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AudioResult, audioResult_);
        DARABONBA_PTR_FROM_JSON(DataId, dataId_);
        DARABONBA_PTR_FROM_JSON(FrameResult, frameResult_);
        DARABONBA_PTR_FROM_JSON(LiveId, liveId_);
        DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
      class FrameResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FrameResult& obj) { 
          DARABONBA_PTR_TO_JSON(Frames, frames_);
          DARABONBA_PTR_TO_JSON(SliceNum, sliceNum_);
          DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
        };
        friend void from_json(const Darabonba::Json& j, FrameResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Frames, frames_);
          DARABONBA_PTR_FROM_JSON(SliceNum, sliceNum_);
          DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
        };
        FrameResult() = default ;
        FrameResult(const FrameResult &) = default ;
        FrameResult(FrameResult &&) = default ;
        FrameResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FrameResult() = default ;
        FrameResult& operator=(const FrameResult &) = default ;
        FrameResult& operator=(FrameResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Frames : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Frames& obj) { 
            DARABONBA_PTR_TO_JSON(Detail, detail_);
            DARABONBA_PTR_TO_JSON(Offset, offset_);
            DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
            DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, Frames& obj) { 
            DARABONBA_PTR_FROM_JSON(Detail, detail_);
            DARABONBA_PTR_FROM_JSON(Offset, offset_);
            DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
            DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          Frames() = default ;
          Frames(const Frames &) = default ;
          Frames(Frames &&) = default ;
          Frames(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Frames() = default ;
          Frames& operator=(const Frames &) = default ;
          Frames& operator=(Frames &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Detail : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Detail& obj) { 
              DARABONBA_PTR_TO_JSON(Level, level_);
              DARABONBA_PTR_TO_JSON(Result, result_);
              DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, Detail& obj) { 
              DARABONBA_PTR_FROM_JSON(Level, level_);
              DARABONBA_PTR_FROM_JSON(Result, result_);
              DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            Detail() = default ;
            Detail(const Detail &) = default ;
            Detail(Detail &&) = default ;
            Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Detail() = default ;
            Detail& operator=(const Detail &) = default ;
            Detail& operator=(Detail &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Result : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Result& obj) { 
                DARABONBA_PTR_TO_JSON(Confidence, confidence_);
                DARABONBA_PTR_TO_JSON(Description, description_);
                DARABONBA_ANY_TO_JSON(Ext, ext_);
                DARABONBA_PTR_TO_JSON(Label, label_);
                DARABONBA_PTR_TO_JSON(Level, level_);
              };
              friend void from_json(const Darabonba::Json& j, Result& obj) { 
                DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
                DARABONBA_PTR_FROM_JSON(Description, description_);
                DARABONBA_ANY_FROM_JSON(Ext, ext_);
                DARABONBA_PTR_FROM_JSON(Label, label_);
                DARABONBA_PTR_FROM_JSON(Level, level_);
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
        && this->description_ == nullptr && this->ext_ == nullptr && this->label_ == nullptr && this->level_ == nullptr; };
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


              // ext Field Functions 
              bool hasExt() const { return this->ext_ != nullptr;};
              void deleteExt() { this->ext_ = nullptr;};
              inline               const Darabonba::Json & getExt() const { DARABONBA_GET(ext_) };
              Darabonba::Json & getExt() { DARABONBA_GET(ext_) };
              inline Result& setExt(const Darabonba::Json & ext) { DARABONBA_SET_VALUE(ext_, ext) };
              inline Result& setExt(Darabonba::Json && ext) { DARABONBA_SET_RVALUE(ext_, ext) };


              // label Field Functions 
              bool hasLabel() const { return this->label_ != nullptr;};
              void deleteLabel() { this->label_ = nullptr;};
              inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
              inline Result& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


              // level Field Functions 
              bool hasLevel() const { return this->level_ != nullptr;};
              void deleteLevel() { this->level_ = nullptr;};
              inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
              inline Result& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


            protected:
              // The confidence score, ranging from 0 to 100, accurate to two decimal places.
              shared_ptr<float> confidence_ {};
              // The description of the label.
              shared_ptr<string> description_ {};
              // Additional information about the detection result.
              Darabonba::Json ext_ {};
              // The label of the detection result.
              shared_ptr<string> label_ {};
              // The risk level. Valid values:
              // 
              // - `high`: High risk. If the content matches an entry in a custom keyword library, the risk level defaults to high.
              // 
              // - `medium`: Medium risk.
              // 
              // - `low`: Low risk.
              // 
              // - `none`: No risk detected.
              shared_ptr<string> level_ {};
            };

            virtual bool empty() const override { return this->level_ == nullptr
        && this->result_ == nullptr && this->suggestion_ == nullptr && this->type_ == nullptr; };
            // level Field Functions 
            bool hasLevel() const { return this->level_ != nullptr;};
            void deleteLevel() { this->level_ = nullptr;};
            inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
            inline Detail& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


            // result Field Functions 
            bool hasResult() const { return this->result_ != nullptr;};
            void deleteResult() { this->result_ = nullptr;};
            inline const vector<Detail::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Detail::Result>) };
            inline vector<Detail::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Detail::Result>) };
            inline Detail& setResult(const vector<Detail::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
            inline Detail& setResult(vector<Detail::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


            // suggestion Field Functions 
            bool hasSuggestion() const { return this->suggestion_ != nullptr;};
            void deleteSuggestion() { this->suggestion_ = nullptr;};
            inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
            inline Detail& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Detail& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            // The risk level. Valid values include:
            // 
            // - high: High risk. If a match is found in a custom dictionary, the risk level defaults to high.
            // 
            // - medium: Medium risk.
            // 
            // - low: Low risk.
            // 
            // - none: No risk detected.
            shared_ptr<string> level_ {};
            // A list of detection results.
            shared_ptr<vector<Detail::Result>> result_ {};
            // Suggestion
            // 
            // - block: A suggestion to block.
            // 
            // - pass: A suggestion to pass.
            // 
            // - watch: A suggestion to watch.
            // 
            // - mask: A suggestion to mask.
            shared_ptr<string> suggestion_ {};
            // The detection type. Valid values:
            // 
            // - `contentModeration`: Content moderation.
            // 
            // - `promptAttack`: Prompt attack detection.
            // 
            // - `sensitiveData`: Sensitive data detection.
            // 
            // - `modelHallucination`: Model hallucination.
            // 
            // - `maliciousFile`: Malicious file detection.
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->detail_ == nullptr
        && this->offset_ == nullptr && this->suggestion_ == nullptr && this->timestamp_ == nullptr && this->url_ == nullptr; };
          // detail Field Functions 
          bool hasDetail() const { return this->detail_ != nullptr;};
          void deleteDetail() { this->detail_ = nullptr;};
          inline const vector<Frames::Detail> & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, vector<Frames::Detail>) };
          inline vector<Frames::Detail> getDetail() { DARABONBA_PTR_GET(detail_, vector<Frames::Detail>) };
          inline Frames& setDetail(const vector<Frames::Detail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
          inline Frames& setDetail(vector<Frames::Detail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


          // offset Field Functions 
          bool hasOffset() const { return this->offset_ != nullptr;};
          void deleteOffset() { this->offset_ = nullptr;};
          inline float getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0.0) };
          inline Frames& setOffset(float offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


          // suggestion Field Functions 
          bool hasSuggestion() const { return this->suggestion_ != nullptr;};
          void deleteSuggestion() { this->suggestion_ = nullptr;};
          inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
          inline Frames& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


          // timestamp Field Functions 
          bool hasTimestamp() const { return this->timestamp_ != nullptr;};
          void deleteTimestamp() { this->timestamp_ = nullptr;};
          inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
          inline Frames& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline Frames& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          // A list of detection results.
          shared_ptr<vector<Frames::Detail>> detail_ {};
          // The time offset of the frame in the video, in seconds.
          shared_ptr<float> offset_ {};
          // The recommended action. Valid values:
          // 
          // - `block`: Block the content.
          // 
          // - `pass`: Pass the content.
          // 
          // - `watch`: The content requires review.
          // 
          // - `mask`: Mask the content.
          shared_ptr<string> suggestion_ {};
          // The absolute timestamp of the frame, in milliseconds.
          shared_ptr<int64_t> timestamp_ {};
          // The temporary URL of the video frame.
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->frames_ == nullptr
        && this->sliceNum_ == nullptr && this->suggestion_ == nullptr; };
        // frames Field Functions 
        bool hasFrames() const { return this->frames_ != nullptr;};
        void deleteFrames() { this->frames_ = nullptr;};
        inline const vector<FrameResult::Frames> & getFrames() const { DARABONBA_PTR_GET_CONST(frames_, vector<FrameResult::Frames>) };
        inline vector<FrameResult::Frames> getFrames() { DARABONBA_PTR_GET(frames_, vector<FrameResult::Frames>) };
        inline FrameResult& setFrames(const vector<FrameResult::Frames> & frames) { DARABONBA_PTR_SET_VALUE(frames_, frames) };
        inline FrameResult& setFrames(vector<FrameResult::Frames> && frames) { DARABONBA_PTR_SET_RVALUE(frames_, frames) };


        // sliceNum Field Functions 
        bool hasSliceNum() const { return this->sliceNum_ != nullptr;};
        void deleteSliceNum() { this->sliceNum_ = nullptr;};
        inline int32_t getSliceNum() const { DARABONBA_PTR_GET_DEFAULT(sliceNum_, 0) };
        inline FrameResult& setSliceNum(int32_t sliceNum) { DARABONBA_PTR_SET_VALUE(sliceNum_, sliceNum) };


        // suggestion Field Functions 
        bool hasSuggestion() const { return this->suggestion_ != nullptr;};
        void deleteSuggestion() { this->suggestion_ = nullptr;};
        inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
        inline FrameResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


      protected:
        // The moderation results for video frames.
        shared_ptr<vector<FrameResult::Frames>> frames_ {};
        // The frame count.
        shared_ptr<int32_t> sliceNum_ {};
        // The recommended action. Valid values:
        // 
        // - `block`: Block the content.
        // 
        // - `pass`: Pass the content.
        // 
        // - `watch`: The content requires review.
        // 
        // - `mask`: Mask the content.
        shared_ptr<string> suggestion_ {};
      };

      class AudioResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AudioResult& obj) { 
          DARABONBA_PTR_TO_JSON(SliceDetails, sliceDetails_);
          DARABONBA_PTR_TO_JSON(SliceNum, sliceNum_);
          DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
        };
        friend void from_json(const Darabonba::Json& j, AudioResult& obj) { 
          DARABONBA_PTR_FROM_JSON(SliceDetails, sliceDetails_);
          DARABONBA_PTR_FROM_JSON(SliceNum, sliceNum_);
          DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
        };
        AudioResult() = default ;
        AudioResult(const AudioResult &) = default ;
        AudioResult(AudioResult &&) = default ;
        AudioResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AudioResult() = default ;
        AudioResult& operator=(const AudioResult &) = default ;
        AudioResult& operator=(AudioResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SliceDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SliceDetails& obj) { 
            DARABONBA_PTR_TO_JSON(Detail, detail_);
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
            DARABONBA_PTR_TO_JSON(Text, text_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, SliceDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(Detail, detail_);
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
            DARABONBA_PTR_FROM_JSON(Text, text_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          SliceDetails() = default ;
          SliceDetails(const SliceDetails &) = default ;
          SliceDetails(SliceDetails &&) = default ;
          SliceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SliceDetails() = default ;
          SliceDetails& operator=(const SliceDetails &) = default ;
          SliceDetails& operator=(SliceDetails &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Detail : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Detail& obj) { 
              DARABONBA_PTR_TO_JSON(Level, level_);
              DARABONBA_PTR_TO_JSON(Result, result_);
              DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, Detail& obj) { 
              DARABONBA_PTR_FROM_JSON(Level, level_);
              DARABONBA_PTR_FROM_JSON(Result, result_);
              DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            Detail() = default ;
            Detail(const Detail &) = default ;
            Detail(Detail &&) = default ;
            Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Detail() = default ;
            Detail& operator=(const Detail &) = default ;
            Detail& operator=(Detail &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Result : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Result& obj) { 
                DARABONBA_PTR_TO_JSON(Confidence, confidence_);
                DARABONBA_PTR_TO_JSON(Description, description_);
                DARABONBA_ANY_TO_JSON(Ext, ext_);
                DARABONBA_PTR_TO_JSON(Label, label_);
                DARABONBA_PTR_TO_JSON(Level, level_);
              };
              friend void from_json(const Darabonba::Json& j, Result& obj) { 
                DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
                DARABONBA_PTR_FROM_JSON(Description, description_);
                DARABONBA_ANY_FROM_JSON(Ext, ext_);
                DARABONBA_PTR_FROM_JSON(Label, label_);
                DARABONBA_PTR_FROM_JSON(Level, level_);
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
        && this->description_ == nullptr && this->ext_ == nullptr && this->label_ == nullptr && this->level_ == nullptr; };
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


              // ext Field Functions 
              bool hasExt() const { return this->ext_ != nullptr;};
              void deleteExt() { this->ext_ = nullptr;};
              inline               const Darabonba::Json & getExt() const { DARABONBA_GET(ext_) };
              Darabonba::Json & getExt() { DARABONBA_GET(ext_) };
              inline Result& setExt(const Darabonba::Json & ext) { DARABONBA_SET_VALUE(ext_, ext) };
              inline Result& setExt(Darabonba::Json && ext) { DARABONBA_SET_RVALUE(ext_, ext) };


              // label Field Functions 
              bool hasLabel() const { return this->label_ != nullptr;};
              void deleteLabel() { this->label_ = nullptr;};
              inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
              inline Result& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


              // level Field Functions 
              bool hasLevel() const { return this->level_ != nullptr;};
              void deleteLevel() { this->level_ = nullptr;};
              inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
              inline Result& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


            protected:
              // The confidence score, ranging from 0 to 100, accurate to two decimal places.
              shared_ptr<float> confidence_ {};
              // The description of the label.
              shared_ptr<string> description_ {};
              // Additional information about the detection result.
              Darabonba::Json ext_ {};
              // The label of the detection result.
              shared_ptr<string> label_ {};
              // The risk level. Valid values:
              // 
              // - `high`: High risk. If the content matches an entry in a custom keyword library, the risk level defaults to high.
              // 
              // - `medium`: Medium risk.
              // 
              // - `low`: Low risk.
              // 
              // - `none`: No risk detected.
              shared_ptr<string> level_ {};
            };

            virtual bool empty() const override { return this->level_ == nullptr
        && this->result_ == nullptr && this->suggestion_ == nullptr && this->type_ == nullptr; };
            // level Field Functions 
            bool hasLevel() const { return this->level_ != nullptr;};
            void deleteLevel() { this->level_ = nullptr;};
            inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
            inline Detail& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


            // result Field Functions 
            bool hasResult() const { return this->result_ != nullptr;};
            void deleteResult() { this->result_ = nullptr;};
            inline const vector<Detail::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Detail::Result>) };
            inline vector<Detail::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Detail::Result>) };
            inline Detail& setResult(const vector<Detail::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
            inline Detail& setResult(vector<Detail::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


            // suggestion Field Functions 
            bool hasSuggestion() const { return this->suggestion_ != nullptr;};
            void deleteSuggestion() { this->suggestion_ = nullptr;};
            inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
            inline Detail& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Detail& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            // The risk level. Valid values:
            // 
            // - `high`: High risk. If the content matches an entry in a custom keyword library, the risk level defaults to high.
            // 
            // - `medium`: Medium risk.
            // 
            // - `low`: Low risk.
            // 
            // - `none`: No risk detected.
            shared_ptr<string> level_ {};
            // A list of detection results.
            shared_ptr<vector<Detail::Result>> result_ {};
            // The recommended action. Valid values:
            // 
            // - `block`: Block the content.
            // 
            // - `pass`: Pass the content.
            // 
            // - `watch`: The content requires review.
            // 
            // - `mask`: Mask the content.
            shared_ptr<string> suggestion_ {};
            // The detection type. Valid values:
            // 
            // - `contentModeration`: Content moderation.
            // 
            // - `promptAttack`: Prompt attack detection.
            // 
            // - `sensitiveData`: Sensitive data detection.
            // 
            // - `modelHallucination`: Model hallucination.
            // 
            // - `maliciousFile`: Malicious file detection.
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->detail_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr && this->suggestion_ == nullptr && this->text_ == nullptr && this->url_ == nullptr; };
          // detail Field Functions 
          bool hasDetail() const { return this->detail_ != nullptr;};
          void deleteDetail() { this->detail_ = nullptr;};
          inline const vector<SliceDetails::Detail> & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, vector<SliceDetails::Detail>) };
          inline vector<SliceDetails::Detail> getDetail() { DARABONBA_PTR_GET(detail_, vector<SliceDetails::Detail>) };
          inline SliceDetails& setDetail(const vector<SliceDetails::Detail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
          inline SliceDetails& setDetail(vector<SliceDetails::Detail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
          inline SliceDetails& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
          inline SliceDetails& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // suggestion Field Functions 
          bool hasSuggestion() const { return this->suggestion_ != nullptr;};
          void deleteSuggestion() { this->suggestion_ = nullptr;};
          inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
          inline SliceDetails& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline SliceDetails& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline SliceDetails& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          // Detection details for the audio slice.
          shared_ptr<vector<SliceDetails::Detail>> detail_ {};
          // The end time of the audio slice, in seconds.
          shared_ptr<int64_t> endTime_ {};
          // The start time of the audio slice, in seconds.
          shared_ptr<int64_t> startTime_ {};
          // The recommended action. Valid values:
          // 
          // - `block`: Block the content.
          // 
          // - `pass`: Pass the content.
          // 
          // - `watch`: The content requires review.
          // 
          // - `mask`: Mask the content.
          shared_ptr<string> suggestion_ {};
          // The speech-to-text transcript of the audio slice.
          shared_ptr<string> text_ {};
          // The temporary URL of the audio slice.
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->sliceDetails_ == nullptr
        && this->sliceNum_ == nullptr && this->suggestion_ == nullptr; };
        // sliceDetails Field Functions 
        bool hasSliceDetails() const { return this->sliceDetails_ != nullptr;};
        void deleteSliceDetails() { this->sliceDetails_ = nullptr;};
        inline const vector<AudioResult::SliceDetails> & getSliceDetails() const { DARABONBA_PTR_GET_CONST(sliceDetails_, vector<AudioResult::SliceDetails>) };
        inline vector<AudioResult::SliceDetails> getSliceDetails() { DARABONBA_PTR_GET(sliceDetails_, vector<AudioResult::SliceDetails>) };
        inline AudioResult& setSliceDetails(const vector<AudioResult::SliceDetails> & sliceDetails) { DARABONBA_PTR_SET_VALUE(sliceDetails_, sliceDetails) };
        inline AudioResult& setSliceDetails(vector<AudioResult::SliceDetails> && sliceDetails) { DARABONBA_PTR_SET_RVALUE(sliceDetails_, sliceDetails) };


        // sliceNum Field Functions 
        bool hasSliceNum() const { return this->sliceNum_ != nullptr;};
        void deleteSliceNum() { this->sliceNum_ = nullptr;};
        inline int32_t getSliceNum() const { DARABONBA_PTR_GET_DEFAULT(sliceNum_, 0) };
        inline AudioResult& setSliceNum(int32_t sliceNum) { DARABONBA_PTR_SET_VALUE(sliceNum_, sliceNum) };


        // suggestion Field Functions 
        bool hasSuggestion() const { return this->suggestion_ != nullptr;};
        void deleteSuggestion() { this->suggestion_ = nullptr;};
        inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
        inline AudioResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


      protected:
        // Details for each audio slice.
        shared_ptr<vector<AudioResult::SliceDetails>> sliceDetails_ {};
        // The slice count.
        shared_ptr<int32_t> sliceNum_ {};
        // The overall recommended action for the audio content.
        shared_ptr<string> suggestion_ {};
      };

      virtual bool empty() const override { return this->audioResult_ == nullptr
        && this->dataId_ == nullptr && this->frameResult_ == nullptr && this->liveId_ == nullptr && this->suggestion_ == nullptr && this->taskId_ == nullptr; };
      // audioResult Field Functions 
      bool hasAudioResult() const { return this->audioResult_ != nullptr;};
      void deleteAudioResult() { this->audioResult_ = nullptr;};
      inline const Data::AudioResult & getAudioResult() const { DARABONBA_PTR_GET_CONST(audioResult_, Data::AudioResult) };
      inline Data::AudioResult getAudioResult() { DARABONBA_PTR_GET(audioResult_, Data::AudioResult) };
      inline Data& setAudioResult(const Data::AudioResult & audioResult) { DARABONBA_PTR_SET_VALUE(audioResult_, audioResult) };
      inline Data& setAudioResult(Data::AudioResult && audioResult) { DARABONBA_PTR_SET_RVALUE(audioResult_, audioResult) };


      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline Data& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // frameResult Field Functions 
      bool hasFrameResult() const { return this->frameResult_ != nullptr;};
      void deleteFrameResult() { this->frameResult_ = nullptr;};
      inline const Data::FrameResult & getFrameResult() const { DARABONBA_PTR_GET_CONST(frameResult_, Data::FrameResult) };
      inline Data::FrameResult getFrameResult() { DARABONBA_PTR_GET(frameResult_, Data::FrameResult) };
      inline Data& setFrameResult(const Data::FrameResult & frameResult) { DARABONBA_PTR_SET_VALUE(frameResult_, frameResult) };
      inline Data& setFrameResult(Data::FrameResult && frameResult) { DARABONBA_PTR_SET_RVALUE(frameResult_, frameResult) };


      // liveId Field Functions 
      bool hasLiveId() const { return this->liveId_ != nullptr;};
      void deleteLiveId() { this->liveId_ = nullptr;};
      inline string getLiveId() const { DARABONBA_PTR_GET_DEFAULT(liveId_, "") };
      inline Data& setLiveId(string liveId) { DARABONBA_PTR_SET_VALUE(liveId_, liveId) };


      // suggestion Field Functions 
      bool hasSuggestion() const { return this->suggestion_ != nullptr;};
      void deleteSuggestion() { this->suggestion_ = nullptr;};
      inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
      inline Data& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The audio moderation result.
      shared_ptr<Data::AudioResult> audioResult_ {};
      // The value of the `dataId` parameter from the request. This field is omitted if `dataId` was not provided.
      shared_ptr<string> dataId_ {};
      // The video frame moderation result.
      shared_ptr<Data::FrameResult> frameResult_ {};
      // The unique identifier for the live stream.
      shared_ptr<string> liveId_ {};
      // The recommended action. Valid values:
      // 
      // - `block`: Block the content.
      // 
      // - `pass`: Pass the content.
      // 
      // - `watch`: The content requires review.
      // 
      // - `mask`: Mask the content.
      shared_ptr<string> suggestion_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline MultiModalGuardAsyncResultResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const MultiModalGuardAsyncResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, MultiModalGuardAsyncResultResponseBody::Data) };
    inline MultiModalGuardAsyncResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, MultiModalGuardAsyncResultResponseBody::Data) };
    inline MultiModalGuardAsyncResultResponseBody& setData(const MultiModalGuardAsyncResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline MultiModalGuardAsyncResultResponseBody& setData(MultiModalGuardAsyncResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MultiModalGuardAsyncResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MultiModalGuardAsyncResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code of the response.
    shared_ptr<int32_t> code_ {};
    // The response data.
    shared_ptr<MultiModalGuardAsyncResultResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
