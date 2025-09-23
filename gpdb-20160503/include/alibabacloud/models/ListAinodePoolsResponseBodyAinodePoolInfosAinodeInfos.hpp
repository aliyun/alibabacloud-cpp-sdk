// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAINODEPOOLSRESPONSEBODYAINODEPOOLINFOSAINODEINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTAINODEPOOLSRESPONSEBODYAINODEPOOLINFOSAINODEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos& obj) { 
      DARABONBA_PTR_TO_JSON(BindObject, bindObject_);
      DARABONBA_PTR_TO_JSON(BindStatus, bindStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(NodeSpec, nodeSpec_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(BindObject, bindObject_);
      DARABONBA_PTR_FROM_JSON(BindStatus, bindStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(NodeSpec, nodeSpec_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos() = default ;
    ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos(const ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos &) = default ;
    ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos(ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos &&) = default ;
    ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos() = default ;
    ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos& operator=(const ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos &) = default ;
    ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos& operator=(ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindObject_ != nullptr
        && this->bindStatus_ != nullptr && this->createTime_ != nullptr && this->namespace_ != nullptr && this->nodeName_ != nullptr && this->nodeSpec_ != nullptr
        && this->updateTime_ != nullptr; };
    // bindObject Field Functions 
    bool hasBindObject() const { return this->bindObject_ != nullptr;};
    void deleteBindObject() { this->bindObject_ = nullptr;};
    inline string bindObject() const { DARABONBA_PTR_GET_DEFAULT(bindObject_, "") };
    inline ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos& setBindObject(string bindObject) { DARABONBA_PTR_SET_VALUE(bindObject_, bindObject) };


    // bindStatus Field Functions 
    bool hasBindStatus() const { return this->bindStatus_ != nullptr;};
    void deleteBindStatus() { this->bindStatus_ = nullptr;};
    inline string bindStatus() const { DARABONBA_PTR_GET_DEFAULT(bindStatus_, "") };
    inline ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos& setBindStatus(string bindStatus) { DARABONBA_PTR_SET_VALUE(bindStatus_, bindStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // nodeSpec Field Functions 
    bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
    void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
    inline string nodeSpec() const { DARABONBA_PTR_GET_DEFAULT(nodeSpec_, "") };
    inline ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos& setNodeSpec(string nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListAINodePoolsResponseBodyAINodePoolInfosAINodeInfos& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> bindObject_ = nullptr;
    std::shared_ptr<string> bindStatus_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
    std::shared_ptr<string> nodeSpec_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
