// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDCINFORESPONSEBODYDATAINSTANCETOPOLOGYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDCINFORESPONSEBODYDATAINSTANCETOPOLOGYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdcInfoResponseBodyDataInstanceTopologyListPhysicalNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeCdcInfoResponseBodyDataInstanceTopologyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdcInfoResponseBodyDataInstanceTopologyList& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(HashLevel, hashLevel_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PhysicalNodes, physicalNodes_);
      DARABONBA_PTR_TO_JSON(StreamNum, streamNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdcInfoResponseBodyDataInstanceTopologyList& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(HashLevel, hashLevel_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PhysicalNodes, physicalNodes_);
      DARABONBA_PTR_FROM_JSON(StreamNum, streamNum_);
    };
    DescribeCdcInfoResponseBodyDataInstanceTopologyList() = default ;
    DescribeCdcInfoResponseBodyDataInstanceTopologyList(const DescribeCdcInfoResponseBodyDataInstanceTopologyList &) = default ;
    DescribeCdcInfoResponseBodyDataInstanceTopologyList(DescribeCdcInfoResponseBodyDataInstanceTopologyList &&) = default ;
    DescribeCdcInfoResponseBodyDataInstanceTopologyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdcInfoResponseBodyDataInstanceTopologyList() = default ;
    DescribeCdcInfoResponseBodyDataInstanceTopologyList& operator=(const DescribeCdcInfoResponseBodyDataInstanceTopologyList &) = default ;
    DescribeCdcInfoResponseBodyDataInstanceTopologyList& operator=(DescribeCdcInfoResponseBodyDataInstanceTopologyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterType_ == nullptr
        && return this->comment_ == nullptr && return this->groupName_ == nullptr && return this->hashLevel_ == nullptr && return this->instanceName_ == nullptr && return this->physicalNodes_ == nullptr
        && return this->streamNum_ == nullptr; };
    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeCdcInfoResponseBodyDataInstanceTopologyList& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline DescribeCdcInfoResponseBodyDataInstanceTopologyList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeCdcInfoResponseBodyDataInstanceTopologyList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // hashLevel Field Functions 
    bool hasHashLevel() const { return this->hashLevel_ != nullptr;};
    void deleteHashLevel() { this->hashLevel_ = nullptr;};
    inline string hashLevel() const { DARABONBA_PTR_GET_DEFAULT(hashLevel_, "") };
    inline DescribeCdcInfoResponseBodyDataInstanceTopologyList& setHashLevel(string hashLevel) { DARABONBA_PTR_SET_VALUE(hashLevel_, hashLevel) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeCdcInfoResponseBodyDataInstanceTopologyList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // physicalNodes Field Functions 
    bool hasPhysicalNodes() const { return this->physicalNodes_ != nullptr;};
    void deletePhysicalNodes() { this->physicalNodes_ = nullptr;};
    inline const vector<Models::DescribeCdcInfoResponseBodyDataInstanceTopologyListPhysicalNodes> & physicalNodes() const { DARABONBA_PTR_GET_CONST(physicalNodes_, vector<Models::DescribeCdcInfoResponseBodyDataInstanceTopologyListPhysicalNodes>) };
    inline vector<Models::DescribeCdcInfoResponseBodyDataInstanceTopologyListPhysicalNodes> physicalNodes() { DARABONBA_PTR_GET(physicalNodes_, vector<Models::DescribeCdcInfoResponseBodyDataInstanceTopologyListPhysicalNodes>) };
    inline DescribeCdcInfoResponseBodyDataInstanceTopologyList& setPhysicalNodes(const vector<Models::DescribeCdcInfoResponseBodyDataInstanceTopologyListPhysicalNodes> & physicalNodes) { DARABONBA_PTR_SET_VALUE(physicalNodes_, physicalNodes) };
    inline DescribeCdcInfoResponseBodyDataInstanceTopologyList& setPhysicalNodes(vector<Models::DescribeCdcInfoResponseBodyDataInstanceTopologyListPhysicalNodes> && physicalNodes) { DARABONBA_PTR_SET_RVALUE(physicalNodes_, physicalNodes) };


    // streamNum Field Functions 
    bool hasStreamNum() const { return this->streamNum_ != nullptr;};
    void deleteStreamNum() { this->streamNum_ = nullptr;};
    inline int32_t streamNum() const { DARABONBA_PTR_GET_DEFAULT(streamNum_, 0) };
    inline DescribeCdcInfoResponseBodyDataInstanceTopologyList& setStreamNum(int32_t streamNum) { DARABONBA_PTR_SET_VALUE(streamNum_, streamNum) };


  protected:
    std::shared_ptr<string> clusterType_ = nullptr;
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<string> hashLevel_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<vector<Models::DescribeCdcInfoResponseBodyDataInstanceTopologyListPhysicalNodes>> physicalNodes_ = nullptr;
    std::shared_ptr<int32_t> streamNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
