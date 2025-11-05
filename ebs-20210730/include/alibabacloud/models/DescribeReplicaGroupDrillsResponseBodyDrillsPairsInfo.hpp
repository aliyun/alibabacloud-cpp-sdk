// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICAGROUPDRILLSRESPONSEBODYDRILLSPAIRSINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICAGROUPDRILLSRESPONSEBODYDRILLSPAIRSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DrillDiskId, drillDiskId_);
      DARABONBA_PTR_TO_JSON(DrillDiskStatus, drillDiskStatus_);
      DARABONBA_PTR_TO_JSON(PairId, pairId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DrillDiskId, drillDiskId_);
      DARABONBA_PTR_FROM_JSON(DrillDiskStatus, drillDiskStatus_);
      DARABONBA_PTR_FROM_JSON(PairId, pairId_);
    };
    DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo() = default ;
    DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo(const DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo &) = default ;
    DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo(DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo &&) = default ;
    DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo() = default ;
    DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo& operator=(const DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo &) = default ;
    DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo& operator=(DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->drillDiskId_ == nullptr
        && return this->drillDiskStatus_ == nullptr && return this->pairId_ == nullptr; };
    // drillDiskId Field Functions 
    bool hasDrillDiskId() const { return this->drillDiskId_ != nullptr;};
    void deleteDrillDiskId() { this->drillDiskId_ = nullptr;};
    inline string drillDiskId() const { DARABONBA_PTR_GET_DEFAULT(drillDiskId_, "") };
    inline DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo& setDrillDiskId(string drillDiskId) { DARABONBA_PTR_SET_VALUE(drillDiskId_, drillDiskId) };


    // drillDiskStatus Field Functions 
    bool hasDrillDiskStatus() const { return this->drillDiskStatus_ != nullptr;};
    void deleteDrillDiskStatus() { this->drillDiskStatus_ = nullptr;};
    inline string drillDiskStatus() const { DARABONBA_PTR_GET_DEFAULT(drillDiskStatus_, "") };
    inline DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo& setDrillDiskStatus(string drillDiskStatus) { DARABONBA_PTR_SET_VALUE(drillDiskStatus_, drillDiskStatus) };


    // pairId Field Functions 
    bool hasPairId() const { return this->pairId_ != nullptr;};
    void deletePairId() { this->pairId_ = nullptr;};
    inline string pairId() const { DARABONBA_PTR_GET_DEFAULT(pairId_, "") };
    inline DescribeReplicaGroupDrillsResponseBodyDrillsPairsInfo& setPairId(string pairId) { DARABONBA_PTR_SET_VALUE(pairId_, pairId) };


  protected:
    // The ID of the drill disk.
    std::shared_ptr<string> drillDiskId_ = nullptr;
    // The status of the drill disk. Valid values:
    // 
    // *   created
    // *   deleted
    // *   creating
    // *   deleting
    // 
    // >  This parameter can also display error code details if your drill disk fails to be created or deleted.
    std::shared_ptr<string> drillDiskStatus_ = nullptr;
    // The ID of the replication pair.
    std::shared_ptr<string> pairId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
