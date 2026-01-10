// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESLARULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESLARULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateSLARulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSLARulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(SlaRuleList, slaRuleListShrink_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSLARulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(SlaRuleList, slaRuleListShrink_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    UpdateSLARulesShrinkRequest() = default ;
    UpdateSLARulesShrinkRequest(const UpdateSLARulesShrinkRequest &) = default ;
    UpdateSLARulesShrinkRequest(UpdateSLARulesShrinkRequest &&) = default ;
    UpdateSLARulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSLARulesShrinkRequest() = default ;
    UpdateSLARulesShrinkRequest& operator=(const UpdateSLARulesShrinkRequest &) = default ;
    UpdateSLARulesShrinkRequest& operator=(UpdateSLARulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dagId_ == nullptr
        && this->slaRuleListShrink_ == nullptr && this->tid_ == nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t getDagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline UpdateSLARulesShrinkRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // slaRuleListShrink Field Functions 
    bool hasSlaRuleListShrink() const { return this->slaRuleListShrink_ != nullptr;};
    void deleteSlaRuleListShrink() { this->slaRuleListShrink_ = nullptr;};
    inline string getSlaRuleListShrink() const { DARABONBA_PTR_GET_DEFAULT(slaRuleListShrink_, "") };
    inline UpdateSLARulesShrinkRequest& setSlaRuleListShrink(string slaRuleListShrink) { DARABONBA_PTR_SET_VALUE(slaRuleListShrink_, slaRuleListShrink) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateSLARulesShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the task flow. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to query the task flow ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> dagId_ {};
    // The list of SLA rules.
    shared_ptr<string> slaRuleListShrink_ {};
    // The ID of the tenant.
    // 
    // > :To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
