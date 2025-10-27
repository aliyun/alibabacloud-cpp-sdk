// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPNETWORKRESPONSEBODYAPPNETWORKEDGE_HPP_
#define ALIBABACLOUD_MODELS_GETAPPNETWORKRESPONSEBODYAPPNETWORKEDGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAppNetworkResponseBodyAppNetworkEdge : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppNetworkResponseBodyAppNetworkEdge& obj) { 
      DARABONBA_PTR_TO_JSON(DstNodeId, dstNodeId_);
      DARABONBA_PTR_TO_JSON(DstNodeType, dstNodeType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(SrcNodeId, srcNodeId_);
      DARABONBA_PTR_TO_JSON(SrcNodeType, srcNodeType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppNetworkResponseBodyAppNetworkEdge& obj) { 
      DARABONBA_PTR_FROM_JSON(DstNodeId, dstNodeId_);
      DARABONBA_PTR_FROM_JSON(DstNodeType, dstNodeType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(SrcNodeId, srcNodeId_);
      DARABONBA_PTR_FROM_JSON(SrcNodeType, srcNodeType_);
    };
    GetAppNetworkResponseBodyAppNetworkEdge() = default ;
    GetAppNetworkResponseBodyAppNetworkEdge(const GetAppNetworkResponseBodyAppNetworkEdge &) = default ;
    GetAppNetworkResponseBodyAppNetworkEdge(GetAppNetworkResponseBodyAppNetworkEdge &&) = default ;
    GetAppNetworkResponseBodyAppNetworkEdge(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppNetworkResponseBodyAppNetworkEdge() = default ;
    GetAppNetworkResponseBodyAppNetworkEdge& operator=(const GetAppNetworkResponseBodyAppNetworkEdge &) = default ;
    GetAppNetworkResponseBodyAppNetworkEdge& operator=(GetAppNetworkResponseBodyAppNetworkEdge &&) = default ;
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
    inline GetAppNetworkResponseBodyAppNetworkEdge& setDstNodeId(string dstNodeId) { DARABONBA_PTR_SET_VALUE(dstNodeId_, dstNodeId) };


    // dstNodeType Field Functions 
    bool hasDstNodeType() const { return this->dstNodeType_ != nullptr;};
    void deleteDstNodeType() { this->dstNodeType_ = nullptr;};
    inline string dstNodeType() const { DARABONBA_PTR_GET_DEFAULT(dstNodeType_, "") };
    inline GetAppNetworkResponseBodyAppNetworkEdge& setDstNodeType(string dstNodeType) { DARABONBA_PTR_SET_VALUE(dstNodeType_, dstNodeType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetAppNetworkResponseBodyAppNetworkEdge& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline GetAppNetworkResponseBodyAppNetworkEdge& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // srcNodeId Field Functions 
    bool hasSrcNodeId() const { return this->srcNodeId_ != nullptr;};
    void deleteSrcNodeId() { this->srcNodeId_ = nullptr;};
    inline string srcNodeId() const { DARABONBA_PTR_GET_DEFAULT(srcNodeId_, "") };
    inline GetAppNetworkResponseBodyAppNetworkEdge& setSrcNodeId(string srcNodeId) { DARABONBA_PTR_SET_VALUE(srcNodeId_, srcNodeId) };


    // srcNodeType Field Functions 
    bool hasSrcNodeType() const { return this->srcNodeType_ != nullptr;};
    void deleteSrcNodeType() { this->srcNodeType_ = nullptr;};
    inline string srcNodeType() const { DARABONBA_PTR_GET_DEFAULT(srcNodeType_, "") };
    inline GetAppNetworkResponseBodyAppNetworkEdge& setSrcNodeType(string srcNodeType) { DARABONBA_PTR_SET_VALUE(srcNodeType_, srcNodeType) };


  protected:
    // The ID of the destination node.
    std::shared_ptr<string> dstNodeId_ = nullptr;
    // The type of the destination node. Valid values:
    // 
    // *   **app**: an application
    // *   **internet**: a network node in another cluster
    std::shared_ptr<string> dstNodeType_ = nullptr;
    // The ID of the edge.
    std::shared_ptr<string> id_ = nullptr;
    // The number of the destination port.
    std::shared_ptr<string> port_ = nullptr;
    // The ID of the source node.
    std::shared_ptr<string> srcNodeId_ = nullptr;
    // The type of the source node. Valid values:
    // 
    // *   **app**: an application
    // *   **internet**: a network node in another cluster
    std::shared_ptr<string> srcNodeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
