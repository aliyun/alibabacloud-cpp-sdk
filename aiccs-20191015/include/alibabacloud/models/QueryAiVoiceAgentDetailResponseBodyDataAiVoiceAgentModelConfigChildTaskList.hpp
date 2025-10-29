// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATAAIVOICEAGENTMODELCONFIGCHILDTASKLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATAAIVOICEAGENTMODELCONFIGCHILDTASKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList& obj) { 
      DARABONBA_PTR_TO_JSON(ChildTaskDescription, childTaskDescription_);
      DARABONBA_PTR_TO_JSON(ChildTaskName, childTaskName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList& obj) { 
      DARABONBA_PTR_FROM_JSON(ChildTaskDescription, childTaskDescription_);
      DARABONBA_PTR_FROM_JSON(ChildTaskName, childTaskName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList() = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList(const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList &) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList(QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList &&) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList() = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList& operator=(const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList &) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList& operator=(QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->childTaskDescription_ == nullptr
        && return this->childTaskName_ == nullptr && return this->id_ == nullptr; };
    // childTaskDescription Field Functions 
    bool hasChildTaskDescription() const { return this->childTaskDescription_ != nullptr;};
    void deleteChildTaskDescription() { this->childTaskDescription_ = nullptr;};
    inline string childTaskDescription() const { DARABONBA_PTR_GET_DEFAULT(childTaskDescription_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList& setChildTaskDescription(string childTaskDescription) { DARABONBA_PTR_SET_VALUE(childTaskDescription_, childTaskDescription) };


    // childTaskName Field Functions 
    bool hasChildTaskName() const { return this->childTaskName_ != nullptr;};
    void deleteChildTaskName() { this->childTaskName_ = nullptr;};
    inline string childTaskName() const { DARABONBA_PTR_GET_DEFAULT(childTaskName_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList& setChildTaskName(string childTaskName) { DARABONBA_PTR_SET_VALUE(childTaskName_, childTaskName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigChildTaskList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<string> childTaskDescription_ = nullptr;
    std::shared_ptr<string> childTaskName_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
