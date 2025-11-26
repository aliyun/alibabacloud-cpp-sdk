// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORHIVETABLERESPONSEBODYDATAFORMATS_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORHIVETABLERESPONSEBODYDATAFORMATS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorHiveTableResponseBodyDataFormats : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorHiveTableResponseBodyDataFormats& obj) { 
      DARABONBA_PTR_TO_JSON(FormatDayGrowthSize, formatDayGrowthSize_);
      DARABONBA_PTR_TO_JSON(FormatName, formatName_);
      DARABONBA_PTR_TO_JSON(FormatRatio, formatRatio_);
      DARABONBA_PTR_TO_JSON(FormatSize, formatSize_);
      DARABONBA_PTR_TO_JSON(FormatSizeDayGrowthRatio, formatSizeDayGrowthRatio_);
      DARABONBA_PTR_TO_JSON(FormatSizeUnit, formatSizeUnit_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorHiveTableResponseBodyDataFormats& obj) { 
      DARABONBA_PTR_FROM_JSON(FormatDayGrowthSize, formatDayGrowthSize_);
      DARABONBA_PTR_FROM_JSON(FormatName, formatName_);
      DARABONBA_PTR_FROM_JSON(FormatRatio, formatRatio_);
      DARABONBA_PTR_FROM_JSON(FormatSize, formatSize_);
      DARABONBA_PTR_FROM_JSON(FormatSizeDayGrowthRatio, formatSizeDayGrowthRatio_);
      DARABONBA_PTR_FROM_JSON(FormatSizeUnit, formatSizeUnit_);
    };
    GetDoctorHiveTableResponseBodyDataFormats() = default ;
    GetDoctorHiveTableResponseBodyDataFormats(const GetDoctorHiveTableResponseBodyDataFormats &) = default ;
    GetDoctorHiveTableResponseBodyDataFormats(GetDoctorHiveTableResponseBodyDataFormats &&) = default ;
    GetDoctorHiveTableResponseBodyDataFormats(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorHiveTableResponseBodyDataFormats() = default ;
    GetDoctorHiveTableResponseBodyDataFormats& operator=(const GetDoctorHiveTableResponseBodyDataFormats &) = default ;
    GetDoctorHiveTableResponseBodyDataFormats& operator=(GetDoctorHiveTableResponseBodyDataFormats &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->formatDayGrowthSize_ == nullptr
        && return this->formatName_ == nullptr && return this->formatRatio_ == nullptr && return this->formatSize_ == nullptr && return this->formatSizeDayGrowthRatio_ == nullptr && return this->formatSizeUnit_ == nullptr; };
    // formatDayGrowthSize Field Functions 
    bool hasFormatDayGrowthSize() const { return this->formatDayGrowthSize_ != nullptr;};
    void deleteFormatDayGrowthSize() { this->formatDayGrowthSize_ = nullptr;};
    inline int64_t formatDayGrowthSize() const { DARABONBA_PTR_GET_DEFAULT(formatDayGrowthSize_, 0L) };
    inline GetDoctorHiveTableResponseBodyDataFormats& setFormatDayGrowthSize(int64_t formatDayGrowthSize) { DARABONBA_PTR_SET_VALUE(formatDayGrowthSize_, formatDayGrowthSize) };


    // formatName Field Functions 
    bool hasFormatName() const { return this->formatName_ != nullptr;};
    void deleteFormatName() { this->formatName_ = nullptr;};
    inline string formatName() const { DARABONBA_PTR_GET_DEFAULT(formatName_, "") };
    inline GetDoctorHiveTableResponseBodyDataFormats& setFormatName(string formatName) { DARABONBA_PTR_SET_VALUE(formatName_, formatName) };


    // formatRatio Field Functions 
    bool hasFormatRatio() const { return this->formatRatio_ != nullptr;};
    void deleteFormatRatio() { this->formatRatio_ = nullptr;};
    inline float formatRatio() const { DARABONBA_PTR_GET_DEFAULT(formatRatio_, 0.0) };
    inline GetDoctorHiveTableResponseBodyDataFormats& setFormatRatio(float formatRatio) { DARABONBA_PTR_SET_VALUE(formatRatio_, formatRatio) };


    // formatSize Field Functions 
    bool hasFormatSize() const { return this->formatSize_ != nullptr;};
    void deleteFormatSize() { this->formatSize_ = nullptr;};
    inline int64_t formatSize() const { DARABONBA_PTR_GET_DEFAULT(formatSize_, 0L) };
    inline GetDoctorHiveTableResponseBodyDataFormats& setFormatSize(int64_t formatSize) { DARABONBA_PTR_SET_VALUE(formatSize_, formatSize) };


    // formatSizeDayGrowthRatio Field Functions 
    bool hasFormatSizeDayGrowthRatio() const { return this->formatSizeDayGrowthRatio_ != nullptr;};
    void deleteFormatSizeDayGrowthRatio() { this->formatSizeDayGrowthRatio_ = nullptr;};
    inline float formatSizeDayGrowthRatio() const { DARABONBA_PTR_GET_DEFAULT(formatSizeDayGrowthRatio_, 0.0) };
    inline GetDoctorHiveTableResponseBodyDataFormats& setFormatSizeDayGrowthRatio(float formatSizeDayGrowthRatio) { DARABONBA_PTR_SET_VALUE(formatSizeDayGrowthRatio_, formatSizeDayGrowthRatio) };


    // formatSizeUnit Field Functions 
    bool hasFormatSizeUnit() const { return this->formatSizeUnit_ != nullptr;};
    void deleteFormatSizeUnit() { this->formatSizeUnit_ = nullptr;};
    inline string formatSizeUnit() const { DARABONBA_PTR_GET_DEFAULT(formatSizeUnit_, "") };
    inline GetDoctorHiveTableResponseBodyDataFormats& setFormatSizeUnit(string formatSizeUnit) { DARABONBA_PTR_SET_VALUE(formatSizeUnit_, formatSizeUnit) };


  protected:
    // The daily amount increment of the data in a specific storage format.
    std::shared_ptr<int64_t> formatDayGrowthSize_ = nullptr;
    // The name of the storage format.
    std::shared_ptr<string> formatName_ = nullptr;
    // The ratio of the data in a specific storage format.
    std::shared_ptr<float> formatRatio_ = nullptr;
    // The size of storage format-specific data.
    std::shared_ptr<int64_t> formatSize_ = nullptr;
    // The day-to-day growth rate of the amount of the data in a specific storage format.
    std::shared_ptr<float> formatSizeDayGrowthRatio_ = nullptr;
    // The unit of the data size.
    std::shared_ptr<string> formatSizeUnit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
