// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAINODEPOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAINODEPOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListAINodePoolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAINodePoolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AINodePoolInfos, AINodePoolInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAINodePoolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AINodePoolInfos, AINodePoolInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAINodePoolsResponseBody() = default ;
    ListAINodePoolsResponseBody(const ListAINodePoolsResponseBody &) = default ;
    ListAINodePoolsResponseBody(ListAINodePoolsResponseBody &&) = default ;
    ListAINodePoolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAINodePoolsResponseBody() = default ;
    ListAINodePoolsResponseBody& operator=(const ListAINodePoolsResponseBody &) = default ;
    ListAINodePoolsResponseBody& operator=(ListAINodePoolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AINodePoolInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AINodePoolInfos& obj) { 
        DARABONBA_PTR_TO_JSON(AINodeInfos, AINodeInfos_);
        DARABONBA_PTR_TO_JSON(AINodePoolId, AINodePoolId_);
        DARABONBA_PTR_TO_JSON(NodeNum, nodeNum_);
      };
      friend void from_json(const Darabonba::Json& j, AINodePoolInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(AINodeInfos, AINodeInfos_);
        DARABONBA_PTR_FROM_JSON(AINodePoolId, AINodePoolId_);
        DARABONBA_PTR_FROM_JSON(NodeNum, nodeNum_);
      };
      AINodePoolInfos() = default ;
      AINodePoolInfos(const AINodePoolInfos &) = default ;
      AINodePoolInfos(AINodePoolInfos &&) = default ;
      AINodePoolInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AINodePoolInfos() = default ;
      AINodePoolInfos& operator=(const AINodePoolInfos &) = default ;
      AINodePoolInfos& operator=(AINodePoolInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AINodeInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AINodeInfos& obj) { 
          DARABONBA_PTR_TO_JSON(BindObject, bindObject_);
          DARABONBA_PTR_TO_JSON(BindStatus, bindStatus_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(NodeSpec, nodeSpec_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, AINodeInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(BindObject, bindObject_);
          DARABONBA_PTR_FROM_JSON(BindStatus, bindStatus_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(NodeSpec, nodeSpec_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        AINodeInfos() = default ;
        AINodeInfos(const AINodeInfos &) = default ;
        AINodeInfos(AINodeInfos &&) = default ;
        AINodeInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AINodeInfos() = default ;
        AINodeInfos& operator=(const AINodeInfos &) = default ;
        AINodeInfos& operator=(AINodeInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bindObject_ == nullptr
        && this->bindStatus_ == nullptr && this->createTime_ == nullptr && this->namespace_ == nullptr && this->nodeName_ == nullptr && this->nodeSpec_ == nullptr
        && this->updateTime_ == nullptr && this->zoneId_ == nullptr; };
        // bindObject Field Functions 
        bool hasBindObject() const { return this->bindObject_ != nullptr;};
        void deleteBindObject() { this->bindObject_ = nullptr;};
        inline string getBindObject() const { DARABONBA_PTR_GET_DEFAULT(bindObject_, "") };
        inline AINodeInfos& setBindObject(string bindObject) { DARABONBA_PTR_SET_VALUE(bindObject_, bindObject) };


        // bindStatus Field Functions 
        bool hasBindStatus() const { return this->bindStatus_ != nullptr;};
        void deleteBindStatus() { this->bindStatus_ = nullptr;};
        inline string getBindStatus() const { DARABONBA_PTR_GET_DEFAULT(bindStatus_, "") };
        inline AINodeInfos& setBindStatus(string bindStatus) { DARABONBA_PTR_SET_VALUE(bindStatus_, bindStatus) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline AINodeInfos& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline AINodeInfos& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline AINodeInfos& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // nodeSpec Field Functions 
        bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
        void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
        inline string getNodeSpec() const { DARABONBA_PTR_GET_DEFAULT(nodeSpec_, "") };
        inline AINodeInfos& setNodeSpec(string nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline AINodeInfos& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline AINodeInfos& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The binding type of the AI node.
        shared_ptr<string> bindObject_ {};
        // The status of the AI node.
        // 
        // *   unbound: The node is not bound.
        // *   bound: The node is bound.
        shared_ptr<string> bindStatus_ {};
        // The creation time.
        shared_ptr<string> createTime_ {};
        // The namespace.
        shared_ptr<string> namespace_ {};
        // The name of the AI node.
        shared_ptr<string> nodeName_ {};
        // The AI node specifications. The list of supported specifications is shown below.
        // 
        //     ADB.AIMedium.1
        //     ADB.AILarge.1
        //     ADB.AIStandard.2
        //     ADB.AIMedium.2
        //     ADB.AILarge.2
        //     ADB.AIXLarge.2
        //     ADB.AIStandard.6
        //     ADB.AIMedium.6
        //     ADB.AILarge.6
        //     ADB.AIXLarge.6
        //     ADB.AIStandard.3
        //     ADB.AIMedium.3
        //     ADB.AILarge.3
        //     ADB.AIXLarge.3
        //     ADB.AIStandard.4
        //     ADB.AIMedium.4
        //     ADB.AILarge.4
        //     ADB.AIXLarge.4
        //     ADB.AIStandard.5
        //     ADB.AIMedium.5
        //     ADB.AILarge.5
        //     ADB.AIXLarge.5
        //     ADB.AIStandard.8
        //     ADB.AIMedium.8
        //     ADB.AILarge.8
        //     ADB.AIXLarge.8
        //     ADB.AI2XLarge.8
        shared_ptr<string> nodeSpec_ {};
        // The update time.
        shared_ptr<string> updateTime_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->AINodeInfos_ == nullptr
        && this->AINodePoolId_ == nullptr && this->nodeNum_ == nullptr; };
      // AINodeInfos Field Functions 
      bool hasAINodeInfos() const { return this->AINodeInfos_ != nullptr;};
      void deleteAINodeInfos() { this->AINodeInfos_ = nullptr;};
      inline const vector<AINodePoolInfos::AINodeInfos> & getAINodeInfos() const { DARABONBA_PTR_GET_CONST(AINodeInfos_, vector<AINodePoolInfos::AINodeInfos>) };
      inline vector<AINodePoolInfos::AINodeInfos> getAINodeInfos() { DARABONBA_PTR_GET(AINodeInfos_, vector<AINodePoolInfos::AINodeInfos>) };
      inline AINodePoolInfos& setAINodeInfos(const vector<AINodePoolInfos::AINodeInfos> & aINodeInfos) { DARABONBA_PTR_SET_VALUE(AINodeInfos_, aINodeInfos) };
      inline AINodePoolInfos& setAINodeInfos(vector<AINodePoolInfos::AINodeInfos> && aINodeInfos) { DARABONBA_PTR_SET_RVALUE(AINodeInfos_, aINodeInfos) };


      // AINodePoolId Field Functions 
      bool hasAINodePoolId() const { return this->AINodePoolId_ != nullptr;};
      void deleteAINodePoolId() { this->AINodePoolId_ = nullptr;};
      inline string getAINodePoolId() const { DARABONBA_PTR_GET_DEFAULT(AINodePoolId_, "") };
      inline AINodePoolInfos& setAINodePoolId(string AINodePoolId) { DARABONBA_PTR_SET_VALUE(AINodePoolId_, AINodePoolId) };


      // nodeNum Field Functions 
      bool hasNodeNum() const { return this->nodeNum_ != nullptr;};
      void deleteNodeNum() { this->nodeNum_ = nullptr;};
      inline string getNodeNum() const { DARABONBA_PTR_GET_DEFAULT(nodeNum_, "") };
      inline AINodePoolInfos& setNodeNum(string nodeNum) { DARABONBA_PTR_SET_VALUE(nodeNum_, nodeNum) };


    protected:
      // AI node details.
      shared_ptr<vector<AINodePoolInfos::AINodeInfos>> AINodeInfos_ {};
      // The ID of the resource pool to which the AI node belongs.
      shared_ptr<string> AINodePoolId_ {};
      // The number of nodes.
      shared_ptr<string> nodeNum_ {};
    };

    virtual bool empty() const override { return this->AINodePoolInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // AINodePoolInfos Field Functions 
    bool hasAINodePoolInfos() const { return this->AINodePoolInfos_ != nullptr;};
    void deleteAINodePoolInfos() { this->AINodePoolInfos_ = nullptr;};
    inline const vector<ListAINodePoolsResponseBody::AINodePoolInfos> & getAINodePoolInfos() const { DARABONBA_PTR_GET_CONST(AINodePoolInfos_, vector<ListAINodePoolsResponseBody::AINodePoolInfos>) };
    inline vector<ListAINodePoolsResponseBody::AINodePoolInfos> getAINodePoolInfos() { DARABONBA_PTR_GET(AINodePoolInfos_, vector<ListAINodePoolsResponseBody::AINodePoolInfos>) };
    inline ListAINodePoolsResponseBody& setAINodePoolInfos(const vector<ListAINodePoolsResponseBody::AINodePoolInfos> & aINodePoolInfos) { DARABONBA_PTR_SET_VALUE(AINodePoolInfos_, aINodePoolInfos) };
    inline ListAINodePoolsResponseBody& setAINodePoolInfos(vector<ListAINodePoolsResponseBody::AINodePoolInfos> && aINodePoolInfos) { DARABONBA_PTR_SET_RVALUE(AINodePoolInfos_, aINodePoolInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAINodePoolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the AI node resource pool.
    shared_ptr<vector<ListAINodePoolsResponseBody::AINodePoolInfos>> AINodePoolInfos_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
