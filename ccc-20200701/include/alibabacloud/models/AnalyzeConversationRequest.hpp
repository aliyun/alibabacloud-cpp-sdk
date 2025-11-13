// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZECONVERSATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ANALYZECONVERSATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class AnalyzeConversationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeConversationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(FieldListJson, fieldListJson_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TaskListJson, taskListJson_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeConversationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(FieldListJson, fieldListJson_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TaskListJson, taskListJson_);
    };
    AnalyzeConversationRequest() = default ;
    AnalyzeConversationRequest(const AnalyzeConversationRequest &) = default ;
    AnalyzeConversationRequest(AnalyzeConversationRequest &&) = default ;
    AnalyzeConversationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeConversationRequest() = default ;
    AnalyzeConversationRequest& operator=(const AnalyzeConversationRequest &) = default ;
    AnalyzeConversationRequest& operator=(AnalyzeConversationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactId_ == nullptr
        && return this->fieldListJson_ == nullptr && return this->instanceId_ == nullptr && return this->taskListJson_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline AnalyzeConversationRequest& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // fieldListJson Field Functions 
    bool hasFieldListJson() const { return this->fieldListJson_ != nullptr;};
    void deleteFieldListJson() { this->fieldListJson_ = nullptr;};
    inline string fieldListJson() const { DARABONBA_PTR_GET_DEFAULT(fieldListJson_, "") };
    inline AnalyzeConversationRequest& setFieldListJson(string fieldListJson) { DARABONBA_PTR_SET_VALUE(fieldListJson_, fieldListJson) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AnalyzeConversationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // taskListJson Field Functions 
    bool hasTaskListJson() const { return this->taskListJson_ != nullptr;};
    void deleteTaskListJson() { this->taskListJson_ = nullptr;};
    inline string taskListJson() const { DARABONBA_PTR_GET_DEFAULT(taskListJson_, "") };
    inline AnalyzeConversationRequest& setTaskListJson(string taskListJson) { DARABONBA_PTR_SET_VALUE(taskListJson_, taskListJson) };


  protected:
    std::shared_ptr<string> contactId_ = nullptr;
    std::shared_ptr<string> fieldListJson_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> taskListJson_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
