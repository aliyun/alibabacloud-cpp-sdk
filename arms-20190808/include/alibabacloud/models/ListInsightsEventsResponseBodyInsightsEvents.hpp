// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSIGHTSEVENTSRESPONSEBODYINSIGHTSEVENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSIGHTSEVENTSRESPONSEBODYINSIGHTSEVENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListInsightsEventsResponseBodyInsightsEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInsightsEventsResponseBodyInsightsEvents& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(ProblemId, problemId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListInsightsEventsResponseBodyInsightsEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(ProblemId, problemId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListInsightsEventsResponseBodyInsightsEvents() = default ;
    ListInsightsEventsResponseBodyInsightsEvents(const ListInsightsEventsResponseBodyInsightsEvents &) = default ;
    ListInsightsEventsResponseBodyInsightsEvents(ListInsightsEventsResponseBodyInsightsEvents &&) = default ;
    ListInsightsEventsResponseBodyInsightsEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInsightsEventsResponseBodyInsightsEvents() = default ;
    ListInsightsEventsResponseBodyInsightsEvents& operator=(const ListInsightsEventsResponseBodyInsightsEvents &) = default ;
    ListInsightsEventsResponseBodyInsightsEvents& operator=(ListInsightsEventsResponseBodyInsightsEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr
        && this->desc_ != nullptr && this->level_ != nullptr && this->pid_ != nullptr && this->problemId_ != nullptr && this->title_ != nullptr
        && this->type_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline int64_t date() const { DARABONBA_PTR_GET_DEFAULT(date_, 0L) };
    inline ListInsightsEventsResponseBodyInsightsEvents& setDate(int64_t date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline ListInsightsEventsResponseBodyInsightsEvents& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline ListInsightsEventsResponseBodyInsightsEvents& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline ListInsightsEventsResponseBodyInsightsEvents& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // problemId Field Functions 
    bool hasProblemId() const { return this->problemId_ != nullptr;};
    void deleteProblemId() { this->problemId_ = nullptr;};
    inline string problemId() const { DARABONBA_PTR_GET_DEFAULT(problemId_, "") };
    inline ListInsightsEventsResponseBodyInsightsEvents& setProblemId(string problemId) { DARABONBA_PTR_SET_VALUE(problemId_, problemId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListInsightsEventsResponseBodyInsightsEvents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListInsightsEventsResponseBodyInsightsEvents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The time when the event occurred. The value is a timestamp.
    std::shared_ptr<int64_t> date_ = nullptr;
    // The description of the alert event.
    std::shared_ptr<string> desc_ = nullptr;
    // The severity of the event.
    std::shared_ptr<string> level_ = nullptr;
    // The ID of the application associated with the event.
    std::shared_ptr<string> pid_ = nullptr;
    // The problem identifier.
    std::shared_ptr<string> problemId_ = nullptr;
    // The title of the event.
    std::shared_ptr<string> title_ = nullptr;
    // The type of the event.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
