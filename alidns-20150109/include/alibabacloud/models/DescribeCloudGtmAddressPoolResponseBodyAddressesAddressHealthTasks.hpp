// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSPOOLRESPONSEBODYADDRESSESADDRESSHEALTHTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSPOOLRESPONSEBODYADDRESSESADDRESSHEALTHTASKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasks& obj) { 
      DARABONBA_PTR_TO_JSON(HealthTask, healthTask_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(HealthTask, healthTask_);
    };
    DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasks() = default ;
    DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasks(const DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasks &) = default ;
    DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasks(DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasks &&) = default ;
    DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasks() = default ;
    DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasks& operator=(const DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasks &) = default ;
    DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasks& operator=(DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->healthTask_ == nullptr; };
    // healthTask Field Functions 
    bool hasHealthTask() const { return this->healthTask_ != nullptr;};
    void deleteHealthTask() { this->healthTask_ = nullptr;};
    inline const vector<Models::DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask> & healthTask() const { DARABONBA_PTR_GET_CONST(healthTask_, vector<Models::DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask>) };
    inline vector<Models::DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask> healthTask() { DARABONBA_PTR_GET(healthTask_, vector<Models::DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask>) };
    inline DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasks& setHealthTask(const vector<Models::DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask> & healthTask) { DARABONBA_PTR_SET_VALUE(healthTask_, healthTask) };
    inline DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasks& setHealthTask(vector<Models::DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask> && healthTask) { DARABONBA_PTR_SET_RVALUE(healthTask_, healthTask) };


  protected:
    std::shared_ptr<vector<Models::DescribeCloudGtmAddressPoolResponseBodyAddressesAddressHealthTasksHealthTask>> healthTask_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
