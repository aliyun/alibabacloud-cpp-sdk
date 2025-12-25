// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWDAGPREVIEWRESPONSEBODYDATANODES_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWDAGPREVIEWRESPONSEBODYDATANODES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWorkflowDAGPreviewResponseBodyDataNodesCoordinate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetWorkflowDAGPreviewResponseBodyDataNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowDAGPreviewResponseBodyDataNodes& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Coordinate, coordinate_);
      DARABONBA_PTR_TO_JSON(DependentStrategy, dependentStrategy_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowDAGPreviewResponseBodyDataNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Coordinate, coordinate_);
      DARABONBA_PTR_FROM_JSON(DependentStrategy, dependentStrategy_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetWorkflowDAGPreviewResponseBodyDataNodes() = default ;
    GetWorkflowDAGPreviewResponseBodyDataNodes(const GetWorkflowDAGPreviewResponseBodyDataNodes &) = default ;
    GetWorkflowDAGPreviewResponseBodyDataNodes(GetWorkflowDAGPreviewResponseBodyDataNodes &&) = default ;
    GetWorkflowDAGPreviewResponseBodyDataNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowDAGPreviewResponseBodyDataNodes() = default ;
    GetWorkflowDAGPreviewResponseBodyDataNodes& operator=(const GetWorkflowDAGPreviewResponseBodyDataNodes &) = default ;
    GetWorkflowDAGPreviewResponseBodyDataNodes& operator=(GetWorkflowDAGPreviewResponseBodyDataNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->coordinate_ == nullptr && return this->dependentStrategy_ == nullptr && return this->id_ == nullptr && return this->jobType_ == nullptr && return this->name_ == nullptr
        && return this->status_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetWorkflowDAGPreviewResponseBodyDataNodes& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // coordinate Field Functions 
    bool hasCoordinate() const { return this->coordinate_ != nullptr;};
    void deleteCoordinate() { this->coordinate_ = nullptr;};
    inline const Models::GetWorkflowDAGPreviewResponseBodyDataNodesCoordinate & coordinate() const { DARABONBA_PTR_GET_CONST(coordinate_, Models::GetWorkflowDAGPreviewResponseBodyDataNodesCoordinate) };
    inline Models::GetWorkflowDAGPreviewResponseBodyDataNodesCoordinate coordinate() { DARABONBA_PTR_GET(coordinate_, Models::GetWorkflowDAGPreviewResponseBodyDataNodesCoordinate) };
    inline GetWorkflowDAGPreviewResponseBodyDataNodes& setCoordinate(const Models::GetWorkflowDAGPreviewResponseBodyDataNodesCoordinate & coordinate) { DARABONBA_PTR_SET_VALUE(coordinate_, coordinate) };
    inline GetWorkflowDAGPreviewResponseBodyDataNodes& setCoordinate(Models::GetWorkflowDAGPreviewResponseBodyDataNodesCoordinate && coordinate) { DARABONBA_PTR_SET_RVALUE(coordinate_, coordinate) };


    // dependentStrategy Field Functions 
    bool hasDependentStrategy() const { return this->dependentStrategy_ != nullptr;};
    void deleteDependentStrategy() { this->dependentStrategy_ = nullptr;};
    inline int32_t dependentStrategy() const { DARABONBA_PTR_GET_DEFAULT(dependentStrategy_, 0) };
    inline GetWorkflowDAGPreviewResponseBodyDataNodes& setDependentStrategy(int32_t dependentStrategy) { DARABONBA_PTR_SET_VALUE(dependentStrategy_, dependentStrategy) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetWorkflowDAGPreviewResponseBodyDataNodes& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline GetWorkflowDAGPreviewResponseBodyDataNodes& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetWorkflowDAGPreviewResponseBodyDataNodes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetWorkflowDAGPreviewResponseBodyDataNodes& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<Models::GetWorkflowDAGPreviewResponseBodyDataNodesCoordinate> coordinate_ = nullptr;
    std::shared_ptr<int32_t> dependentStrategy_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> jobType_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
