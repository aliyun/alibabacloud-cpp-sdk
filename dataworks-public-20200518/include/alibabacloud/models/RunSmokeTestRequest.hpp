// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSMOKETESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSMOKETESTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class RunSmokeTestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSmokeTestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeParams, nodeParams_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
    };
    friend void from_json(const Darabonba::Json& j, RunSmokeTestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeParams, nodeParams_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
    };
    RunSmokeTestRequest() = default ;
    RunSmokeTestRequest(const RunSmokeTestRequest &) = default ;
    RunSmokeTestRequest(RunSmokeTestRequest &&) = default ;
    RunSmokeTestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSmokeTestRequest() = default ;
    RunSmokeTestRequest& operator=(const RunSmokeTestRequest &) = default ;
    RunSmokeTestRequest& operator=(RunSmokeTestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizdate_ != nullptr
        && this->name_ != nullptr && this->nodeId_ != nullptr && this->nodeParams_ != nullptr && this->projectEnv_ != nullptr; };
    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline string bizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, "") };
    inline RunSmokeTestRequest& setBizdate(string bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RunSmokeTestRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline RunSmokeTestRequest& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeParams Field Functions 
    bool hasNodeParams() const { return this->nodeParams_ != nullptr;};
    void deleteNodeParams() { this->nodeParams_ = nullptr;};
    inline string nodeParams() const { DARABONBA_PTR_GET_DEFAULT(nodeParams_, "") };
    inline RunSmokeTestRequest& setNodeParams(string nodeParams) { DARABONBA_PTR_SET_VALUE(nodeParams_, nodeParams) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline RunSmokeTestRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


  protected:
    // The data timestamp.
    // 
    // This parameter is required.
    std::shared_ptr<string> bizdate_ = nullptr;
    // The name of the workflow.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The node ID. You can call the [ListNodes](https://help.aliyun.com/document_detail/173979.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The parameters related to the node. Set this parameter to a JSON string. A key in the string indicates a parameter, and a value in the string indicates the value of the related parameter.
    std::shared_ptr<string> nodeParams_ = nullptr;
    // The environment of the workspace. Valid values: PROD and DEV. The value PROD indicates the production environment, and the value DEV indicates the development environment. A workspace in basic mode does not have a development environment. For more information, see [Differences between workspaces in basic mode and workspaces in standard mode](https://help.aliyun.com/document_detail/85772.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectEnv_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
