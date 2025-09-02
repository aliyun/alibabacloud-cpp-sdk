// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEERRORRANKRESPONSEBODYINSTANCEERRORRANKERRORRANK_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEERRORRANKRESPONSEBODYINSTANCEERRORRANKERRORRANK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetInstanceErrorRankResponseBodyInstanceErrorRankErrorRank : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceErrorRankResponseBodyInstanceErrorRankErrorRank& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PrgType, prgType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceErrorRankResponseBodyInstanceErrorRankErrorRank& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PrgType, prgType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetInstanceErrorRankResponseBodyInstanceErrorRankErrorRank() = default ;
    GetInstanceErrorRankResponseBodyInstanceErrorRankErrorRank(const GetInstanceErrorRankResponseBodyInstanceErrorRankErrorRank &) = default ;
    GetInstanceErrorRankResponseBodyInstanceErrorRankErrorRank(GetInstanceErrorRankResponseBodyInstanceErrorRankErrorRank &&) = default ;
    GetInstanceErrorRankResponseBodyInstanceErrorRankErrorRank(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceErrorRankResponseBodyInstanceErrorRankErrorRank() = default ;
    GetInstanceErrorRankResponseBodyInstanceErrorRankErrorRank& operator=(const GetInstanceErrorRankResponseBodyInstanceErrorRankErrorRank &) = default ;
    GetInstanceErrorRankResponseBodyInstanceErrorRankErrorRank& operator=(GetInstanceErrorRankResponseBodyInstanceErrorRankErrorRank &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->nodeId_ != nullptr && this->nodeName_ != nullptr && this->owner_ != nullptr && this->prgType_ != nullptr && this->projectId_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetInstanceErrorRankResponseBodyInstanceErrorRankErrorRank& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline GetInstanceErrorRankResponseBodyInstanceErrorRankErrorRank& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetInstanceErrorRankResponseBodyInstanceErrorRankErrorRank& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetInstanceErrorRankResponseBodyInstanceErrorRankErrorRank& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // prgType Field Functions 
    bool hasPrgType() const { return this->prgType_ != nullptr;};
    void deletePrgType() { this->prgType_ = nullptr;};
    inline int32_t prgType() const { DARABONBA_PTR_GET_DEFAULT(prgType_, 0) };
    inline GetInstanceErrorRankResponseBodyInstanceErrorRankErrorRank& setPrgType(int32_t prgType) { DARABONBA_PTR_SET_VALUE(prgType_, prgType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetInstanceErrorRankResponseBodyInstanceErrorRankErrorRank& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The number of errors that occurred on the node.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The node ID.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The ID of the Alibaba Cloud account used by the node owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The type of the node.
    std::shared_ptr<int32_t> prgType_ = nullptr;
    // The DataWorks workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
