// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIAGENTINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIAGENTINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAIAgentInstanceResponseBodyInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DescribeAIAgentInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIAgentInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIAgentInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAIAgentInstanceResponseBody() = default ;
    DescribeAIAgentInstanceResponseBody(const DescribeAIAgentInstanceResponseBody &) = default ;
    DescribeAIAgentInstanceResponseBody(DescribeAIAgentInstanceResponseBody &&) = default ;
    DescribeAIAgentInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIAgentInstanceResponseBody() = default ;
    DescribeAIAgentInstanceResponseBody& operator=(const DescribeAIAgentInstanceResponseBody &) = default ;
    DescribeAIAgentInstanceResponseBody& operator=(DescribeAIAgentInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instance_ == nullptr
        && return this->requestId_ == nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const DescribeAIAgentInstanceResponseBodyInstance & instance() const { DARABONBA_PTR_GET_CONST(instance_, DescribeAIAgentInstanceResponseBodyInstance) };
    inline DescribeAIAgentInstanceResponseBodyInstance instance() { DARABONBA_PTR_GET(instance_, DescribeAIAgentInstanceResponseBodyInstance) };
    inline DescribeAIAgentInstanceResponseBody& setInstance(const DescribeAIAgentInstanceResponseBodyInstance & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline DescribeAIAgentInstanceResponseBody& setInstance(DescribeAIAgentInstanceResponseBodyInstance && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAIAgentInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the AI agent.
    std::shared_ptr<DescribeAIAgentInstanceResponseBodyInstance> instance_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
