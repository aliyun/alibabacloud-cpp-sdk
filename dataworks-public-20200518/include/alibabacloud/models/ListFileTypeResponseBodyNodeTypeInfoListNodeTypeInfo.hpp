// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILETYPERESPONSEBODYNODETYPEINFOLISTNODETYPEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTFILETYPERESPONSEBODYNODETYPEINFOLISTNODETYPEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(NodeTypeName, nodeTypeName_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(NodeTypeName, nodeTypeName_);
    };
    ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo() = default ;
    ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo(const ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo &) = default ;
    ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo(ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo &&) = default ;
    ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo() = default ;
    ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo& operator=(const ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo &) = default ;
    ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo& operator=(ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo &&) = default ;
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
    inline ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo& setNodeType(int32_t nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // nodeTypeName Field Functions 
    bool hasNodeTypeName() const { return this->nodeTypeName_ != nullptr;};
    void deleteNodeTypeName() { this->nodeTypeName_ = nullptr;};
    inline string nodeTypeName() const { DARABONBA_PTR_GET_DEFAULT(nodeTypeName_, "") };
    inline ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo& setNodeTypeName(string nodeTypeName) { DARABONBA_PTR_SET_VALUE(nodeTypeName_, nodeTypeName) };


  protected:
    // The code of the node type. The codes and names of node types have the following mappings: 6 (Shell), 10 (ODPS SQL), 11 (ODPS MR), 23 (Data Integration), 24 (ODPS Script), 99 (zero load), 221 (PyODPS 2), 225 (ODPS Spark), 227 (EMR Hive), 228 (EMR Spark), 229 (EMR Spark SQL), 230 (EMR MR), 239 (OSS object inspection), 257 (EMR Shell), 258 (EMR Spark Shell), 259 (EMR Presto), 260 (EMR Impala), 900 (real-time synchronization), 1089 (cross-tenant collaboration), 1091 (Hologres development), 1093 (Hologres SQL), 1100 (assignment), and 1221 (PyODPS 3)
    std::shared_ptr<int32_t> nodeType_ = nullptr;
    // The name of the node type. The codes and names of node types have the following mappings: 6 (Shell), 10 (ODPS SQL), 11 (ODPS MR), 23 (Data Integration), 24 (ODPS Script), 99 (zero load), 221 (PyODPS 2), 225 (ODPS Spark), 227 (EMR Hive), 228 (EMR Spark), 229 (EMR Spark SQL), 230 (EMR MR), 239 (OSS object inspection), 257 (EMR Shell), 258 (EMR Spark Shell), 259 (EMR Presto), 260 (EMR Impala), 900 (real-time synchronization), 1089 (cross-tenant collaboration), 1091 (Hologres development), 1093 (Hologres SQL), 1100 (assignment), and 1221 (PyODPS 3)
    std::shared_ptr<string> nodeTypeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
