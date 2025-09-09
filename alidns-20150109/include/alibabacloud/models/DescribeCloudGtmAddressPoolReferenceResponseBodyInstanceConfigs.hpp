// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSPOOLREFERENCERESPONSEBODYINSTANCECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSPOOLREFERENCERESPONSEBODYINSTANCECONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigsInstanceConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceConfig, instanceConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceConfig, instanceConfig_);
    };
    DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs() = default ;
    DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs(const DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs &) = default ;
    DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs(DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs &&) = default ;
    DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs() = default ;
    DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs& operator=(const DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs &) = default ;
    DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs& operator=(DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceConfig_ != nullptr; };
    // instanceConfig Field Functions 
    bool hasInstanceConfig() const { return this->instanceConfig_ != nullptr;};
    void deleteInstanceConfig() { this->instanceConfig_ = nullptr;};
    inline const vector<Models::DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigsInstanceConfig> & instanceConfig() const { DARABONBA_PTR_GET_CONST(instanceConfig_, vector<Models::DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigsInstanceConfig>) };
    inline vector<Models::DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigsInstanceConfig> instanceConfig() { DARABONBA_PTR_GET(instanceConfig_, vector<Models::DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigsInstanceConfig>) };
    inline DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs& setInstanceConfig(const vector<Models::DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigsInstanceConfig> & instanceConfig) { DARABONBA_PTR_SET_VALUE(instanceConfig_, instanceConfig) };
    inline DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigs& setInstanceConfig(vector<Models::DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigsInstanceConfig> && instanceConfig) { DARABONBA_PTR_SET_RVALUE(instanceConfig_, instanceConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeCloudGtmAddressPoolReferenceResponseBodyInstanceConfigsInstanceConfig>> instanceConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
