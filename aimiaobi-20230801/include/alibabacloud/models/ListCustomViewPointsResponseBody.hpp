// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMVIEWPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMVIEWPOINTSRESPONSEBODY_HPP_
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
  class ListCustomViewPointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomViewPointsResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListCustomViewPointsResponseBody& obj) { 
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
    ListCustomViewPointsResponseBody() = default ;
    ListCustomViewPointsResponseBody(const ListCustomViewPointsResponseBody &) = default ;
    ListCustomViewPointsResponseBody(ListCustomViewPointsResponseBody &&) = default ;
    ListCustomViewPointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomViewPointsResponseBody() = default ;
    ListCustomViewPointsResponseBody& operator=(const ListCustomViewPointsResponseBody &) = default ;
    ListCustomViewPointsResponseBody& operator=(ListCustomViewPointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AsyncTaskId, asyncTaskId_);
        DARABONBA_PTR_TO_JSON(Attitude, attitude_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskErrorMessage, taskErrorMessage_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(ViewPoints, viewPoints_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AsyncTaskId, asyncTaskId_);
        DARABONBA_PTR_FROM_JSON(Attitude, attitude_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskErrorMessage, taskErrorMessage_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
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

      virtual bool empty() const override { return this->asyncTaskId_ == nullptr
        && this->attitude_ == nullptr && this->createTime_ == nullptr && this->createUser_ == nullptr && this->id_ == nullptr && this->status_ == nullptr
        && this->taskErrorMessage_ == nullptr && this->taskStatus_ == nullptr && this->viewPoints_ == nullptr; };
      // asyncTaskId Field Functions 
      bool hasAsyncTaskId() const { return this->asyncTaskId_ != nullptr;};
      void deleteAsyncTaskId() { this->asyncTaskId_ = nullptr;};
      inline string getAsyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(asyncTaskId_, "") };
      inline Data& setAsyncTaskId(string asyncTaskId) { DARABONBA_PTR_SET_VALUE(asyncTaskId_, asyncTaskId) };


      // attitude Field Functions 
      bool hasAttitude() const { return this->attitude_ != nullptr;};
      void deleteAttitude() { this->attitude_ = nullptr;};
      inline string getAttitude() const { DARABONBA_PTR_GET_DEFAULT(attitude_, "") };
      inline Data& setAttitude(string attitude) { DARABONBA_PTR_SET_VALUE(attitude_, attitude) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline Data& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskErrorMessage Field Functions 
      bool hasTaskErrorMessage() const { return this->taskErrorMessage_ != nullptr;};
      void deleteTaskErrorMessage() { this->taskErrorMessage_ = nullptr;};
      inline string getTaskErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskErrorMessage_, "") };
      inline Data& setTaskErrorMessage(string taskErrorMessage) { DARABONBA_PTR_SET_VALUE(taskErrorMessage_, taskErrorMessage) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline int32_t getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
      inline Data& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // viewPoints Field Functions 
      bool hasViewPoints() const { return this->viewPoints_ != nullptr;};
      void deleteViewPoints() { this->viewPoints_ = nullptr;};
      inline const vector<Data::ViewPoints> & getViewPoints() const { DARABONBA_PTR_GET_CONST(viewPoints_, vector<Data::ViewPoints>) };
      inline vector<Data::ViewPoints> getViewPoints() { DARABONBA_PTR_GET(viewPoints_, vector<Data::ViewPoints>) };
      inline Data& setViewPoints(const vector<Data::ViewPoints> & viewPoints) { DARABONBA_PTR_SET_VALUE(viewPoints_, viewPoints) };
      inline Data& setViewPoints(vector<Data::ViewPoints> && viewPoints) { DARABONBA_PTR_SET_RVALUE(viewPoints_, viewPoints) };


    protected:
      shared_ptr<string> asyncTaskId_ {};
      shared_ptr<string> attitude_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> createUser_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskErrorMessage_ {};
      shared_ptr<int32_t> taskStatus_ {};
      shared_ptr<vector<Data::ViewPoints>> viewPoints_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCustomViewPointsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListCustomViewPointsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListCustomViewPointsResponseBody::Data>) };
    inline vector<ListCustomViewPointsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListCustomViewPointsResponseBody::Data>) };
    inline ListCustomViewPointsResponseBody& setData(const vector<ListCustomViewPointsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCustomViewPointsResponseBody& setData(vector<ListCustomViewPointsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListCustomViewPointsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCustomViewPointsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCustomViewPointsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCustomViewPointsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomViewPointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCustomViewPointsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCustomViewPointsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListCustomViewPointsResponseBody::Data>> data_ {};
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
