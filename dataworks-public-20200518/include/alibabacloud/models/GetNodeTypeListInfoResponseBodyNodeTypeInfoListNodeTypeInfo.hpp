// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODETYPELISTINFORESPONSEBODYNODETYPEINFOLISTNODETYPEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETNODETYPELISTINFORESPONSEBODYNODETYPEINFOLISTNODETYPEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetNodeTypeListInfoResponseBodyNodeTypeInfoListNodeTypeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeTypeListInfoResponseBodyNodeTypeInfoListNodeTypeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(NodeTypeName, nodeTypeName_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeTypeListInfoResponseBodyNodeTypeInfoListNodeTypeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(NodeTypeName, nodeTypeName_);
    };
    GetNodeTypeListInfoResponseBodyNodeTypeInfoListNodeTypeInfo() = default ;
    GetNodeTypeListInfoResponseBodyNodeTypeInfoListNodeTypeInfo(const GetNodeTypeListInfoResponseBodyNodeTypeInfoListNodeTypeInfo &) = default ;
    GetNodeTypeListInfoResponseBodyNodeTypeInfoListNodeTypeInfo(GetNodeTypeListInfoResponseBodyNodeTypeInfoListNodeTypeInfo &&) = default ;
    GetNodeTypeListInfoResponseBodyNodeTypeInfoListNodeTypeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeTypeListInfoResponseBodyNodeTypeInfoListNodeTypeInfo() = default ;
    GetNodeTypeListInfoResponseBodyNodeTypeInfoListNodeTypeInfo& operator=(const GetNodeTypeListInfoResponseBodyNodeTypeInfoListNodeTypeInfo &) = default ;
    GetNodeTypeListInfoResponseBodyNodeTypeInfoListNodeTypeInfo& operator=(GetNodeTypeListInfoResponseBodyNodeTypeInfoListNodeTypeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeType_ != nullptr
        && this->nodeTypeName_ != nullptr; };
    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline int32_t nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, 0) };
    inline GetNodeTypeListInfoResponseBodyNodeTypeInfoListNodeTypeInfo& setNodeType(int32_t nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // nodeTypeName Field Functions 
    bool hasNodeTypeName() const { return this->nodeTypeName_ != nullptr;};
    void deleteNodeTypeName() { this->nodeTypeName_ = nullptr;};
    inline string nodeTypeName() const { DARABONBA_PTR_GET_DEFAULT(nodeTypeName_, "") };
    inline GetNodeTypeListInfoResponseBodyNodeTypeInfoListNodeTypeInfo& setNodeTypeName(string nodeTypeName) { DARABONBA_PTR_SET_VALUE(nodeTypeName_, nodeTypeName) };


  protected:
    // The type of the node, which is specified by a number.
    std::shared_ptr<int32_t> nodeType_ = nullptr;
    // The name of the node type.
    std::shared_ptr<string> nodeTypeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
