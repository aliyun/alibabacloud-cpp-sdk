// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REDEPLOYLHDAGVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REDEPLOYLHDAGVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ReDeployLhDagVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReDeployLhDagVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(DagVersion, dagVersion_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ReDeployLhDagVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(DagVersion, dagVersion_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ReDeployLhDagVersionRequest() = default ;
    ReDeployLhDagVersionRequest(const ReDeployLhDagVersionRequest &) = default ;
    ReDeployLhDagVersionRequest(ReDeployLhDagVersionRequest &&) = default ;
    ReDeployLhDagVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReDeployLhDagVersionRequest() = default ;
    ReDeployLhDagVersionRequest& operator=(const ReDeployLhDagVersionRequest &) = default ;
    ReDeployLhDagVersionRequest& operator=(ReDeployLhDagVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dagId_ == nullptr
        && this->dagVersion_ == nullptr && this->tid_ == nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t getDagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline ReDeployLhDagVersionRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // dagVersion Field Functions 
    bool hasDagVersion() const { return this->dagVersion_ != nullptr;};
    void deleteDagVersion() { this->dagVersion_ = nullptr;};
    inline int64_t getDagVersion() const { DARABONBA_PTR_GET_DEFAULT(dagVersion_, 0L) };
    inline ReDeployLhDagVersionRequest& setDagVersion(int64_t dagVersion) { DARABONBA_PTR_SET_VALUE(dagVersion_, dagVersion) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ReDeployLhDagVersionRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the task flow. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to obtain the ID of the task flow.
    // 
    // This parameter is required.
    shared_ptr<int64_t> dagId_ {};
    // The ID of the task flow version. You can call the [ListDAGVersions](https://help.aliyun.com/document_detail/424682.html) operation to obtain the ID of the task flow version.
    shared_ptr<int64_t> dagVersion_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the ID of the tenant.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
