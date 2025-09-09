// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSRESPONSEBODYHEALTHTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSRESPONSEBODYHEALTHTASKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmAddressResponseBodyHealthTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmAddressResponseBodyHealthTasks& obj) { 
      DARABONBA_PTR_TO_JSON(HealthTask, healthTask_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmAddressResponseBodyHealthTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(HealthTask, healthTask_);
    };
    DescribeCloudGtmAddressResponseBodyHealthTasks() = default ;
    DescribeCloudGtmAddressResponseBodyHealthTasks(const DescribeCloudGtmAddressResponseBodyHealthTasks &) = default ;
    DescribeCloudGtmAddressResponseBodyHealthTasks(DescribeCloudGtmAddressResponseBodyHealthTasks &&) = default ;
    DescribeCloudGtmAddressResponseBodyHealthTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmAddressResponseBodyHealthTasks() = default ;
    DescribeCloudGtmAddressResponseBodyHealthTasks& operator=(const DescribeCloudGtmAddressResponseBodyHealthTasks &) = default ;
    DescribeCloudGtmAddressResponseBodyHealthTasks& operator=(DescribeCloudGtmAddressResponseBodyHealthTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->healthTask_ != nullptr; };
    // healthTask Field Functions 
    bool hasHealthTask() const { return this->healthTask_ != nullptr;};
    void deleteHealthTask() { this->healthTask_ = nullptr;};
    inline const vector<Models::DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask> & healthTask() const { DARABONBA_PTR_GET_CONST(healthTask_, vector<Models::DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask>) };
    inline vector<Models::DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask> healthTask() { DARABONBA_PTR_GET(healthTask_, vector<Models::DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask>) };
    inline DescribeCloudGtmAddressResponseBodyHealthTasks& setHealthTask(const vector<Models::DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask> & healthTask) { DARABONBA_PTR_SET_VALUE(healthTask_, healthTask) };
    inline DescribeCloudGtmAddressResponseBodyHealthTasks& setHealthTask(vector<Models::DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask> && healthTask) { DARABONBA_PTR_SET_RVALUE(healthTask_, healthTask) };


  protected:
    std::shared_ptr<vector<Models::DescribeCloudGtmAddressResponseBodyHealthTasksHealthTask>> healthTask_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
