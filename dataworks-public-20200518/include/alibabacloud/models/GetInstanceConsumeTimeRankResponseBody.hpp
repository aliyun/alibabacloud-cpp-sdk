// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCECONSUMETIMERANKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCECONSUMETIMERANKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetInstanceConsumeTimeRankResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceConsumeTimeRankResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceConsumeTimeRank, instanceConsumeTimeRank_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceConsumeTimeRankResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceConsumeTimeRank, instanceConsumeTimeRank_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceConsumeTimeRankResponseBody() = default ;
    GetInstanceConsumeTimeRankResponseBody(const GetInstanceConsumeTimeRankResponseBody &) = default ;
    GetInstanceConsumeTimeRankResponseBody(GetInstanceConsumeTimeRankResponseBody &&) = default ;
    GetInstanceConsumeTimeRankResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceConsumeTimeRankResponseBody() = default ;
    GetInstanceConsumeTimeRankResponseBody& operator=(const GetInstanceConsumeTimeRankResponseBody &) = default ;
    GetInstanceConsumeTimeRankResponseBody& operator=(GetInstanceConsumeTimeRankResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceConsumeTimeRank : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceConsumeTimeRank& obj) { 
        DARABONBA_PTR_TO_JSON(ConsumeTimeRank, consumeTimeRank_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceConsumeTimeRank& obj) { 
        DARABONBA_PTR_FROM_JSON(ConsumeTimeRank, consumeTimeRank_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      InstanceConsumeTimeRank() = default ;
      InstanceConsumeTimeRank(const InstanceConsumeTimeRank &) = default ;
      InstanceConsumeTimeRank(InstanceConsumeTimeRank &&) = default ;
      InstanceConsumeTimeRank(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceConsumeTimeRank() = default ;
      InstanceConsumeTimeRank& operator=(const InstanceConsumeTimeRank &) = default ;
      InstanceConsumeTimeRank& operator=(InstanceConsumeTimeRank &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ConsumeTimeRank : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConsumeTimeRank& obj) { 
          DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
          DARABONBA_PTR_TO_JSON(Consumed, consumed_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(PrgType, prgType_);
        };
        friend void from_json(const Darabonba::Json& j, ConsumeTimeRank& obj) { 
          DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
          DARABONBA_PTR_FROM_JSON(Consumed, consumed_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(PrgType, prgType_);
        };
        ConsumeTimeRank() = default ;
        ConsumeTimeRank(const ConsumeTimeRank &) = default ;
        ConsumeTimeRank(ConsumeTimeRank &&) = default ;
        ConsumeTimeRank(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConsumeTimeRank() = default ;
        ConsumeTimeRank& operator=(const ConsumeTimeRank &) = default ;
        ConsumeTimeRank& operator=(ConsumeTimeRank &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizdate_ == nullptr
        && this->consumed_ == nullptr && this->instanceId_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->owner_ == nullptr
        && this->prgType_ == nullptr; };
        // bizdate Field Functions 
        bool hasBizdate() const { return this->bizdate_ != nullptr;};
        void deleteBizdate() { this->bizdate_ = nullptr;};
        inline int64_t getBizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
        inline ConsumeTimeRank& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


        // consumed Field Functions 
        bool hasConsumed() const { return this->consumed_ != nullptr;};
        void deleteConsumed() { this->consumed_ = nullptr;};
        inline int64_t getConsumed() const { DARABONBA_PTR_GET_DEFAULT(consumed_, 0L) };
        inline ConsumeTimeRank& setConsumed(int64_t consumed) { DARABONBA_PTR_SET_VALUE(consumed_, consumed) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
        inline ConsumeTimeRank& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
        inline ConsumeTimeRank& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline ConsumeTimeRank& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline ConsumeTimeRank& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // prgType Field Functions 
        bool hasPrgType() const { return this->prgType_ != nullptr;};
        void deletePrgType() { this->prgType_ = nullptr;};
        inline int32_t getPrgType() const { DARABONBA_PTR_GET_DEFAULT(prgType_, 0) };
        inline ConsumeTimeRank& setPrgType(int32_t prgType) { DARABONBA_PTR_SET_VALUE(prgType_, prgType) };


      protected:
        // The data timestamp of the instance.
        shared_ptr<int64_t> bizdate_ {};
        // The running duration of the instance. Unit: seconds.
        shared_ptr<int64_t> consumed_ {};
        // The instance ID.
        shared_ptr<int64_t> instanceId_ {};
        // The node ID.
        shared_ptr<int64_t> nodeId_ {};
        // The name of the node.
        shared_ptr<string> nodeName_ {};
        // The ID of the Alibaba Cloud account used by the node owner.
        shared_ptr<string> owner_ {};
        // The type of the node.
        shared_ptr<int32_t> prgType_ {};
      };

      virtual bool empty() const override { return this->consumeTimeRank_ == nullptr
        && this->updateTime_ == nullptr; };
      // consumeTimeRank Field Functions 
      bool hasConsumeTimeRank() const { return this->consumeTimeRank_ != nullptr;};
      void deleteConsumeTimeRank() { this->consumeTimeRank_ = nullptr;};
      inline const vector<InstanceConsumeTimeRank::ConsumeTimeRank> & getConsumeTimeRank() const { DARABONBA_PTR_GET_CONST(consumeTimeRank_, vector<InstanceConsumeTimeRank::ConsumeTimeRank>) };
      inline vector<InstanceConsumeTimeRank::ConsumeTimeRank> getConsumeTimeRank() { DARABONBA_PTR_GET(consumeTimeRank_, vector<InstanceConsumeTimeRank::ConsumeTimeRank>) };
      inline InstanceConsumeTimeRank& setConsumeTimeRank(const vector<InstanceConsumeTimeRank::ConsumeTimeRank> & consumeTimeRank) { DARABONBA_PTR_SET_VALUE(consumeTimeRank_, consumeTimeRank) };
      inline InstanceConsumeTimeRank& setConsumeTimeRank(vector<InstanceConsumeTimeRank::ConsumeTimeRank> && consumeTimeRank) { DARABONBA_PTR_SET_RVALUE(consumeTimeRank_, consumeTimeRank) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline InstanceConsumeTimeRank& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The ranking data of the running durations of instances.
      shared_ptr<vector<InstanceConsumeTimeRank::ConsumeTimeRank>> consumeTimeRank_ {};
      // The timestamp when the ranking was updated.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->instanceConsumeTimeRank_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceConsumeTimeRank Field Functions 
    bool hasInstanceConsumeTimeRank() const { return this->instanceConsumeTimeRank_ != nullptr;};
    void deleteInstanceConsumeTimeRank() { this->instanceConsumeTimeRank_ = nullptr;};
    inline const GetInstanceConsumeTimeRankResponseBody::InstanceConsumeTimeRank & getInstanceConsumeTimeRank() const { DARABONBA_PTR_GET_CONST(instanceConsumeTimeRank_, GetInstanceConsumeTimeRankResponseBody::InstanceConsumeTimeRank) };
    inline GetInstanceConsumeTimeRankResponseBody::InstanceConsumeTimeRank getInstanceConsumeTimeRank() { DARABONBA_PTR_GET(instanceConsumeTimeRank_, GetInstanceConsumeTimeRankResponseBody::InstanceConsumeTimeRank) };
    inline GetInstanceConsumeTimeRankResponseBody& setInstanceConsumeTimeRank(const GetInstanceConsumeTimeRankResponseBody::InstanceConsumeTimeRank & instanceConsumeTimeRank) { DARABONBA_PTR_SET_VALUE(instanceConsumeTimeRank_, instanceConsumeTimeRank) };
    inline GetInstanceConsumeTimeRankResponseBody& setInstanceConsumeTimeRank(GetInstanceConsumeTimeRankResponseBody::InstanceConsumeTimeRank && instanceConsumeTimeRank) { DARABONBA_PTR_SET_RVALUE(instanceConsumeTimeRank_, instanceConsumeTimeRank) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceConsumeTimeRankResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ranking record of the running durations of instances.
    shared_ptr<GetInstanceConsumeTimeRankResponseBody::InstanceConsumeTimeRank> instanceConsumeTimeRank_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
