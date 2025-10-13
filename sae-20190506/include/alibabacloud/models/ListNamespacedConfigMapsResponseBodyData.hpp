// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAMESPACEDCONFIGMAPSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTNAMESPACEDCONFIGMAPSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNamespacedConfigMapsResponseBodyDataConfigMaps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListNamespacedConfigMapsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNamespacedConfigMapsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigMaps, configMaps_);
    };
    friend void from_json(const Darabonba::Json& j, ListNamespacedConfigMapsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigMaps, configMaps_);
    };
    ListNamespacedConfigMapsResponseBodyData() = default ;
    ListNamespacedConfigMapsResponseBodyData(const ListNamespacedConfigMapsResponseBodyData &) = default ;
    ListNamespacedConfigMapsResponseBodyData(ListNamespacedConfigMapsResponseBodyData &&) = default ;
    ListNamespacedConfigMapsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNamespacedConfigMapsResponseBodyData() = default ;
    ListNamespacedConfigMapsResponseBodyData& operator=(const ListNamespacedConfigMapsResponseBodyData &) = default ;
    ListNamespacedConfigMapsResponseBodyData& operator=(ListNamespacedConfigMapsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configMaps_ == nullptr; };
    // configMaps Field Functions 
    bool hasConfigMaps() const { return this->configMaps_ != nullptr;};
    void deleteConfigMaps() { this->configMaps_ = nullptr;};
    inline const vector<Models::ListNamespacedConfigMapsResponseBodyDataConfigMaps> & configMaps() const { DARABONBA_PTR_GET_CONST(configMaps_, vector<Models::ListNamespacedConfigMapsResponseBodyDataConfigMaps>) };
    inline vector<Models::ListNamespacedConfigMapsResponseBodyDataConfigMaps> configMaps() { DARABONBA_PTR_GET(configMaps_, vector<Models::ListNamespacedConfigMapsResponseBodyDataConfigMaps>) };
    inline ListNamespacedConfigMapsResponseBodyData& setConfigMaps(const vector<Models::ListNamespacedConfigMapsResponseBodyDataConfigMaps> & configMaps) { DARABONBA_PTR_SET_VALUE(configMaps_, configMaps) };
    inline ListNamespacedConfigMapsResponseBodyData& setConfigMaps(vector<Models::ListNamespacedConfigMapsResponseBodyDataConfigMaps> && configMaps) { DARABONBA_PTR_SET_RVALUE(configMaps_, configMaps) };


  protected:
    // The ConfigMap instances.
    std::shared_ptr<vector<Models::ListNamespacedConfigMapsResponseBodyDataConfigMaps>> configMaps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
