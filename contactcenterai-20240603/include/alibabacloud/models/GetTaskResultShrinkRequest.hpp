// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKRESULTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTASKRESULTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class GetTaskResultShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskResultShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(requiredFieldList, requiredFieldListShrink_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskResultShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(requiredFieldList, requiredFieldListShrink_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    GetTaskResultShrinkRequest() = default ;
    GetTaskResultShrinkRequest(const GetTaskResultShrinkRequest &) = default ;
    GetTaskResultShrinkRequest(GetTaskResultShrinkRequest &&) = default ;
    GetTaskResultShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskResultShrinkRequest() = default ;
    GetTaskResultShrinkRequest& operator=(const GetTaskResultShrinkRequest &) = default ;
    GetTaskResultShrinkRequest& operator=(GetTaskResultShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requiredFieldListShrink_ != nullptr
        && this->taskId_ != nullptr; };
    // requiredFieldListShrink Field Functions 
    bool hasRequiredFieldListShrink() const { return this->requiredFieldListShrink_ != nullptr;};
    void deleteRequiredFieldListShrink() { this->requiredFieldListShrink_ = nullptr;};
    inline string requiredFieldListShrink() const { DARABONBA_PTR_GET_DEFAULT(requiredFieldListShrink_, "") };
    inline GetTaskResultShrinkRequest& setRequiredFieldListShrink(string requiredFieldListShrink) { DARABONBA_PTR_SET_VALUE(requiredFieldListShrink_, requiredFieldListShrink) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetTaskResultShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> requiredFieldListShrink_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
