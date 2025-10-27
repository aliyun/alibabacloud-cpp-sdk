// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWorkFlowResponseBodyDataWorkFlowInfo.hpp>
#include <alibabacloud/models/GetWorkFlowResponseBodyDataWorkFlowNodeInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetWorkFlowResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkFlowResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(WorkFlowInfo, workFlowInfo_);
      DARABONBA_PTR_TO_JSON(WorkFlowNodeInfo, workFlowNodeInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkFlowResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkFlowInfo, workFlowInfo_);
      DARABONBA_PTR_FROM_JSON(WorkFlowNodeInfo, workFlowNodeInfo_);
    };
    GetWorkFlowResponseBodyData() = default ;
    GetWorkFlowResponseBodyData(const GetWorkFlowResponseBodyData &) = default ;
    GetWorkFlowResponseBodyData(GetWorkFlowResponseBodyData &&) = default ;
    GetWorkFlowResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkFlowResponseBodyData() = default ;
    GetWorkFlowResponseBodyData& operator=(const GetWorkFlowResponseBodyData &) = default ;
    GetWorkFlowResponseBodyData& operator=(GetWorkFlowResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workFlowInfo_ == nullptr
        && return this->workFlowNodeInfo_ == nullptr; };
    // workFlowInfo Field Functions 
    bool hasWorkFlowInfo() const { return this->workFlowInfo_ != nullptr;};
    void deleteWorkFlowInfo() { this->workFlowInfo_ = nullptr;};
    inline const Models::GetWorkFlowResponseBodyDataWorkFlowInfo & workFlowInfo() const { DARABONBA_PTR_GET_CONST(workFlowInfo_, Models::GetWorkFlowResponseBodyDataWorkFlowInfo) };
    inline Models::GetWorkFlowResponseBodyDataWorkFlowInfo workFlowInfo() { DARABONBA_PTR_GET(workFlowInfo_, Models::GetWorkFlowResponseBodyDataWorkFlowInfo) };
    inline GetWorkFlowResponseBodyData& setWorkFlowInfo(const Models::GetWorkFlowResponseBodyDataWorkFlowInfo & workFlowInfo) { DARABONBA_PTR_SET_VALUE(workFlowInfo_, workFlowInfo) };
    inline GetWorkFlowResponseBodyData& setWorkFlowInfo(Models::GetWorkFlowResponseBodyDataWorkFlowInfo && workFlowInfo) { DARABONBA_PTR_SET_RVALUE(workFlowInfo_, workFlowInfo) };


    // workFlowNodeInfo Field Functions 
    bool hasWorkFlowNodeInfo() const { return this->workFlowNodeInfo_ != nullptr;};
    void deleteWorkFlowNodeInfo() { this->workFlowNodeInfo_ = nullptr;};
    inline const Models::GetWorkFlowResponseBodyDataWorkFlowNodeInfo & workFlowNodeInfo() const { DARABONBA_PTR_GET_CONST(workFlowNodeInfo_, Models::GetWorkFlowResponseBodyDataWorkFlowNodeInfo) };
    inline Models::GetWorkFlowResponseBodyDataWorkFlowNodeInfo workFlowNodeInfo() { DARABONBA_PTR_GET(workFlowNodeInfo_, Models::GetWorkFlowResponseBodyDataWorkFlowNodeInfo) };
    inline GetWorkFlowResponseBodyData& setWorkFlowNodeInfo(const Models::GetWorkFlowResponseBodyDataWorkFlowNodeInfo & workFlowNodeInfo) { DARABONBA_PTR_SET_VALUE(workFlowNodeInfo_, workFlowNodeInfo) };
    inline GetWorkFlowResponseBodyData& setWorkFlowNodeInfo(Models::GetWorkFlowResponseBodyDataWorkFlowNodeInfo && workFlowNodeInfo) { DARABONBA_PTR_SET_RVALUE(workFlowNodeInfo_, workFlowNodeInfo) };


  protected:
    // The basic information of the workflow.
    std::shared_ptr<Models::GetWorkFlowResponseBodyDataWorkFlowInfo> workFlowInfo_ = nullptr;
    // The node information of the workflow.
    std::shared_ptr<Models::GetWorkFlowResponseBodyDataWorkFlowNodeInfo> workFlowNodeInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
