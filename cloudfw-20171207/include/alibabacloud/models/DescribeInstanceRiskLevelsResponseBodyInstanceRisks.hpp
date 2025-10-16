// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERISKLEVELSRESPONSEBODYINSTANCERISKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERISKLEVELSRESPONSEBODYINSTANCERISKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInstanceRiskLevelsResponseBodyInstanceRisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceRiskLevelsResponseBodyInstanceRisks& obj) { 
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Level, level_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRiskLevelsResponseBodyInstanceRisks& obj) { 
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
    };
    DescribeInstanceRiskLevelsResponseBodyInstanceRisks() = default ;
    DescribeInstanceRiskLevelsResponseBodyInstanceRisks(const DescribeInstanceRiskLevelsResponseBodyInstanceRisks &) = default ;
    DescribeInstanceRiskLevelsResponseBodyInstanceRisks(DescribeInstanceRiskLevelsResponseBodyInstanceRisks &&) = default ;
    DescribeInstanceRiskLevelsResponseBodyInstanceRisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceRiskLevelsResponseBodyInstanceRisks() = default ;
    DescribeInstanceRiskLevelsResponseBodyInstanceRisks& operator=(const DescribeInstanceRiskLevelsResponseBodyInstanceRisks &) = default ;
    DescribeInstanceRiskLevelsResponseBodyInstanceRisks& operator=(DescribeInstanceRiskLevelsResponseBodyInstanceRisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->details_ == nullptr
        && return this->instanceId_ == nullptr && return this->level_ == nullptr; };
    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<Models::DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails> & details() const { DARABONBA_PTR_GET_CONST(details_, vector<Models::DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails>) };
    inline vector<Models::DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails> details() { DARABONBA_PTR_GET(details_, vector<Models::DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails>) };
    inline DescribeInstanceRiskLevelsResponseBodyInstanceRisks& setDetails(const vector<Models::DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline DescribeInstanceRiskLevelsResponseBodyInstanceRisks& setDetails(vector<Models::DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceRiskLevelsResponseBodyInstanceRisks& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeInstanceRiskLevelsResponseBodyInstanceRisks& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


  protected:
    // The risk levels of the Elastic Compute Service (ECS) instance.
    std::shared_ptr<vector<Models::DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails>> details_ = nullptr;
    // The instance ID of your Cloud Firewall.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The risk levels. Valid values:
    // 
    // *   **medium**
    std::shared_ptr<string> level_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
