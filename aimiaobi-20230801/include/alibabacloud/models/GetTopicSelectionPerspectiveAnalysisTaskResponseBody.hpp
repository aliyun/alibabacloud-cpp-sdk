// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetTopicSelectionPerspectiveAnalysisTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicSelectionPerspectiveAnalysisTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicSelectionPerspectiveAnalysisTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTopicSelectionPerspectiveAnalysisTaskResponseBody() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBody(const GetTopicSelectionPerspectiveAnalysisTaskResponseBody &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBody(GetTopicSelectionPerspectiveAnalysisTaskResponseBody &&) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicSelectionPerspectiveAnalysisTaskResponseBody() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBody& operator=(const GetTopicSelectionPerspectiveAnalysisTaskResponseBody &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBody& operator=(GetTopicSelectionPerspectiveAnalysisTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(FreshViewPointsResult, freshViewPointsResult_);
        DARABONBA_PTR_TO_JSON(HotViewPointsResult, hotViewPointsResult_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TimedViewPointsResult, timedViewPointsResult_);
        DARABONBA_PTR_TO_JSON(Topic, topic_);
        DARABONBA_PTR_TO_JSON(TopicSummaryResult, topicSummaryResult_);
        DARABONBA_PTR_TO_JSON(WebReviewPointsResult, webReviewPointsResult_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(FreshViewPointsResult, freshViewPointsResult_);
        DARABONBA_PTR_FROM_JSON(HotViewPointsResult, hotViewPointsResult_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TimedViewPointsResult, timedViewPointsResult_);
        DARABONBA_PTR_FROM_JSON(Topic, topic_);
        DARABONBA_PTR_FROM_JSON(TopicSummaryResult, topicSummaryResult_);
        DARABONBA_PTR_FROM_JSON(WebReviewPointsResult, webReviewPointsResult_);
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
      class WebReviewPointsResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WebReviewPointsResult& obj) { 
          DARABONBA_PTR_TO_JSON(Attitudes, attitudes_);
        };
        friend void from_json(const Darabonba::Json& j, WebReviewPointsResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Attitudes, attitudes_);
        };
        WebReviewPointsResult() = default ;
        WebReviewPointsResult(const WebReviewPointsResult &) = default ;
        WebReviewPointsResult(WebReviewPointsResult &&) = default ;
        WebReviewPointsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WebReviewPointsResult() = default ;
        WebReviewPointsResult& operator=(const WebReviewPointsResult &) = default ;
        WebReviewPointsResult& operator=(WebReviewPointsResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Attitudes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Attitudes& obj) { 
            DARABONBA_PTR_TO_JSON(Attitude, attitude_);
            DARABONBA_PTR_TO_JSON(AttitudeType, attitudeType_);
            DARABONBA_PTR_TO_JSON(Comments, comments_);
            DARABONBA_PTR_TO_JSON(Ratio, ratio_);
            DARABONBA_PTR_TO_JSON(ViewPoints, viewPoints_);
          };
          friend void from_json(const Darabonba::Json& j, Attitudes& obj) { 
            DARABONBA_PTR_FROM_JSON(Attitude, attitude_);
            DARABONBA_PTR_FROM_JSON(AttitudeType, attitudeType_);
            DARABONBA_PTR_FROM_JSON(Comments, comments_);
            DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
            DARABONBA_PTR_FROM_JSON(ViewPoints, viewPoints_);
          };
          Attitudes() = default ;
          Attitudes(const Attitudes &) = default ;
          Attitudes(Attitudes &&) = default ;
          Attitudes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Attitudes() = default ;
          Attitudes& operator=(const Attitudes &) = default ;
          Attitudes& operator=(Attitudes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ViewPoints : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ViewPoints& obj) { 
              DARABONBA_PTR_TO_JSON(Outlines, outlines_);
              DARABONBA_PTR_TO_JSON(Point, point_);
              DARABONBA_PTR_TO_JSON(Summary, summary_);
            };
            friend void from_json(const Darabonba::Json& j, ViewPoints& obj) { 
              DARABONBA_PTR_FROM_JSON(Outlines, outlines_);
              DARABONBA_PTR_FROM_JSON(Point, point_);
              DARABONBA_PTR_FROM_JSON(Summary, summary_);
            };
            ViewPoints() = default ;
            ViewPoints(const ViewPoints &) = default ;
            ViewPoints(ViewPoints &&) = default ;
            ViewPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ViewPoints() = default ;
            ViewPoints& operator=(const ViewPoints &) = default ;
            ViewPoints& operator=(ViewPoints &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Outlines : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Outlines& obj) { 
                DARABONBA_PTR_TO_JSON(Outline, outline_);
                DARABONBA_PTR_TO_JSON(Summary, summary_);
              };
              friend void from_json(const Darabonba::Json& j, Outlines& obj) { 
                DARABONBA_PTR_FROM_JSON(Outline, outline_);
                DARABONBA_PTR_FROM_JSON(Summary, summary_);
              };
              Outlines() = default ;
              Outlines(const Outlines &) = default ;
              Outlines(Outlines &&) = default ;
              Outlines(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Outlines() = default ;
              Outlines& operator=(const Outlines &) = default ;
              Outlines& operator=(Outlines &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->outline_ == nullptr
        && this->summary_ == nullptr; };
              // outline Field Functions 
              bool hasOutline() const { return this->outline_ != nullptr;};
              void deleteOutline() { this->outline_ = nullptr;};
              inline string getOutline() const { DARABONBA_PTR_GET_DEFAULT(outline_, "") };
              inline Outlines& setOutline(string outline) { DARABONBA_PTR_SET_VALUE(outline_, outline) };


              // summary Field Functions 
              bool hasSummary() const { return this->summary_ != nullptr;};
              void deleteSummary() { this->summary_ = nullptr;};
              inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
              inline Outlines& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


            protected:
              shared_ptr<string> outline_ {};
              shared_ptr<string> summary_ {};
            };

            virtual bool empty() const override { return this->outlines_ == nullptr
        && this->point_ == nullptr && this->summary_ == nullptr; };
            // outlines Field Functions 
            bool hasOutlines() const { return this->outlines_ != nullptr;};
            void deleteOutlines() { this->outlines_ = nullptr;};
            inline const vector<ViewPoints::Outlines> & getOutlines() const { DARABONBA_PTR_GET_CONST(outlines_, vector<ViewPoints::Outlines>) };
            inline vector<ViewPoints::Outlines> getOutlines() { DARABONBA_PTR_GET(outlines_, vector<ViewPoints::Outlines>) };
            inline ViewPoints& setOutlines(const vector<ViewPoints::Outlines> & outlines) { DARABONBA_PTR_SET_VALUE(outlines_, outlines) };
            inline ViewPoints& setOutlines(vector<ViewPoints::Outlines> && outlines) { DARABONBA_PTR_SET_RVALUE(outlines_, outlines) };


            // point Field Functions 
            bool hasPoint() const { return this->point_ != nullptr;};
            void deletePoint() { this->point_ = nullptr;};
            inline string getPoint() const { DARABONBA_PTR_GET_DEFAULT(point_, "") };
            inline ViewPoints& setPoint(string point) { DARABONBA_PTR_SET_VALUE(point_, point) };


            // summary Field Functions 
            bool hasSummary() const { return this->summary_ != nullptr;};
            void deleteSummary() { this->summary_ = nullptr;};
            inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
            inline ViewPoints& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


          protected:
            shared_ptr<vector<ViewPoints::Outlines>> outlines_ {};
            shared_ptr<string> point_ {};
            shared_ptr<string> summary_ {};
          };

          class Comments : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Comments& obj) { 
              DARABONBA_PTR_TO_JSON(Source, source_);
              DARABONBA_PTR_TO_JSON(Text, text_);
              DARABONBA_PTR_TO_JSON(Title, title_);
              DARABONBA_PTR_TO_JSON(Url, url_);
              DARABONBA_PTR_TO_JSON(Username, username_);
            };
            friend void from_json(const Darabonba::Json& j, Comments& obj) { 
              DARABONBA_PTR_FROM_JSON(Source, source_);
              DARABONBA_PTR_FROM_JSON(Text, text_);
              DARABONBA_PTR_FROM_JSON(Title, title_);
              DARABONBA_PTR_FROM_JSON(Url, url_);
              DARABONBA_PTR_FROM_JSON(Username, username_);
            };
            Comments() = default ;
            Comments(const Comments &) = default ;
            Comments(Comments &&) = default ;
            Comments(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Comments() = default ;
            Comments& operator=(const Comments &) = default ;
            Comments& operator=(Comments &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->source_ == nullptr
        && this->text_ == nullptr && this->title_ == nullptr && this->url_ == nullptr && this->username_ == nullptr; };
            // source Field Functions 
            bool hasSource() const { return this->source_ != nullptr;};
            void deleteSource() { this->source_ = nullptr;};
            inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
            inline Comments& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


            // text Field Functions 
            bool hasText() const { return this->text_ != nullptr;};
            void deleteText() { this->text_ = nullptr;};
            inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
            inline Comments& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


            // title Field Functions 
            bool hasTitle() const { return this->title_ != nullptr;};
            void deleteTitle() { this->title_ = nullptr;};
            inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
            inline Comments& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline Comments& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


            // username Field Functions 
            bool hasUsername() const { return this->username_ != nullptr;};
            void deleteUsername() { this->username_ = nullptr;};
            inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
            inline Comments& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


          protected:
            shared_ptr<string> source_ {};
            shared_ptr<string> text_ {};
            shared_ptr<string> title_ {};
            shared_ptr<string> url_ {};
            shared_ptr<string> username_ {};
          };

          virtual bool empty() const override { return this->attitude_ == nullptr
        && this->attitudeType_ == nullptr && this->comments_ == nullptr && this->ratio_ == nullptr && this->viewPoints_ == nullptr; };
          // attitude Field Functions 
          bool hasAttitude() const { return this->attitude_ != nullptr;};
          void deleteAttitude() { this->attitude_ = nullptr;};
          inline string getAttitude() const { DARABONBA_PTR_GET_DEFAULT(attitude_, "") };
          inline Attitudes& setAttitude(string attitude) { DARABONBA_PTR_SET_VALUE(attitude_, attitude) };


          // attitudeType Field Functions 
          bool hasAttitudeType() const { return this->attitudeType_ != nullptr;};
          void deleteAttitudeType() { this->attitudeType_ = nullptr;};
          inline string getAttitudeType() const { DARABONBA_PTR_GET_DEFAULT(attitudeType_, "") };
          inline Attitudes& setAttitudeType(string attitudeType) { DARABONBA_PTR_SET_VALUE(attitudeType_, attitudeType) };


          // comments Field Functions 
          bool hasComments() const { return this->comments_ != nullptr;};
          void deleteComments() { this->comments_ = nullptr;};
          inline const vector<Attitudes::Comments> & getComments() const { DARABONBA_PTR_GET_CONST(comments_, vector<Attitudes::Comments>) };
          inline vector<Attitudes::Comments> getComments() { DARABONBA_PTR_GET(comments_, vector<Attitudes::Comments>) };
          inline Attitudes& setComments(const vector<Attitudes::Comments> & comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };
          inline Attitudes& setComments(vector<Attitudes::Comments> && comments) { DARABONBA_PTR_SET_RVALUE(comments_, comments) };


          // ratio Field Functions 
          bool hasRatio() const { return this->ratio_ != nullptr;};
          void deleteRatio() { this->ratio_ = nullptr;};
          inline string getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
          inline Attitudes& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


          // viewPoints Field Functions 
          bool hasViewPoints() const { return this->viewPoints_ != nullptr;};
          void deleteViewPoints() { this->viewPoints_ = nullptr;};
          inline const vector<Attitudes::ViewPoints> & getViewPoints() const { DARABONBA_PTR_GET_CONST(viewPoints_, vector<Attitudes::ViewPoints>) };
          inline vector<Attitudes::ViewPoints> getViewPoints() { DARABONBA_PTR_GET(viewPoints_, vector<Attitudes::ViewPoints>) };
          inline Attitudes& setViewPoints(const vector<Attitudes::ViewPoints> & viewPoints) { DARABONBA_PTR_SET_VALUE(viewPoints_, viewPoints) };
          inline Attitudes& setViewPoints(vector<Attitudes::ViewPoints> && viewPoints) { DARABONBA_PTR_SET_RVALUE(viewPoints_, viewPoints) };


        protected:
          shared_ptr<string> attitude_ {};
          shared_ptr<string> attitudeType_ {};
          shared_ptr<vector<Attitudes::Comments>> comments_ {};
          shared_ptr<string> ratio_ {};
          shared_ptr<vector<Attitudes::ViewPoints>> viewPoints_ {};
        };

        virtual bool empty() const override { return this->attitudes_ == nullptr; };
        // attitudes Field Functions 
        bool hasAttitudes() const { return this->attitudes_ != nullptr;};
        void deleteAttitudes() { this->attitudes_ = nullptr;};
        inline const vector<WebReviewPointsResult::Attitudes> & getAttitudes() const { DARABONBA_PTR_GET_CONST(attitudes_, vector<WebReviewPointsResult::Attitudes>) };
        inline vector<WebReviewPointsResult::Attitudes> getAttitudes() { DARABONBA_PTR_GET(attitudes_, vector<WebReviewPointsResult::Attitudes>) };
        inline WebReviewPointsResult& setAttitudes(const vector<WebReviewPointsResult::Attitudes> & attitudes) { DARABONBA_PTR_SET_VALUE(attitudes_, attitudes) };
        inline WebReviewPointsResult& setAttitudes(vector<WebReviewPointsResult::Attitudes> && attitudes) { DARABONBA_PTR_SET_RVALUE(attitudes_, attitudes) };


      protected:
        shared_ptr<vector<WebReviewPointsResult::Attitudes>> attitudes_ {};
      };

      class TopicSummaryResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TopicSummaryResult& obj) { 
          DARABONBA_PTR_TO_JSON(Summaries, summaries_);
        };
        friend void from_json(const Darabonba::Json& j, TopicSummaryResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Summaries, summaries_);
        };
        TopicSummaryResult() = default ;
        TopicSummaryResult(const TopicSummaryResult &) = default ;
        TopicSummaryResult(TopicSummaryResult &&) = default ;
        TopicSummaryResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TopicSummaryResult() = default ;
        TopicSummaryResult& operator=(const TopicSummaryResult &) = default ;
        TopicSummaryResult& operator=(TopicSummaryResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Summaries : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Summaries& obj) { 
            DARABONBA_PTR_TO_JSON(DocList, docList_);
            DARABONBA_PTR_TO_JSON(Summary, summary_);
            DARABONBA_PTR_TO_JSON(Title, title_);
          };
          friend void from_json(const Darabonba::Json& j, Summaries& obj) { 
            DARABONBA_PTR_FROM_JSON(DocList, docList_);
            DARABONBA_PTR_FROM_JSON(Summary, summary_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
          };
          Summaries() = default ;
          Summaries(const Summaries &) = default ;
          Summaries(Summaries &&) = default ;
          Summaries(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Summaries() = default ;
          Summaries& operator=(const Summaries &) = default ;
          Summaries& operator=(Summaries &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DocList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DocList& obj) { 
              DARABONBA_PTR_TO_JSON(Source, source_);
              DARABONBA_PTR_TO_JSON(Title, title_);
              DARABONBA_PTR_TO_JSON(Url, url_);
            };
            friend void from_json(const Darabonba::Json& j, DocList& obj) { 
              DARABONBA_PTR_FROM_JSON(Source, source_);
              DARABONBA_PTR_FROM_JSON(Title, title_);
              DARABONBA_PTR_FROM_JSON(Url, url_);
            };
            DocList() = default ;
            DocList(const DocList &) = default ;
            DocList(DocList &&) = default ;
            DocList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DocList() = default ;
            DocList& operator=(const DocList &) = default ;
            DocList& operator=(DocList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->source_ == nullptr
        && this->title_ == nullptr && this->url_ == nullptr; };
            // source Field Functions 
            bool hasSource() const { return this->source_ != nullptr;};
            void deleteSource() { this->source_ = nullptr;};
            inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
            inline DocList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


            // title Field Functions 
            bool hasTitle() const { return this->title_ != nullptr;};
            void deleteTitle() { this->title_ = nullptr;};
            inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
            inline DocList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline DocList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            shared_ptr<string> source_ {};
            shared_ptr<string> title_ {};
            shared_ptr<string> url_ {};
          };

          virtual bool empty() const override { return this->docList_ == nullptr
        && this->summary_ == nullptr && this->title_ == nullptr; };
          // docList Field Functions 
          bool hasDocList() const { return this->docList_ != nullptr;};
          void deleteDocList() { this->docList_ = nullptr;};
          inline const vector<Summaries::DocList> & getDocList() const { DARABONBA_PTR_GET_CONST(docList_, vector<Summaries::DocList>) };
          inline vector<Summaries::DocList> getDocList() { DARABONBA_PTR_GET(docList_, vector<Summaries::DocList>) };
          inline Summaries& setDocList(const vector<Summaries::DocList> & docList) { DARABONBA_PTR_SET_VALUE(docList_, docList) };
          inline Summaries& setDocList(vector<Summaries::DocList> && docList) { DARABONBA_PTR_SET_RVALUE(docList_, docList) };


          // summary Field Functions 
          bool hasSummary() const { return this->summary_ != nullptr;};
          void deleteSummary() { this->summary_ = nullptr;};
          inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
          inline Summaries& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline Summaries& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          shared_ptr<vector<Summaries::DocList>> docList_ {};
          shared_ptr<string> summary_ {};
          shared_ptr<string> title_ {};
        };

        virtual bool empty() const override { return this->summaries_ == nullptr; };
        // summaries Field Functions 
        bool hasSummaries() const { return this->summaries_ != nullptr;};
        void deleteSummaries() { this->summaries_ = nullptr;};
        inline const vector<TopicSummaryResult::Summaries> & getSummaries() const { DARABONBA_PTR_GET_CONST(summaries_, vector<TopicSummaryResult::Summaries>) };
        inline vector<TopicSummaryResult::Summaries> getSummaries() { DARABONBA_PTR_GET(summaries_, vector<TopicSummaryResult::Summaries>) };
        inline TopicSummaryResult& setSummaries(const vector<TopicSummaryResult::Summaries> & summaries) { DARABONBA_PTR_SET_VALUE(summaries_, summaries) };
        inline TopicSummaryResult& setSummaries(vector<TopicSummaryResult::Summaries> && summaries) { DARABONBA_PTR_SET_RVALUE(summaries_, summaries) };


      protected:
        shared_ptr<vector<TopicSummaryResult::Summaries>> summaries_ {};
      };

      class TimedViewPointsResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TimedViewPointsResult& obj) { 
          DARABONBA_PTR_TO_JSON(Attitudes, attitudes_);
        };
        friend void from_json(const Darabonba::Json& j, TimedViewPointsResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Attitudes, attitudes_);
        };
        TimedViewPointsResult() = default ;
        TimedViewPointsResult(const TimedViewPointsResult &) = default ;
        TimedViewPointsResult(TimedViewPointsResult &&) = default ;
        TimedViewPointsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TimedViewPointsResult() = default ;
        TimedViewPointsResult& operator=(const TimedViewPointsResult &) = default ;
        TimedViewPointsResult& operator=(TimedViewPointsResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Attitudes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Attitudes& obj) { 
            DARABONBA_PTR_TO_JSON(Attitude, attitude_);
            DARABONBA_PTR_TO_JSON(AttitudeType, attitudeType_);
            DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
            DARABONBA_PTR_TO_JSON(Ratio, ratio_);
            DARABONBA_PTR_TO_JSON(Source, source_);
            DARABONBA_PTR_TO_JSON(Title, title_);
            DARABONBA_PTR_TO_JSON(Url, url_);
            DARABONBA_PTR_TO_JSON(ViewPoints, viewPoints_);
          };
          friend void from_json(const Darabonba::Json& j, Attitudes& obj) { 
            DARABONBA_PTR_FROM_JSON(Attitude, attitude_);
            DARABONBA_PTR_FROM_JSON(AttitudeType, attitudeType_);
            DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
            DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
            DARABONBA_PTR_FROM_JSON(Source, source_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
            DARABONBA_PTR_FROM_JSON(ViewPoints, viewPoints_);
          };
          Attitudes() = default ;
          Attitudes(const Attitudes &) = default ;
          Attitudes(Attitudes &&) = default ;
          Attitudes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Attitudes() = default ;
          Attitudes& operator=(const Attitudes &) = default ;
          Attitudes& operator=(Attitudes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ViewPoints : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ViewPoints& obj) { 
              DARABONBA_PTR_TO_JSON(Outlines, outlines_);
              DARABONBA_PTR_TO_JSON(Point, point_);
              DARABONBA_PTR_TO_JSON(Summary, summary_);
            };
            friend void from_json(const Darabonba::Json& j, ViewPoints& obj) { 
              DARABONBA_PTR_FROM_JSON(Outlines, outlines_);
              DARABONBA_PTR_FROM_JSON(Point, point_);
              DARABONBA_PTR_FROM_JSON(Summary, summary_);
            };
            ViewPoints() = default ;
            ViewPoints(const ViewPoints &) = default ;
            ViewPoints(ViewPoints &&) = default ;
            ViewPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ViewPoints() = default ;
            ViewPoints& operator=(const ViewPoints &) = default ;
            ViewPoints& operator=(ViewPoints &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Outlines : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Outlines& obj) { 
                DARABONBA_PTR_TO_JSON(Outline, outline_);
                DARABONBA_PTR_TO_JSON(Summary, summary_);
              };
              friend void from_json(const Darabonba::Json& j, Outlines& obj) { 
                DARABONBA_PTR_FROM_JSON(Outline, outline_);
                DARABONBA_PTR_FROM_JSON(Summary, summary_);
              };
              Outlines() = default ;
              Outlines(const Outlines &) = default ;
              Outlines(Outlines &&) = default ;
              Outlines(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Outlines() = default ;
              Outlines& operator=(const Outlines &) = default ;
              Outlines& operator=(Outlines &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->outline_ == nullptr
        && this->summary_ == nullptr; };
              // outline Field Functions 
              bool hasOutline() const { return this->outline_ != nullptr;};
              void deleteOutline() { this->outline_ = nullptr;};
              inline string getOutline() const { DARABONBA_PTR_GET_DEFAULT(outline_, "") };
              inline Outlines& setOutline(string outline) { DARABONBA_PTR_SET_VALUE(outline_, outline) };


              // summary Field Functions 
              bool hasSummary() const { return this->summary_ != nullptr;};
              void deleteSummary() { this->summary_ = nullptr;};
              inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
              inline Outlines& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


            protected:
              shared_ptr<string> outline_ {};
              shared_ptr<string> summary_ {};
            };

            virtual bool empty() const override { return this->outlines_ == nullptr
        && this->point_ == nullptr && this->summary_ == nullptr; };
            // outlines Field Functions 
            bool hasOutlines() const { return this->outlines_ != nullptr;};
            void deleteOutlines() { this->outlines_ = nullptr;};
            inline const vector<ViewPoints::Outlines> & getOutlines() const { DARABONBA_PTR_GET_CONST(outlines_, vector<ViewPoints::Outlines>) };
            inline vector<ViewPoints::Outlines> getOutlines() { DARABONBA_PTR_GET(outlines_, vector<ViewPoints::Outlines>) };
            inline ViewPoints& setOutlines(const vector<ViewPoints::Outlines> & outlines) { DARABONBA_PTR_SET_VALUE(outlines_, outlines) };
            inline ViewPoints& setOutlines(vector<ViewPoints::Outlines> && outlines) { DARABONBA_PTR_SET_RVALUE(outlines_, outlines) };


            // point Field Functions 
            bool hasPoint() const { return this->point_ != nullptr;};
            void deletePoint() { this->point_ = nullptr;};
            inline string getPoint() const { DARABONBA_PTR_GET_DEFAULT(point_, "") };
            inline ViewPoints& setPoint(string point) { DARABONBA_PTR_SET_VALUE(point_, point) };


            // summary Field Functions 
            bool hasSummary() const { return this->summary_ != nullptr;};
            void deleteSummary() { this->summary_ = nullptr;};
            inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
            inline ViewPoints& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


          protected:
            shared_ptr<vector<ViewPoints::Outlines>> outlines_ {};
            shared_ptr<string> point_ {};
            shared_ptr<string> summary_ {};
          };

          virtual bool empty() const override { return this->attitude_ == nullptr
        && this->attitudeType_ == nullptr && this->pubTime_ == nullptr && this->ratio_ == nullptr && this->source_ == nullptr && this->title_ == nullptr
        && this->url_ == nullptr && this->viewPoints_ == nullptr; };
          // attitude Field Functions 
          bool hasAttitude() const { return this->attitude_ != nullptr;};
          void deleteAttitude() { this->attitude_ = nullptr;};
          inline string getAttitude() const { DARABONBA_PTR_GET_DEFAULT(attitude_, "") };
          inline Attitudes& setAttitude(string attitude) { DARABONBA_PTR_SET_VALUE(attitude_, attitude) };


          // attitudeType Field Functions 
          bool hasAttitudeType() const { return this->attitudeType_ != nullptr;};
          void deleteAttitudeType() { this->attitudeType_ = nullptr;};
          inline string getAttitudeType() const { DARABONBA_PTR_GET_DEFAULT(attitudeType_, "") };
          inline Attitudes& setAttitudeType(string attitudeType) { DARABONBA_PTR_SET_VALUE(attitudeType_, attitudeType) };


          // pubTime Field Functions 
          bool hasPubTime() const { return this->pubTime_ != nullptr;};
          void deletePubTime() { this->pubTime_ = nullptr;};
          inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
          inline Attitudes& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


          // ratio Field Functions 
          bool hasRatio() const { return this->ratio_ != nullptr;};
          void deleteRatio() { this->ratio_ = nullptr;};
          inline string getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
          inline Attitudes& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


          // source Field Functions 
          bool hasSource() const { return this->source_ != nullptr;};
          void deleteSource() { this->source_ = nullptr;};
          inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
          inline Attitudes& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline Attitudes& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline Attitudes& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          // viewPoints Field Functions 
          bool hasViewPoints() const { return this->viewPoints_ != nullptr;};
          void deleteViewPoints() { this->viewPoints_ = nullptr;};
          inline const vector<Attitudes::ViewPoints> & getViewPoints() const { DARABONBA_PTR_GET_CONST(viewPoints_, vector<Attitudes::ViewPoints>) };
          inline vector<Attitudes::ViewPoints> getViewPoints() { DARABONBA_PTR_GET(viewPoints_, vector<Attitudes::ViewPoints>) };
          inline Attitudes& setViewPoints(const vector<Attitudes::ViewPoints> & viewPoints) { DARABONBA_PTR_SET_VALUE(viewPoints_, viewPoints) };
          inline Attitudes& setViewPoints(vector<Attitudes::ViewPoints> && viewPoints) { DARABONBA_PTR_SET_RVALUE(viewPoints_, viewPoints) };


        protected:
          shared_ptr<string> attitude_ {};
          shared_ptr<string> attitudeType_ {};
          shared_ptr<string> pubTime_ {};
          shared_ptr<string> ratio_ {};
          shared_ptr<string> source_ {};
          shared_ptr<string> title_ {};
          shared_ptr<string> url_ {};
          shared_ptr<vector<Attitudes::ViewPoints>> viewPoints_ {};
        };

        virtual bool empty() const override { return this->attitudes_ == nullptr; };
        // attitudes Field Functions 
        bool hasAttitudes() const { return this->attitudes_ != nullptr;};
        void deleteAttitudes() { this->attitudes_ = nullptr;};
        inline const vector<TimedViewPointsResult::Attitudes> & getAttitudes() const { DARABONBA_PTR_GET_CONST(attitudes_, vector<TimedViewPointsResult::Attitudes>) };
        inline vector<TimedViewPointsResult::Attitudes> getAttitudes() { DARABONBA_PTR_GET(attitudes_, vector<TimedViewPointsResult::Attitudes>) };
        inline TimedViewPointsResult& setAttitudes(const vector<TimedViewPointsResult::Attitudes> & attitudes) { DARABONBA_PTR_SET_VALUE(attitudes_, attitudes) };
        inline TimedViewPointsResult& setAttitudes(vector<TimedViewPointsResult::Attitudes> && attitudes) { DARABONBA_PTR_SET_RVALUE(attitudes_, attitudes) };


      protected:
        shared_ptr<vector<TimedViewPointsResult::Attitudes>> attitudes_ {};
      };

      class HotViewPointsResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotViewPointsResult& obj) { 
          DARABONBA_PTR_TO_JSON(Attitudes, attitudes_);
        };
        friend void from_json(const Darabonba::Json& j, HotViewPointsResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Attitudes, attitudes_);
        };
        HotViewPointsResult() = default ;
        HotViewPointsResult(const HotViewPointsResult &) = default ;
        HotViewPointsResult(HotViewPointsResult &&) = default ;
        HotViewPointsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotViewPointsResult() = default ;
        HotViewPointsResult& operator=(const HotViewPointsResult &) = default ;
        HotViewPointsResult& operator=(HotViewPointsResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Attitudes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Attitudes& obj) { 
            DARABONBA_PTR_TO_JSON(Attitude, attitude_);
            DARABONBA_PTR_TO_JSON(AttitudeType, attitudeType_);
            DARABONBA_PTR_TO_JSON(News, news_);
            DARABONBA_PTR_TO_JSON(Ratio, ratio_);
            DARABONBA_PTR_TO_JSON(ViewPoints, viewPoints_);
          };
          friend void from_json(const Darabonba::Json& j, Attitudes& obj) { 
            DARABONBA_PTR_FROM_JSON(Attitude, attitude_);
            DARABONBA_PTR_FROM_JSON(AttitudeType, attitudeType_);
            DARABONBA_PTR_FROM_JSON(News, news_);
            DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
            DARABONBA_PTR_FROM_JSON(ViewPoints, viewPoints_);
          };
          Attitudes() = default ;
          Attitudes(const Attitudes &) = default ;
          Attitudes(Attitudes &&) = default ;
          Attitudes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Attitudes() = default ;
          Attitudes& operator=(const Attitudes &) = default ;
          Attitudes& operator=(Attitudes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ViewPoints : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ViewPoints& obj) { 
              DARABONBA_PTR_TO_JSON(Outlines, outlines_);
              DARABONBA_PTR_TO_JSON(Point, point_);
              DARABONBA_PTR_TO_JSON(Summary, summary_);
            };
            friend void from_json(const Darabonba::Json& j, ViewPoints& obj) { 
              DARABONBA_PTR_FROM_JSON(Outlines, outlines_);
              DARABONBA_PTR_FROM_JSON(Point, point_);
              DARABONBA_PTR_FROM_JSON(Summary, summary_);
            };
            ViewPoints() = default ;
            ViewPoints(const ViewPoints &) = default ;
            ViewPoints(ViewPoints &&) = default ;
            ViewPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ViewPoints() = default ;
            ViewPoints& operator=(const ViewPoints &) = default ;
            ViewPoints& operator=(ViewPoints &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Outlines : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Outlines& obj) { 
                DARABONBA_PTR_TO_JSON(Outline, outline_);
                DARABONBA_PTR_TO_JSON(Summary, summary_);
              };
              friend void from_json(const Darabonba::Json& j, Outlines& obj) { 
                DARABONBA_PTR_FROM_JSON(Outline, outline_);
                DARABONBA_PTR_FROM_JSON(Summary, summary_);
              };
              Outlines() = default ;
              Outlines(const Outlines &) = default ;
              Outlines(Outlines &&) = default ;
              Outlines(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Outlines() = default ;
              Outlines& operator=(const Outlines &) = default ;
              Outlines& operator=(Outlines &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->outline_ == nullptr
        && this->summary_ == nullptr; };
              // outline Field Functions 
              bool hasOutline() const { return this->outline_ != nullptr;};
              void deleteOutline() { this->outline_ = nullptr;};
              inline string getOutline() const { DARABONBA_PTR_GET_DEFAULT(outline_, "") };
              inline Outlines& setOutline(string outline) { DARABONBA_PTR_SET_VALUE(outline_, outline) };


              // summary Field Functions 
              bool hasSummary() const { return this->summary_ != nullptr;};
              void deleteSummary() { this->summary_ = nullptr;};
              inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
              inline Outlines& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


            protected:
              shared_ptr<string> outline_ {};
              shared_ptr<string> summary_ {};
            };

            virtual bool empty() const override { return this->outlines_ == nullptr
        && this->point_ == nullptr && this->summary_ == nullptr; };
            // outlines Field Functions 
            bool hasOutlines() const { return this->outlines_ != nullptr;};
            void deleteOutlines() { this->outlines_ = nullptr;};
            inline const vector<ViewPoints::Outlines> & getOutlines() const { DARABONBA_PTR_GET_CONST(outlines_, vector<ViewPoints::Outlines>) };
            inline vector<ViewPoints::Outlines> getOutlines() { DARABONBA_PTR_GET(outlines_, vector<ViewPoints::Outlines>) };
            inline ViewPoints& setOutlines(const vector<ViewPoints::Outlines> & outlines) { DARABONBA_PTR_SET_VALUE(outlines_, outlines) };
            inline ViewPoints& setOutlines(vector<ViewPoints::Outlines> && outlines) { DARABONBA_PTR_SET_RVALUE(outlines_, outlines) };


            // point Field Functions 
            bool hasPoint() const { return this->point_ != nullptr;};
            void deletePoint() { this->point_ = nullptr;};
            inline string getPoint() const { DARABONBA_PTR_GET_DEFAULT(point_, "") };
            inline ViewPoints& setPoint(string point) { DARABONBA_PTR_SET_VALUE(point_, point) };


            // summary Field Functions 
            bool hasSummary() const { return this->summary_ != nullptr;};
            void deleteSummary() { this->summary_ = nullptr;};
            inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
            inline ViewPoints& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


          protected:
            shared_ptr<vector<ViewPoints::Outlines>> outlines_ {};
            shared_ptr<string> point_ {};
            shared_ptr<string> summary_ {};
          };

          class News : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const News& obj) { 
              DARABONBA_PTR_TO_JSON(Content, content_);
              DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
              DARABONBA_PTR_TO_JSON(DocId, docId_);
              DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
              DARABONBA_PTR_TO_JSON(ImageUrls, imageUrls_);
              DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
              DARABONBA_PTR_TO_JSON(Source, source_);
              DARABONBA_PTR_TO_JSON(Summary, summary_);
              DARABONBA_PTR_TO_JSON(Tags, tags_);
              DARABONBA_PTR_TO_JSON(Title, title_);
              DARABONBA_PTR_TO_JSON(Topic, topic_);
              DARABONBA_PTR_TO_JSON(Url, url_);
            };
            friend void from_json(const Darabonba::Json& j, News& obj) { 
              DARABONBA_PTR_FROM_JSON(Content, content_);
              DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
              DARABONBA_PTR_FROM_JSON(DocId, docId_);
              DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
              DARABONBA_PTR_FROM_JSON(ImageUrls, imageUrls_);
              DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
              DARABONBA_PTR_FROM_JSON(Source, source_);
              DARABONBA_PTR_FROM_JSON(Summary, summary_);
              DARABONBA_PTR_FROM_JSON(Tags, tags_);
              DARABONBA_PTR_FROM_JSON(Title, title_);
              DARABONBA_PTR_FROM_JSON(Topic, topic_);
              DARABONBA_PTR_FROM_JSON(Url, url_);
            };
            News() = default ;
            News(const News &) = default ;
            News(News &&) = default ;
            News(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~News() = default ;
            News& operator=(const News &) = default ;
            News& operator=(News &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->content_ == nullptr
        && this->createTime_ == nullptr && this->docId_ == nullptr && this->docUuid_ == nullptr && this->imageUrls_ == nullptr && this->pubTime_ == nullptr
        && this->source_ == nullptr && this->summary_ == nullptr && this->tags_ == nullptr && this->title_ == nullptr && this->topic_ == nullptr
        && this->url_ == nullptr; };
            // content Field Functions 
            bool hasContent() const { return this->content_ != nullptr;};
            void deleteContent() { this->content_ = nullptr;};
            inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
            inline News& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


            // createTime Field Functions 
            bool hasCreateTime() const { return this->createTime_ != nullptr;};
            void deleteCreateTime() { this->createTime_ = nullptr;};
            inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
            inline News& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


            // docId Field Functions 
            bool hasDocId() const { return this->docId_ != nullptr;};
            void deleteDocId() { this->docId_ = nullptr;};
            inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
            inline News& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


            // docUuid Field Functions 
            bool hasDocUuid() const { return this->docUuid_ != nullptr;};
            void deleteDocUuid() { this->docUuid_ = nullptr;};
            inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
            inline News& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


            // imageUrls Field Functions 
            bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
            void deleteImageUrls() { this->imageUrls_ = nullptr;};
            inline const vector<string> & getImageUrls() const { DARABONBA_PTR_GET_CONST(imageUrls_, vector<string>) };
            inline vector<string> getImageUrls() { DARABONBA_PTR_GET(imageUrls_, vector<string>) };
            inline News& setImageUrls(const vector<string> & imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };
            inline News& setImageUrls(vector<string> && imageUrls) { DARABONBA_PTR_SET_RVALUE(imageUrls_, imageUrls) };


            // pubTime Field Functions 
            bool hasPubTime() const { return this->pubTime_ != nullptr;};
            void deletePubTime() { this->pubTime_ = nullptr;};
            inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
            inline News& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


            // source Field Functions 
            bool hasSource() const { return this->source_ != nullptr;};
            void deleteSource() { this->source_ = nullptr;};
            inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
            inline News& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


            // summary Field Functions 
            bool hasSummary() const { return this->summary_ != nullptr;};
            void deleteSummary() { this->summary_ = nullptr;};
            inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
            inline News& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


            // tags Field Functions 
            bool hasTags() const { return this->tags_ != nullptr;};
            void deleteTags() { this->tags_ = nullptr;};
            inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
            inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
            inline News& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
            inline News& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


            // title Field Functions 
            bool hasTitle() const { return this->title_ != nullptr;};
            void deleteTitle() { this->title_ = nullptr;};
            inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
            inline News& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


            // topic Field Functions 
            bool hasTopic() const { return this->topic_ != nullptr;};
            void deleteTopic() { this->topic_ = nullptr;};
            inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
            inline News& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


            // url Field Functions 
            bool hasUrl() const { return this->url_ != nullptr;};
            void deleteUrl() { this->url_ = nullptr;};
            inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
            inline News& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


          protected:
            shared_ptr<string> content_ {};
            shared_ptr<string> createTime_ {};
            shared_ptr<string> docId_ {};
            shared_ptr<string> docUuid_ {};
            shared_ptr<vector<string>> imageUrls_ {};
            shared_ptr<string> pubTime_ {};
            shared_ptr<string> source_ {};
            shared_ptr<string> summary_ {};
            shared_ptr<vector<string>> tags_ {};
            shared_ptr<string> title_ {};
            shared_ptr<string> topic_ {};
            shared_ptr<string> url_ {};
          };

          virtual bool empty() const override { return this->attitude_ == nullptr
        && this->attitudeType_ == nullptr && this->news_ == nullptr && this->ratio_ == nullptr && this->viewPoints_ == nullptr; };
          // attitude Field Functions 
          bool hasAttitude() const { return this->attitude_ != nullptr;};
          void deleteAttitude() { this->attitude_ = nullptr;};
          inline string getAttitude() const { DARABONBA_PTR_GET_DEFAULT(attitude_, "") };
          inline Attitudes& setAttitude(string attitude) { DARABONBA_PTR_SET_VALUE(attitude_, attitude) };


          // attitudeType Field Functions 
          bool hasAttitudeType() const { return this->attitudeType_ != nullptr;};
          void deleteAttitudeType() { this->attitudeType_ = nullptr;};
          inline string getAttitudeType() const { DARABONBA_PTR_GET_DEFAULT(attitudeType_, "") };
          inline Attitudes& setAttitudeType(string attitudeType) { DARABONBA_PTR_SET_VALUE(attitudeType_, attitudeType) };


          // news Field Functions 
          bool hasNews() const { return this->news_ != nullptr;};
          void deleteNews() { this->news_ = nullptr;};
          inline const vector<Attitudes::News> & getNews() const { DARABONBA_PTR_GET_CONST(news_, vector<Attitudes::News>) };
          inline vector<Attitudes::News> getNews() { DARABONBA_PTR_GET(news_, vector<Attitudes::News>) };
          inline Attitudes& setNews(const vector<Attitudes::News> & news) { DARABONBA_PTR_SET_VALUE(news_, news) };
          inline Attitudes& setNews(vector<Attitudes::News> && news) { DARABONBA_PTR_SET_RVALUE(news_, news) };


          // ratio Field Functions 
          bool hasRatio() const { return this->ratio_ != nullptr;};
          void deleteRatio() { this->ratio_ = nullptr;};
          inline string getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
          inline Attitudes& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


          // viewPoints Field Functions 
          bool hasViewPoints() const { return this->viewPoints_ != nullptr;};
          void deleteViewPoints() { this->viewPoints_ = nullptr;};
          inline const vector<Attitudes::ViewPoints> & getViewPoints() const { DARABONBA_PTR_GET_CONST(viewPoints_, vector<Attitudes::ViewPoints>) };
          inline vector<Attitudes::ViewPoints> getViewPoints() { DARABONBA_PTR_GET(viewPoints_, vector<Attitudes::ViewPoints>) };
          inline Attitudes& setViewPoints(const vector<Attitudes::ViewPoints> & viewPoints) { DARABONBA_PTR_SET_VALUE(viewPoints_, viewPoints) };
          inline Attitudes& setViewPoints(vector<Attitudes::ViewPoints> && viewPoints) { DARABONBA_PTR_SET_RVALUE(viewPoints_, viewPoints) };


        protected:
          shared_ptr<string> attitude_ {};
          shared_ptr<string> attitudeType_ {};
          shared_ptr<vector<Attitudes::News>> news_ {};
          shared_ptr<string> ratio_ {};
          shared_ptr<vector<Attitudes::ViewPoints>> viewPoints_ {};
        };

        virtual bool empty() const override { return this->attitudes_ == nullptr; };
        // attitudes Field Functions 
        bool hasAttitudes() const { return this->attitudes_ != nullptr;};
        void deleteAttitudes() { this->attitudes_ = nullptr;};
        inline const vector<HotViewPointsResult::Attitudes> & getAttitudes() const { DARABONBA_PTR_GET_CONST(attitudes_, vector<HotViewPointsResult::Attitudes>) };
        inline vector<HotViewPointsResult::Attitudes> getAttitudes() { DARABONBA_PTR_GET(attitudes_, vector<HotViewPointsResult::Attitudes>) };
        inline HotViewPointsResult& setAttitudes(const vector<HotViewPointsResult::Attitudes> & attitudes) { DARABONBA_PTR_SET_VALUE(attitudes_, attitudes) };
        inline HotViewPointsResult& setAttitudes(vector<HotViewPointsResult::Attitudes> && attitudes) { DARABONBA_PTR_SET_RVALUE(attitudes_, attitudes) };


      protected:
        shared_ptr<vector<HotViewPointsResult::Attitudes>> attitudes_ {};
      };

      class FreshViewPointsResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FreshViewPointsResult& obj) { 
          DARABONBA_PTR_TO_JSON(Attitudes, attitudes_);
        };
        friend void from_json(const Darabonba::Json& j, FreshViewPointsResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Attitudes, attitudes_);
        };
        FreshViewPointsResult() = default ;
        FreshViewPointsResult(const FreshViewPointsResult &) = default ;
        FreshViewPointsResult(FreshViewPointsResult &&) = default ;
        FreshViewPointsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FreshViewPointsResult() = default ;
        FreshViewPointsResult& operator=(const FreshViewPointsResult &) = default ;
        FreshViewPointsResult& operator=(FreshViewPointsResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Attitudes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Attitudes& obj) { 
            DARABONBA_PTR_TO_JSON(Attitude, attitude_);
            DARABONBA_PTR_TO_JSON(AttitudeType, attitudeType_);
            DARABONBA_PTR_TO_JSON(Ratio, ratio_);
            DARABONBA_PTR_TO_JSON(ViewPoints, viewPoints_);
          };
          friend void from_json(const Darabonba::Json& j, Attitudes& obj) { 
            DARABONBA_PTR_FROM_JSON(Attitude, attitude_);
            DARABONBA_PTR_FROM_JSON(AttitudeType, attitudeType_);
            DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
            DARABONBA_PTR_FROM_JSON(ViewPoints, viewPoints_);
          };
          Attitudes() = default ;
          Attitudes(const Attitudes &) = default ;
          Attitudes(Attitudes &&) = default ;
          Attitudes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Attitudes() = default ;
          Attitudes& operator=(const Attitudes &) = default ;
          Attitudes& operator=(Attitudes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ViewPoints : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ViewPoints& obj) { 
              DARABONBA_PTR_TO_JSON(Outlines, outlines_);
              DARABONBA_PTR_TO_JSON(Point, point_);
              DARABONBA_PTR_TO_JSON(Summary, summary_);
            };
            friend void from_json(const Darabonba::Json& j, ViewPoints& obj) { 
              DARABONBA_PTR_FROM_JSON(Outlines, outlines_);
              DARABONBA_PTR_FROM_JSON(Point, point_);
              DARABONBA_PTR_FROM_JSON(Summary, summary_);
            };
            ViewPoints() = default ;
            ViewPoints(const ViewPoints &) = default ;
            ViewPoints(ViewPoints &&) = default ;
            ViewPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ViewPoints() = default ;
            ViewPoints& operator=(const ViewPoints &) = default ;
            ViewPoints& operator=(ViewPoints &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Outlines : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Outlines& obj) { 
                DARABONBA_PTR_TO_JSON(Outline, outline_);
                DARABONBA_PTR_TO_JSON(Summary, summary_);
              };
              friend void from_json(const Darabonba::Json& j, Outlines& obj) { 
                DARABONBA_PTR_FROM_JSON(Outline, outline_);
                DARABONBA_PTR_FROM_JSON(Summary, summary_);
              };
              Outlines() = default ;
              Outlines(const Outlines &) = default ;
              Outlines(Outlines &&) = default ;
              Outlines(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Outlines() = default ;
              Outlines& operator=(const Outlines &) = default ;
              Outlines& operator=(Outlines &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->outline_ == nullptr
        && this->summary_ == nullptr; };
              // outline Field Functions 
              bool hasOutline() const { return this->outline_ != nullptr;};
              void deleteOutline() { this->outline_ = nullptr;};
              inline string getOutline() const { DARABONBA_PTR_GET_DEFAULT(outline_, "") };
              inline Outlines& setOutline(string outline) { DARABONBA_PTR_SET_VALUE(outline_, outline) };


              // summary Field Functions 
              bool hasSummary() const { return this->summary_ != nullptr;};
              void deleteSummary() { this->summary_ = nullptr;};
              inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
              inline Outlines& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


            protected:
              shared_ptr<string> outline_ {};
              shared_ptr<string> summary_ {};
            };

            virtual bool empty() const override { return this->outlines_ == nullptr
        && this->point_ == nullptr && this->summary_ == nullptr; };
            // outlines Field Functions 
            bool hasOutlines() const { return this->outlines_ != nullptr;};
            void deleteOutlines() { this->outlines_ = nullptr;};
            inline const vector<ViewPoints::Outlines> & getOutlines() const { DARABONBA_PTR_GET_CONST(outlines_, vector<ViewPoints::Outlines>) };
            inline vector<ViewPoints::Outlines> getOutlines() { DARABONBA_PTR_GET(outlines_, vector<ViewPoints::Outlines>) };
            inline ViewPoints& setOutlines(const vector<ViewPoints::Outlines> & outlines) { DARABONBA_PTR_SET_VALUE(outlines_, outlines) };
            inline ViewPoints& setOutlines(vector<ViewPoints::Outlines> && outlines) { DARABONBA_PTR_SET_RVALUE(outlines_, outlines) };


            // point Field Functions 
            bool hasPoint() const { return this->point_ != nullptr;};
            void deletePoint() { this->point_ = nullptr;};
            inline string getPoint() const { DARABONBA_PTR_GET_DEFAULT(point_, "") };
            inline ViewPoints& setPoint(string point) { DARABONBA_PTR_SET_VALUE(point_, point) };


            // summary Field Functions 
            bool hasSummary() const { return this->summary_ != nullptr;};
            void deleteSummary() { this->summary_ = nullptr;};
            inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
            inline ViewPoints& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


          protected:
            shared_ptr<vector<ViewPoints::Outlines>> outlines_ {};
            shared_ptr<string> point_ {};
            shared_ptr<string> summary_ {};
          };

          virtual bool empty() const override { return this->attitude_ == nullptr
        && this->attitudeType_ == nullptr && this->ratio_ == nullptr && this->viewPoints_ == nullptr; };
          // attitude Field Functions 
          bool hasAttitude() const { return this->attitude_ != nullptr;};
          void deleteAttitude() { this->attitude_ = nullptr;};
          inline string getAttitude() const { DARABONBA_PTR_GET_DEFAULT(attitude_, "") };
          inline Attitudes& setAttitude(string attitude) { DARABONBA_PTR_SET_VALUE(attitude_, attitude) };


          // attitudeType Field Functions 
          bool hasAttitudeType() const { return this->attitudeType_ != nullptr;};
          void deleteAttitudeType() { this->attitudeType_ = nullptr;};
          inline string getAttitudeType() const { DARABONBA_PTR_GET_DEFAULT(attitudeType_, "") };
          inline Attitudes& setAttitudeType(string attitudeType) { DARABONBA_PTR_SET_VALUE(attitudeType_, attitudeType) };


          // ratio Field Functions 
          bool hasRatio() const { return this->ratio_ != nullptr;};
          void deleteRatio() { this->ratio_ = nullptr;};
          inline string getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
          inline Attitudes& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


          // viewPoints Field Functions 
          bool hasViewPoints() const { return this->viewPoints_ != nullptr;};
          void deleteViewPoints() { this->viewPoints_ = nullptr;};
          inline const vector<Attitudes::ViewPoints> & getViewPoints() const { DARABONBA_PTR_GET_CONST(viewPoints_, vector<Attitudes::ViewPoints>) };
          inline vector<Attitudes::ViewPoints> getViewPoints() { DARABONBA_PTR_GET(viewPoints_, vector<Attitudes::ViewPoints>) };
          inline Attitudes& setViewPoints(const vector<Attitudes::ViewPoints> & viewPoints) { DARABONBA_PTR_SET_VALUE(viewPoints_, viewPoints) };
          inline Attitudes& setViewPoints(vector<Attitudes::ViewPoints> && viewPoints) { DARABONBA_PTR_SET_RVALUE(viewPoints_, viewPoints) };


        protected:
          shared_ptr<string> attitude_ {};
          shared_ptr<string> attitudeType_ {};
          shared_ptr<string> ratio_ {};
          shared_ptr<vector<Attitudes::ViewPoints>> viewPoints_ {};
        };

        virtual bool empty() const override { return this->attitudes_ == nullptr; };
        // attitudes Field Functions 
        bool hasAttitudes() const { return this->attitudes_ != nullptr;};
        void deleteAttitudes() { this->attitudes_ = nullptr;};
        inline const vector<FreshViewPointsResult::Attitudes> & getAttitudes() const { DARABONBA_PTR_GET_CONST(attitudes_, vector<FreshViewPointsResult::Attitudes>) };
        inline vector<FreshViewPointsResult::Attitudes> getAttitudes() { DARABONBA_PTR_GET(attitudes_, vector<FreshViewPointsResult::Attitudes>) };
        inline FreshViewPointsResult& setAttitudes(const vector<FreshViewPointsResult::Attitudes> & attitudes) { DARABONBA_PTR_SET_VALUE(attitudes_, attitudes) };
        inline FreshViewPointsResult& setAttitudes(vector<FreshViewPointsResult::Attitudes> && attitudes) { DARABONBA_PTR_SET_RVALUE(attitudes_, attitudes) };


      protected:
        shared_ptr<vector<FreshViewPointsResult::Attitudes>> attitudes_ {};
      };

      virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->freshViewPointsResult_ == nullptr && this->hotViewPointsResult_ == nullptr && this->status_ == nullptr && this->timedViewPointsResult_ == nullptr && this->topic_ == nullptr
        && this->topicSummaryResult_ == nullptr && this->webReviewPointsResult_ == nullptr; };
      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // freshViewPointsResult Field Functions 
      bool hasFreshViewPointsResult() const { return this->freshViewPointsResult_ != nullptr;};
      void deleteFreshViewPointsResult() { this->freshViewPointsResult_ = nullptr;};
      inline const Data::FreshViewPointsResult & getFreshViewPointsResult() const { DARABONBA_PTR_GET_CONST(freshViewPointsResult_, Data::FreshViewPointsResult) };
      inline Data::FreshViewPointsResult getFreshViewPointsResult() { DARABONBA_PTR_GET(freshViewPointsResult_, Data::FreshViewPointsResult) };
      inline Data& setFreshViewPointsResult(const Data::FreshViewPointsResult & freshViewPointsResult) { DARABONBA_PTR_SET_VALUE(freshViewPointsResult_, freshViewPointsResult) };
      inline Data& setFreshViewPointsResult(Data::FreshViewPointsResult && freshViewPointsResult) { DARABONBA_PTR_SET_RVALUE(freshViewPointsResult_, freshViewPointsResult) };


      // hotViewPointsResult Field Functions 
      bool hasHotViewPointsResult() const { return this->hotViewPointsResult_ != nullptr;};
      void deleteHotViewPointsResult() { this->hotViewPointsResult_ = nullptr;};
      inline const Data::HotViewPointsResult & getHotViewPointsResult() const { DARABONBA_PTR_GET_CONST(hotViewPointsResult_, Data::HotViewPointsResult) };
      inline Data::HotViewPointsResult getHotViewPointsResult() { DARABONBA_PTR_GET(hotViewPointsResult_, Data::HotViewPointsResult) };
      inline Data& setHotViewPointsResult(const Data::HotViewPointsResult & hotViewPointsResult) { DARABONBA_PTR_SET_VALUE(hotViewPointsResult_, hotViewPointsResult) };
      inline Data& setHotViewPointsResult(Data::HotViewPointsResult && hotViewPointsResult) { DARABONBA_PTR_SET_RVALUE(hotViewPointsResult_, hotViewPointsResult) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // timedViewPointsResult Field Functions 
      bool hasTimedViewPointsResult() const { return this->timedViewPointsResult_ != nullptr;};
      void deleteTimedViewPointsResult() { this->timedViewPointsResult_ = nullptr;};
      inline const Data::TimedViewPointsResult & getTimedViewPointsResult() const { DARABONBA_PTR_GET_CONST(timedViewPointsResult_, Data::TimedViewPointsResult) };
      inline Data::TimedViewPointsResult getTimedViewPointsResult() { DARABONBA_PTR_GET(timedViewPointsResult_, Data::TimedViewPointsResult) };
      inline Data& setTimedViewPointsResult(const Data::TimedViewPointsResult & timedViewPointsResult) { DARABONBA_PTR_SET_VALUE(timedViewPointsResult_, timedViewPointsResult) };
      inline Data& setTimedViewPointsResult(Data::TimedViewPointsResult && timedViewPointsResult) { DARABONBA_PTR_SET_RVALUE(timedViewPointsResult_, timedViewPointsResult) };


      // topic Field Functions 
      bool hasTopic() const { return this->topic_ != nullptr;};
      void deleteTopic() { this->topic_ = nullptr;};
      inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
      inline Data& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


      // topicSummaryResult Field Functions 
      bool hasTopicSummaryResult() const { return this->topicSummaryResult_ != nullptr;};
      void deleteTopicSummaryResult() { this->topicSummaryResult_ = nullptr;};
      inline const Data::TopicSummaryResult & getTopicSummaryResult() const { DARABONBA_PTR_GET_CONST(topicSummaryResult_, Data::TopicSummaryResult) };
      inline Data::TopicSummaryResult getTopicSummaryResult() { DARABONBA_PTR_GET(topicSummaryResult_, Data::TopicSummaryResult) };
      inline Data& setTopicSummaryResult(const Data::TopicSummaryResult & topicSummaryResult) { DARABONBA_PTR_SET_VALUE(topicSummaryResult_, topicSummaryResult) };
      inline Data& setTopicSummaryResult(Data::TopicSummaryResult && topicSummaryResult) { DARABONBA_PTR_SET_RVALUE(topicSummaryResult_, topicSummaryResult) };


      // webReviewPointsResult Field Functions 
      bool hasWebReviewPointsResult() const { return this->webReviewPointsResult_ != nullptr;};
      void deleteWebReviewPointsResult() { this->webReviewPointsResult_ = nullptr;};
      inline const Data::WebReviewPointsResult & getWebReviewPointsResult() const { DARABONBA_PTR_GET_CONST(webReviewPointsResult_, Data::WebReviewPointsResult) };
      inline Data::WebReviewPointsResult getWebReviewPointsResult() { DARABONBA_PTR_GET(webReviewPointsResult_, Data::WebReviewPointsResult) };
      inline Data& setWebReviewPointsResult(const Data::WebReviewPointsResult & webReviewPointsResult) { DARABONBA_PTR_SET_VALUE(webReviewPointsResult_, webReviewPointsResult) };
      inline Data& setWebReviewPointsResult(Data::WebReviewPointsResult && webReviewPointsResult) { DARABONBA_PTR_SET_RVALUE(webReviewPointsResult_, webReviewPointsResult) };


    protected:
      shared_ptr<string> errorMessage_ {};
      shared_ptr<Data::FreshViewPointsResult> freshViewPointsResult_ {};
      shared_ptr<Data::HotViewPointsResult> hotViewPointsResult_ {};
      shared_ptr<string> status_ {};
      shared_ptr<Data::TimedViewPointsResult> timedViewPointsResult_ {};
      shared_ptr<string> topic_ {};
      shared_ptr<Data::TopicSummaryResult> topicSummaryResult_ {};
      shared_ptr<Data::WebReviewPointsResult> webReviewPointsResult_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTopicSelectionPerspectiveAnalysisTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTopicSelectionPerspectiveAnalysisTaskResponseBody::Data) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTopicSelectionPerspectiveAnalysisTaskResponseBody::Data) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBody& setData(const GetTopicSelectionPerspectiveAnalysisTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBody& setData(GetTopicSelectionPerspectiveAnalysisTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetTopicSelectionPerspectiveAnalysisTaskResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
