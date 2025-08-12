// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMPRELOADTASKSRESPONSEBODYPRELOADTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMPRELOADTASKSRESPONSEBODYPRELOADTASKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks& obj) { 
      DARABONBA_PTR_TO_JSON(PreloadTask, preloadTask_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(PreloadTask, preloadTask_);
    };
    DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks() = default ;
    DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks(const DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks &) = default ;
    DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks(DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks &&) = default ;
    DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks() = default ;
    DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks& operator=(const DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks &) = default ;
    DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks& operator=(DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->preloadTask_ != nullptr; };
    // preloadTask Field Functions 
    bool hasPreloadTask() const { return this->preloadTask_ != nullptr;};
    void deletePreloadTask() { this->preloadTask_ = nullptr;};
    inline const vector<Models::DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask> & preloadTask() const { DARABONBA_PTR_GET_CONST(preloadTask_, vector<Models::DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask>) };
    inline vector<Models::DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask> preloadTask() { DARABONBA_PTR_GET(preloadTask_, vector<Models::DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask>) };
    inline DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks& setPreloadTask(const vector<Models::DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask> & preloadTask) { DARABONBA_PTR_SET_VALUE(preloadTask_, preloadTask) };
    inline DescribeLiveStreamPreloadTasksResponseBodyPreloadTasks& setPreloadTask(vector<Models::DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask> && preloadTask) { DARABONBA_PTR_SET_RVALUE(preloadTask_, preloadTask) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveStreamPreloadTasksResponseBodyPreloadTasksPreloadTask>> preloadTask_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
