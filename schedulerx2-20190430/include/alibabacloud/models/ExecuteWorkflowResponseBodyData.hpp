// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEWORKFLOWRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEWORKFLOWRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ExecuteWorkflowResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteWorkflowResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(WfInstanceId, wfInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteWorkflowResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(WfInstanceId, wfInstanceId_);
    };
    ExecuteWorkflowResponseBodyData() = default ;
    ExecuteWorkflowResponseBodyData(const ExecuteWorkflowResponseBodyData &) = default ;
    ExecuteWorkflowResponseBodyData(ExecuteWorkflowResponseBodyData &&) = default ;
    ExecuteWorkflowResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteWorkflowResponseBodyData() = default ;
    ExecuteWorkflowResponseBodyData& operator=(const ExecuteWorkflowResponseBodyData &) = default ;
    ExecuteWorkflowResponseBodyData& operator=(ExecuteWorkflowResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->wfInstanceId_ == nullptr; };
    // wfInstanceId Field Functions 
    bool hasWfInstanceId() const { return this->wfInstanceId_ != nullptr;};
    void deleteWfInstanceId() { this->wfInstanceId_ = nullptr;};
    inline int64_t wfInstanceId() const { DARABONBA_PTR_GET_DEFAULT(wfInstanceId_, 0L) };
    inline ExecuteWorkflowResponseBodyData& setWfInstanceId(int64_t wfInstanceId) { DARABONBA_PTR_SET_VALUE(wfInstanceId_, wfInstanceId) };


  protected:
    // The workflow instance ID.
    std::shared_ptr<int64_t> wfInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
