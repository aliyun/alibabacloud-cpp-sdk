// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATALOGSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_CATALOGSETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class CatalogSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CatalogSettings& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
    };
    friend void from_json(const Darabonba::Json& j, CatalogSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
    };
    CatalogSettings() = default ;
    CatalogSettings(const CatalogSettings &) = default ;
    CatalogSettings(CatalogSettings &&) = default ;
    CatalogSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CatalogSettings() = default ;
    CatalogSettings& operator=(const CatalogSettings &) = default ;
    CatalogSettings& operator=(CatalogSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const map<string, string> & config() const { DARABONBA_PTR_GET_CONST(config_, map<string, string>) };
    inline map<string, string> config() { DARABONBA_PTR_GET(config_, map<string, string>) };
    inline CatalogSettings& setConfig(const map<string, string> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline CatalogSettings& setConfig(map<string, string> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


  protected:
    std::shared_ptr<map<string, string>> config_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
