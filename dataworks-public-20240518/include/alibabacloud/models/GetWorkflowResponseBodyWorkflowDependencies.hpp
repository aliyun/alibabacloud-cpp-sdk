// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODYWORKFLOWDEPENDENCIES_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODYWORKFLOWDEPENDENCIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetWorkflowResponseBodyWorkflowDependencies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowResponseBodyWorkflowDependencies& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpstreamOutput, upstreamOutput_);
      DARABONBA_PTR_TO_JSON(UpstreamTaskId, upstreamTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowResponseBodyWorkflowDependencies& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpstreamOutput, upstreamOutput_);
      DARABONBA_PTR_FROM_JSON(UpstreamTaskId, upstreamTaskId_);
    };
    GetWorkflowResponseBodyWorkflowDependencies() = default ;
    GetWorkflowResponseBodyWorkflowDependencies(const GetWorkflowResponseBodyWorkflowDependencies &) = default ;
    GetWorkflowResponseBodyWorkflowDependencies(GetWorkflowResponseBodyWorkflowDependencies &&) = default ;
    GetWorkflowResponseBodyWorkflowDependencies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowResponseBodyWorkflowDependencies() = default ;
    GetWorkflowResponseBodyWorkflowDependencies& operator=(const GetWorkflowResponseBodyWorkflowDependencies &) = default ;
    GetWorkflowResponseBodyWorkflowDependencies& operator=(GetWorkflowResponseBodyWorkflowDependencies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && return this->upstreamOutput_ == nullptr && return this->upstreamTaskId_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetWorkflowResponseBodyWorkflowDependencies& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // upstreamOutput Field Functions 
    bool hasUpstreamOutput() const { return this->upstreamOutput_ != nullptr;};
    void deleteUpstreamOutput() { this->upstreamOutput_ = nullptr;};
    inline string upstreamOutput() const { DARABONBA_PTR_GET_DEFAULT(upstreamOutput_, "") };
    inline GetWorkflowResponseBodyWorkflowDependencies& setUpstreamOutput(string upstreamOutput) { DARABONBA_PTR_SET_VALUE(upstreamOutput_, upstreamOutput) };


    // upstreamTaskId Field Functions 
    bool hasUpstreamTaskId() const { return this->upstreamTaskId_ != nullptr;};
    void deleteUpstreamTaskId() { this->upstreamTaskId_ = nullptr;};
    inline int64_t upstreamTaskId() const { DARABONBA_PTR_GET_DEFAULT(upstreamTaskId_, 0L) };
    inline GetWorkflowResponseBodyWorkflowDependencies& setUpstreamTaskId(int64_t upstreamTaskId) { DARABONBA_PTR_SET_VALUE(upstreamTaskId_, upstreamTaskId) };


  protected:
    // The scheduling dependency type. Valid values:
    // 
    // *   CrossCycleDependsOnChildren: cross-cycle dependency on the level-1 descendant nodes of a node
    // *   CrossCycleDependsOnSelf: cross-cycle dependency on the current node
    // *   CrossCycleDependsOnOtherNode: cross-cycle dependency on other nodes
    // *   Normal: same-cycle scheduling dependency
    std::shared_ptr<string> type_ = nullptr;
    // The identifier of the output of the ancestor task. This parameter is returned only if `same-cycle scheduling dependencies` and the node input are configured.
    std::shared_ptr<string> upstreamOutput_ = nullptr;
    // The ancestor task ID. This parameter is returned only if `cross-cycle scheduling dependencies` or `same-cycle scheduling dependencies` and the node input are not configured.
    std::shared_ptr<int64_t> upstreamTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
