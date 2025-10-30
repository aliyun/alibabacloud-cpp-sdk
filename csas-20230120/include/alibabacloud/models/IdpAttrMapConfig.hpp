// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IDPATTRMAPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_IDPATTRMAPCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IdpAttrMapConfigItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class IdpAttrMapConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IdpAttrMapConfig& obj) { 
      DARABONBA_PTR_TO_JSON(MapItems, mapItems_);
    };
    friend void from_json(const Darabonba::Json& j, IdpAttrMapConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(MapItems, mapItems_);
    };
    IdpAttrMapConfig() = default ;
    IdpAttrMapConfig(const IdpAttrMapConfig &) = default ;
    IdpAttrMapConfig(IdpAttrMapConfig &&) = default ;
    IdpAttrMapConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IdpAttrMapConfig() = default ;
    IdpAttrMapConfig& operator=(const IdpAttrMapConfig &) = default ;
    IdpAttrMapConfig& operator=(IdpAttrMapConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mapItems_ == nullptr; };
    // mapItems Field Functions 
    bool hasMapItems() const { return this->mapItems_ != nullptr;};
    void deleteMapItems() { this->mapItems_ = nullptr;};
    inline const vector<IdpAttrMapConfigItem> & mapItems() const { DARABONBA_PTR_GET_CONST(mapItems_, vector<IdpAttrMapConfigItem>) };
    inline vector<IdpAttrMapConfigItem> mapItems() { DARABONBA_PTR_GET(mapItems_, vector<IdpAttrMapConfigItem>) };
    inline IdpAttrMapConfig& setMapItems(const vector<IdpAttrMapConfigItem> & mapItems) { DARABONBA_PTR_SET_VALUE(mapItems_, mapItems) };
    inline IdpAttrMapConfig& setMapItems(vector<IdpAttrMapConfigItem> && mapItems) { DARABONBA_PTR_SET_RVALUE(mapItems_, mapItems) };


  protected:
    std::shared_ptr<vector<IdpAttrMapConfigItem>> mapItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
