// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSIGHTSEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSIGHTSEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListInsightsEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInsightsEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InsightsEvents, insightsEvents_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInsightsEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InsightsEvents, insightsEvents_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInsightsEventsResponseBody() = default ;
    ListInsightsEventsResponseBody(const ListInsightsEventsResponseBody &) = default ;
    ListInsightsEventsResponseBody(ListInsightsEventsResponseBody &&) = default ;
    ListInsightsEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInsightsEventsResponseBody() = default ;
    ListInsightsEventsResponseBody& operator=(const ListInsightsEventsResponseBody &) = default ;
    ListInsightsEventsResponseBody& operator=(ListInsightsEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InsightsEvents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InsightsEvents& obj) { 
        DARABONBA_PTR_TO_JSON(Date, date_);
        DARABONBA_PTR_TO_JSON(Desc, desc_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(Pid, pid_);
        DARABONBA_PTR_TO_JSON(ProblemId, problemId_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, InsightsEvents& obj) { 
        DARABONBA_PTR_FROM_JSON(Date, date_);
        DARABONBA_PTR_FROM_JSON(Desc, desc_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(Pid, pid_);
        DARABONBA_PTR_FROM_JSON(ProblemId, problemId_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      InsightsEvents() = default ;
      InsightsEvents(const InsightsEvents &) = default ;
      InsightsEvents(InsightsEvents &&) = default ;
      InsightsEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InsightsEvents() = default ;
      InsightsEvents& operator=(const InsightsEvents &) = default ;
      InsightsEvents& operator=(InsightsEvents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->date_ == nullptr
        && this->desc_ == nullptr && this->level_ == nullptr && this->pid_ == nullptr && this->problemId_ == nullptr && this->title_ == nullptr
        && this->type_ == nullptr; };
      // date Field Functions 
      bool hasDate() const { return this->date_ != nullptr;};
      void deleteDate() { this->date_ = nullptr;};
      inline int64_t getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, 0L) };
      inline InsightsEvents& setDate(int64_t date) { DARABONBA_PTR_SET_VALUE(date_, date) };


      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
      inline InsightsEvents& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline InsightsEvents& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // pid Field Functions 
      bool hasPid() const { return this->pid_ != nullptr;};
      void deletePid() { this->pid_ = nullptr;};
      inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
      inline InsightsEvents& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


      // problemId Field Functions 
      bool hasProblemId() const { return this->problemId_ != nullptr;};
      void deleteProblemId() { this->problemId_ = nullptr;};
      inline string getProblemId() const { DARABONBA_PTR_GET_DEFAULT(problemId_, "") };
      inline InsightsEvents& setProblemId(string problemId) { DARABONBA_PTR_SET_VALUE(problemId_, problemId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline InsightsEvents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline InsightsEvents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The time when the event occurred. The value is a timestamp.
      shared_ptr<int64_t> date_ {};
      // The description of the alert event.
      shared_ptr<string> desc_ {};
      // The severity of the event.
      shared_ptr<string> level_ {};
      // The ID of the application associated with the event.
      shared_ptr<string> pid_ {};
      // The problem identifier.
      shared_ptr<string> problemId_ {};
      // The title of the event.
      shared_ptr<string> title_ {};
      // The type of the event.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->insightsEvents_ == nullptr
        && this->requestId_ == nullptr; };
    // insightsEvents Field Functions 
    bool hasInsightsEvents() const { return this->insightsEvents_ != nullptr;};
    void deleteInsightsEvents() { this->insightsEvents_ = nullptr;};
    inline const vector<ListInsightsEventsResponseBody::InsightsEvents> & getInsightsEvents() const { DARABONBA_PTR_GET_CONST(insightsEvents_, vector<ListInsightsEventsResponseBody::InsightsEvents>) };
    inline vector<ListInsightsEventsResponseBody::InsightsEvents> getInsightsEvents() { DARABONBA_PTR_GET(insightsEvents_, vector<ListInsightsEventsResponseBody::InsightsEvents>) };
    inline ListInsightsEventsResponseBody& setInsightsEvents(const vector<ListInsightsEventsResponseBody::InsightsEvents> & insightsEvents) { DARABONBA_PTR_SET_VALUE(insightsEvents_, insightsEvents) };
    inline ListInsightsEventsResponseBody& setInsightsEvents(vector<ListInsightsEventsResponseBody::InsightsEvents> && insightsEvents) { DARABONBA_PTR_SET_RVALUE(insightsEvents_, insightsEvents) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInsightsEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the event.
    shared_ptr<vector<ListInsightsEventsResponseBody::InsightsEvents>> insightsEvents_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
