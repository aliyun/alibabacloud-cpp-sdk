// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERNODEPOOLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterNodePoolResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterNodePoolResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nodepool_id, nodepoolId_);
      DARABONBA_PTR_TO_JSON(request_id, requestId_);
      DARABONBA_PTR_TO_JSON(task_id, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterNodePoolResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nodepool_id, nodepoolId_);
      DARABONBA_PTR_FROM_JSON(request_id, requestId_);
      DARABONBA_PTR_FROM_JSON(task_id, taskId_);
    };
    ModifyClusterNodePoolResponseBody() = default ;
    ModifyClusterNodePoolResponseBody(const ModifyClusterNodePoolResponseBody &) = default ;
    ModifyClusterNodePoolResponseBody(ModifyClusterNodePoolResponseBody &&) = default ;
    ModifyClusterNodePoolResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterNodePoolResponseBody() = default ;
    ModifyClusterNodePoolResponseBody& operator=(const ModifyClusterNodePoolResponseBody &) = default ;
    ModifyClusterNodePoolResponseBody& operator=(ModifyClusterNodePoolResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodepoolId_ != nullptr
        && this->requestId_ != nullptr && this->taskId_ != nullptr; };
    // nodepoolId Field Functions 
    bool hasNodepoolId() const { return this->nodepoolId_ != nullptr;};
    void deleteNodepoolId() { this->nodepoolId_ = nullptr;};
    inline string nodepoolId() const { DARABONBA_PTR_GET_DEFAULT(nodepoolId_, "") };
    inline ModifyClusterNodePoolResponseBody& setNodepoolId(string nodepoolId) { DARABONBA_PTR_SET_VALUE(nodepoolId_, nodepoolId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyClusterNodePoolResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ModifyClusterNodePoolResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The node pool ID.
    std::shared_ptr<string> nodepoolId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
