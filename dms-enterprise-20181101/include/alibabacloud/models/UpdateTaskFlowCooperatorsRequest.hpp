// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKFLOWCOOPERATORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKFLOWCOOPERATORSREQUEST_HPP_
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
  class UpdateTaskFlowCooperatorsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskFlowCooperatorsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CooperatorIds, cooperatorIds_);
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskFlowCooperatorsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CooperatorIds, cooperatorIds_);
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    UpdateTaskFlowCooperatorsRequest() = default ;
    UpdateTaskFlowCooperatorsRequest(const UpdateTaskFlowCooperatorsRequest &) = default ;
    UpdateTaskFlowCooperatorsRequest(UpdateTaskFlowCooperatorsRequest &&) = default ;
    UpdateTaskFlowCooperatorsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskFlowCooperatorsRequest() = default ;
    UpdateTaskFlowCooperatorsRequest& operator=(const UpdateTaskFlowCooperatorsRequest &) = default ;
    UpdateTaskFlowCooperatorsRequest& operator=(UpdateTaskFlowCooperatorsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cooperatorIds_ == nullptr
        && return this->dagId_ == nullptr && return this->tid_ == nullptr; };
    // cooperatorIds Field Functions 
    bool hasCooperatorIds() const { return this->cooperatorIds_ != nullptr;};
    void deleteCooperatorIds() { this->cooperatorIds_ = nullptr;};
    inline const vector<string> & cooperatorIds() const { DARABONBA_PTR_GET_CONST(cooperatorIds_, vector<string>) };
    inline vector<string> cooperatorIds() { DARABONBA_PTR_GET(cooperatorIds_, vector<string>) };
    inline UpdateTaskFlowCooperatorsRequest& setCooperatorIds(const vector<string> & cooperatorIds) { DARABONBA_PTR_SET_VALUE(cooperatorIds_, cooperatorIds) };
    inline UpdateTaskFlowCooperatorsRequest& setCooperatorIds(vector<string> && cooperatorIds) { DARABONBA_PTR_SET_RVALUE(cooperatorIds_, cooperatorIds) };


    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline UpdateTaskFlowCooperatorsRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateTaskFlowCooperatorsRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The IDs of the users who are involved in the task flow to be updated.
    std::shared_ptr<vector<string>> cooperatorIds_ = nullptr;
    // The ID of the task flow. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to query the task flow ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The ID of the tenant.
    // 
    // > :To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
