// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMADDRESSESRESPONSEBODYADDRESSESADDRESSHEALTHTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMADDRESSESRESPONSEBODYADDRESSESADDRESSHEALTHTASKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasksHealthTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks& obj) { 
      DARABONBA_PTR_TO_JSON(HealthTask, healthTask_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(HealthTask, healthTask_);
    };
    ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks() = default ;
    ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks(const ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks &) = default ;
    ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks(ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks &&) = default ;
    ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks() = default ;
    ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks& operator=(const ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks &) = default ;
    ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks& operator=(ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->healthTask_ != nullptr; };
    // healthTask Field Functions 
    bool hasHealthTask() const { return this->healthTask_ != nullptr;};
    void deleteHealthTask() { this->healthTask_ = nullptr;};
    inline const vector<Models::ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasksHealthTask> & healthTask() const { DARABONBA_PTR_GET_CONST(healthTask_, vector<Models::ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasksHealthTask>) };
    inline vector<Models::ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasksHealthTask> healthTask() { DARABONBA_PTR_GET(healthTask_, vector<Models::ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasksHealthTask>) };
    inline ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks& setHealthTask(const vector<Models::ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasksHealthTask> & healthTask) { DARABONBA_PTR_SET_VALUE(healthTask_, healthTask) };
    inline ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasks& setHealthTask(vector<Models::ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasksHealthTask> && healthTask) { DARABONBA_PTR_SET_RVALUE(healthTask_, healthTask) };


  protected:
    std::shared_ptr<vector<Models::ListCloudGtmAddressesResponseBodyAddressesAddressHealthTasksHealthTask>> healthTask_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
