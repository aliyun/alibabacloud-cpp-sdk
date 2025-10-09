// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKRESPONSEBODYTASKDEPENDENCIES_HPP_
#define ALIBABACLOUD_MODELS_GETTASKRESPONSEBODYTASKDEPENDENCIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetTaskResponseBodyTaskDependencies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskResponseBodyTaskDependencies& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpstreamOutput, upstreamOutput_);
      DARABONBA_PTR_TO_JSON(UpstreamTaskId, upstreamTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskResponseBodyTaskDependencies& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpstreamOutput, upstreamOutput_);
      DARABONBA_PTR_FROM_JSON(UpstreamTaskId, upstreamTaskId_);
    };
    GetTaskResponseBodyTaskDependencies() = default ;
    GetTaskResponseBodyTaskDependencies(const GetTaskResponseBodyTaskDependencies &) = default ;
    GetTaskResponseBodyTaskDependencies(GetTaskResponseBodyTaskDependencies &&) = default ;
    GetTaskResponseBodyTaskDependencies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskResponseBodyTaskDependencies() = default ;
    GetTaskResponseBodyTaskDependencies& operator=(const GetTaskResponseBodyTaskDependencies &) = default ;
    GetTaskResponseBodyTaskDependencies& operator=(GetTaskResponseBodyTaskDependencies &&) = default ;
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
    inline GetTaskResponseBodyTaskDependencies& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // upstreamOutput Field Functions 
    bool hasUpstreamOutput() const { return this->upstreamOutput_ != nullptr;};
    void deleteUpstreamOutput() { this->upstreamOutput_ = nullptr;};
    inline string upstreamOutput() const { DARABONBA_PTR_GET_DEFAULT(upstreamOutput_, "") };
    inline GetTaskResponseBodyTaskDependencies& setUpstreamOutput(string upstreamOutput) { DARABONBA_PTR_SET_VALUE(upstreamOutput_, upstreamOutput) };


    // upstreamTaskId Field Functions 
    bool hasUpstreamTaskId() const { return this->upstreamTaskId_ != nullptr;};
    void deleteUpstreamTaskId() { this->upstreamTaskId_ = nullptr;};
    inline string upstreamTaskId() const { DARABONBA_PTR_GET_DEFAULT(upstreamTaskId_, "") };
    inline GetTaskResponseBodyTaskDependencies& setUpstreamTaskId(string upstreamTaskId) { DARABONBA_PTR_SET_VALUE(upstreamTaskId_, upstreamTaskId) };


  protected:
    // The dependency type. Valid values:
    // 
    // *   CrossCycleDependsOnChildren: cross-cycle dependency on level-1 descendant nodes
    // *   CrossCycleDependsOnSelf: cross-cycle dependency on the current node
    // *   CrossCycleDependsOnOtherNode: cross-cycle dependency on other nodes
    // *   Normal: same-cycle scheduling dependency
    std::shared_ptr<string> type_ = nullptr;
    // The identifier of the output of the ancestor task. This parameter is returned only if `same-cycle scheduling dependencies` and the node input are configured.
    std::shared_ptr<string> upstreamOutput_ = nullptr;
    // The ancestor task ID. This parameter is returned only if `cross-cycle scheduling dependencies` or `same-cycle scheduling dependencies` and the node input are not configured.
    std::shared_ptr<string> upstreamTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
