// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSERVICECONFIGRESPONSEBODYCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSERVICECONFIGRESPONSEBODYCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListClusterServiceConfigResponseBodyConfigListConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class ListClusterServiceConfigResponseBodyConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterServiceConfigResponseBodyConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterServiceConfigResponseBodyConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
    };
    ListClusterServiceConfigResponseBodyConfigList() = default ;
    ListClusterServiceConfigResponseBodyConfigList(const ListClusterServiceConfigResponseBodyConfigList &) = default ;
    ListClusterServiceConfigResponseBodyConfigList(ListClusterServiceConfigResponseBodyConfigList &&) = default ;
    ListClusterServiceConfigResponseBodyConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterServiceConfigResponseBodyConfigList() = default ;
    ListClusterServiceConfigResponseBodyConfigList& operator=(const ListClusterServiceConfigResponseBodyConfigList &) = default ;
    ListClusterServiceConfigResponseBodyConfigList& operator=(ListClusterServiceConfigResponseBodyConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const vector<Models::ListClusterServiceConfigResponseBodyConfigListConfig> & config() const { DARABONBA_PTR_GET_CONST(config_, vector<Models::ListClusterServiceConfigResponseBodyConfigListConfig>) };
    inline vector<Models::ListClusterServiceConfigResponseBodyConfigListConfig> config() { DARABONBA_PTR_GET(config_, vector<Models::ListClusterServiceConfigResponseBodyConfigListConfig>) };
    inline ListClusterServiceConfigResponseBodyConfigList& setConfig(const vector<Models::ListClusterServiceConfigResponseBodyConfigListConfig> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline ListClusterServiceConfigResponseBodyConfigList& setConfig(vector<Models::ListClusterServiceConfigResponseBodyConfigListConfig> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


  protected:
    std::shared_ptr<vector<Models::ListClusterServiceConfigResponseBodyConfigListConfig>> config_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
