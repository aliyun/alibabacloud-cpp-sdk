// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEEXECUTIONSTATUSDTO_HPP_
#define ALIBABACLOUD_MODELS_NODEEXECUTIONSTATUSDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class NodeExecutionStatusDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeExecutionStatusDTO& obj) { 
      DARABONBA_PTR_TO_JSON(executionId, executionId_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, NodeExecutionStatusDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(executionId, executionId_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    NodeExecutionStatusDTO() = default ;
    NodeExecutionStatusDTO(const NodeExecutionStatusDTO &) = default ;
    NodeExecutionStatusDTO(NodeExecutionStatusDTO &&) = default ;
    NodeExecutionStatusDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeExecutionStatusDTO() = default ;
    NodeExecutionStatusDTO& operator=(const NodeExecutionStatusDTO &) = default ;
    NodeExecutionStatusDTO& operator=(NodeExecutionStatusDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executionId_ == nullptr
        && this->namespace_ == nullptr && this->resourceId_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->workspace_ == nullptr; };
    // executionId Field Functions 
    bool hasExecutionId() const { return this->executionId_ != nullptr;};
    void deleteExecutionId() { this->executionId_ = nullptr;};
    inline string getExecutionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
    inline NodeExecutionStatusDTO& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline NodeExecutionStatusDTO& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline NodeExecutionStatusDTO& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline NodeExecutionStatusDTO& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline NodeExecutionStatusDTO& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline NodeExecutionStatusDTO& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    shared_ptr<string> executionId_ {};
    shared_ptr<string> namespace_ {};
    shared_ptr<string> resourceId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
