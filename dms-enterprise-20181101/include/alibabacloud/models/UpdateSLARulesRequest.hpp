// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESLARULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESLARULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateSLARulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSLARulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(SlaRuleList, slaRuleList_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSLARulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(SlaRuleList, slaRuleList_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    UpdateSLARulesRequest() = default ;
    UpdateSLARulesRequest(const UpdateSLARulesRequest &) = default ;
    UpdateSLARulesRequest(UpdateSLARulesRequest &&) = default ;
    UpdateSLARulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSLARulesRequest() = default ;
    UpdateSLARulesRequest& operator=(const UpdateSLARulesRequest &) = default ;
    UpdateSLARulesRequest& operator=(UpdateSLARulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SlaRuleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlaRuleList& obj) { 
        DARABONBA_PTR_TO_JSON(DagId, dagId_);
        DARABONBA_PTR_TO_JSON(IntervalMinutes, intervalMinutes_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, SlaRuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(DagId, dagId_);
        DARABONBA_PTR_FROM_JSON(IntervalMinutes, intervalMinutes_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      SlaRuleList() = default ;
      SlaRuleList(const SlaRuleList &) = default ;
      SlaRuleList(SlaRuleList &&) = default ;
      SlaRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlaRuleList() = default ;
      SlaRuleList& operator=(const SlaRuleList &) = default ;
      SlaRuleList& operator=(SlaRuleList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dagId_ == nullptr
        && this->intervalMinutes_ == nullptr && this->nodeId_ == nullptr && this->type_ == nullptr; };
      // dagId Field Functions 
      bool hasDagId() const { return this->dagId_ != nullptr;};
      void deleteDagId() { this->dagId_ = nullptr;};
      inline int64_t getDagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
      inline SlaRuleList& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


      // intervalMinutes Field Functions 
      bool hasIntervalMinutes() const { return this->intervalMinutes_ != nullptr;};
      void deleteIntervalMinutes() { this->intervalMinutes_ = nullptr;};
      inline int32_t getIntervalMinutes() const { DARABONBA_PTR_GET_DEFAULT(intervalMinutes_, 0) };
      inline SlaRuleList& setIntervalMinutes(int32_t intervalMinutes) { DARABONBA_PTR_SET_VALUE(intervalMinutes_, intervalMinutes) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
      inline SlaRuleList& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline SlaRuleList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the task flow.
      // 
      // This parameter is required.
      shared_ptr<int64_t> dagId_ {};
      // The timeout period. Unit: minutes.
      // 
      // This parameter is required.
      shared_ptr<int32_t> intervalMinutes_ {};
      // The ID of the task node.
      shared_ptr<int64_t> nodeId_ {};
      // The rule type. Valid values:
      // 
      // *   **0**: SLA rules for task flows
      // *   **1**: SLA rules for nodes
      // 
      // This parameter is required.
      shared_ptr<int32_t> type_ {};
    };

    virtual bool empty() const override { return this->dagId_ == nullptr
        && this->slaRuleList_ == nullptr && this->tid_ == nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t getDagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline UpdateSLARulesRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // slaRuleList Field Functions 
    bool hasSlaRuleList() const { return this->slaRuleList_ != nullptr;};
    void deleteSlaRuleList() { this->slaRuleList_ = nullptr;};
    inline const vector<UpdateSLARulesRequest::SlaRuleList> & getSlaRuleList() const { DARABONBA_PTR_GET_CONST(slaRuleList_, vector<UpdateSLARulesRequest::SlaRuleList>) };
    inline vector<UpdateSLARulesRequest::SlaRuleList> getSlaRuleList() { DARABONBA_PTR_GET(slaRuleList_, vector<UpdateSLARulesRequest::SlaRuleList>) };
    inline UpdateSLARulesRequest& setSlaRuleList(const vector<UpdateSLARulesRequest::SlaRuleList> & slaRuleList) { DARABONBA_PTR_SET_VALUE(slaRuleList_, slaRuleList) };
    inline UpdateSLARulesRequest& setSlaRuleList(vector<UpdateSLARulesRequest::SlaRuleList> && slaRuleList) { DARABONBA_PTR_SET_RVALUE(slaRuleList_, slaRuleList) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateSLARulesRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the task flow. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to query the task flow ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> dagId_ {};
    // The list of SLA rules.
    shared_ptr<vector<UpdateSLARulesRequest::SlaRuleList>> slaRuleList_ {};
    // The ID of the tenant.
    // 
    // > :To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
