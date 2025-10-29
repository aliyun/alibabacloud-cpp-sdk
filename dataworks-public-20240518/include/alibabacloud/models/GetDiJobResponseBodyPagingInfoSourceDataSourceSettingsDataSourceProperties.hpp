// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFOSOURCEDATASOURCESETTINGSDATASOURCEPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_GETDIJOBRESPONSEBODYPAGINGINFOSOURCEDATASOURCESETTINGSDATASOURCEPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties& obj) { 
      DARABONBA_PTR_TO_JSON(Encoding, encoding_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(Encoding, encoding_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
    };
    GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties() = default ;
    GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties(const GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties &) = default ;
    GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties(GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties &&) = default ;
    GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties() = default ;
    GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties& operator=(const GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties &) = default ;
    GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties& operator=(GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encoding_ == nullptr
        && return this->timezone_ == nullptr; };
    // encoding Field Functions 
    bool hasEncoding() const { return this->encoding_ != nullptr;};
    void deleteEncoding() { this->encoding_ = nullptr;};
    inline string encoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
    inline GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


  protected:
    // The encoding format of the database.
    std::shared_ptr<string> encoding_ = nullptr;
    // The time zone.
    std::shared_ptr<string> timezone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
