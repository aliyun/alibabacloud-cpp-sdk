// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINISHGUIDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FINISHGUIDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class FinishGuidTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FinishGuidTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskTypeName, taskTypeName_);
    };
    friend void from_json(const Darabonba::Json& j, FinishGuidTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskTypeName, taskTypeName_);
    };
    FinishGuidTaskRequest() = default ;
    FinishGuidTaskRequest(const FinishGuidTaskRequest &) = default ;
    FinishGuidTaskRequest(FinishGuidTaskRequest &&) = default ;
    FinishGuidTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FinishGuidTaskRequest() = default ;
    FinishGuidTaskRequest& operator=(const FinishGuidTaskRequest &) = default ;
    FinishGuidTaskRequest& operator=(FinishGuidTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskTypeName_ == nullptr; };
    // taskTypeName Field Functions 
    bool hasTaskTypeName() const { return this->taskTypeName_ != nullptr;};
    void deleteTaskTypeName() { this->taskTypeName_ = nullptr;};
    inline string taskTypeName() const { DARABONBA_PTR_GET_DEFAULT(taskTypeName_, "") };
    inline FinishGuidTaskRequest& setTaskTypeName(string taskTypeName) { DARABONBA_PTR_SET_VALUE(taskTypeName_, taskTypeName) };


  protected:
    // The name of the task type.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskTypeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
