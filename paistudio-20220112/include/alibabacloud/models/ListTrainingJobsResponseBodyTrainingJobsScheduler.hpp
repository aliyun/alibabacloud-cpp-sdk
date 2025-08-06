// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBSRESPONSEBODYTRAININGJOBSSCHEDULER_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBSRESPONSEBODYTRAININGJOBSSCHEDULER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobsResponseBodyTrainingJobsScheduler : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobsResponseBodyTrainingJobsScheduler& obj) { 
      DARABONBA_PTR_TO_JSON(MaxRunningTimeInSeconds, maxRunningTimeInSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobsResponseBodyTrainingJobsScheduler& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxRunningTimeInSeconds, maxRunningTimeInSeconds_);
    };
    ListTrainingJobsResponseBodyTrainingJobsScheduler() = default ;
    ListTrainingJobsResponseBodyTrainingJobsScheduler(const ListTrainingJobsResponseBodyTrainingJobsScheduler &) = default ;
    ListTrainingJobsResponseBodyTrainingJobsScheduler(ListTrainingJobsResponseBodyTrainingJobsScheduler &&) = default ;
    ListTrainingJobsResponseBodyTrainingJobsScheduler(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobsResponseBodyTrainingJobsScheduler() = default ;
    ListTrainingJobsResponseBodyTrainingJobsScheduler& operator=(const ListTrainingJobsResponseBodyTrainingJobsScheduler &) = default ;
    ListTrainingJobsResponseBodyTrainingJobsScheduler& operator=(ListTrainingJobsResponseBodyTrainingJobsScheduler &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxRunningTimeInSeconds_ != nullptr; };
    // maxRunningTimeInSeconds Field Functions 
    bool hasMaxRunningTimeInSeconds() const { return this->maxRunningTimeInSeconds_ != nullptr;};
    void deleteMaxRunningTimeInSeconds() { this->maxRunningTimeInSeconds_ = nullptr;};
    inline int64_t maxRunningTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxRunningTimeInSeconds_, 0L) };
    inline ListTrainingJobsResponseBodyTrainingJobsScheduler& setMaxRunningTimeInSeconds(int64_t maxRunningTimeInSeconds) { DARABONBA_PTR_SET_VALUE(maxRunningTimeInSeconds_, maxRunningTimeInSeconds) };


  protected:
    std::shared_ptr<int64_t> maxRunningTimeInSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
