// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCLOUDGTMADDRESSESRESPONSEBODYADDRESSESADDRESSHEALTHTASKS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCLOUDGTMADDRESSESRESPONSEBODYADDRESSESADDRESSHEALTHTASKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasksHealthTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasks& obj) { 
      DARABONBA_PTR_TO_JSON(HealthTask, healthTask_);
    };
    friend void from_json(const Darabonba::Json& j, SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(HealthTask, healthTask_);
    };
    SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasks() = default ;
    SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasks(const SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasks &) = default ;
    SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasks(SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasks &&) = default ;
    SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasks() = default ;
    SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasks& operator=(const SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasks &) = default ;
    SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasks& operator=(SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->healthTask_ != nullptr; };
    // healthTask Field Functions 
    bool hasHealthTask() const { return this->healthTask_ != nullptr;};
    void deleteHealthTask() { this->healthTask_ = nullptr;};
    inline const vector<Models::SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasksHealthTask> & healthTask() const { DARABONBA_PTR_GET_CONST(healthTask_, vector<Models::SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasksHealthTask>) };
    inline vector<Models::SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasksHealthTask> healthTask() { DARABONBA_PTR_GET(healthTask_, vector<Models::SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasksHealthTask>) };
    inline SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasks& setHealthTask(const vector<Models::SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasksHealthTask> & healthTask) { DARABONBA_PTR_SET_VALUE(healthTask_, healthTask) };
    inline SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasks& setHealthTask(vector<Models::SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasksHealthTask> && healthTask) { DARABONBA_PTR_SET_RVALUE(healthTask_, healthTask) };


  protected:
    std::shared_ptr<vector<Models::SearchCloudGtmAddressesResponseBodyAddressesAddressHealthTasksHealthTask>> healthTask_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
