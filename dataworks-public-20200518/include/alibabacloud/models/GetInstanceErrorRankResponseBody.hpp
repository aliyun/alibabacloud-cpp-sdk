// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEERRORRANKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEERRORRANKRESPONSEBODY_HPP_
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
  class GetInstanceErrorRankResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceErrorRankResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceErrorRank, instanceErrorRank_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceErrorRankResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceErrorRank, instanceErrorRank_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceErrorRankResponseBody() = default ;
    GetInstanceErrorRankResponseBody(const GetInstanceErrorRankResponseBody &) = default ;
    GetInstanceErrorRankResponseBody(GetInstanceErrorRankResponseBody &&) = default ;
    GetInstanceErrorRankResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceErrorRankResponseBody() = default ;
    GetInstanceErrorRankResponseBody& operator=(const GetInstanceErrorRankResponseBody &) = default ;
    GetInstanceErrorRankResponseBody& operator=(GetInstanceErrorRankResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceErrorRank : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceErrorRank& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorRank, errorRank_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceErrorRank& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorRank, errorRank_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      InstanceErrorRank() = default ;
      InstanceErrorRank(const InstanceErrorRank &) = default ;
      InstanceErrorRank(InstanceErrorRank &&) = default ;
      InstanceErrorRank(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceErrorRank() = default ;
      InstanceErrorRank& operator=(const InstanceErrorRank &) = default ;
      InstanceErrorRank& operator=(InstanceErrorRank &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ErrorRank : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ErrorRank& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(PrgType, prgType_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        };
        friend void from_json(const Darabonba::Json& j, ErrorRank& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(PrgType, prgType_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        };
        ErrorRank() = default ;
        ErrorRank(const ErrorRank &) = default ;
        ErrorRank(ErrorRank &&) = default ;
        ErrorRank(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ErrorRank() = default ;
        ErrorRank& operator=(const ErrorRank &) = default ;
        ErrorRank& operator=(ErrorRank &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->owner_ == nullptr && this->prgType_ == nullptr && this->projectId_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline ErrorRank& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
        inline ErrorRank& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline ErrorRank& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline ErrorRank& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // prgType Field Functions 
        bool hasPrgType() const { return this->prgType_ != nullptr;};
        void deletePrgType() { this->prgType_ = nullptr;};
        inline int32_t getPrgType() const { DARABONBA_PTR_GET_DEFAULT(prgType_, 0) };
        inline ErrorRank& setPrgType(int32_t prgType) { DARABONBA_PTR_SET_VALUE(prgType_, prgType) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline ErrorRank& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      protected:
        // The number of errors that occurred on the node.
        shared_ptr<int32_t> count_ {};
        // The node ID.
        shared_ptr<int64_t> nodeId_ {};
        // The name of the node.
        shared_ptr<string> nodeName_ {};
        // The ID of the Alibaba Cloud account used by the node owner.
        shared_ptr<string> owner_ {};
        // The type of the node.
        shared_ptr<int32_t> prgType_ {};
        // The DataWorks workspace ID.
        shared_ptr<int64_t> projectId_ {};
      };

      virtual bool empty() const override { return this->errorRank_ == nullptr
        && this->updateTime_ == nullptr; };
      // errorRank Field Functions 
      bool hasErrorRank() const { return this->errorRank_ != nullptr;};
      void deleteErrorRank() { this->errorRank_ = nullptr;};
      inline const vector<InstanceErrorRank::ErrorRank> & getErrorRank() const { DARABONBA_PTR_GET_CONST(errorRank_, vector<InstanceErrorRank::ErrorRank>) };
      inline vector<InstanceErrorRank::ErrorRank> getErrorRank() { DARABONBA_PTR_GET(errorRank_, vector<InstanceErrorRank::ErrorRank>) };
      inline InstanceErrorRank& setErrorRank(const vector<InstanceErrorRank::ErrorRank> & errorRank) { DARABONBA_PTR_SET_VALUE(errorRank_, errorRank) };
      inline InstanceErrorRank& setErrorRank(vector<InstanceErrorRank::ErrorRank> && errorRank) { DARABONBA_PTR_SET_RVALUE(errorRank_, errorRank) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline InstanceErrorRank& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The ranking data of nodes on which errors occurred within the last month.
      shared_ptr<vector<InstanceErrorRank::ErrorRank>> errorRank_ {};
      // The timestamp at which the rankings were updated.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->instanceErrorRank_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceErrorRank Field Functions 
    bool hasInstanceErrorRank() const { return this->instanceErrorRank_ != nullptr;};
    void deleteInstanceErrorRank() { this->instanceErrorRank_ = nullptr;};
    inline const GetInstanceErrorRankResponseBody::InstanceErrorRank & getInstanceErrorRank() const { DARABONBA_PTR_GET_CONST(instanceErrorRank_, GetInstanceErrorRankResponseBody::InstanceErrorRank) };
    inline GetInstanceErrorRankResponseBody::InstanceErrorRank getInstanceErrorRank() { DARABONBA_PTR_GET(instanceErrorRank_, GetInstanceErrorRankResponseBody::InstanceErrorRank) };
    inline GetInstanceErrorRankResponseBody& setInstanceErrorRank(const GetInstanceErrorRankResponseBody::InstanceErrorRank & instanceErrorRank) { DARABONBA_PTR_SET_VALUE(instanceErrorRank_, instanceErrorRank) };
    inline GetInstanceErrorRankResponseBody& setInstanceErrorRank(GetInstanceErrorRankResponseBody::InstanceErrorRank && instanceErrorRank) { DARABONBA_PTR_SET_RVALUE(instanceErrorRank_, instanceErrorRank) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceErrorRankResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ranking data of nodes on which errors occurred.
    shared_ptr<GetInstanceErrorRankResponseBody::InstanceErrorRank> instanceErrorRank_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
