// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKINSTANCESREQUESTTASKINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKINSTANCESREQUESTTASKINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateTaskInstancesRequestTaskInstancesDataSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateTaskInstancesRequestTaskInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskInstancesRequestTaskInstances& obj) { 
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskInstancesRequestTaskInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
    };
    UpdateTaskInstancesRequestTaskInstances() = default ;
    UpdateTaskInstancesRequestTaskInstances(const UpdateTaskInstancesRequestTaskInstances &) = default ;
    UpdateTaskInstancesRequestTaskInstances(UpdateTaskInstancesRequestTaskInstances &&) = default ;
    UpdateTaskInstancesRequestTaskInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskInstancesRequestTaskInstances() = default ;
    UpdateTaskInstancesRequestTaskInstances& operator=(const UpdateTaskInstancesRequestTaskInstances &) = default ;
    UpdateTaskInstancesRequestTaskInstances& operator=(UpdateTaskInstancesRequestTaskInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSource_ != nullptr
        && this->id_ != nullptr && this->priority_ != nullptr && this->runtimeResource_ != nullptr; };
    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const Models::UpdateTaskInstancesRequestTaskInstancesDataSource & dataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, Models::UpdateTaskInstancesRequestTaskInstancesDataSource) };
    inline Models::UpdateTaskInstancesRequestTaskInstancesDataSource dataSource() { DARABONBA_PTR_GET(dataSource_, Models::UpdateTaskInstancesRequestTaskInstancesDataSource) };
    inline UpdateTaskInstancesRequestTaskInstances& setDataSource(const Models::UpdateTaskInstancesRequestTaskInstancesDataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline UpdateTaskInstancesRequestTaskInstances& setDataSource(Models::UpdateTaskInstancesRequestTaskInstancesDataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateTaskInstancesRequestTaskInstances& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateTaskInstancesRequestTaskInstances& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline string runtimeResource() const { DARABONBA_PTR_GET_DEFAULT(runtimeResource_, "") };
    inline UpdateTaskInstancesRequestTaskInstances& setRuntimeResource(string runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };


  protected:
    // The information about the associated data source.
    std::shared_ptr<Models::UpdateTaskInstancesRequestTaskInstancesDataSource> dataSource_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The priority of the instance. Valid values: 1, 3, 5, 7, and 8.
    // 
    // A larger value indicates a higher priority. Default value: 1.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The resource group information. Set this parameter to the ID of a resource group for scheduling.
    std::shared_ptr<string> runtimeResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
