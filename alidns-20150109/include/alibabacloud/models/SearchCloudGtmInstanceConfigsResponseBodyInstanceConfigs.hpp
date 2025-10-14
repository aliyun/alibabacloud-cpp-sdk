// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCLOUDGTMINSTANCECONFIGSRESPONSEBODYINSTANCECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCLOUDGTMINSTANCECONFIGSRESPONSEBODYINSTANCECONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceConfig, instanceConfig_);
    };
    friend void from_json(const Darabonba::Json& j, SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceConfig, instanceConfig_);
    };
    SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigs() = default ;
    SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigs(const SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigs &) = default ;
    SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigs(SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigs &&) = default ;
    SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigs() = default ;
    SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigs& operator=(const SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigs &) = default ;
    SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigs& operator=(SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceConfig_ == nullptr; };
    // instanceConfig Field Functions 
    bool hasInstanceConfig() const { return this->instanceConfig_ != nullptr;};
    void deleteInstanceConfig() { this->instanceConfig_ = nullptr;};
    inline const vector<Models::SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig> & instanceConfig() const { DARABONBA_PTR_GET_CONST(instanceConfig_, vector<Models::SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig>) };
    inline vector<Models::SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig> instanceConfig() { DARABONBA_PTR_GET(instanceConfig_, vector<Models::SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig>) };
    inline SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigs& setInstanceConfig(const vector<Models::SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig> & instanceConfig) { DARABONBA_PTR_SET_VALUE(instanceConfig_, instanceConfig) };
    inline SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigs& setInstanceConfig(vector<Models::SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig> && instanceConfig) { DARABONBA_PTR_SET_RVALUE(instanceConfig_, instanceConfig) };


  protected:
    std::shared_ptr<vector<Models::SearchCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfig>> instanceConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
