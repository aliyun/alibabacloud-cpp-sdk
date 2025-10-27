// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTENANTCHECKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTENANTCHECKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SubmitTenantCheckResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTenantCheckResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTenantCheckResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    SubmitTenantCheckResponseBodyData() = default ;
    SubmitTenantCheckResponseBodyData(const SubmitTenantCheckResponseBodyData &) = default ;
    SubmitTenantCheckResponseBodyData(SubmitTenantCheckResponseBodyData &&) = default ;
    SubmitTenantCheckResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTenantCheckResponseBodyData() = default ;
    SubmitTenantCheckResponseBodyData& operator=(const SubmitTenantCheckResponseBodyData &) = default ;
    SubmitTenantCheckResponseBodyData& operator=(SubmitTenantCheckResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SubmitTenantCheckResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the scan task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
