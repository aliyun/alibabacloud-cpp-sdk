// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEINPUTOROUTPUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEINPUTOROUTPUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListNodeInputOrOutputRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeInputOrOutputRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IoType, ioType_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeInputOrOutputRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IoType, ioType_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
    };
    ListNodeInputOrOutputRequest() = default ;
    ListNodeInputOrOutputRequest(const ListNodeInputOrOutputRequest &) = default ;
    ListNodeInputOrOutputRequest(ListNodeInputOrOutputRequest &&) = default ;
    ListNodeInputOrOutputRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeInputOrOutputRequest() = default ;
    ListNodeInputOrOutputRequest& operator=(const ListNodeInputOrOutputRequest &) = default ;
    ListNodeInputOrOutputRequest& operator=(ListNodeInputOrOutputRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ioType_ != nullptr
        && this->nodeId_ != nullptr && this->projectEnv_ != nullptr; };
    // ioType Field Functions 
    bool hasIoType() const { return this->ioType_ != nullptr;};
    void deleteIoType() { this->ioType_ = nullptr;};
    inline string ioType() const { DARABONBA_PTR_GET_DEFAULT(ioType_, "") };
    inline ListNodeInputOrOutputRequest& setIoType(string ioType) { DARABONBA_PTR_SET_VALUE(ioType_, ioType) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline ListNodeInputOrOutputRequest& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline ListNodeInputOrOutputRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


  protected:
    // The type of node that you want to query. Valid values:
    // 
    // *   input: ancestor node
    // *   output: descendant node
    // 
    // This parameter is required.
    std::shared_ptr<string> ioType_ = nullptr;
    // The node ID. You can call the [ListNodes](https://help.aliyun.com/document_detail/173979.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The environment of the workspace. Valid values: DEV and PROD.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectEnv_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
