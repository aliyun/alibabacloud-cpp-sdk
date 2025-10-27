// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNETWORKRESPONSEBODYCLUSTERNETWORKEDGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNETWORKRESPONSEBODYCLUSTERNETWORKEDGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterNetworkResponseBodyClusterNetworkEdge : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNetworkResponseBodyClusterNetworkEdge& obj) { 
      DARABONBA_PTR_TO_JSON(DstNodeId, dstNodeId_);
      DARABONBA_PTR_TO_JSON(DstNodeType, dstNodeType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(SrcNodeId, srcNodeId_);
      DARABONBA_PTR_TO_JSON(SrcNodeType, srcNodeType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNetworkResponseBodyClusterNetworkEdge& obj) { 
      DARABONBA_PTR_FROM_JSON(DstNodeId, dstNodeId_);
      DARABONBA_PTR_FROM_JSON(DstNodeType, dstNodeType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(SrcNodeId, srcNodeId_);
      DARABONBA_PTR_FROM_JSON(SrcNodeType, srcNodeType_);
    };
    DescribeClusterNetworkResponseBodyClusterNetworkEdge() = default ;
    DescribeClusterNetworkResponseBodyClusterNetworkEdge(const DescribeClusterNetworkResponseBodyClusterNetworkEdge &) = default ;
    DescribeClusterNetworkResponseBodyClusterNetworkEdge(DescribeClusterNetworkResponseBodyClusterNetworkEdge &&) = default ;
    DescribeClusterNetworkResponseBodyClusterNetworkEdge(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNetworkResponseBodyClusterNetworkEdge() = default ;
    DescribeClusterNetworkResponseBodyClusterNetworkEdge& operator=(const DescribeClusterNetworkResponseBodyClusterNetworkEdge &) = default ;
    DescribeClusterNetworkResponseBodyClusterNetworkEdge& operator=(DescribeClusterNetworkResponseBodyClusterNetworkEdge &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dstNodeId_ == nullptr
        && return this->dstNodeType_ == nullptr && return this->id_ == nullptr && return this->port_ == nullptr && return this->srcNodeId_ == nullptr && return this->srcNodeType_ == nullptr; };
    // dstNodeId Field Functions 
    bool hasDstNodeId() const { return this->dstNodeId_ != nullptr;};
    void deleteDstNodeId() { this->dstNodeId_ = nullptr;};
    inline string dstNodeId() const { DARABONBA_PTR_GET_DEFAULT(dstNodeId_, "") };
    inline DescribeClusterNetworkResponseBodyClusterNetworkEdge& setDstNodeId(string dstNodeId) { DARABONBA_PTR_SET_VALUE(dstNodeId_, dstNodeId) };


    // dstNodeType Field Functions 
    bool hasDstNodeType() const { return this->dstNodeType_ != nullptr;};
    void deleteDstNodeType() { this->dstNodeType_ = nullptr;};
    inline string dstNodeType() const { DARABONBA_PTR_GET_DEFAULT(dstNodeType_, "") };
    inline DescribeClusterNetworkResponseBodyClusterNetworkEdge& setDstNodeType(string dstNodeType) { DARABONBA_PTR_SET_VALUE(dstNodeType_, dstNodeType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeClusterNetworkResponseBodyClusterNetworkEdge& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeClusterNetworkResponseBodyClusterNetworkEdge& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // srcNodeId Field Functions 
    bool hasSrcNodeId() const { return this->srcNodeId_ != nullptr;};
    void deleteSrcNodeId() { this->srcNodeId_ = nullptr;};
    inline string srcNodeId() const { DARABONBA_PTR_GET_DEFAULT(srcNodeId_, "") };
    inline DescribeClusterNetworkResponseBodyClusterNetworkEdge& setSrcNodeId(string srcNodeId) { DARABONBA_PTR_SET_VALUE(srcNodeId_, srcNodeId) };


    // srcNodeType Field Functions 
    bool hasSrcNodeType() const { return this->srcNodeType_ != nullptr;};
    void deleteSrcNodeType() { this->srcNodeType_ = nullptr;};
    inline string srcNodeType() const { DARABONBA_PTR_GET_DEFAULT(srcNodeType_, "") };
    inline DescribeClusterNetworkResponseBodyClusterNetworkEdge& setSrcNodeType(string srcNodeType) { DARABONBA_PTR_SET_VALUE(srcNodeType_, srcNodeType) };


  protected:
    // The ID of the destination node.
    std::shared_ptr<string> dstNodeId_ = nullptr;
    // The type of the destination node. Valid values:
    // 
    // *   Set the value to **cluster**.
    std::shared_ptr<string> dstNodeType_ = nullptr;
    // The ID of the topology edge.
    std::shared_ptr<string> id_ = nullptr;
    // The port number of the topology edge.
    std::shared_ptr<string> port_ = nullptr;
    // The ID of the source node.
    std::shared_ptr<string> srcNodeId_ = nullptr;
    // The type of the source node. Valid values:
    // 
    // *   **cluster**: a cluster.
    // *   **internet**: a network node outside the cluster
    std::shared_ptr<string> srcNodeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
