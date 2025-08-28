// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCGRANTRULESTOECRRESPONSEBODYGRANTRULEMODELS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCGRANTRULESTOECRRESPONSEBODYGRANTRULEMODELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(EcrOwnerId, ecrOwnerId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceUid, instanceUid_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(EcrOwnerId, ecrOwnerId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceUid, instanceUid_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels() = default ;
    DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels(const DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels &) = default ;
    DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels(DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels &&) = default ;
    DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels() = default ;
    DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels& operator=(const DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels &) = default ;
    DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels& operator=(DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->ecrId_ != nullptr && this->ecrOwnerId_ != nullptr && this->instanceId_ != nullptr && this->instanceUid_ != nullptr && this->regionNo_ != nullptr
        && this->type_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string ecrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // ecrOwnerId Field Functions 
    bool hasEcrOwnerId() const { return this->ecrOwnerId_ != nullptr;};
    void deleteEcrOwnerId() { this->ecrOwnerId_ = nullptr;};
    inline int64_t ecrOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ecrOwnerId_, 0L) };
    inline DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels& setEcrOwnerId(int64_t ecrOwnerId) { DARABONBA_PTR_SET_VALUE(ecrOwnerId_, ecrOwnerId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceUid Field Functions 
    bool hasInstanceUid() const { return this->instanceUid_ != nullptr;};
    void deleteInstanceUid() { this->instanceUid_ = nullptr;};
    inline int64_t instanceUid() const { DARABONBA_PTR_GET_DEFAULT(instanceUid_, 0L) };
    inline DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels& setInstanceUid(int64_t instanceUid) { DARABONBA_PTR_SET_VALUE(instanceUid_, instanceUid) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeVpcGrantRulesToEcrResponseBodyGrantRuleModels& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> ecrId_ = nullptr;
    std::shared_ptr<int64_t> ecrOwnerId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> instanceUid_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
