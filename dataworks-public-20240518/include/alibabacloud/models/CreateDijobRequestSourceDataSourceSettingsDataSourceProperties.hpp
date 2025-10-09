// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTSOURCEDATASOURCESETTINGSDATASOURCEPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIJOBREQUESTSOURCEDATASOURCESETTINGSDATASOURCEPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties& obj) { 
      DARABONBA_PTR_TO_JSON(Encoding, encoding_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(Encoding, encoding_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
    };
    CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties() = default ;
    CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties(const CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties &) = default ;
    CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties(CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties &&) = default ;
    CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties() = default ;
    CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties& operator=(const CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties &) = default ;
    CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties& operator=(CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encoding_ != nullptr
        && this->timezone_ != nullptr; };
    // encoding Field Functions 
    bool hasEncoding() const { return this->encoding_ != nullptr;};
    void deleteEncoding() { this->encoding_ = nullptr;};
    inline string encoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
    inline CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


  protected:
    std::shared_ptr<string> encoding_ = nullptr;
    std::shared_ptr<string> timezone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
