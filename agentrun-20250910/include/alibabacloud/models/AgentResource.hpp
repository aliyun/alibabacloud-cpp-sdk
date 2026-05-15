// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_AGENTRESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Flow.hpp>
#include <alibabacloud/models/AgentRuntime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class AgentResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgentResource& obj) { 
      DARABONBA_PTR_TO_JSON(flow, flow_);
      DARABONBA_PTR_TO_JSON(latestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(runtime, runtime_);
    };
    friend void from_json(const Darabonba::Json& j, AgentResource& obj) { 
      DARABONBA_PTR_FROM_JSON(flow, flow_);
      DARABONBA_PTR_FROM_JSON(latestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(runtime, runtime_);
    };
    AgentResource() = default ;
    AgentResource(const AgentResource &) = default ;
    AgentResource(AgentResource &&) = default ;
    AgentResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgentResource() = default ;
    AgentResource& operator=(const AgentResource &) = default ;
    AgentResource& operator=(AgentResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LatestVersion : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LatestVersion& obj) { 
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(publisher, publisher_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, LatestVersion& obj) { 
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(publisher, publisher_);
        DARABONBA_PTR_FROM_JSON(version, version_);
      };
      LatestVersion() = default ;
      LatestVersion(const LatestVersion &) = default ;
      LatestVersion(LatestVersion &&) = default ;
      LatestVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LatestVersion() = default ;
      LatestVersion& operator=(const LatestVersion &) = default ;
      LatestVersion& operator=(LatestVersion &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->description_ == nullptr && this->publisher_ == nullptr && this->version_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline LatestVersion& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline LatestVersion& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // publisher Field Functions 
      bool hasPublisher() const { return this->publisher_ != nullptr;};
      void deletePublisher() { this->publisher_ = nullptr;};
      inline string getPublisher() const { DARABONBA_PTR_GET_DEFAULT(publisher_, "") };
      inline LatestVersion& setPublisher(string publisher) { DARABONBA_PTR_SET_VALUE(publisher_, publisher) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline LatestVersion& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // 版本发布时间，采用ISO 8601格式
      shared_ptr<string> createdAt_ {};
      // 该版本的描述信息
      shared_ptr<string> description_ {};
      // 版本发布者（仅 AgentRuntime 类型资源返回）
      shared_ptr<string> publisher_ {};
      // 最新发布的版本号
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->flow_ == nullptr
        && this->latestVersion_ == nullptr && this->resourceType_ == nullptr && this->runtime_ == nullptr; };
    // flow Field Functions 
    bool hasFlow() const { return this->flow_ != nullptr;};
    void deleteFlow() { this->flow_ = nullptr;};
    inline const Flow & getFlow() const { DARABONBA_PTR_GET_CONST(flow_, Flow) };
    inline Flow getFlow() { DARABONBA_PTR_GET(flow_, Flow) };
    inline AgentResource& setFlow(const Flow & flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };
    inline AgentResource& setFlow(Flow && flow) { DARABONBA_PTR_SET_RVALUE(flow_, flow) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline const AgentResource::LatestVersion & getLatestVersion() const { DARABONBA_PTR_GET_CONST(latestVersion_, AgentResource::LatestVersion) };
    inline AgentResource::LatestVersion getLatestVersion() { DARABONBA_PTR_GET(latestVersion_, AgentResource::LatestVersion) };
    inline AgentResource& setLatestVersion(const AgentResource::LatestVersion & latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };
    inline AgentResource& setLatestVersion(AgentResource::LatestVersion && latestVersion) { DARABONBA_PTR_SET_RVALUE(latestVersion_, latestVersion) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline AgentResource& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const AgentRuntime & getRuntime() const { DARABONBA_PTR_GET_CONST(runtime_, AgentRuntime) };
    inline AgentRuntime getRuntime() { DARABONBA_PTR_GET(runtime_, AgentRuntime) };
    inline AgentResource& setRuntime(const AgentRuntime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline AgentResource& setRuntime(AgentRuntime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


  protected:
    // 当 resourceType 为 Flow 时，此字段包含完整的工作流对象，包括所有配置和状态信息；当 resourceType 为 AgentRuntime 时，此字段为空
    shared_ptr<Flow> flow_ {};
    // 资源的最新发布版本摘要，包含版本号、描述和创建时间。如果资源没有已发布版本，则此字段为空
    shared_ptr<AgentResource::LatestVersion> latestVersion_ {};
    // 资源类型标识符，用于区分资源是智能体运行时（AgentRuntime）还是工作流（Flow）
    shared_ptr<string> resourceType_ {};
    // 当 resourceType 为 AgentRuntime 时，此字段包含完整的智能体运行时对象，包括所有配置和状态信息；当 resourceType 为 Flow 时，此字段为空
    shared_ptr<AgentRuntime> runtime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
