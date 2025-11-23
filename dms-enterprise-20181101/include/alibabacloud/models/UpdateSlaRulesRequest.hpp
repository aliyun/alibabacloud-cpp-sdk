// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESLARULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESLARULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateSLARulesRequestSlaRuleList.hpp>
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
    virtual bool empty() const override { return this->dagId_ == nullptr
        && return this->slaRuleList_ == nullptr && return this->tid_ == nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline UpdateSLARulesRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // slaRuleList Field Functions 
    bool hasSlaRuleList() const { return this->slaRuleList_ != nullptr;};
    void deleteSlaRuleList() { this->slaRuleList_ = nullptr;};
    inline const vector<UpdateSLARulesRequestSlaRuleList> & slaRuleList() const { DARABONBA_PTR_GET_CONST(slaRuleList_, vector<UpdateSLARulesRequestSlaRuleList>) };
    inline vector<UpdateSLARulesRequestSlaRuleList> slaRuleList() { DARABONBA_PTR_GET(slaRuleList_, vector<UpdateSLARulesRequestSlaRuleList>) };
    inline UpdateSLARulesRequest& setSlaRuleList(const vector<UpdateSLARulesRequestSlaRuleList> & slaRuleList) { DARABONBA_PTR_SET_VALUE(slaRuleList_, slaRuleList) };
    inline UpdateSLARulesRequest& setSlaRuleList(vector<UpdateSLARulesRequestSlaRuleList> && slaRuleList) { DARABONBA_PTR_SET_RVALUE(slaRuleList_, slaRuleList) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateSLARulesRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the task flow. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to query the task flow ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The list of SLA rules.
    std::shared_ptr<vector<UpdateSLARulesRequestSlaRuleList>> slaRuleList_ = nullptr;
    // The ID of the tenant.
    // 
    // > :To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
