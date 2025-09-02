// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDAGTESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDAGTESTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateDagTestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDagTestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeParams, nodeParams_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDagTestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeParams, nodeParams_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
    };
    CreateDagTestRequest() = default ;
    CreateDagTestRequest(const CreateDagTestRequest &) = default ;
    CreateDagTestRequest(CreateDagTestRequest &&) = default ;
    CreateDagTestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDagTestRequest() = default ;
    CreateDagTestRequest& operator=(const CreateDagTestRequest &) = default ;
    CreateDagTestRequest& operator=(CreateDagTestRequest &&) = default ;
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
    inline CreateDagTestRequest& setBizdate(string bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDagTestRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline CreateDagTestRequest& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeParams Field Functions 
    bool hasNodeParams() const { return this->nodeParams_ != nullptr;};
    void deleteNodeParams() { this->nodeParams_ = nullptr;};
    inline string nodeParams() const { DARABONBA_PTR_GET_DEFAULT(nodeParams_, "") };
    inline CreateDagTestRequest& setNodeParams(string nodeParams) { DARABONBA_PTR_SET_VALUE(nodeParams_, nodeParams) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline CreateDagTestRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bizdate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    std::shared_ptr<string> nodeParams_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> projectEnv_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
