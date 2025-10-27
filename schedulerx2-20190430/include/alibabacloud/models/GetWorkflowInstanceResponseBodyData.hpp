// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWorkflowInstanceResponseBodyDataWfInstanceDag.hpp>
#include <alibabacloud/models/GetWorkflowInstanceResponseBodyDataWfInstanceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetWorkflowInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(WfInstanceDag, wfInstanceDag_);
      DARABONBA_PTR_TO_JSON(WfInstanceInfo, wfInstanceInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(WfInstanceDag, wfInstanceDag_);
      DARABONBA_PTR_FROM_JSON(WfInstanceInfo, wfInstanceInfo_);
    };
    GetWorkflowInstanceResponseBodyData() = default ;
    GetWorkflowInstanceResponseBodyData(const GetWorkflowInstanceResponseBodyData &) = default ;
    GetWorkflowInstanceResponseBodyData(GetWorkflowInstanceResponseBodyData &&) = default ;
    GetWorkflowInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowInstanceResponseBodyData() = default ;
    GetWorkflowInstanceResponseBodyData& operator=(const GetWorkflowInstanceResponseBodyData &) = default ;
    GetWorkflowInstanceResponseBodyData& operator=(GetWorkflowInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->wfInstanceDag_ == nullptr
        && return this->wfInstanceInfo_ == nullptr; };
    // wfInstanceDag Field Functions 
    bool hasWfInstanceDag() const { return this->wfInstanceDag_ != nullptr;};
    void deleteWfInstanceDag() { this->wfInstanceDag_ = nullptr;};
    inline const Models::GetWorkflowInstanceResponseBodyDataWfInstanceDag & wfInstanceDag() const { DARABONBA_PTR_GET_CONST(wfInstanceDag_, Models::GetWorkflowInstanceResponseBodyDataWfInstanceDag) };
    inline Models::GetWorkflowInstanceResponseBodyDataWfInstanceDag wfInstanceDag() { DARABONBA_PTR_GET(wfInstanceDag_, Models::GetWorkflowInstanceResponseBodyDataWfInstanceDag) };
    inline GetWorkflowInstanceResponseBodyData& setWfInstanceDag(const Models::GetWorkflowInstanceResponseBodyDataWfInstanceDag & wfInstanceDag) { DARABONBA_PTR_SET_VALUE(wfInstanceDag_, wfInstanceDag) };
    inline GetWorkflowInstanceResponseBodyData& setWfInstanceDag(Models::GetWorkflowInstanceResponseBodyDataWfInstanceDag && wfInstanceDag) { DARABONBA_PTR_SET_RVALUE(wfInstanceDag_, wfInstanceDag) };


    // wfInstanceInfo Field Functions 
    bool hasWfInstanceInfo() const { return this->wfInstanceInfo_ != nullptr;};
    void deleteWfInstanceInfo() { this->wfInstanceInfo_ = nullptr;};
    inline const Models::GetWorkflowInstanceResponseBodyDataWfInstanceInfo & wfInstanceInfo() const { DARABONBA_PTR_GET_CONST(wfInstanceInfo_, Models::GetWorkflowInstanceResponseBodyDataWfInstanceInfo) };
    inline Models::GetWorkflowInstanceResponseBodyDataWfInstanceInfo wfInstanceInfo() { DARABONBA_PTR_GET(wfInstanceInfo_, Models::GetWorkflowInstanceResponseBodyDataWfInstanceInfo) };
    inline GetWorkflowInstanceResponseBodyData& setWfInstanceInfo(const Models::GetWorkflowInstanceResponseBodyDataWfInstanceInfo & wfInstanceInfo) { DARABONBA_PTR_SET_VALUE(wfInstanceInfo_, wfInstanceInfo) };
    inline GetWorkflowInstanceResponseBodyData& setWfInstanceInfo(Models::GetWorkflowInstanceResponseBodyDataWfInstanceInfo && wfInstanceInfo) { DARABONBA_PTR_SET_RVALUE(wfInstanceInfo_, wfInstanceInfo) };


  protected:
    // The directed acyclic graph (DAG) of the workflow instance, including nodes and dependencies.
    std::shared_ptr<Models::GetWorkflowInstanceResponseBodyDataWfInstanceDag> wfInstanceDag_ = nullptr;
    // The details of the workflow instance, including the state of the workflow instance, the time when the workflow instance started to run, the time when the workflow instance stopped running, the state of each job instance, and the dependencies between job instances.
    std::shared_ptr<Models::GetWorkflowInstanceResponseBodyDataWfInstanceInfo> wfInstanceInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
