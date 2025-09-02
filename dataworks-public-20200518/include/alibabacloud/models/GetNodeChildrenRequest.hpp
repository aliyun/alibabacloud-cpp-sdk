// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODECHILDRENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNODECHILDRENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetNodeChildrenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeChildrenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeChildrenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
    };
    GetNodeChildrenRequest() = default ;
    GetNodeChildrenRequest(const GetNodeChildrenRequest &) = default ;
    GetNodeChildrenRequest(GetNodeChildrenRequest &&) = default ;
    GetNodeChildrenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeChildrenRequest() = default ;
    GetNodeChildrenRequest& operator=(const GetNodeChildrenRequest &) = default ;
    GetNodeChildrenRequest& operator=(GetNodeChildrenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeId_ != nullptr
        && this->projectEnv_ != nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline GetNodeChildrenRequest& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline GetNodeChildrenRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


  protected:
    // The node ID. You can go to the Operation Center page in the DataWorks console to query the node ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The environment type of Operation Center. Valid values: PROD and DEV. The value PROD indicates the production environment, and the value DEV indicates the development environment.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectEnv_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
