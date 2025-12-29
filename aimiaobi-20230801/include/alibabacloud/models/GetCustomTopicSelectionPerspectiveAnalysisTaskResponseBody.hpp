// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODY_HPP_
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
  class GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody() = default ;
    GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody(const GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody &) = default ;
    GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody(GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody &&) = default ;
    GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody() = default ;
    GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody& operator=(const GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody &) = default ;
    GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody& operator=(GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CustomViewPointsResult, customViewPointsResult_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomViewPointsResult, customViewPointsResult_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      class CustomViewPointsResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomViewPointsResult& obj) { 
          DARABONBA_PTR_TO_JSON(Attitudes, attitudes_);
          DARABONBA_PTR_TO_JSON(Topic, topic_);
        };
        friend void from_json(const Darabonba::Json& j, CustomViewPointsResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Attitudes, attitudes_);
          DARABONBA_PTR_FROM_JSON(Topic, topic_);
        };
        CustomViewPointsResult() = default ;
        CustomViewPointsResult(const CustomViewPointsResult &) = default ;
        CustomViewPointsResult(CustomViewPointsResult &&) = default ;
        CustomViewPointsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomViewPointsResult() = default ;
        CustomViewPointsResult& operator=(const CustomViewPointsResult &) = default ;
        CustomViewPointsResult& operator=(CustomViewPointsResult &&) = default ;
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

        virtual bool empty() const override { return this->attitudes_ == nullptr
        && this->topic_ == nullptr; };
        // attitudes Field Functions 
        bool hasAttitudes() const { return this->attitudes_ != nullptr;};
        void deleteAttitudes() { this->attitudes_ = nullptr;};
        inline const vector<CustomViewPointsResult::Attitudes> & getAttitudes() const { DARABONBA_PTR_GET_CONST(attitudes_, vector<CustomViewPointsResult::Attitudes>) };
        inline vector<CustomViewPointsResult::Attitudes> getAttitudes() { DARABONBA_PTR_GET(attitudes_, vector<CustomViewPointsResult::Attitudes>) };
        inline CustomViewPointsResult& setAttitudes(const vector<CustomViewPointsResult::Attitudes> & attitudes) { DARABONBA_PTR_SET_VALUE(attitudes_, attitudes) };
        inline CustomViewPointsResult& setAttitudes(vector<CustomViewPointsResult::Attitudes> && attitudes) { DARABONBA_PTR_SET_RVALUE(attitudes_, attitudes) };


        // topic Field Functions 
        bool hasTopic() const { return this->topic_ != nullptr;};
        void deleteTopic() { this->topic_ = nullptr;};
        inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
        inline CustomViewPointsResult& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


      protected:
        shared_ptr<vector<CustomViewPointsResult::Attitudes>> attitudes_ {};
        shared_ptr<string> topic_ {};
      };

      virtual bool empty() const override { return this->customViewPointsResult_ == nullptr
        && this->errorMessage_ == nullptr && this->status_ == nullptr; };
      // customViewPointsResult Field Functions 
      bool hasCustomViewPointsResult() const { return this->customViewPointsResult_ != nullptr;};
      void deleteCustomViewPointsResult() { this->customViewPointsResult_ = nullptr;};
      inline const Data::CustomViewPointsResult & getCustomViewPointsResult() const { DARABONBA_PTR_GET_CONST(customViewPointsResult_, Data::CustomViewPointsResult) };
      inline Data::CustomViewPointsResult getCustomViewPointsResult() { DARABONBA_PTR_GET(customViewPointsResult_, Data::CustomViewPointsResult) };
      inline Data& setCustomViewPointsResult(const Data::CustomViewPointsResult & customViewPointsResult) { DARABONBA_PTR_SET_VALUE(customViewPointsResult_, customViewPointsResult) };
      inline Data& setCustomViewPointsResult(Data::CustomViewPointsResult && customViewPointsResult) { DARABONBA_PTR_SET_RVALUE(customViewPointsResult_, customViewPointsResult) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<Data::CustomViewPointsResult> customViewPointsResult_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody::Data) };
    inline GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody::Data) };
    inline GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody& setData(const GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody& setData(GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
