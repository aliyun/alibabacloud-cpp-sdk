// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTOREVENTSRESPONSEBODYEXECUTOREVENTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTOREVENTSRESPONSEBODYEXECUTOREVENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListExecutorEventsResponseBodyExecutorEventList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutorEventsResponseBodyExecutorEventList& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ExecutorId, executorId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutorEventsResponseBodyExecutorEventList& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ExecutorId, executorId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    ListExecutorEventsResponseBodyExecutorEventList() = default ;
    ListExecutorEventsResponseBodyExecutorEventList(const ListExecutorEventsResponseBodyExecutorEventList &) = default ;
    ListExecutorEventsResponseBodyExecutorEventList(ListExecutorEventsResponseBodyExecutorEventList &&) = default ;
    ListExecutorEventsResponseBodyExecutorEventList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutorEventsResponseBodyExecutorEventList() = default ;
    ListExecutorEventsResponseBodyExecutorEventList& operator=(const ListExecutorEventsResponseBodyExecutorEventList &) = default ;
    ListExecutorEventsResponseBodyExecutorEventList& operator=(ListExecutorEventsResponseBodyExecutorEventList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->executorId_ == nullptr && return this->jobId_ == nullptr && return this->level_ == nullptr && return this->time_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListExecutorEventsResponseBodyExecutorEventList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // executorId Field Functions 
    bool hasExecutorId() const { return this->executorId_ != nullptr;};
    void deleteExecutorId() { this->executorId_ = nullptr;};
    inline string executorId() const { DARABONBA_PTR_GET_DEFAULT(executorId_, "") };
    inline ListExecutorEventsResponseBodyExecutorEventList& setExecutorId(string executorId) { DARABONBA_PTR_SET_VALUE(executorId_, executorId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListExecutorEventsResponseBodyExecutorEventList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline ListExecutorEventsResponseBodyExecutorEventList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline ListExecutorEventsResponseBodyExecutorEventList& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> executorId_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
