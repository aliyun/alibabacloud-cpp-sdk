// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTICKETTEMPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTICKETTEMPLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTicketTemplateResponseBodyDataTicketFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetTicketTemplateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTicketTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Editor, editor_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProcessDefinition, processDefinition_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TicketFields, ticketFields_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetTicketTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Editor, editor_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProcessDefinition, processDefinition_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TicketFields, ticketFields_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
    };
    GetTicketTemplateResponseBodyData() = default ;
    GetTicketTemplateResponseBodyData(const GetTicketTemplateResponseBodyData &) = default ;
    GetTicketTemplateResponseBodyData(GetTicketTemplateResponseBodyData &&) = default ;
    GetTicketTemplateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTicketTemplateResponseBodyData() = default ;
    GetTicketTemplateResponseBodyData& operator=(const GetTicketTemplateResponseBodyData &) = default ;
    GetTicketTemplateResponseBodyData& operator=(GetTicketTemplateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && return this->editor_ == nullptr && return this->instanceId_ == nullptr && return this->name_ == nullptr && return this->processDefinition_ == nullptr && return this->state_ == nullptr
        && return this->templateId_ == nullptr && return this->ticketFields_ == nullptr && return this->updatedTime_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline GetTicketTemplateResponseBodyData& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // editor Field Functions 
    bool hasEditor() const { return this->editor_ != nullptr;};
    void deleteEditor() { this->editor_ = nullptr;};
    inline string editor() const { DARABONBA_PTR_GET_DEFAULT(editor_, "") };
    inline GetTicketTemplateResponseBodyData& setEditor(string editor) { DARABONBA_PTR_SET_VALUE(editor_, editor) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetTicketTemplateResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTicketTemplateResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // processDefinition Field Functions 
    bool hasProcessDefinition() const { return this->processDefinition_ != nullptr;};
    void deleteProcessDefinition() { this->processDefinition_ = nullptr;};
    inline string processDefinition() const { DARABONBA_PTR_GET_DEFAULT(processDefinition_, "") };
    inline GetTicketTemplateResponseBodyData& setProcessDefinition(string processDefinition) { DARABONBA_PTR_SET_VALUE(processDefinition_, processDefinition) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetTicketTemplateResponseBodyData& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetTicketTemplateResponseBodyData& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // ticketFields Field Functions 
    bool hasTicketFields() const { return this->ticketFields_ != nullptr;};
    void deleteTicketFields() { this->ticketFields_ = nullptr;};
    inline const vector<Models::GetTicketTemplateResponseBodyDataTicketFields> & ticketFields() const { DARABONBA_PTR_GET_CONST(ticketFields_, vector<Models::GetTicketTemplateResponseBodyDataTicketFields>) };
    inline vector<Models::GetTicketTemplateResponseBodyDataTicketFields> ticketFields() { DARABONBA_PTR_GET(ticketFields_, vector<Models::GetTicketTemplateResponseBodyDataTicketFields>) };
    inline GetTicketTemplateResponseBodyData& setTicketFields(const vector<Models::GetTicketTemplateResponseBodyDataTicketFields> & ticketFields) { DARABONBA_PTR_SET_VALUE(ticketFields_, ticketFields) };
    inline GetTicketTemplateResponseBodyData& setTicketFields(vector<Models::GetTicketTemplateResponseBodyDataTicketFields> && ticketFields) { DARABONBA_PTR_SET_RVALUE(ticketFields_, ticketFields) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline GetTicketTemplateResponseBodyData& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


  protected:
    std::shared_ptr<string> categoryId_ = nullptr;
    std::shared_ptr<string> editor_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> processDefinition_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<vector<Models::GetTicketTemplateResponseBodyDataTicketFields>> ticketFields_ = nullptr;
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
