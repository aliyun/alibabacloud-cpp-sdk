// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSREFERENCERESPONSEBODYADDRESSPOOLSADDRESSPOOLINSTANCECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMADDRESSREFERENCERESPONSEBODYADDRESSPOOLSADDRESSPOOLINSTANCECONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigsInstanceConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceConfig, instanceConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceConfig, instanceConfig_);
    };
    DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs() = default ;
    DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs(const DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs &) = default ;
    DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs(DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs &&) = default ;
    DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs() = default ;
    DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs& operator=(const DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs &) = default ;
    DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs& operator=(DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceConfig_ != nullptr; };
    // instanceConfig Field Functions 
    bool hasInstanceConfig() const { return this->instanceConfig_ != nullptr;};
    void deleteInstanceConfig() { this->instanceConfig_ = nullptr;};
    inline const vector<Models::DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigsInstanceConfig> & instanceConfig() const { DARABONBA_PTR_GET_CONST(instanceConfig_, vector<Models::DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigsInstanceConfig>) };
    inline vector<Models::DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigsInstanceConfig> instanceConfig() { DARABONBA_PTR_GET(instanceConfig_, vector<Models::DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigsInstanceConfig>) };
    inline DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs& setInstanceConfig(const vector<Models::DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigsInstanceConfig> & instanceConfig) { DARABONBA_PTR_SET_VALUE(instanceConfig_, instanceConfig) };
    inline DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigs& setInstanceConfig(vector<Models::DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigsInstanceConfig> && instanceConfig) { DARABONBA_PTR_SET_RVALUE(instanceConfig_, instanceConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeCloudGtmAddressReferenceResponseBodyAddressPoolsAddressPoolInstanceConfigsInstanceConfig>> instanceConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
