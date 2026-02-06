// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAAUDITRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaAuditResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaAuditResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaAuditResult, mediaAuditResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaAuditResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaAuditResult, mediaAuditResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaAuditResultResponseBody() = default ;
    GetMediaAuditResultResponseBody(const GetMediaAuditResultResponseBody &) = default ;
    GetMediaAuditResultResponseBody(GetMediaAuditResultResponseBody &&) = default ;
    GetMediaAuditResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaAuditResultResponseBody() = default ;
    GetMediaAuditResultResponseBody& operator=(const GetMediaAuditResultResponseBody &) = default ;
    GetMediaAuditResultResponseBody& operator=(GetMediaAuditResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaAuditResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaAuditResult& obj) { 
        DARABONBA_PTR_TO_JSON(AbnormalModules, abnormalModules_);
        DARABONBA_PTR_TO_JSON(AudioResult, audioResult_);
        DARABONBA_PTR_TO_JSON(ImageResult, imageResult_);
        DARABONBA_PTR_TO_JSON(Label, label_);
        DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
        DARABONBA_PTR_TO_JSON(TextResult, textResult_);
        DARABONBA_PTR_TO_JSON(VideoResult, videoResult_);
      };
      friend void from_json(const Darabonba::Json& j, MediaAuditResult& obj) { 
        DARABONBA_PTR_FROM_JSON(AbnormalModules, abnormalModules_);
        DARABONBA_PTR_FROM_JSON(AudioResult, audioResult_);
        DARABONBA_PTR_FROM_JSON(ImageResult, imageResult_);
        DARABONBA_PTR_FROM_JSON(Label, label_);
        DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
        DARABONBA_PTR_FROM_JSON(TextResult, textResult_);
        DARABONBA_PTR_FROM_JSON(VideoResult, videoResult_);
      };
      MediaAuditResult() = default ;
      MediaAuditResult(const MediaAuditResult &) = default ;
      MediaAuditResult(MediaAuditResult &&) = default ;
      MediaAuditResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaAuditResult() = default ;
      MediaAuditResult& operator=(const MediaAuditResult &) = default ;
      MediaAuditResult& operator=(MediaAuditResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VideoResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VideoResult& obj) { 
          DARABONBA_PTR_TO_JSON(AdResult, adResult_);
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(LiveResult, liveResult_);
          DARABONBA_PTR_TO_JSON(LogoResult, logoResult_);
          DARABONBA_PTR_TO_JSON(PornResult, pornResult_);
          DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
          DARABONBA_PTR_TO_JSON(TerrorismResult, terrorismResult_);
        };
        friend void from_json(const Darabonba::Json& j, VideoResult& obj) { 
          DARABONBA_PTR_FROM_JSON(AdResult, adResult_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(LiveResult, liveResult_);
          DARABONBA_PTR_FROM_JSON(LogoResult, logoResult_);
          DARABONBA_PTR_FROM_JSON(PornResult, pornResult_);
          DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
          DARABONBA_PTR_FROM_JSON(TerrorismResult, terrorismResult_);
        };
        VideoResult() = default ;
        VideoResult(const VideoResult &) = default ;
        VideoResult(VideoResult &&) = default ;
        VideoResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VideoResult() = default ;
        VideoResult& operator=(const VideoResult &) = default ;
        VideoResult& operator=(VideoResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TerrorismResult : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TerrorismResult& obj) { 
            DARABONBA_PTR_TO_JSON(AverageScore, averageScore_);
            DARABONBA_PTR_TO_JSON(CounterList, counterList_);
            DARABONBA_PTR_TO_JSON(Label, label_);
            DARABONBA_PTR_TO_JSON(MaxScore, maxScore_);
            DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
            DARABONBA_PTR_TO_JSON(TopList, topList_);
          };
          friend void from_json(const Darabonba::Json& j, TerrorismResult& obj) { 
            DARABONBA_PTR_FROM_JSON(AverageScore, averageScore_);
            DARABONBA_PTR_FROM_JSON(CounterList, counterList_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
            DARABONBA_PTR_FROM_JSON(MaxScore, maxScore_);
            DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
            DARABONBA_PTR_FROM_JSON(TopList, topList_);
          };
          TerrorismResult() = default ;
          TerrorismResult(const TerrorismResult &) = default ;
          TerrorismResult(TerrorismResult &&) = default ;
          TerrorismResult(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TerrorismResult() = default ;
          TerrorismResult& operator=(const TerrorismResult &) = default ;
          TerrorismResult& operator=(TerrorismResult &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TopList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TopList& obj) { 
              DARABONBA_PTR_TO_JSON(Label, label_);
              DARABONBA_PTR_TO_JSON(Score, score_);
              DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
              DARABONBA_PTR_TO_JSON(Url, url_);
            };
            friend void from_json(const Darabonba::Json& j, TopList& obj) { 
              DARABONBA_PTR_FROM_JSON(Label, label_);
              DARABONBA_PTR_FROM_JSON(Score, score_);
              DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
              DARABONBA_PTR_FROM_JSON(Url, url_);
            };
            TopList() = default ;
            TopList(const TopList &) = default ;
            TopList(TopList &&) = default ;
            TopList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TopList() = default ;
            TopList& operator=(const TopList &) = default ;
            TopList& operator=(TopList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->label_ == nullptr
        && this->score_ == nullptr && this->timestamp_ == nullptr && this->url_ == nullptr; };
            // label Field Functions 
            bool hasLabel() const { return this->label_ != nullptr;};
            void deleteLabel() { this->label_ = nullptr;};
            inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
            inline TopList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


            // score Field Functions 
            bool hasScore() const { return this->score_ != nullptr;};
            void deleteScore() { this->score_ = nullptr;};
            inline string getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
            inline TopList& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


            // timestamp Field Functions 
            bool hasTimestamp() const { return this->timestamp_ != nullptr;};
            void deleteTimestamp() { this->timestamp_ = nullptr;};
            inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
            inline TopList& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline TopList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            // The category of the review result. Valid values:
            // 
            // - **normal**
            // - **bloody**
            // - **explosion**
            // - **outfit**
            // - **logo**
            // - **weapon**
            // - **politics**
            // - **violence**
            // - **crowd**
            // - **parade**
            // - **carcrash**
            // - **flag**
            // - **location**
            // - **others**
            shared_ptr<string> label_ {};
            // The score of the image of the category that is indicated by Label.
            shared_ptr<string> score_ {};
            // The position in the video. Unit: milliseconds.
            shared_ptr<string> timestamp_ {};
            // The URL of the image.
            shared_ptr<string> url_ {};
          };

          class CounterList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CounterList& obj) { 
              DARABONBA_PTR_TO_JSON(Count, count_);
              DARABONBA_PTR_TO_JSON(Label, label_);
            };
            friend void from_json(const Darabonba::Json& j, CounterList& obj) { 
              DARABONBA_PTR_FROM_JSON(Count, count_);
              DARABONBA_PTR_FROM_JSON(Label, label_);
            };
            CounterList() = default ;
            CounterList(const CounterList &) = default ;
            CounterList(CounterList &&) = default ;
            CounterList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CounterList() = default ;
            CounterList& operator=(const CounterList &) = default ;
            CounterList& operator=(CounterList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->count_ == nullptr
        && this->label_ == nullptr; };
            // count Field Functions 
            bool hasCount() const { return this->count_ != nullptr;};
            void deleteCount() { this->count_ = nullptr;};
            inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
            inline CounterList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


            // label Field Functions 
            bool hasLabel() const { return this->label_ != nullptr;};
            void deleteLabel() { this->label_ = nullptr;};
            inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
            inline CounterList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          protected:
            // The number of frames.
            shared_ptr<int32_t> count_ {};
            // The category of the review result. Valid values:
            // 
            // - **normal**
            // - **bloody**
            // - **explosion**
            // - **outfit**
            // - **logo**
            // - **weapon**
            // - **politics**
            // - **violence**
            // - **crowd**
            // - **parade**
            // - **carcrash**
            // - **flag**
            // - **location**
            // - **others**
            shared_ptr<string> label_ {};
          };

          virtual bool empty() const override { return this->averageScore_ == nullptr
        && this->counterList_ == nullptr && this->label_ == nullptr && this->maxScore_ == nullptr && this->suggestion_ == nullptr && this->topList_ == nullptr; };
          // averageScore Field Functions 
          bool hasAverageScore() const { return this->averageScore_ != nullptr;};
          void deleteAverageScore() { this->averageScore_ = nullptr;};
          inline string getAverageScore() const { DARABONBA_PTR_GET_DEFAULT(averageScore_, "") };
          inline TerrorismResult& setAverageScore(string averageScore) { DARABONBA_PTR_SET_VALUE(averageScore_, averageScore) };


          // counterList Field Functions 
          bool hasCounterList() const { return this->counterList_ != nullptr;};
          void deleteCounterList() { this->counterList_ = nullptr;};
          inline const vector<TerrorismResult::CounterList> & getCounterList() const { DARABONBA_PTR_GET_CONST(counterList_, vector<TerrorismResult::CounterList>) };
          inline vector<TerrorismResult::CounterList> getCounterList() { DARABONBA_PTR_GET(counterList_, vector<TerrorismResult::CounterList>) };
          inline TerrorismResult& setCounterList(const vector<TerrorismResult::CounterList> & counterList) { DARABONBA_PTR_SET_VALUE(counterList_, counterList) };
          inline TerrorismResult& setCounterList(vector<TerrorismResult::CounterList> && counterList) { DARABONBA_PTR_SET_RVALUE(counterList_, counterList) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline TerrorismResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          // maxScore Field Functions 
          bool hasMaxScore() const { return this->maxScore_ != nullptr;};
          void deleteMaxScore() { this->maxScore_ = nullptr;};
          inline string getMaxScore() const { DARABONBA_PTR_GET_DEFAULT(maxScore_, "") };
          inline TerrorismResult& setMaxScore(string maxScore) { DARABONBA_PTR_SET_VALUE(maxScore_, maxScore) };


          // suggestion Field Functions 
          bool hasSuggestion() const { return this->suggestion_ != nullptr;};
          void deleteSuggestion() { this->suggestion_ = nullptr;};
          inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
          inline TerrorismResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


          // topList Field Functions 
          bool hasTopList() const { return this->topList_ != nullptr;};
          void deleteTopList() { this->topList_ = nullptr;};
          inline const vector<TerrorismResult::TopList> & getTopList() const { DARABONBA_PTR_GET_CONST(topList_, vector<TerrorismResult::TopList>) };
          inline vector<TerrorismResult::TopList> getTopList() { DARABONBA_PTR_GET(topList_, vector<TerrorismResult::TopList>) };
          inline TerrorismResult& setTopList(const vector<TerrorismResult::TopList> & topList) { DARABONBA_PTR_SET_VALUE(topList_, topList) };
          inline TerrorismResult& setTopList(vector<TerrorismResult::TopList> && topList) { DARABONBA_PTR_SET_RVALUE(topList_, topList) };


        protected:
          // The average score of the review results.
          shared_ptr<string> averageScore_ {};
          // The statistics about tag frames.
          shared_ptr<vector<TerrorismResult::CounterList>> counterList_ {};
          // The category of the review result. Valid values:
          // 
          // - **normal**
          // - **bloody**
          // - **explosion**
          // - **outfit**
          // - **logo**
          // - **weapon**
          // - **politics**
          // - **violence**
          // - **crowd**
          // - **parade**
          // - **carcrash**
          // - **flag**
          // - **location**
          // - **others**
          shared_ptr<string> label_ {};
          // The highest review score.
          shared_ptr<string> maxScore_ {};
          // The recommendation for review results. Valid values:
          // 
          // - **block**
          // - **review**
          // - **pass**
          shared_ptr<string> suggestion_ {};
          // The information about the image with the highest score of the category that is indicated by Label.
          shared_ptr<vector<TerrorismResult::TopList>> topList_ {};
        };

        class PornResult : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PornResult& obj) { 
            DARABONBA_PTR_TO_JSON(AverageScore, averageScore_);
            DARABONBA_PTR_TO_JSON(CounterList, counterList_);
            DARABONBA_PTR_TO_JSON(Label, label_);
            DARABONBA_PTR_TO_JSON(MaxScore, maxScore_);
            DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
            DARABONBA_PTR_TO_JSON(TopList, topList_);
          };
          friend void from_json(const Darabonba::Json& j, PornResult& obj) { 
            DARABONBA_PTR_FROM_JSON(AverageScore, averageScore_);
            DARABONBA_PTR_FROM_JSON(CounterList, counterList_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
            DARABONBA_PTR_FROM_JSON(MaxScore, maxScore_);
            DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
            DARABONBA_PTR_FROM_JSON(TopList, topList_);
          };
          PornResult() = default ;
          PornResult(const PornResult &) = default ;
          PornResult(PornResult &&) = default ;
          PornResult(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PornResult() = default ;
          PornResult& operator=(const PornResult &) = default ;
          PornResult& operator=(PornResult &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TopList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TopList& obj) { 
              DARABONBA_PTR_TO_JSON(Label, label_);
              DARABONBA_PTR_TO_JSON(Score, score_);
              DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
              DARABONBA_PTR_TO_JSON(Url, url_);
            };
            friend void from_json(const Darabonba::Json& j, TopList& obj) { 
              DARABONBA_PTR_FROM_JSON(Label, label_);
              DARABONBA_PTR_FROM_JSON(Score, score_);
              DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
              DARABONBA_PTR_FROM_JSON(Url, url_);
            };
            TopList() = default ;
            TopList(const TopList &) = default ;
            TopList(TopList &&) = default ;
            TopList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TopList() = default ;
            TopList& operator=(const TopList &) = default ;
            TopList& operator=(TopList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->label_ == nullptr
        && this->score_ == nullptr && this->timestamp_ == nullptr && this->url_ == nullptr; };
            // label Field Functions 
            bool hasLabel() const { return this->label_ != nullptr;};
            void deleteLabel() { this->label_ = nullptr;};
            inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
            inline TopList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


            // score Field Functions 
            bool hasScore() const { return this->score_ != nullptr;};
            void deleteScore() { this->score_ = nullptr;};
            inline string getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
            inline TopList& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


            // timestamp Field Functions 
            bool hasTimestamp() const { return this->timestamp_ != nullptr;};
            void deleteTimestamp() { this->timestamp_ = nullptr;};
            inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
            inline TopList& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline TopList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            // The category of the review result. Valid values:
            // 
            // - **porn**
            // - **sexy**
            // - **normal**
            shared_ptr<string> label_ {};
            // The score of the image of the category that is indicated by Label.
            shared_ptr<string> score_ {};
            // The position in the video. Unit: milliseconds.
            shared_ptr<string> timestamp_ {};
            // The URL of the image.
            shared_ptr<string> url_ {};
          };

          class CounterList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CounterList& obj) { 
              DARABONBA_PTR_TO_JSON(Count, count_);
              DARABONBA_PTR_TO_JSON(Label, label_);
            };
            friend void from_json(const Darabonba::Json& j, CounterList& obj) { 
              DARABONBA_PTR_FROM_JSON(Count, count_);
              DARABONBA_PTR_FROM_JSON(Label, label_);
            };
            CounterList() = default ;
            CounterList(const CounterList &) = default ;
            CounterList(CounterList &&) = default ;
            CounterList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CounterList() = default ;
            CounterList& operator=(const CounterList &) = default ;
            CounterList& operator=(CounterList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->count_ == nullptr
        && this->label_ == nullptr; };
            // count Field Functions 
            bool hasCount() const { return this->count_ != nullptr;};
            void deleteCount() { this->count_ = nullptr;};
            inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
            inline CounterList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


            // label Field Functions 
            bool hasLabel() const { return this->label_ != nullptr;};
            void deleteLabel() { this->label_ = nullptr;};
            inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
            inline CounterList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          protected:
            // The number of frames.
            shared_ptr<int32_t> count_ {};
            // The category of the review result. Valid values:
            // 
            // - **porn**
            // - **sexy**
            // - **normal**
            shared_ptr<string> label_ {};
          };

          virtual bool empty() const override { return this->averageScore_ == nullptr
        && this->counterList_ == nullptr && this->label_ == nullptr && this->maxScore_ == nullptr && this->suggestion_ == nullptr && this->topList_ == nullptr; };
          // averageScore Field Functions 
          bool hasAverageScore() const { return this->averageScore_ != nullptr;};
          void deleteAverageScore() { this->averageScore_ = nullptr;};
          inline string getAverageScore() const { DARABONBA_PTR_GET_DEFAULT(averageScore_, "") };
          inline PornResult& setAverageScore(string averageScore) { DARABONBA_PTR_SET_VALUE(averageScore_, averageScore) };


          // counterList Field Functions 
          bool hasCounterList() const { return this->counterList_ != nullptr;};
          void deleteCounterList() { this->counterList_ = nullptr;};
          inline const vector<PornResult::CounterList> & getCounterList() const { DARABONBA_PTR_GET_CONST(counterList_, vector<PornResult::CounterList>) };
          inline vector<PornResult::CounterList> getCounterList() { DARABONBA_PTR_GET(counterList_, vector<PornResult::CounterList>) };
          inline PornResult& setCounterList(const vector<PornResult::CounterList> & counterList) { DARABONBA_PTR_SET_VALUE(counterList_, counterList) };
          inline PornResult& setCounterList(vector<PornResult::CounterList> && counterList) { DARABONBA_PTR_SET_RVALUE(counterList_, counterList) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline PornResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          // maxScore Field Functions 
          bool hasMaxScore() const { return this->maxScore_ != nullptr;};
          void deleteMaxScore() { this->maxScore_ = nullptr;};
          inline string getMaxScore() const { DARABONBA_PTR_GET_DEFAULT(maxScore_, "") };
          inline PornResult& setMaxScore(string maxScore) { DARABONBA_PTR_SET_VALUE(maxScore_, maxScore) };


          // suggestion Field Functions 
          bool hasSuggestion() const { return this->suggestion_ != nullptr;};
          void deleteSuggestion() { this->suggestion_ = nullptr;};
          inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
          inline PornResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


          // topList Field Functions 
          bool hasTopList() const { return this->topList_ != nullptr;};
          void deleteTopList() { this->topList_ = nullptr;};
          inline const vector<PornResult::TopList> & getTopList() const { DARABONBA_PTR_GET_CONST(topList_, vector<PornResult::TopList>) };
          inline vector<PornResult::TopList> getTopList() { DARABONBA_PTR_GET(topList_, vector<PornResult::TopList>) };
          inline PornResult& setTopList(const vector<PornResult::TopList> & topList) { DARABONBA_PTR_SET_VALUE(topList_, topList) };
          inline PornResult& setTopList(vector<PornResult::TopList> && topList) { DARABONBA_PTR_SET_RVALUE(topList_, topList) };


        protected:
          // The average score of the review results.
          shared_ptr<string> averageScore_ {};
          // The statistics about tag frames.
          shared_ptr<vector<PornResult::CounterList>> counterList_ {};
          // The category of the review result. Valid values:
          // 
          // - **porn**
          // - **sexy**
          // - **normal**
          shared_ptr<string> label_ {};
          // The highest review score.
          shared_ptr<string> maxScore_ {};
          // The recommendation for review results.
          shared_ptr<string> suggestion_ {};
          // The information about the image with the highest score of the category that is indicated by Label.
          shared_ptr<vector<PornResult::TopList>> topList_ {};
        };

        class LogoResult : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LogoResult& obj) { 
            DARABONBA_PTR_TO_JSON(AverageScore, averageScore_);
            DARABONBA_PTR_TO_JSON(CounterList, counterList_);
            DARABONBA_PTR_TO_JSON(Label, label_);
            DARABONBA_PTR_TO_JSON(MaxScore, maxScore_);
            DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
            DARABONBA_PTR_TO_JSON(TopList, topList_);
          };
          friend void from_json(const Darabonba::Json& j, LogoResult& obj) { 
            DARABONBA_PTR_FROM_JSON(AverageScore, averageScore_);
            DARABONBA_PTR_FROM_JSON(CounterList, counterList_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
            DARABONBA_PTR_FROM_JSON(MaxScore, maxScore_);
            DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
            DARABONBA_PTR_FROM_JSON(TopList, topList_);
          };
          LogoResult() = default ;
          LogoResult(const LogoResult &) = default ;
          LogoResult(LogoResult &&) = default ;
          LogoResult(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LogoResult() = default ;
          LogoResult& operator=(const LogoResult &) = default ;
          LogoResult& operator=(LogoResult &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TopList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TopList& obj) { 
              DARABONBA_PTR_TO_JSON(Label, label_);
              DARABONBA_PTR_TO_JSON(Score, score_);
              DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
              DARABONBA_PTR_TO_JSON(Url, url_);
            };
            friend void from_json(const Darabonba::Json& j, TopList& obj) { 
              DARABONBA_PTR_FROM_JSON(Label, label_);
              DARABONBA_PTR_FROM_JSON(Score, score_);
              DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
              DARABONBA_PTR_FROM_JSON(Url, url_);
            };
            TopList() = default ;
            TopList(const TopList &) = default ;
            TopList(TopList &&) = default ;
            TopList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TopList() = default ;
            TopList& operator=(const TopList &) = default ;
            TopList& operator=(TopList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->label_ == nullptr
        && this->score_ == nullptr && this->timestamp_ == nullptr && this->url_ == nullptr; };
            // label Field Functions 
            bool hasLabel() const { return this->label_ != nullptr;};
            void deleteLabel() { this->label_ = nullptr;};
            inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
            inline TopList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


            // score Field Functions 
            bool hasScore() const { return this->score_ != nullptr;};
            void deleteScore() { this->score_ = nullptr;};
            inline string getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
            inline TopList& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


            // timestamp Field Functions 
            bool hasTimestamp() const { return this->timestamp_ != nullptr;};
            void deleteTimestamp() { this->timestamp_ = nullptr;};
            inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
            inline TopList& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline TopList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            // The category of the review result.
            // 
            // - **logo**
            // - **normal**
            shared_ptr<string> label_ {};
            // The score of the image of the category that is indicated by Label.
            shared_ptr<string> score_ {};
            // The position in the video. Unit: milliseconds.
            shared_ptr<string> timestamp_ {};
            // The URL of the image.
            shared_ptr<string> url_ {};
          };

          class CounterList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CounterList& obj) { 
              DARABONBA_PTR_TO_JSON(Count, count_);
              DARABONBA_PTR_TO_JSON(Label, label_);
            };
            friend void from_json(const Darabonba::Json& j, CounterList& obj) { 
              DARABONBA_PTR_FROM_JSON(Count, count_);
              DARABONBA_PTR_FROM_JSON(Label, label_);
            };
            CounterList() = default ;
            CounterList(const CounterList &) = default ;
            CounterList(CounterList &&) = default ;
            CounterList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CounterList() = default ;
            CounterList& operator=(const CounterList &) = default ;
            CounterList& operator=(CounterList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->count_ == nullptr
        && this->label_ == nullptr; };
            // count Field Functions 
            bool hasCount() const { return this->count_ != nullptr;};
            void deleteCount() { this->count_ = nullptr;};
            inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
            inline CounterList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


            // label Field Functions 
            bool hasLabel() const { return this->label_ != nullptr;};
            void deleteLabel() { this->label_ = nullptr;};
            inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
            inline CounterList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          protected:
            // The number of frames.
            shared_ptr<int32_t> count_ {};
            // The category of the review result. Valid values:
            // 
            // - **logo**
            // - **normal**
            shared_ptr<string> label_ {};
          };

          virtual bool empty() const override { return this->averageScore_ == nullptr
        && this->counterList_ == nullptr && this->label_ == nullptr && this->maxScore_ == nullptr && this->suggestion_ == nullptr && this->topList_ == nullptr; };
          // averageScore Field Functions 
          bool hasAverageScore() const { return this->averageScore_ != nullptr;};
          void deleteAverageScore() { this->averageScore_ = nullptr;};
          inline string getAverageScore() const { DARABONBA_PTR_GET_DEFAULT(averageScore_, "") };
          inline LogoResult& setAverageScore(string averageScore) { DARABONBA_PTR_SET_VALUE(averageScore_, averageScore) };


          // counterList Field Functions 
          bool hasCounterList() const { return this->counterList_ != nullptr;};
          void deleteCounterList() { this->counterList_ = nullptr;};
          inline const vector<LogoResult::CounterList> & getCounterList() const { DARABONBA_PTR_GET_CONST(counterList_, vector<LogoResult::CounterList>) };
          inline vector<LogoResult::CounterList> getCounterList() { DARABONBA_PTR_GET(counterList_, vector<LogoResult::CounterList>) };
          inline LogoResult& setCounterList(const vector<LogoResult::CounterList> & counterList) { DARABONBA_PTR_SET_VALUE(counterList_, counterList) };
          inline LogoResult& setCounterList(vector<LogoResult::CounterList> && counterList) { DARABONBA_PTR_SET_RVALUE(counterList_, counterList) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline LogoResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          // maxScore Field Functions 
          bool hasMaxScore() const { return this->maxScore_ != nullptr;};
          void deleteMaxScore() { this->maxScore_ = nullptr;};
          inline string getMaxScore() const { DARABONBA_PTR_GET_DEFAULT(maxScore_, "") };
          inline LogoResult& setMaxScore(string maxScore) { DARABONBA_PTR_SET_VALUE(maxScore_, maxScore) };


          // suggestion Field Functions 
          bool hasSuggestion() const { return this->suggestion_ != nullptr;};
          void deleteSuggestion() { this->suggestion_ = nullptr;};
          inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
          inline LogoResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


          // topList Field Functions 
          bool hasTopList() const { return this->topList_ != nullptr;};
          void deleteTopList() { this->topList_ = nullptr;};
          inline const vector<LogoResult::TopList> & getTopList() const { DARABONBA_PTR_GET_CONST(topList_, vector<LogoResult::TopList>) };
          inline vector<LogoResult::TopList> getTopList() { DARABONBA_PTR_GET(topList_, vector<LogoResult::TopList>) };
          inline LogoResult& setTopList(const vector<LogoResult::TopList> & topList) { DARABONBA_PTR_SET_VALUE(topList_, topList) };
          inline LogoResult& setTopList(vector<LogoResult::TopList> && topList) { DARABONBA_PTR_SET_RVALUE(topList_, topList) };


        protected:
          // The average score of the review results.
          shared_ptr<string> averageScore_ {};
          // The statistics about tag frames.
          shared_ptr<vector<LogoResult::CounterList>> counterList_ {};
          // The category of the review result. Valid values:
          // 
          // - **logo**
          // - **normal**
          shared_ptr<string> label_ {};
          // The highest review score.
          shared_ptr<string> maxScore_ {};
          // The recommendation for review results. Valid values:
          // 
          // - **block**
          // - **review**
          // - **pass**
          shared_ptr<string> suggestion_ {};
          // The information about the image with the highest score of the category that is indicated by Label.
          shared_ptr<vector<LogoResult::TopList>> topList_ {};
        };

        class LiveResult : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LiveResult& obj) { 
            DARABONBA_PTR_TO_JSON(AverageScore, averageScore_);
            DARABONBA_PTR_TO_JSON(CounterList, counterList_);
            DARABONBA_PTR_TO_JSON(Label, label_);
            DARABONBA_PTR_TO_JSON(MaxScore, maxScore_);
            DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
            DARABONBA_PTR_TO_JSON(TopList, topList_);
          };
          friend void from_json(const Darabonba::Json& j, LiveResult& obj) { 
            DARABONBA_PTR_FROM_JSON(AverageScore, averageScore_);
            DARABONBA_PTR_FROM_JSON(CounterList, counterList_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
            DARABONBA_PTR_FROM_JSON(MaxScore, maxScore_);
            DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
            DARABONBA_PTR_FROM_JSON(TopList, topList_);
          };
          LiveResult() = default ;
          LiveResult(const LiveResult &) = default ;
          LiveResult(LiveResult &&) = default ;
          LiveResult(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LiveResult() = default ;
          LiveResult& operator=(const LiveResult &) = default ;
          LiveResult& operator=(LiveResult &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TopList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TopList& obj) { 
              DARABONBA_PTR_TO_JSON(Label, label_);
              DARABONBA_PTR_TO_JSON(Score, score_);
              DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
              DARABONBA_PTR_TO_JSON(Url, url_);
            };
            friend void from_json(const Darabonba::Json& j, TopList& obj) { 
              DARABONBA_PTR_FROM_JSON(Label, label_);
              DARABONBA_PTR_FROM_JSON(Score, score_);
              DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
              DARABONBA_PTR_FROM_JSON(Url, url_);
            };
            TopList() = default ;
            TopList(const TopList &) = default ;
            TopList(TopList &&) = default ;
            TopList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TopList() = default ;
            TopList& operator=(const TopList &) = default ;
            TopList& operator=(TopList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->label_ == nullptr
        && this->score_ == nullptr && this->timestamp_ == nullptr && this->url_ == nullptr; };
            // label Field Functions 
            bool hasLabel() const { return this->label_ != nullptr;};
            void deleteLabel() { this->label_ = nullptr;};
            inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
            inline TopList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


            // score Field Functions 
            bool hasScore() const { return this->score_ != nullptr;};
            void deleteScore() { this->score_ = nullptr;};
            inline string getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
            inline TopList& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


            // timestamp Field Functions 
            bool hasTimestamp() const { return this->timestamp_ != nullptr;};
            void deleteTimestamp() { this->timestamp_ = nullptr;};
            inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
            inline TopList& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline TopList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            // The category of the review result. Valid values:
            // 
            // - **live**: The content contains undesirable scenes.
            // - **normal**: normal content.
            shared_ptr<string> label_ {};
            // The score of the image of the category that is indicated by Label.
            shared_ptr<string> score_ {};
            // The position in the video. Unit: milliseconds.
            shared_ptr<string> timestamp_ {};
            // The URL of the image.
            shared_ptr<string> url_ {};
          };

          class CounterList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CounterList& obj) { 
              DARABONBA_PTR_TO_JSON(Count, count_);
              DARABONBA_PTR_TO_JSON(Label, label_);
            };
            friend void from_json(const Darabonba::Json& j, CounterList& obj) { 
              DARABONBA_PTR_FROM_JSON(Count, count_);
              DARABONBA_PTR_FROM_JSON(Label, label_);
            };
            CounterList() = default ;
            CounterList(const CounterList &) = default ;
            CounterList(CounterList &&) = default ;
            CounterList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CounterList() = default ;
            CounterList& operator=(const CounterList &) = default ;
            CounterList& operator=(CounterList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->count_ == nullptr
        && this->label_ == nullptr; };
            // count Field Functions 
            bool hasCount() const { return this->count_ != nullptr;};
            void deleteCount() { this->count_ = nullptr;};
            inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
            inline CounterList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


            // label Field Functions 
            bool hasLabel() const { return this->label_ != nullptr;};
            void deleteLabel() { this->label_ = nullptr;};
            inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
            inline CounterList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          protected:
            // The number of frames.
            shared_ptr<int32_t> count_ {};
            // The category of the review result. Valid values:
            // 
            // - **live**: The content contains undesirable scenes.
            // - **normal**: normal content.
            shared_ptr<string> label_ {};
          };

          virtual bool empty() const override { return this->averageScore_ == nullptr
        && this->counterList_ == nullptr && this->label_ == nullptr && this->maxScore_ == nullptr && this->suggestion_ == nullptr && this->topList_ == nullptr; };
          // averageScore Field Functions 
          bool hasAverageScore() const { return this->averageScore_ != nullptr;};
          void deleteAverageScore() { this->averageScore_ = nullptr;};
          inline string getAverageScore() const { DARABONBA_PTR_GET_DEFAULT(averageScore_, "") };
          inline LiveResult& setAverageScore(string averageScore) { DARABONBA_PTR_SET_VALUE(averageScore_, averageScore) };


          // counterList Field Functions 
          bool hasCounterList() const { return this->counterList_ != nullptr;};
          void deleteCounterList() { this->counterList_ = nullptr;};
          inline const vector<LiveResult::CounterList> & getCounterList() const { DARABONBA_PTR_GET_CONST(counterList_, vector<LiveResult::CounterList>) };
          inline vector<LiveResult::CounterList> getCounterList() { DARABONBA_PTR_GET(counterList_, vector<LiveResult::CounterList>) };
          inline LiveResult& setCounterList(const vector<LiveResult::CounterList> & counterList) { DARABONBA_PTR_SET_VALUE(counterList_, counterList) };
          inline LiveResult& setCounterList(vector<LiveResult::CounterList> && counterList) { DARABONBA_PTR_SET_RVALUE(counterList_, counterList) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline LiveResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          // maxScore Field Functions 
          bool hasMaxScore() const { return this->maxScore_ != nullptr;};
          void deleteMaxScore() { this->maxScore_ = nullptr;};
          inline string getMaxScore() const { DARABONBA_PTR_GET_DEFAULT(maxScore_, "") };
          inline LiveResult& setMaxScore(string maxScore) { DARABONBA_PTR_SET_VALUE(maxScore_, maxScore) };


          // suggestion Field Functions 
          bool hasSuggestion() const { return this->suggestion_ != nullptr;};
          void deleteSuggestion() { this->suggestion_ = nullptr;};
          inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
          inline LiveResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


          // topList Field Functions 
          bool hasTopList() const { return this->topList_ != nullptr;};
          void deleteTopList() { this->topList_ = nullptr;};
          inline const vector<LiveResult::TopList> & getTopList() const { DARABONBA_PTR_GET_CONST(topList_, vector<LiveResult::TopList>) };
          inline vector<LiveResult::TopList> getTopList() { DARABONBA_PTR_GET(topList_, vector<LiveResult::TopList>) };
          inline LiveResult& setTopList(const vector<LiveResult::TopList> & topList) { DARABONBA_PTR_SET_VALUE(topList_, topList) };
          inline LiveResult& setTopList(vector<LiveResult::TopList> && topList) { DARABONBA_PTR_SET_RVALUE(topList_, topList) };


        protected:
          // The average score of the review results.
          shared_ptr<string> averageScore_ {};
          // The statistics about tag frames.
          shared_ptr<vector<LiveResult::CounterList>> counterList_ {};
          // The category of the review result. Valid values:
          // 
          // - **live**: The content contains undesirable scenes.
          // - **normal**: normal content.
          shared_ptr<string> label_ {};
          // The highest review score.
          shared_ptr<string> maxScore_ {};
          // The recommendation for review results. Valid values:
          // 
          // - **block**
          // - **review**
          // - **pass**
          shared_ptr<string> suggestion_ {};
          // The information about the image with the highest score of the category that is indicated by Label.
          shared_ptr<vector<LiveResult::TopList>> topList_ {};
        };

        class AdResult : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AdResult& obj) { 
            DARABONBA_PTR_TO_JSON(AverageScore, averageScore_);
            DARABONBA_PTR_TO_JSON(CounterList, counterList_);
            DARABONBA_PTR_TO_JSON(Label, label_);
            DARABONBA_PTR_TO_JSON(MaxScore, maxScore_);
            DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
            DARABONBA_PTR_TO_JSON(TopList, topList_);
          };
          friend void from_json(const Darabonba::Json& j, AdResult& obj) { 
            DARABONBA_PTR_FROM_JSON(AverageScore, averageScore_);
            DARABONBA_PTR_FROM_JSON(CounterList, counterList_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
            DARABONBA_PTR_FROM_JSON(MaxScore, maxScore_);
            DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
            DARABONBA_PTR_FROM_JSON(TopList, topList_);
          };
          AdResult() = default ;
          AdResult(const AdResult &) = default ;
          AdResult(AdResult &&) = default ;
          AdResult(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AdResult() = default ;
          AdResult& operator=(const AdResult &) = default ;
          AdResult& operator=(AdResult &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TopList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TopList& obj) { 
              DARABONBA_PTR_TO_JSON(Label, label_);
              DARABONBA_PTR_TO_JSON(Score, score_);
              DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
              DARABONBA_PTR_TO_JSON(Url, url_);
            };
            friend void from_json(const Darabonba::Json& j, TopList& obj) { 
              DARABONBA_PTR_FROM_JSON(Label, label_);
              DARABONBA_PTR_FROM_JSON(Score, score_);
              DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
              DARABONBA_PTR_FROM_JSON(Url, url_);
            };
            TopList() = default ;
            TopList(const TopList &) = default ;
            TopList(TopList &&) = default ;
            TopList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TopList() = default ;
            TopList& operator=(const TopList &) = default ;
            TopList& operator=(TopList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->label_ == nullptr
        && this->score_ == nullptr && this->timestamp_ == nullptr && this->url_ == nullptr; };
            // label Field Functions 
            bool hasLabel() const { return this->label_ != nullptr;};
            void deleteLabel() { this->label_ = nullptr;};
            inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
            inline TopList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


            // score Field Functions 
            bool hasScore() const { return this->score_ != nullptr;};
            void deleteScore() { this->score_ = nullptr;};
            inline string getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
            inline TopList& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


            // timestamp Field Functions 
            bool hasTimestamp() const { return this->timestamp_ != nullptr;};
            void deleteTimestamp() { this->timestamp_ = nullptr;};
            inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
            inline TopList& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline TopList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            // The category of the review result. 
            // 
            // - **ad**
            // - **normal**
            shared_ptr<string> label_ {};
            // The score of the image of the category that is indicated by Label.
            shared_ptr<string> score_ {};
            // The position in the video. Unit: milliseconds.
            shared_ptr<string> timestamp_ {};
            // The URL of the image.
            shared_ptr<string> url_ {};
          };

          class CounterList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CounterList& obj) { 
              DARABONBA_PTR_TO_JSON(Count, count_);
              DARABONBA_PTR_TO_JSON(Label, label_);
            };
            friend void from_json(const Darabonba::Json& j, CounterList& obj) { 
              DARABONBA_PTR_FROM_JSON(Count, count_);
              DARABONBA_PTR_FROM_JSON(Label, label_);
            };
            CounterList() = default ;
            CounterList(const CounterList &) = default ;
            CounterList(CounterList &&) = default ;
            CounterList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CounterList() = default ;
            CounterList& operator=(const CounterList &) = default ;
            CounterList& operator=(CounterList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->count_ == nullptr
        && this->label_ == nullptr; };
            // count Field Functions 
            bool hasCount() const { return this->count_ != nullptr;};
            void deleteCount() { this->count_ = nullptr;};
            inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
            inline CounterList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


            // label Field Functions 
            bool hasLabel() const { return this->label_ != nullptr;};
            void deleteLabel() { this->label_ = nullptr;};
            inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
            inline CounterList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          protected:
            // The number of frames.
            shared_ptr<int32_t> count_ {};
            // The category of the review result. Valid values:
            // 
            // - **ad**
            // - **normal**
            shared_ptr<string> label_ {};
          };

          virtual bool empty() const override { return this->averageScore_ == nullptr
        && this->counterList_ == nullptr && this->label_ == nullptr && this->maxScore_ == nullptr && this->suggestion_ == nullptr && this->topList_ == nullptr; };
          // averageScore Field Functions 
          bool hasAverageScore() const { return this->averageScore_ != nullptr;};
          void deleteAverageScore() { this->averageScore_ = nullptr;};
          inline string getAverageScore() const { DARABONBA_PTR_GET_DEFAULT(averageScore_, "") };
          inline AdResult& setAverageScore(string averageScore) { DARABONBA_PTR_SET_VALUE(averageScore_, averageScore) };


          // counterList Field Functions 
          bool hasCounterList() const { return this->counterList_ != nullptr;};
          void deleteCounterList() { this->counterList_ = nullptr;};
          inline const vector<AdResult::CounterList> & getCounterList() const { DARABONBA_PTR_GET_CONST(counterList_, vector<AdResult::CounterList>) };
          inline vector<AdResult::CounterList> getCounterList() { DARABONBA_PTR_GET(counterList_, vector<AdResult::CounterList>) };
          inline AdResult& setCounterList(const vector<AdResult::CounterList> & counterList) { DARABONBA_PTR_SET_VALUE(counterList_, counterList) };
          inline AdResult& setCounterList(vector<AdResult::CounterList> && counterList) { DARABONBA_PTR_SET_RVALUE(counterList_, counterList) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline AdResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          // maxScore Field Functions 
          bool hasMaxScore() const { return this->maxScore_ != nullptr;};
          void deleteMaxScore() { this->maxScore_ = nullptr;};
          inline string getMaxScore() const { DARABONBA_PTR_GET_DEFAULT(maxScore_, "") };
          inline AdResult& setMaxScore(string maxScore) { DARABONBA_PTR_SET_VALUE(maxScore_, maxScore) };


          // suggestion Field Functions 
          bool hasSuggestion() const { return this->suggestion_ != nullptr;};
          void deleteSuggestion() { this->suggestion_ = nullptr;};
          inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
          inline AdResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


          // topList Field Functions 
          bool hasTopList() const { return this->topList_ != nullptr;};
          void deleteTopList() { this->topList_ = nullptr;};
          inline const vector<AdResult::TopList> & getTopList() const { DARABONBA_PTR_GET_CONST(topList_, vector<AdResult::TopList>) };
          inline vector<AdResult::TopList> getTopList() { DARABONBA_PTR_GET(topList_, vector<AdResult::TopList>) };
          inline AdResult& setTopList(const vector<AdResult::TopList> & topList) { DARABONBA_PTR_SET_VALUE(topList_, topList) };
          inline AdResult& setTopList(vector<AdResult::TopList> && topList) { DARABONBA_PTR_SET_RVALUE(topList_, topList) };


        protected:
          // The average score of the review results.
          shared_ptr<string> averageScore_ {};
          // The statistics about tag frames.
          shared_ptr<vector<AdResult::CounterList>> counterList_ {};
          // The category of the review result. Valid values:
          // 
          // - **ad**
          // - **normal**
          shared_ptr<string> label_ {};
          // The highest review score.
          shared_ptr<string> maxScore_ {};
          // The recommendation for review results. Valid values:
          // 
          // - **block**
          // - **review**
          // - **pass**
          shared_ptr<string> suggestion_ {};
          // The information about the image with the highest score of the category that is indicated by Label.
          shared_ptr<vector<AdResult::TopList>> topList_ {};
        };

        virtual bool empty() const override { return this->adResult_ == nullptr
        && this->label_ == nullptr && this->liveResult_ == nullptr && this->logoResult_ == nullptr && this->pornResult_ == nullptr && this->suggestion_ == nullptr
        && this->terrorismResult_ == nullptr; };
        // adResult Field Functions 
        bool hasAdResult() const { return this->adResult_ != nullptr;};
        void deleteAdResult() { this->adResult_ = nullptr;};
        inline const VideoResult::AdResult & getAdResult() const { DARABONBA_PTR_GET_CONST(adResult_, VideoResult::AdResult) };
        inline VideoResult::AdResult getAdResult() { DARABONBA_PTR_GET(adResult_, VideoResult::AdResult) };
        inline VideoResult& setAdResult(const VideoResult::AdResult & adResult) { DARABONBA_PTR_SET_VALUE(adResult_, adResult) };
        inline VideoResult& setAdResult(VideoResult::AdResult && adResult) { DARABONBA_PTR_SET_RVALUE(adResult_, adResult) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline VideoResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // liveResult Field Functions 
        bool hasLiveResult() const { return this->liveResult_ != nullptr;};
        void deleteLiveResult() { this->liveResult_ = nullptr;};
        inline const VideoResult::LiveResult & getLiveResult() const { DARABONBA_PTR_GET_CONST(liveResult_, VideoResult::LiveResult) };
        inline VideoResult::LiveResult getLiveResult() { DARABONBA_PTR_GET(liveResult_, VideoResult::LiveResult) };
        inline VideoResult& setLiveResult(const VideoResult::LiveResult & liveResult) { DARABONBA_PTR_SET_VALUE(liveResult_, liveResult) };
        inline VideoResult& setLiveResult(VideoResult::LiveResult && liveResult) { DARABONBA_PTR_SET_RVALUE(liveResult_, liveResult) };


        // logoResult Field Functions 
        bool hasLogoResult() const { return this->logoResult_ != nullptr;};
        void deleteLogoResult() { this->logoResult_ = nullptr;};
        inline const VideoResult::LogoResult & getLogoResult() const { DARABONBA_PTR_GET_CONST(logoResult_, VideoResult::LogoResult) };
        inline VideoResult::LogoResult getLogoResult() { DARABONBA_PTR_GET(logoResult_, VideoResult::LogoResult) };
        inline VideoResult& setLogoResult(const VideoResult::LogoResult & logoResult) { DARABONBA_PTR_SET_VALUE(logoResult_, logoResult) };
        inline VideoResult& setLogoResult(VideoResult::LogoResult && logoResult) { DARABONBA_PTR_SET_RVALUE(logoResult_, logoResult) };


        // pornResult Field Functions 
        bool hasPornResult() const { return this->pornResult_ != nullptr;};
        void deletePornResult() { this->pornResult_ = nullptr;};
        inline const VideoResult::PornResult & getPornResult() const { DARABONBA_PTR_GET_CONST(pornResult_, VideoResult::PornResult) };
        inline VideoResult::PornResult getPornResult() { DARABONBA_PTR_GET(pornResult_, VideoResult::PornResult) };
        inline VideoResult& setPornResult(const VideoResult::PornResult & pornResult) { DARABONBA_PTR_SET_VALUE(pornResult_, pornResult) };
        inline VideoResult& setPornResult(VideoResult::PornResult && pornResult) { DARABONBA_PTR_SET_RVALUE(pornResult_, pornResult) };


        // suggestion Field Functions 
        bool hasSuggestion() const { return this->suggestion_ != nullptr;};
        void deleteSuggestion() { this->suggestion_ = nullptr;};
        inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
        inline VideoResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


        // terrorismResult Field Functions 
        bool hasTerrorismResult() const { return this->terrorismResult_ != nullptr;};
        void deleteTerrorismResult() { this->terrorismResult_ = nullptr;};
        inline const VideoResult::TerrorismResult & getTerrorismResult() const { DARABONBA_PTR_GET_CONST(terrorismResult_, VideoResult::TerrorismResult) };
        inline VideoResult::TerrorismResult getTerrorismResult() { DARABONBA_PTR_GET(terrorismResult_, VideoResult::TerrorismResult) };
        inline VideoResult& setTerrorismResult(const VideoResult::TerrorismResult & terrorismResult) { DARABONBA_PTR_SET_VALUE(terrorismResult_, terrorismResult) };
        inline VideoResult& setTerrorismResult(VideoResult::TerrorismResult && terrorismResult) { DARABONBA_PTR_SET_RVALUE(terrorismResult_, terrorismResult) };


      protected:
        // The results of ad review.
        shared_ptr<VideoResult::AdResult> adResult_ {};
        // The category of the review result. Separate multiple values with commas (,). Valid values: 
        // 
        // - **porn**
        // - **terrorism**
        // - **normal**
        shared_ptr<string> label_ {};
        // The results of undesired content review.
        shared_ptr<VideoResult::LiveResult> liveResult_ {};
        // The results of logo review.
        shared_ptr<VideoResult::LogoResult> logoResult_ {};
        // The results of pornographic content review.
        shared_ptr<VideoResult::PornResult> pornResult_ {};
        // The recommendation for review results. Valid values:
        // 
        // - **block**
        // - **review**
        // - **pass**
        shared_ptr<string> suggestion_ {};
        // The results of terrorist content review.
        shared_ptr<VideoResult::TerrorismResult> terrorismResult_ {};
      };

      class TextResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TextResult& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Scene, scene_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, TextResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Scene, scene_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        TextResult() = default ;
        TextResult(const TextResult &) = default ;
        TextResult(TextResult &&) = default ;
        TextResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TextResult() = default ;
        TextResult& operator=(const TextResult &) = default ;
        TextResult& operator=(TextResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->label_ == nullptr && this->scene_ == nullptr && this->score_ == nullptr && this->suggestion_ == nullptr && this->type_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline TextResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline TextResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // scene Field Functions 
        bool hasScene() const { return this->scene_ != nullptr;};
        void deleteScene() { this->scene_ = nullptr;};
        inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
        inline TextResult& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline string getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
        inline TextResult& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // suggestion Field Functions 
        bool hasSuggestion() const { return this->suggestion_ != nullptr;};
        void deleteSuggestion() { this->suggestion_ = nullptr;};
        inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
        inline TextResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline TextResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The text content for review.
        shared_ptr<string> content_ {};
        // The category of the review result. Valid values:
        // 
        // - **spam**
        // - **ad**
        // - **abuse**
        // - **flood**
        // - **contraband**
        // - **meaningless**
        // - **normal**
        shared_ptr<string> label_ {};
        // The review scenario. The value is **antispam**.
        shared_ptr<string> scene_ {};
        // The score of the image of the category that is indicated by Label.
        shared_ptr<string> score_ {};
        // The recommendation for review results. Valid values:
        // 
        // - **block**
        // - **review**
        // - **pass**
        shared_ptr<string> suggestion_ {};
        // The type of the text. The value is **title**.
        shared_ptr<string> type_ {};
      };

      class ImageResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImageResult& obj) { 
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Result, result_);
          DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, ImageResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
          DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        ImageResult() = default ;
        ImageResult(const ImageResult &) = default ;
        ImageResult(ImageResult &&) = default ;
        ImageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImageResult() = default ;
        ImageResult& operator=(const ImageResult &) = default ;
        ImageResult& operator=(ImageResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Result : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Result& obj) { 
            DARABONBA_PTR_TO_JSON(Label, label_);
            DARABONBA_PTR_TO_JSON(Scene, scene_);
            DARABONBA_PTR_TO_JSON(Score, score_);
            DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
          };
          friend void from_json(const Darabonba::Json& j, Result& obj) { 
            DARABONBA_PTR_FROM_JSON(Label, label_);
            DARABONBA_PTR_FROM_JSON(Scene, scene_);
            DARABONBA_PTR_FROM_JSON(Score, score_);
            DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
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
          virtual bool empty() const override { return this->label_ == nullptr
        && this->scene_ == nullptr && this->score_ == nullptr && this->suggestion_ == nullptr; };
          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline Result& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          // scene Field Functions 
          bool hasScene() const { return this->scene_ != nullptr;};
          void deleteScene() { this->scene_ = nullptr;};
          inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
          inline Result& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


          // score Field Functions 
          bool hasScore() const { return this->score_ != nullptr;};
          void deleteScore() { this->score_ = nullptr;};
          inline string getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
          inline Result& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


          // suggestion Field Functions 
          bool hasSuggestion() const { return this->suggestion_ != nullptr;};
          void deleteSuggestion() { this->suggestion_ = nullptr;};
          inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
          inline Result& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


        protected:
          // The category of the review result.
          // 
          // Valid values if scene is **porn**:
          // 
          // *   **porn**
          // *   **sexy**
          // *   **normal**
          // 
          // Valid values if scene is **terrorism**:
          // 
          // *   **normal**
          // *   **bloody**
          // *   **explosion**
          // *   **outfit**
          // *   **logo**
          // *   **weapon**
          // *   **politics**
          // *   **violence**
          // *   **crowd**
          // *   **parade**
          // *   **carcrash**
          // *   **flag**
          // *   **location**
          // *   **others**
          shared_ptr<string> label_ {};
          // The review scenario. Valid values:
          // 
          // *   **terrorism**
          // *   **porn**
          shared_ptr<string> scene_ {};
          // The score of the image of the category that is indicated by Label.
          shared_ptr<string> score_ {};
          // The recommendation for review results. Valid values:
          // 
          // *   **block**
          // *   **review**
          // *   **pass**
          shared_ptr<string> suggestion_ {};
        };

        virtual bool empty() const override { return this->label_ == nullptr
        && this->result_ == nullptr && this->suggestion_ == nullptr && this->type_ == nullptr && this->url_ == nullptr; };
        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline ImageResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline const vector<ImageResult::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ImageResult::Result>) };
        inline vector<ImageResult::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ImageResult::Result>) };
        inline ImageResult& setResult(const vector<ImageResult::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
        inline ImageResult& setResult(vector<ImageResult::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


        // suggestion Field Functions 
        bool hasSuggestion() const { return this->suggestion_ != nullptr;};
        void deleteSuggestion() { this->suggestion_ = nullptr;};
        inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
        inline ImageResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ImageResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline ImageResult& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The category of the review result. Separate multiple values with commas (,). Valid values:
        // 
        // *   **porn**
        // *   **terrorism**
        // *   **normal**
        shared_ptr<string> label_ {};
        // Details of image review results.
        shared_ptr<vector<ImageResult::Result>> result_ {};
        // The recommendation for review results. Valid values:
        // 
        // *   **block**
        // *   **review**
        // *   **pass**
        shared_ptr<string> suggestion_ {};
        // The type of the image. The value is **cover**.
        shared_ptr<string> type_ {};
        // The URL of the image.
        shared_ptr<string> url_ {};
      };

      class AudioResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AudioResult& obj) { 
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Scene, scene_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
        };
        friend void from_json(const Darabonba::Json& j, AudioResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Scene, scene_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
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
        virtual bool empty() const override { return this->label_ == nullptr
        && this->scene_ == nullptr && this->score_ == nullptr && this->suggestion_ == nullptr; };
        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline AudioResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // scene Field Functions 
        bool hasScene() const { return this->scene_ != nullptr;};
        void deleteScene() { this->scene_ = nullptr;};
        inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
        inline AudioResult& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline string getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
        inline AudioResult& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // suggestion Field Functions 
        bool hasSuggestion() const { return this->suggestion_ != nullptr;};
        void deleteSuggestion() { this->suggestion_ = nullptr;};
        inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
        inline AudioResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


      protected:
        // The category of the review result.
        // 
        // *   **normal**
        // *   **spam**
        // *   **ad**
        // *   **politics**
        // *   **terrorism**
        // *   **abuse**
        // *   **porn**
        // *   **flood**
        // *   **contraband**
        // *   **meaningless**
        shared_ptr<string> label_ {};
        // The review scenario. The value is **antispam**.
        shared_ptr<string> scene_ {};
        // The score.
        shared_ptr<string> score_ {};
        // The recommendation for review results. Valid values:
        // 
        // *   **block**
        // *   **review**
        // *   **pass**
        shared_ptr<string> suggestion_ {};
      };

      virtual bool empty() const override { return this->abnormalModules_ == nullptr
        && this->audioResult_ == nullptr && this->imageResult_ == nullptr && this->label_ == nullptr && this->suggestion_ == nullptr && this->textResult_ == nullptr
        && this->videoResult_ == nullptr; };
      // abnormalModules Field Functions 
      bool hasAbnormalModules() const { return this->abnormalModules_ != nullptr;};
      void deleteAbnormalModules() { this->abnormalModules_ = nullptr;};
      inline string getAbnormalModules() const { DARABONBA_PTR_GET_DEFAULT(abnormalModules_, "") };
      inline MediaAuditResult& setAbnormalModules(string abnormalModules) { DARABONBA_PTR_SET_VALUE(abnormalModules_, abnormalModules) };


      // audioResult Field Functions 
      bool hasAudioResult() const { return this->audioResult_ != nullptr;};
      void deleteAudioResult() { this->audioResult_ = nullptr;};
      inline const vector<MediaAuditResult::AudioResult> & getAudioResult() const { DARABONBA_PTR_GET_CONST(audioResult_, vector<MediaAuditResult::AudioResult>) };
      inline vector<MediaAuditResult::AudioResult> getAudioResult() { DARABONBA_PTR_GET(audioResult_, vector<MediaAuditResult::AudioResult>) };
      inline MediaAuditResult& setAudioResult(const vector<MediaAuditResult::AudioResult> & audioResult) { DARABONBA_PTR_SET_VALUE(audioResult_, audioResult) };
      inline MediaAuditResult& setAudioResult(vector<MediaAuditResult::AudioResult> && audioResult) { DARABONBA_PTR_SET_RVALUE(audioResult_, audioResult) };


      // imageResult Field Functions 
      bool hasImageResult() const { return this->imageResult_ != nullptr;};
      void deleteImageResult() { this->imageResult_ = nullptr;};
      inline const vector<MediaAuditResult::ImageResult> & getImageResult() const { DARABONBA_PTR_GET_CONST(imageResult_, vector<MediaAuditResult::ImageResult>) };
      inline vector<MediaAuditResult::ImageResult> getImageResult() { DARABONBA_PTR_GET(imageResult_, vector<MediaAuditResult::ImageResult>) };
      inline MediaAuditResult& setImageResult(const vector<MediaAuditResult::ImageResult> & imageResult) { DARABONBA_PTR_SET_VALUE(imageResult_, imageResult) };
      inline MediaAuditResult& setImageResult(vector<MediaAuditResult::ImageResult> && imageResult) { DARABONBA_PTR_SET_RVALUE(imageResult_, imageResult) };


      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline MediaAuditResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // suggestion Field Functions 
      bool hasSuggestion() const { return this->suggestion_ != nullptr;};
      void deleteSuggestion() { this->suggestion_ = nullptr;};
      inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
      inline MediaAuditResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


      // textResult Field Functions 
      bool hasTextResult() const { return this->textResult_ != nullptr;};
      void deleteTextResult() { this->textResult_ = nullptr;};
      inline const vector<MediaAuditResult::TextResult> & getTextResult() const { DARABONBA_PTR_GET_CONST(textResult_, vector<MediaAuditResult::TextResult>) };
      inline vector<MediaAuditResult::TextResult> getTextResult() { DARABONBA_PTR_GET(textResult_, vector<MediaAuditResult::TextResult>) };
      inline MediaAuditResult& setTextResult(const vector<MediaAuditResult::TextResult> & textResult) { DARABONBA_PTR_SET_VALUE(textResult_, textResult) };
      inline MediaAuditResult& setTextResult(vector<MediaAuditResult::TextResult> && textResult) { DARABONBA_PTR_SET_RVALUE(textResult_, textResult) };


      // videoResult Field Functions 
      bool hasVideoResult() const { return this->videoResult_ != nullptr;};
      void deleteVideoResult() { this->videoResult_ = nullptr;};
      inline const MediaAuditResult::VideoResult & getVideoResult() const { DARABONBA_PTR_GET_CONST(videoResult_, MediaAuditResult::VideoResult) };
      inline MediaAuditResult::VideoResult getVideoResult() { DARABONBA_PTR_GET(videoResult_, MediaAuditResult::VideoResult) };
      inline MediaAuditResult& setVideoResult(const MediaAuditResult::VideoResult & videoResult) { DARABONBA_PTR_SET_VALUE(videoResult_, videoResult) };
      inline MediaAuditResult& setVideoResult(MediaAuditResult::VideoResult && videoResult) { DARABONBA_PTR_SET_RVALUE(videoResult_, videoResult) };


    protected:
      // The content that violates the regulations. Separate multiple values with commas (,). Valid values:
      // 
      // *   **video**
      // *   **image-cover**
      // *   **text-title**
      shared_ptr<string> abnormalModules_ {};
      // The results of audio review.
      shared_ptr<vector<MediaAuditResult::AudioResult>> audioResult_ {};
      // The results of image review.
      shared_ptr<vector<MediaAuditResult::ImageResult>> imageResult_ {};
      // The category of the review result. Separate multiple values with commas (,). Valid values:
      // 
      // *   **porn**
      // *   **terrorism**
      // *   **normal**
      shared_ptr<string> label_ {};
      // The recommendation for review results. Valid values:
      // 
      // *   **block**
      // *   **review**
      // *   **pass**
      shared_ptr<string> suggestion_ {};
      // The results of text review.
      shared_ptr<vector<MediaAuditResult::TextResult>> textResult_ {};
      // The results of video review.
      shared_ptr<MediaAuditResult::VideoResult> videoResult_ {};
    };

    virtual bool empty() const override { return this->mediaAuditResult_ == nullptr
        && this->requestId_ == nullptr; };
    // mediaAuditResult Field Functions 
    bool hasMediaAuditResult() const { return this->mediaAuditResult_ != nullptr;};
    void deleteMediaAuditResult() { this->mediaAuditResult_ = nullptr;};
    inline const GetMediaAuditResultResponseBody::MediaAuditResult & getMediaAuditResult() const { DARABONBA_PTR_GET_CONST(mediaAuditResult_, GetMediaAuditResultResponseBody::MediaAuditResult) };
    inline GetMediaAuditResultResponseBody::MediaAuditResult getMediaAuditResult() { DARABONBA_PTR_GET(mediaAuditResult_, GetMediaAuditResultResponseBody::MediaAuditResult) };
    inline GetMediaAuditResultResponseBody& setMediaAuditResult(const GetMediaAuditResultResponseBody::MediaAuditResult & mediaAuditResult) { DARABONBA_PTR_SET_VALUE(mediaAuditResult_, mediaAuditResult) };
    inline GetMediaAuditResultResponseBody& setMediaAuditResult(GetMediaAuditResultResponseBody::MediaAuditResult && mediaAuditResult) { DARABONBA_PTR_SET_RVALUE(mediaAuditResult_, mediaAuditResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaAuditResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The review results.
    shared_ptr<GetMediaAuditResultResponseBody::MediaAuditResult> mediaAuditResult_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
