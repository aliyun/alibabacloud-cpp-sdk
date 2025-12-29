// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTIMEDVIEWATTITUDERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTIMEDVIEWATTITUDERESPONSEBODY_HPP_
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
  class ListTimedViewAttitudeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTimedViewAttitudeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTimedViewAttitudeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTimedViewAttitudeResponseBody() = default ;
    ListTimedViewAttitudeResponseBody(const ListTimedViewAttitudeResponseBody &) = default ;
    ListTimedViewAttitudeResponseBody(ListTimedViewAttitudeResponseBody &&) = default ;
    ListTimedViewAttitudeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTimedViewAttitudeResponseBody() = default ;
    ListTimedViewAttitudeResponseBody& operator=(const ListTimedViewAttitudeResponseBody &) = default ;
    ListTimedViewAttitudeResponseBody& operator=(ListTimedViewAttitudeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Attitude, attitude_);
        DARABONBA_PTR_TO_JSON(AttitudeType, attitudeType_);
        DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
        DARABONBA_PTR_TO_JSON(Ratio, ratio_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Url, url_);
        DARABONBA_PTR_TO_JSON(ViewPoints, viewPoints_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Attitude, attitude_);
        DARABONBA_PTR_FROM_JSON(AttitudeType, attitudeType_);
        DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
        DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
        DARABONBA_PTR_FROM_JSON(ViewPoints, viewPoints_);
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
      inline Data& setAttitude(string attitude) { DARABONBA_PTR_SET_VALUE(attitude_, attitude) };


      // attitudeType Field Functions 
      bool hasAttitudeType() const { return this->attitudeType_ != nullptr;};
      void deleteAttitudeType() { this->attitudeType_ = nullptr;};
      inline string getAttitudeType() const { DARABONBA_PTR_GET_DEFAULT(attitudeType_, "") };
      inline Data& setAttitudeType(string attitudeType) { DARABONBA_PTR_SET_VALUE(attitudeType_, attitudeType) };


      // pubTime Field Functions 
      bool hasPubTime() const { return this->pubTime_ != nullptr;};
      void deletePubTime() { this->pubTime_ = nullptr;};
      inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
      inline Data& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


      // ratio Field Functions 
      bool hasRatio() const { return this->ratio_ != nullptr;};
      void deleteRatio() { this->ratio_ = nullptr;};
      inline string getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
      inline Data& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Data& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Data& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // viewPoints Field Functions 
      bool hasViewPoints() const { return this->viewPoints_ != nullptr;};
      void deleteViewPoints() { this->viewPoints_ = nullptr;};
      inline const vector<Data::ViewPoints> & getViewPoints() const { DARABONBA_PTR_GET_CONST(viewPoints_, vector<Data::ViewPoints>) };
      inline vector<Data::ViewPoints> getViewPoints() { DARABONBA_PTR_GET(viewPoints_, vector<Data::ViewPoints>) };
      inline Data& setViewPoints(const vector<Data::ViewPoints> & viewPoints) { DARABONBA_PTR_SET_VALUE(viewPoints_, viewPoints) };
      inline Data& setViewPoints(vector<Data::ViewPoints> && viewPoints) { DARABONBA_PTR_SET_RVALUE(viewPoints_, viewPoints) };


    protected:
      shared_ptr<string> attitude_ {};
      shared_ptr<string> attitudeType_ {};
      shared_ptr<string> pubTime_ {};
      shared_ptr<string> ratio_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> url_ {};
      shared_ptr<vector<Data::ViewPoints>> viewPoints_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTimedViewAttitudeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListTimedViewAttitudeResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListTimedViewAttitudeResponseBody::Data>) };
    inline vector<ListTimedViewAttitudeResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListTimedViewAttitudeResponseBody::Data>) };
    inline ListTimedViewAttitudeResponseBody& setData(const vector<ListTimedViewAttitudeResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTimedViewAttitudeResponseBody& setData(vector<ListTimedViewAttitudeResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListTimedViewAttitudeResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTimedViewAttitudeResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTimedViewAttitudeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTimedViewAttitudeResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTimedViewAttitudeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTimedViewAttitudeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTimedViewAttitudeResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListTimedViewAttitudeResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
