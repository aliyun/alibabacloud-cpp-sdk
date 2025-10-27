// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAFFECTEDASSETSRESPONSEBODYASSETLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAFFECTEDASSETSRESPONSEBODYASSETLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAffectedAssetsResponseBodyAssetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAffectedAssetsResponseBodyAssetList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(RiskNum, riskNum_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAffectedAssetsResponseBodyAssetList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(RiskNum, riskNum_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeAffectedAssetsResponseBodyAssetList() = default ;
    DescribeAffectedAssetsResponseBodyAssetList(const DescribeAffectedAssetsResponseBodyAssetList &) = default ;
    DescribeAffectedAssetsResponseBodyAssetList(DescribeAffectedAssetsResponseBodyAssetList &&) = default ;
    DescribeAffectedAssetsResponseBodyAssetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAffectedAssetsResponseBodyAssetList() = default ;
    DescribeAffectedAssetsResponseBodyAssetList& operator=(const DescribeAffectedAssetsResponseBodyAssetList &) = default ;
    DescribeAffectedAssetsResponseBodyAssetList& operator=(DescribeAffectedAssetsResponseBodyAssetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->riskNum_ == nullptr && return this->uuid_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeAffectedAssetsResponseBodyAssetList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeAffectedAssetsResponseBodyAssetList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeAffectedAssetsResponseBodyAssetList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeAffectedAssetsResponseBodyAssetList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // riskNum Field Functions 
    bool hasRiskNum() const { return this->riskNum_ != nullptr;};
    void deleteRiskNum() { this->riskNum_ = nullptr;};
    inline int32_t riskNum() const { DARABONBA_PTR_GET_DEFAULT(riskNum_, 0) };
    inline DescribeAffectedAssetsResponseBodyAssetList& setRiskNum(int32_t riskNum) { DARABONBA_PTR_SET_VALUE(riskNum_, riskNum) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeAffectedAssetsResponseBodyAssetList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The number of viruses detected on the server.
    std::shared_ptr<int32_t> riskNum_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
