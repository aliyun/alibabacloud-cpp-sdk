// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGPUCLUSTERARGSOPTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETGPUCLUSTERARGSOPTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetGpuClusterArgsOptionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGpuClusterArgsOptionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(filterType, filterType_);
      DARABONBA_ANY_TO_JSON(filterValues, filterValues_);
    };
    friend void from_json(const Darabonba::Json& j, GetGpuClusterArgsOptionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(filterType, filterType_);
      DARABONBA_ANY_FROM_JSON(filterValues, filterValues_);
    };
    GetGpuClusterArgsOptionsRequest() = default ;
    GetGpuClusterArgsOptionsRequest(const GetGpuClusterArgsOptionsRequest &) = default ;
    GetGpuClusterArgsOptionsRequest(GetGpuClusterArgsOptionsRequest &&) = default ;
    GetGpuClusterArgsOptionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGpuClusterArgsOptionsRequest() = default ;
    GetGpuClusterArgsOptionsRequest& operator=(const GetGpuClusterArgsOptionsRequest &) = default ;
    GetGpuClusterArgsOptionsRequest& operator=(GetGpuClusterArgsOptionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterType_ == nullptr
        && this->filterValues_ == nullptr; };
    // filterType Field Functions 
    bool hasFilterType() const { return this->filterType_ != nullptr;};
    void deleteFilterType() { this->filterType_ = nullptr;};
    inline string getFilterType() const { DARABONBA_PTR_GET_DEFAULT(filterType_, "") };
    inline GetGpuClusterArgsOptionsRequest& setFilterType(string filterType) { DARABONBA_PTR_SET_VALUE(filterType_, filterType) };


    // filterValues Field Functions 
    bool hasFilterValues() const { return this->filterValues_ != nullptr;};
    void deleteFilterValues() { this->filterValues_ = nullptr;};
    inline     const Darabonba::Json & getFilterValues() const { DARABONBA_GET(filterValues_) };
    Darabonba::Json & getFilterValues() { DARABONBA_GET(filterValues_) };
    inline GetGpuClusterArgsOptionsRequest& setFilterValues(const Darabonba::Json & filterValues) { DARABONBA_SET_VALUE(filterValues_, filterValues) };
    inline GetGpuClusterArgsOptionsRequest& setFilterValues(Darabonba::Json && filterValues) { DARABONBA_SET_RVALUE(filterValues_, filterValues) };


  protected:
    // 1. Query cluster machine list scenario: Set the retrieval type to comm_instance_id_list or instance_id_list. comm_instance_id_list: Retrieves only the list of machines in the specified cluster that participate in collective communication. instance_id_list: Retrieves the list of all machines in the specified cluster.
    // 2. Query cluster AI task list scenario: Set the retrieval type to comm_task_id_list or task_id_list. comm_task_id_list: Retrieves only the list of tasks in the specified cluster that involve collective communication. task_id_list: Retrieves the list of all tasks in the specified cluster.
    // 3. Query cluster AI job pod list scenario: Set the retrieval type to comm_pod_list or pod_list. comm_pod_list: Retrieves only the list of pods in the specified cluster that participate in collective communication. pod_list: Retrieves the list of all pods in the specified cluster.
    // 4. Query collective communication topology scenario: communication: Retrieves all communication group IDs. channel: Retrieves the channel list under the specified communication group ID. topoType: Retrieves the topology type under the specified channel of the specified communication group ID.
    // 
    // This parameter is required.
    shared_ptr<string> filterType_ {};
    // The filter conditions, which is a JSON object. The cluster_id field is required. Other filter conditions support the following values:
    // - instance_id_list
    // - comm_instance_id_list
    // - pod_list
    // - comm_pod_list
    // - communication
    // - task_id_list
    // - comm_task_id_list
    // - channel
    // - topoType
    Darabonba::Json filterValues_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
