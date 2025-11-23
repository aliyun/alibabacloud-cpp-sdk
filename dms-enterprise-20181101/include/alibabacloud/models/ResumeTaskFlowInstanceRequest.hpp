// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESUMETASKFLOWINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESUMETASKFLOWINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ResumeTaskFlowInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResumeTaskFlowInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(DagInstanceId, dagInstanceId_);
      DARABONBA_PTR_TO_JSON(DagVersion, dagVersion_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ResumeTaskFlowInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(DagInstanceId, dagInstanceId_);
      DARABONBA_PTR_FROM_JSON(DagVersion, dagVersion_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ResumeTaskFlowInstanceRequest() = default ;
    ResumeTaskFlowInstanceRequest(const ResumeTaskFlowInstanceRequest &) = default ;
    ResumeTaskFlowInstanceRequest(ResumeTaskFlowInstanceRequest &&) = default ;
    ResumeTaskFlowInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResumeTaskFlowInstanceRequest() = default ;
    ResumeTaskFlowInstanceRequest& operator=(const ResumeTaskFlowInstanceRequest &) = default ;
    ResumeTaskFlowInstanceRequest& operator=(ResumeTaskFlowInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dagId_ == nullptr
        && return this->dagInstanceId_ == nullptr && return this->dagVersion_ == nullptr && return this->tid_ == nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline ResumeTaskFlowInstanceRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // dagInstanceId Field Functions 
    bool hasDagInstanceId() const { return this->dagInstanceId_ != nullptr;};
    void deleteDagInstanceId() { this->dagInstanceId_ = nullptr;};
    inline int64_t dagInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dagInstanceId_, 0L) };
    inline ResumeTaskFlowInstanceRequest& setDagInstanceId(int64_t dagInstanceId) { DARABONBA_PTR_SET_VALUE(dagInstanceId_, dagInstanceId) };


    // dagVersion Field Functions 
    bool hasDagVersion() const { return this->dagVersion_ != nullptr;};
    void deleteDagVersion() { this->dagVersion_ = nullptr;};
    inline string dagVersion() const { DARABONBA_PTR_GET_DEFAULT(dagVersion_, "") };
    inline ResumeTaskFlowInstanceRequest& setDagVersion(string dagVersion) { DARABONBA_PTR_SET_VALUE(dagVersion_, dagVersion) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ResumeTaskFlowInstanceRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the task flow. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to query the task flow ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The ID of the execution record of the task flow. You can call the [ListTaskFlowInstance](https://help.aliyun.com/document_detail/424689.html) operation to query the execution record ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dagInstanceId_ = nullptr;
    // The version number of the task flow. You can call the [ListDAGVersions](https://help.aliyun.com/document_detail/424682.html) operation to query the version number.
    std::shared_ptr<string> dagVersion_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to query the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
