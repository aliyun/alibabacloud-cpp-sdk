// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWorkflowInstanceResponseBodyDataWfInstanceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ListWorkflowInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(WfInstanceInfos, wfInstanceInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(WfInstanceInfos, wfInstanceInfos_);
    };
    ListWorkflowInstanceResponseBodyData() = default ;
    ListWorkflowInstanceResponseBodyData(const ListWorkflowInstanceResponseBodyData &) = default ;
    ListWorkflowInstanceResponseBodyData(ListWorkflowInstanceResponseBodyData &&) = default ;
    ListWorkflowInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowInstanceResponseBodyData() = default ;
    ListWorkflowInstanceResponseBodyData& operator=(const ListWorkflowInstanceResponseBodyData &) = default ;
    ListWorkflowInstanceResponseBodyData& operator=(ListWorkflowInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->wfInstanceInfos_ == nullptr; };
    // wfInstanceInfos Field Functions 
    bool hasWfInstanceInfos() const { return this->wfInstanceInfos_ != nullptr;};
    void deleteWfInstanceInfos() { this->wfInstanceInfos_ = nullptr;};
    inline const vector<Models::ListWorkflowInstanceResponseBodyDataWfInstanceInfos> & wfInstanceInfos() const { DARABONBA_PTR_GET_CONST(wfInstanceInfos_, vector<Models::ListWorkflowInstanceResponseBodyDataWfInstanceInfos>) };
    inline vector<Models::ListWorkflowInstanceResponseBodyDataWfInstanceInfos> wfInstanceInfos() { DARABONBA_PTR_GET(wfInstanceInfos_, vector<Models::ListWorkflowInstanceResponseBodyDataWfInstanceInfos>) };
    inline ListWorkflowInstanceResponseBodyData& setWfInstanceInfos(const vector<Models::ListWorkflowInstanceResponseBodyDataWfInstanceInfos> & wfInstanceInfos) { DARABONBA_PTR_SET_VALUE(wfInstanceInfos_, wfInstanceInfos) };
    inline ListWorkflowInstanceResponseBodyData& setWfInstanceInfos(vector<Models::ListWorkflowInstanceResponseBodyDataWfInstanceInfos> && wfInstanceInfos) { DARABONBA_PTR_SET_RVALUE(wfInstanceInfos_, wfInstanceInfos) };


  protected:
    // The workflow instances.
    std::shared_ptr<vector<Models::ListWorkflowInstanceResponseBodyDataWfInstanceInfos>> wfInstanceInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
