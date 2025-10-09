// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWDEFINITIONSRESPONSEBODYPAGINGINFOWORKFLOWDEFINITIONSSCRIPTRUNTIME_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWDEFINITIONSRESPONSEBODYPAGINGINFOWORKFLOWDEFINITIONSSCRIPTRUNTIME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime& obj) { 
      DARABONBA_PTR_TO_JSON(Command, command_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime& obj) { 
      DARABONBA_PTR_FROM_JSON(Command, command_);
    };
    ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime() = default ;
    ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime(const ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime &) = default ;
    ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime(ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime &&) = default ;
    ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime() = default ;
    ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime& operator=(const ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime &) = default ;
    ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime& operator=(ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->command_ != nullptr; };
    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


  protected:
    // The command.
    std::shared_ptr<string> command_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
