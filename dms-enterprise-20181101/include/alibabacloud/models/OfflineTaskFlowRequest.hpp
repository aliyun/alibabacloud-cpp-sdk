// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OFFLINETASKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OFFLINETASKFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class OfflineTaskFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OfflineTaskFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, OfflineTaskFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    OfflineTaskFlowRequest() = default ;
    OfflineTaskFlowRequest(const OfflineTaskFlowRequest &) = default ;
    OfflineTaskFlowRequest(OfflineTaskFlowRequest &&) = default ;
    OfflineTaskFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OfflineTaskFlowRequest() = default ;
    OfflineTaskFlowRequest& operator=(const OfflineTaskFlowRequest &) = default ;
    OfflineTaskFlowRequest& operator=(OfflineTaskFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dagId_ != nullptr
        && this->tid_ != nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline OfflineTaskFlowRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline OfflineTaskFlowRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the task flow. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to obtain the task flow ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to obtain the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
