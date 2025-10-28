// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELATESTDEADLOCKANALYSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELATESTDEADLOCKANALYSISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class CreateLatestDeadLockAnalysisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLatestDeadLockAnalysisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLatestDeadLockAnalysisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    CreateLatestDeadLockAnalysisRequest() = default ;
    CreateLatestDeadLockAnalysisRequest(const CreateLatestDeadLockAnalysisRequest &) = default ;
    CreateLatestDeadLockAnalysisRequest(CreateLatestDeadLockAnalysisRequest &&) = default ;
    CreateLatestDeadLockAnalysisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLatestDeadLockAnalysisRequest() = default ;
    CreateLatestDeadLockAnalysisRequest& operator=(const CreateLatestDeadLockAnalysisRequest &) = default ;
    CreateLatestDeadLockAnalysisRequest& operator=(CreateLatestDeadLockAnalysisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->nodeId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateLatestDeadLockAnalysisRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateLatestDeadLockAnalysisRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
