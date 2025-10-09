// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKREQUESTDEPENDENCIES_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKREQUESTDEPENDENCIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateTaskRequestDependencies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskRequestDependencies& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpstreamOutput, upstreamOutput_);
      DARABONBA_PTR_TO_JSON(UpstreamTaskId, upstreamTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskRequestDependencies& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpstreamOutput, upstreamOutput_);
      DARABONBA_PTR_FROM_JSON(UpstreamTaskId, upstreamTaskId_);
    };
    UpdateTaskRequestDependencies() = default ;
    UpdateTaskRequestDependencies(const UpdateTaskRequestDependencies &) = default ;
    UpdateTaskRequestDependencies(UpdateTaskRequestDependencies &&) = default ;
    UpdateTaskRequestDependencies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskRequestDependencies() = default ;
    UpdateTaskRequestDependencies& operator=(const UpdateTaskRequestDependencies &) = default ;
    UpdateTaskRequestDependencies& operator=(UpdateTaskRequestDependencies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr
        && this->upstreamOutput_ != nullptr && this->upstreamTaskId_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateTaskRequestDependencies& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // upstreamOutput Field Functions 
    bool hasUpstreamOutput() const { return this->upstreamOutput_ != nullptr;};
    void deleteUpstreamOutput() { this->upstreamOutput_ = nullptr;};
    inline string upstreamOutput() const { DARABONBA_PTR_GET_DEFAULT(upstreamOutput_, "") };
    inline UpdateTaskRequestDependencies& setUpstreamOutput(string upstreamOutput) { DARABONBA_PTR_SET_VALUE(upstreamOutput_, upstreamOutput) };


    // upstreamTaskId Field Functions 
    bool hasUpstreamTaskId() const { return this->upstreamTaskId_ != nullptr;};
    void deleteUpstreamTaskId() { this->upstreamTaskId_ = nullptr;};
    inline int64_t upstreamTaskId() const { DARABONBA_PTR_GET_DEFAULT(upstreamTaskId_, 0L) };
    inline UpdateTaskRequestDependencies& setUpstreamTaskId(int64_t upstreamTaskId) { DARABONBA_PTR_SET_VALUE(upstreamTaskId_, upstreamTaskId) };


  protected:
    // The dependency type. Valid values:
    // 
    // *   CrossCycleDependsOnChildren: Depends on level-1 downstream nodes across cycles
    // *   CrossCycleDependsOnSelf: Depends on itself across cycles.
    // *   CrossCycleDependsOnOtherNode: Depends on other nodes across cycles.
    // *   Normal: Depends on nodes in the same cycle.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // The output identifier of the upstream task. (This parameter is returned only if `Normal` is set and the node input is configured.)
    std::shared_ptr<string> upstreamOutput_ = nullptr;
    // The ID of the upstream task. (This parameter is returned only if `Normal` or `CrossCycleDependsOnOtherNode` is set and the node input is not configured.)
    std::shared_ptr<int64_t> upstreamTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
