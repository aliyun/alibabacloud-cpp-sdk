// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEADHOCWORKFLOWINSTANCEREQUESTTASKSSCRIPT_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEADHOCWORKFLOWINSTANCEREQUESTTASKSSCRIPT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ExecuteAdhocWorkflowInstanceRequestTasksScript : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAdhocWorkflowInstanceRequestTasksScript& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAdhocWorkflowInstanceRequestTasksScript& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
    };
    ExecuteAdhocWorkflowInstanceRequestTasksScript() = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksScript(const ExecuteAdhocWorkflowInstanceRequestTasksScript &) = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksScript(ExecuteAdhocWorkflowInstanceRequestTasksScript &&) = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksScript(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAdhocWorkflowInstanceRequestTasksScript() = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksScript& operator=(const ExecuteAdhocWorkflowInstanceRequestTasksScript &) = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksScript& operator=(ExecuteAdhocWorkflowInstanceRequestTasksScript &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->parameters_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ExecuteAdhocWorkflowInstanceRequestTasksScript& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ExecuteAdhocWorkflowInstanceRequestTasksScript& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


  protected:
    // The script content.
    std::shared_ptr<string> content_ = nullptr;
    // The script parameters.
    std::shared_ptr<string> parameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
