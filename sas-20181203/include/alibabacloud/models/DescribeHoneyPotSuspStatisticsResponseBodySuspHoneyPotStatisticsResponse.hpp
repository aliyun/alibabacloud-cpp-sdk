// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHONEYPOTSUSPSTATISTICSRESPONSEBODYSUSPHONEYPOTSTATISTICSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHONEYPOTSUSPSTATISTICSRESPONSEBODYSUSPHONEYPOTSTATISTICSRESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
    };
    DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse() = default ;
    DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse(const DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse &) = default ;
    DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse(DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse &&) = default ;
    DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse() = default ;
    DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse& operator=(const DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse &) = default ;
    DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse& operator=(DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->type_ == nullptr && return this->vpcId_ == nullptr && return this->vpcName_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


  protected:
    // The total number of alerts that are generated for the asset.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The ID of the server.
    // 
    // > This parameter is returned only when **StatisticsKeyType** is set to **uuid**.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the server.
    // 
    // > This parameter is returned only when **StatisticsKeyType** is set to **uuid**.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The type of the asset. Valid values:
    // 
    // *   **vpcInstanceId**: VPC
    // *   **uuid**: server
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the VPC.
    // 
    // > This parameter is returned only when **StatisticsKeyType** is set to **vpcInstanceId**.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The name of the VPC.
    // 
    // > This parameter is returned only when **StatisticsKeyType** is set to **vpcInstanceId**.
    std::shared_ptr<string> vpcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
