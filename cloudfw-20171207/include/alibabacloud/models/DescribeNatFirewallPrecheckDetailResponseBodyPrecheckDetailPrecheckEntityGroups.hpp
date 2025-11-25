// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLPRECHECKDETAILRESPONSEBODYPRECHECKDETAILPRECHECKENTITYGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLPRECHECKDETAILRESPONSEBODYPRECHECKDETAILPRECHECKENTITYGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroupsPrecheckEntities.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups& obj) { 
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PrecheckEntities, precheckEntities_);
      DARABONBA_PTR_TO_JSON(PrecheckEntityGroupStatus, precheckEntityGroupStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PrecheckEntities, precheckEntities_);
      DARABONBA_PTR_FROM_JSON(PrecheckEntityGroupStatus, precheckEntityGroupStatus_);
    };
    DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups() = default ;
    DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups(const DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups &) = default ;
    DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups(DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups &&) = default ;
    DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups() = default ;
    DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups& operator=(const DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups &) = default ;
    DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups& operator=(DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedCount_ == nullptr
        && return this->name_ == nullptr && return this->precheckEntities_ == nullptr && return this->precheckEntityGroupStatus_ == nullptr; };
    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int32_t failedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
    inline DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // precheckEntities Field Functions 
    bool hasPrecheckEntities() const { return this->precheckEntities_ != nullptr;};
    void deletePrecheckEntities() { this->precheckEntities_ = nullptr;};
    inline const vector<Models::DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroupsPrecheckEntities> & precheckEntities() const { DARABONBA_PTR_GET_CONST(precheckEntities_, vector<Models::DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroupsPrecheckEntities>) };
    inline vector<Models::DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroupsPrecheckEntities> precheckEntities() { DARABONBA_PTR_GET(precheckEntities_, vector<Models::DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroupsPrecheckEntities>) };
    inline DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups& setPrecheckEntities(const vector<Models::DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroupsPrecheckEntities> & precheckEntities) { DARABONBA_PTR_SET_VALUE(precheckEntities_, precheckEntities) };
    inline DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups& setPrecheckEntities(vector<Models::DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroupsPrecheckEntities> && precheckEntities) { DARABONBA_PTR_SET_RVALUE(precheckEntities_, precheckEntities) };


    // precheckEntityGroupStatus Field Functions 
    bool hasPrecheckEntityGroupStatus() const { return this->precheckEntityGroupStatus_ != nullptr;};
    void deletePrecheckEntityGroupStatus() { this->precheckEntityGroupStatus_ = nullptr;};
    inline string precheckEntityGroupStatus() const { DARABONBA_PTR_GET_DEFAULT(precheckEntityGroupStatus_, "") };
    inline DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroups& setPrecheckEntityGroupStatus(string precheckEntityGroupStatus) { DARABONBA_PTR_SET_VALUE(precheckEntityGroupStatus_, precheckEntityGroupStatus) };


  protected:
    std::shared_ptr<int32_t> failedCount_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetailPrecheckEntityGroupsPrecheckEntities>> precheckEntities_ = nullptr;
    std::shared_ptr<string> precheckEntityGroupStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
