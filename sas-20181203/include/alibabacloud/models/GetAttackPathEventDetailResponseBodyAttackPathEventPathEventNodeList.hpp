// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACKPATHEVENTDETAILRESPONSEBODYATTACKPATHEVENTPATHEVENTNODELIST_HPP_
#define ALIBABACLOUD_MODELS_GETATTACKPATHEVENTDETAILRESPONSEBODYATTACKPATHEVENTPATHEVENTNODELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList& obj) { 
      DARABONBA_PTR_TO_JSON(AiAssetFlag, aiAssetFlag_);
      DARABONBA_PTR_TO_JSON(ElementType, elementType_);
      DARABONBA_PTR_TO_JSON(NodeDetail, nodeDetail_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(NodeUuid, nodeUuid_);
      DARABONBA_PTR_TO_JSON(SensitiveAssetFlag, sensitiveAssetFlag_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList& obj) { 
      DARABONBA_PTR_FROM_JSON(AiAssetFlag, aiAssetFlag_);
      DARABONBA_PTR_FROM_JSON(ElementType, elementType_);
      DARABONBA_PTR_FROM_JSON(NodeDetail, nodeDetail_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(NodeUuid, nodeUuid_);
      DARABONBA_PTR_FROM_JSON(SensitiveAssetFlag, sensitiveAssetFlag_);
    };
    GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList() = default ;
    GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList(const GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList &) = default ;
    GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList(GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList &&) = default ;
    GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList() = default ;
    GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList& operator=(const GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList &) = default ;
    GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList& operator=(GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aiAssetFlag_ == nullptr
        && return this->elementType_ == nullptr && return this->nodeDetail_ == nullptr && return this->nodeName_ == nullptr && return this->nodeType_ == nullptr && return this->nodeUuid_ == nullptr
        && return this->sensitiveAssetFlag_ == nullptr; };
    // aiAssetFlag Field Functions 
    bool hasAiAssetFlag() const { return this->aiAssetFlag_ != nullptr;};
    void deleteAiAssetFlag() { this->aiAssetFlag_ = nullptr;};
    inline int32_t aiAssetFlag() const { DARABONBA_PTR_GET_DEFAULT(aiAssetFlag_, 0) };
    inline GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList& setAiAssetFlag(int32_t aiAssetFlag) { DARABONBA_PTR_SET_VALUE(aiAssetFlag_, aiAssetFlag) };


    // elementType Field Functions 
    bool hasElementType() const { return this->elementType_ != nullptr;};
    void deleteElementType() { this->elementType_ = nullptr;};
    inline string elementType() const { DARABONBA_PTR_GET_DEFAULT(elementType_, "") };
    inline GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList& setElementType(string elementType) { DARABONBA_PTR_SET_VALUE(elementType_, elementType) };


    // nodeDetail Field Functions 
    bool hasNodeDetail() const { return this->nodeDetail_ != nullptr;};
    void deleteNodeDetail() { this->nodeDetail_ = nullptr;};
    inline string nodeDetail() const { DARABONBA_PTR_GET_DEFAULT(nodeDetail_, "") };
    inline GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList& setNodeDetail(string nodeDetail) { DARABONBA_PTR_SET_VALUE(nodeDetail_, nodeDetail) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // nodeUuid Field Functions 
    bool hasNodeUuid() const { return this->nodeUuid_ != nullptr;};
    void deleteNodeUuid() { this->nodeUuid_ = nullptr;};
    inline string nodeUuid() const { DARABONBA_PTR_GET_DEFAULT(nodeUuid_, "") };
    inline GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList& setNodeUuid(string nodeUuid) { DARABONBA_PTR_SET_VALUE(nodeUuid_, nodeUuid) };


    // sensitiveAssetFlag Field Functions 
    bool hasSensitiveAssetFlag() const { return this->sensitiveAssetFlag_ != nullptr;};
    void deleteSensitiveAssetFlag() { this->sensitiveAssetFlag_ = nullptr;};
    inline int32_t sensitiveAssetFlag() const { DARABONBA_PTR_GET_DEFAULT(sensitiveAssetFlag_, 0) };
    inline GetAttackPathEventDetailResponseBodyAttackPathEventPathEventNodeList& setSensitiveAssetFlag(int32_t sensitiveAssetFlag) { DARABONBA_PTR_SET_VALUE(sensitiveAssetFlag_, sensitiveAssetFlag) };


  protected:
    std::shared_ptr<int32_t> aiAssetFlag_ = nullptr;
    // Node element type.
    std::shared_ptr<string> elementType_ = nullptr;
    // Details of the node.
    std::shared_ptr<string> nodeDetail_ = nullptr;
    // Name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // Type of the node.
    std::shared_ptr<string> nodeType_ = nullptr;
    // UUID of the node.
    std::shared_ptr<string> nodeUuid_ = nullptr;
    // Sensitive asset flag. Values:
    // - **0**: Non-sensitive asset.
    // - **1**: Sensitive asset.
    std::shared_ptr<int32_t> sensitiveAssetFlag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
