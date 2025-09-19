// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPEDINSTANCESRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPEDINSTANCESRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGroupedInstancesResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupedInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(AsapVulInstanceCount, asapVulInstanceCount_);
      DARABONBA_PTR_TO_JSON(AuthVersionCheckCount, authVersionCheckCount_);
      DARABONBA_PTR_TO_JSON(FieldAliasName, fieldAliasName_);
      DARABONBA_PTR_TO_JSON(GroupFlag, groupFlag_);
      DARABONBA_PTR_TO_JSON(InstanceCoreCount, instanceCoreCount_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(RiskInstanceCount, riskInstanceCount_);
      DARABONBA_PTR_TO_JSON(UnProtectedInstanceCount, unProtectedInstanceCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupedInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(AsapVulInstanceCount, asapVulInstanceCount_);
      DARABONBA_PTR_FROM_JSON(AuthVersionCheckCount, authVersionCheckCount_);
      DARABONBA_PTR_FROM_JSON(FieldAliasName, fieldAliasName_);
      DARABONBA_PTR_FROM_JSON(GroupFlag, groupFlag_);
      DARABONBA_PTR_FROM_JSON(InstanceCoreCount, instanceCoreCount_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(RiskInstanceCount, riskInstanceCount_);
      DARABONBA_PTR_FROM_JSON(UnProtectedInstanceCount, unProtectedInstanceCount_);
    };
    DescribeGroupedInstancesResponseBodyInstances() = default ;
    DescribeGroupedInstancesResponseBodyInstances(const DescribeGroupedInstancesResponseBodyInstances &) = default ;
    DescribeGroupedInstancesResponseBodyInstances(DescribeGroupedInstancesResponseBodyInstances &&) = default ;
    DescribeGroupedInstancesResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupedInstancesResponseBodyInstances() = default ;
    DescribeGroupedInstancesResponseBodyInstances& operator=(const DescribeGroupedInstancesResponseBodyInstances &) = default ;
    DescribeGroupedInstancesResponseBodyInstances& operator=(DescribeGroupedInstancesResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asapVulInstanceCount_ != nullptr
        && this->authVersionCheckCount_ != nullptr && this->fieldAliasName_ != nullptr && this->groupFlag_ != nullptr && this->instanceCoreCount_ != nullptr && this->instanceCount_ != nullptr
        && this->os_ != nullptr && this->riskInstanceCount_ != nullptr && this->unProtectedInstanceCount_ != nullptr; };
    // asapVulInstanceCount Field Functions 
    bool hasAsapVulInstanceCount() const { return this->asapVulInstanceCount_ != nullptr;};
    void deleteAsapVulInstanceCount() { this->asapVulInstanceCount_ = nullptr;};
    inline int64_t asapVulInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(asapVulInstanceCount_, 0L) };
    inline DescribeGroupedInstancesResponseBodyInstances& setAsapVulInstanceCount(int64_t asapVulInstanceCount) { DARABONBA_PTR_SET_VALUE(asapVulInstanceCount_, asapVulInstanceCount) };


    // authVersionCheckCount Field Functions 
    bool hasAuthVersionCheckCount() const { return this->authVersionCheckCount_ != nullptr;};
    void deleteAuthVersionCheckCount() { this->authVersionCheckCount_ = nullptr;};
    inline int32_t authVersionCheckCount() const { DARABONBA_PTR_GET_DEFAULT(authVersionCheckCount_, 0) };
    inline DescribeGroupedInstancesResponseBodyInstances& setAuthVersionCheckCount(int32_t authVersionCheckCount) { DARABONBA_PTR_SET_VALUE(authVersionCheckCount_, authVersionCheckCount) };


    // fieldAliasName Field Functions 
    bool hasFieldAliasName() const { return this->fieldAliasName_ != nullptr;};
    void deleteFieldAliasName() { this->fieldAliasName_ = nullptr;};
    inline string fieldAliasName() const { DARABONBA_PTR_GET_DEFAULT(fieldAliasName_, "") };
    inline DescribeGroupedInstancesResponseBodyInstances& setFieldAliasName(string fieldAliasName) { DARABONBA_PTR_SET_VALUE(fieldAliasName_, fieldAliasName) };


    // groupFlag Field Functions 
    bool hasGroupFlag() const { return this->groupFlag_ != nullptr;};
    void deleteGroupFlag() { this->groupFlag_ = nullptr;};
    inline int32_t groupFlag() const { DARABONBA_PTR_GET_DEFAULT(groupFlag_, 0) };
    inline DescribeGroupedInstancesResponseBodyInstances& setGroupFlag(int32_t groupFlag) { DARABONBA_PTR_SET_VALUE(groupFlag_, groupFlag) };


    // instanceCoreCount Field Functions 
    bool hasInstanceCoreCount() const { return this->instanceCoreCount_ != nullptr;};
    void deleteInstanceCoreCount() { this->instanceCoreCount_ = nullptr;};
    inline int64_t instanceCoreCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCoreCount_, 0L) };
    inline DescribeGroupedInstancesResponseBodyInstances& setInstanceCoreCount(int64_t instanceCoreCount) { DARABONBA_PTR_SET_VALUE(instanceCoreCount_, instanceCoreCount) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline string instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, "") };
    inline DescribeGroupedInstancesResponseBodyInstances& setInstanceCount(string instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeGroupedInstancesResponseBodyInstances& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // riskInstanceCount Field Functions 
    bool hasRiskInstanceCount() const { return this->riskInstanceCount_ != nullptr;};
    void deleteRiskInstanceCount() { this->riskInstanceCount_ = nullptr;};
    inline string riskInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(riskInstanceCount_, "") };
    inline DescribeGroupedInstancesResponseBodyInstances& setRiskInstanceCount(string riskInstanceCount) { DARABONBA_PTR_SET_VALUE(riskInstanceCount_, riskInstanceCount) };


    // unProtectedInstanceCount Field Functions 
    bool hasUnProtectedInstanceCount() const { return this->unProtectedInstanceCount_ != nullptr;};
    void deleteUnProtectedInstanceCount() { this->unProtectedInstanceCount_ = nullptr;};
    inline string unProtectedInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(unProtectedInstanceCount_, "") };
    inline DescribeGroupedInstancesResponseBodyInstances& setUnProtectedInstanceCount(string unProtectedInstanceCount) { DARABONBA_PTR_SET_VALUE(unProtectedInstanceCount_, unProtectedInstanceCount) };


  protected:
    // The number of assets on which high-risk vulnerabilities are detected.
    std::shared_ptr<int64_t> asapVulInstanceCount_ = nullptr;
    // The number of assets that are protected by the specified edition.
    std::shared_ptr<int32_t> authVersionCheckCount_ = nullptr;
    // The name of the server group.
    std::shared_ptr<string> fieldAliasName_ = nullptr;
    // The type of the server group. Valid values:
    // 
    // *   **0**: the default group
    // *   **1**: other group
    std::shared_ptr<int32_t> groupFlag_ = nullptr;
    // The number of cores of assets in the specified asset type.
    // 
    // >  If the **MachineTypes** request parameter is not specified, the value of the InstanceCoreCount parameter indicates the total number of cores of assets within your account.
    std::shared_ptr<int64_t> instanceCoreCount_ = nullptr;
    // The total number of assets that belong to the specified type.
    // 
    // >  If the **MachineTypes** request parameter is not specified, the value of the InstanceCount parameter is the total number of your assets.
    std::shared_ptr<string> instanceCount_ = nullptr;
    // The operating system type of the asset. Valid values:
    // 
    // * **windows**
    // * **linux**
    // 
    // > This parameter is returned only when Lang is set to zh.
    std::shared_ptr<string> os_ = nullptr;
    // The number of assets that are at risk.
    std::shared_ptr<string> riskInstanceCount_ = nullptr;
    // The number of assets that are not protected by Security Center.
    std::shared_ptr<string> unProtectedInstanceCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
