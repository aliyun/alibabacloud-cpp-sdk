// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPKNOWLEDGEBASEBUILDTASKINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPKNOWLEDGEBASEBUILDTASKINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class StopKnowledgeBaseBuildTaskInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopKnowledgeBaseBuildTaskInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(TaskInstanceId, taskInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, StopKnowledgeBaseBuildTaskInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(TaskInstanceId, taskInstanceId_);
    };
    StopKnowledgeBaseBuildTaskInstanceRequest() = default ;
    StopKnowledgeBaseBuildTaskInstanceRequest(const StopKnowledgeBaseBuildTaskInstanceRequest &) = default ;
    StopKnowledgeBaseBuildTaskInstanceRequest(StopKnowledgeBaseBuildTaskInstanceRequest &&) = default ;
    StopKnowledgeBaseBuildTaskInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopKnowledgeBaseBuildTaskInstanceRequest() = default ;
    StopKnowledgeBaseBuildTaskInstanceRequest& operator=(const StopKnowledgeBaseBuildTaskInstanceRequest &) = default ;
    StopKnowledgeBaseBuildTaskInstanceRequest& operator=(StopKnowledgeBaseBuildTaskInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->knowledgeBaseId_ == nullptr
        && this->taskInstanceId_ == nullptr; };
    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline StopKnowledgeBaseBuildTaskInstanceRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // taskInstanceId Field Functions 
    bool hasTaskInstanceId() const { return this->taskInstanceId_ != nullptr;};
    void deleteTaskInstanceId() { this->taskInstanceId_ = nullptr;};
    inline string getTaskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(taskInstanceId_, "") };
    inline StopKnowledgeBaseBuildTaskInstanceRequest& setTaskInstanceId(string taskInstanceId) { DARABONBA_PTR_SET_VALUE(taskInstanceId_, taskInstanceId) };


  protected:
    // The knowledge base.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // The execution ID.
    // 
    // This parameter is required.
    shared_ptr<string> taskInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
