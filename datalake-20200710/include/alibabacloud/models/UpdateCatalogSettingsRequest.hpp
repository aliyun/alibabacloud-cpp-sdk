// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECATALOGSETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECATALOGSETTINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CatalogSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class UpdateCatalogSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCatalogSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(CatalogSettings, catalogSettings_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCatalogSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(CatalogSettings, catalogSettings_);
    };
    UpdateCatalogSettingsRequest() = default ;
    UpdateCatalogSettingsRequest(const UpdateCatalogSettingsRequest &) = default ;
    UpdateCatalogSettingsRequest(UpdateCatalogSettingsRequest &&) = default ;
    UpdateCatalogSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCatalogSettingsRequest() = default ;
    UpdateCatalogSettingsRequest& operator=(const UpdateCatalogSettingsRequest &) = default ;
    UpdateCatalogSettingsRequest& operator=(UpdateCatalogSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->catalogSettings_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline UpdateCatalogSettingsRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // catalogSettings Field Functions 
    bool hasCatalogSettings() const { return this->catalogSettings_ != nullptr;};
    void deleteCatalogSettings() { this->catalogSettings_ = nullptr;};
    inline const CatalogSettings & catalogSettings() const { DARABONBA_PTR_GET_CONST(catalogSettings_, CatalogSettings) };
    inline CatalogSettings catalogSettings() { DARABONBA_PTR_GET(catalogSettings_, CatalogSettings) };
    inline UpdateCatalogSettingsRequest& setCatalogSettings(const CatalogSettings & catalogSettings) { DARABONBA_PTR_SET_VALUE(catalogSettings_, catalogSettings) };
    inline UpdateCatalogSettingsRequest& setCatalogSettings(CatalogSettings && catalogSettings) { DARABONBA_PTR_SET_RVALUE(catalogSettings_, catalogSettings) };


  protected:
    // The catalog ID.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The catalog configuration.
    std::shared_ptr<CatalogSettings> catalogSettings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
