// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMINSTANCECONFIGSRESPONSEBODYINSTANCECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMINSTANCECONFIGSRESPONSEBODYINSTANCECONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmInstanceConfigsResponseBodyInstanceConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmInstanceConfigsResponseBodyInstanceConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceConfig, instanceConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmInstanceConfigsResponseBodyInstanceConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceConfig, instanceConfig_);
    };
    ListCloudGtmInstanceConfigsResponseBodyInstanceConfigs() = default ;
    ListCloudGtmInstanceConfigsResponseBodyInstanceConfigs(const ListCloudGtmInstanceConfigsResponseBodyInstanceConfigs &) = default ;
    ListCloudGtmInstanceConfigsResponseBodyInstanceConfigs(ListCloudGtmInstanceConfigsResponseBodyInstanceConfigs &&) = default ;
    ListCloudGtmInstanceConfigsResponseBodyInstanceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmInstanceConfigsResponseBodyInstanceConfigs() = default ;
    ListCloudGtmInstanceConfigsResponseBodyInstanceConfigs& operator=(const ListCloudGtmInstanceConfigsResponseBodyInstanceConfigs &) = default ;
    ListCloudGtmInstanceConfigsResponseBodyInstanceConfigs& operator=(ListCloudGtmInstanceConfigsResponseBodyInstanceConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceConfig_ == nullptr; };
    // instanceConfig Field Functions 
    bool hasInstanceConfig() const { return this->instanceConfig_ != nullptr;};
    void deleteInstanceConfig() { this->instanceConfig_ = nullptr;};
    inline const vector<Models::ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig> & instanceConfig() const { DARABONBA_PTR_GET_CONST(instanceConfig_, vector<Models::ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig>) };
    inline vector<Models::ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig> instanceConfig() { DARABONBA_PTR_GET(instanceConfig_, vector<Models::ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig>) };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigs& setInstanceConfig(const vector<Models::ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig> & instanceConfig) { DARABONBA_PTR_SET_VALUE(instanceConfig_, instanceConfig) };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigs& setInstanceConfig(vector<Models::ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig> && instanceConfig) { DARABONBA_PTR_SET_RVALUE(instanceConfig_, instanceConfig) };


  protected:
    std::shared_ptr<vector<Models::ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig>> instanceConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
