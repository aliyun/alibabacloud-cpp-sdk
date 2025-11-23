// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRYRUNTASKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRYRUNTASKFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class TryRunTaskFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TryRunTaskFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
    };
    friend void from_json(const Darabonba::Json& j, TryRunTaskFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
    };
    TryRunTaskFlowRequest() = default ;
    TryRunTaskFlowRequest(const TryRunTaskFlowRequest &) = default ;
    TryRunTaskFlowRequest(TryRunTaskFlowRequest &&) = default ;
    TryRunTaskFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TryRunTaskFlowRequest() = default ;
    TryRunTaskFlowRequest& operator=(const TryRunTaskFlowRequest &) = default ;
    TryRunTaskFlowRequest& operator=(TryRunTaskFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dagId_ == nullptr; };
    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline TryRunTaskFlowRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


  protected:
    // The task flow ID. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to query the ID of the task flow.
    std::shared_ptr<int64_t> dagId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
