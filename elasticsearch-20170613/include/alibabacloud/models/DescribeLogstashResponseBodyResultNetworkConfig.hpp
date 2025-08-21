// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGSTASHRESPONSEBODYRESULTNETWORKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGSTASHRESPONSEBODYRESULTNETWORKCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeLogstashResponseBodyResultNetworkConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogstashResponseBodyResultNetworkConfig& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(vsArea, vsArea_);
      DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogstashResponseBodyResultNetworkConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(vsArea, vsArea_);
      DARABONBA_PTR_FROM_JSON(vswitchId, vswitchId_);
    };
    DescribeLogstashResponseBodyResultNetworkConfig() = default ;
    DescribeLogstashResponseBodyResultNetworkConfig(const DescribeLogstashResponseBodyResultNetworkConfig &) = default ;
    DescribeLogstashResponseBodyResultNetworkConfig(DescribeLogstashResponseBodyResultNetworkConfig &&) = default ;
    DescribeLogstashResponseBodyResultNetworkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogstashResponseBodyResultNetworkConfig() = default ;
    DescribeLogstashResponseBodyResultNetworkConfig& operator=(const DescribeLogstashResponseBodyResultNetworkConfig &) = default ;
    DescribeLogstashResponseBodyResultNetworkConfig& operator=(DescribeLogstashResponseBodyResultNetworkConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr
        && this->vpcId_ != nullptr && this->vsArea_ != nullptr && this->vswitchId_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeLogstashResponseBodyResultNetworkConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeLogstashResponseBodyResultNetworkConfig& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vsArea Field Functions 
    bool hasVsArea() const { return this->vsArea_ != nullptr;};
    void deleteVsArea() { this->vsArea_ = nullptr;};
    inline string vsArea() const { DARABONBA_PTR_GET_DEFAULT(vsArea_, "") };
    inline DescribeLogstashResponseBodyResultNetworkConfig& setVsArea(string vsArea) { DARABONBA_PTR_SET_VALUE(vsArea_, vsArea) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeLogstashResponseBodyResultNetworkConfig& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    // The ID of the vSwitch to which the instance is connected.
    std::shared_ptr<string> type_ = nullptr;
    // The zone where the cluster resides.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The network type of the instance. Valid values: Currently, only Virtual Private Cloud (VPC) are supported.
    std::shared_ptr<string> vsArea_ = nullptr;
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
