// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREFRESHTASKSRESPONSEBODYTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREFRESHTASKSRESPONSEBODYTASKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRefreshTasksResponseBodyTasksCDNTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeRefreshTasksResponseBodyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRefreshTasksResponseBodyTasks& obj) { 
      DARABONBA_PTR_TO_JSON(CDNTask, CDNTask_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRefreshTasksResponseBodyTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(CDNTask, CDNTask_);
    };
    DescribeRefreshTasksResponseBodyTasks() = default ;
    DescribeRefreshTasksResponseBodyTasks(const DescribeRefreshTasksResponseBodyTasks &) = default ;
    DescribeRefreshTasksResponseBodyTasks(DescribeRefreshTasksResponseBodyTasks &&) = default ;
    DescribeRefreshTasksResponseBodyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRefreshTasksResponseBodyTasks() = default ;
    DescribeRefreshTasksResponseBodyTasks& operator=(const DescribeRefreshTasksResponseBodyTasks &) = default ;
    DescribeRefreshTasksResponseBodyTasks& operator=(DescribeRefreshTasksResponseBodyTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->CDNTask_ != nullptr; };
    // CDNTask Field Functions 
    bool hasCDNTask() const { return this->CDNTask_ != nullptr;};
    void deleteCDNTask() { this->CDNTask_ = nullptr;};
    inline const vector<Models::DescribeRefreshTasksResponseBodyTasksCDNTask> & CDNTask() const { DARABONBA_PTR_GET_CONST(CDNTask_, vector<Models::DescribeRefreshTasksResponseBodyTasksCDNTask>) };
    inline vector<Models::DescribeRefreshTasksResponseBodyTasksCDNTask> CDNTask() { DARABONBA_PTR_GET(CDNTask_, vector<Models::DescribeRefreshTasksResponseBodyTasksCDNTask>) };
    inline DescribeRefreshTasksResponseBodyTasks& setCDNTask(const vector<Models::DescribeRefreshTasksResponseBodyTasksCDNTask> & CDNTask) { DARABONBA_PTR_SET_VALUE(CDNTask_, CDNTask) };
    inline DescribeRefreshTasksResponseBodyTasks& setCDNTask(vector<Models::DescribeRefreshTasksResponseBodyTasksCDNTask> && CDNTask) { DARABONBA_PTR_SET_RVALUE(CDNTask_, CDNTask) };


  protected:
    std::shared_ptr<vector<Models::DescribeRefreshTasksResponseBodyTasksCDNTask>> CDNTask_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
