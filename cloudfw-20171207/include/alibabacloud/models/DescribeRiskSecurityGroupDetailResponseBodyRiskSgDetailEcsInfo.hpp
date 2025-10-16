// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKSECURITYGROUPDETAILRESPONSEBODYRISKSGDETAILECSINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKSECURITYGROUPDETAILRESPONSEBODYRISKSGDETAILECSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo& obj) { 
      DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_TO_JSON(EcsInstanceName, ecsInstanceName_);
      DARABONBA_PTR_TO_JSON(PrivateIp, privateIp_);
      DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_FROM_JSON(EcsInstanceName, ecsInstanceName_);
      DARABONBA_PTR_FROM_JSON(PrivateIp, privateIp_);
      DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
    };
    DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo() = default ;
    DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo(const DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo &) = default ;
    DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo(DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo &&) = default ;
    DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo() = default ;
    DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo& operator=(const DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo &) = default ;
    DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo& operator=(DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecsInstanceId_ == nullptr
        && return this->ecsInstanceName_ == nullptr && return this->privateIp_ == nullptr && return this->publicIp_ == nullptr; };
    // ecsInstanceId Field Functions 
    bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
    void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
    inline string ecsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
    inline DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


    // ecsInstanceName Field Functions 
    bool hasEcsInstanceName() const { return this->ecsInstanceName_ != nullptr;};
    void deleteEcsInstanceName() { this->ecsInstanceName_ = nullptr;};
    inline string ecsInstanceName() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceName_, "") };
    inline DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo& setEcsInstanceName(string ecsInstanceName) { DARABONBA_PTR_SET_VALUE(ecsInstanceName_, ecsInstanceName) };


    // privateIp Field Functions 
    bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
    void deletePrivateIp() { this->privateIp_ = nullptr;};
    inline string privateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
    inline DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


    // publicIp Field Functions 
    bool hasPublicIp() const { return this->publicIp_ != nullptr;};
    void deletePublicIp() { this->publicIp_ = nullptr;};
    inline string publicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
    inline DescribeRiskSecurityGroupDetailResponseBodyRiskSgDetailEcsInfo& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


  protected:
    std::shared_ptr<string> ecsInstanceId_ = nullptr;
    std::shared_ptr<string> ecsInstanceName_ = nullptr;
    std::shared_ptr<string> privateIp_ = nullptr;
    std::shared_ptr<string> publicIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
