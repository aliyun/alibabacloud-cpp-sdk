// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIAGENTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIAGENTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DescribeAIAgentInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIAgentInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIAgentInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DescribeAIAgentInstanceRequest() = default ;
    DescribeAIAgentInstanceRequest(const DescribeAIAgentInstanceRequest &) = default ;
    DescribeAIAgentInstanceRequest(DescribeAIAgentInstanceRequest &&) = default ;
    DescribeAIAgentInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIAgentInstanceRequest() = default ;
    DescribeAIAgentInstanceRequest& operator=(const DescribeAIAgentInstanceRequest &) = default ;
    DescribeAIAgentInstanceRequest& operator=(DescribeAIAgentInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeAIAgentInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The ID of the AI agent that you want to query.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
