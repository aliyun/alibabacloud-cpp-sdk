// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIBRARYLISTRESPONSEBODYDATARECORDSINDEXSETTINGMODELCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETLIBRARYLISTRESPONSEBODYDATARECORDSINDEXSETTINGMODELCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig& obj) { 
      DARABONBA_PTR_TO_JSON(temperature, temperature_);
      DARABONBA_PTR_TO_JSON(topP, topP_);
    };
    friend void from_json(const Darabonba::Json& j, GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(temperature, temperature_);
      DARABONBA_PTR_FROM_JSON(topP, topP_);
    };
    GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig() = default ;
    GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig(const GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig &) = default ;
    GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig(GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig &&) = default ;
    GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig() = default ;
    GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig& operator=(const GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig &) = default ;
    GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig& operator=(GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->temperature_ == nullptr
        && return this->topP_ == nullptr; };
    // temperature Field Functions 
    bool hasTemperature() const { return this->temperature_ != nullptr;};
    void deleteTemperature() { this->temperature_ = nullptr;};
    inline double temperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
    inline GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig& setTemperature(double temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


    // topP Field Functions 
    bool hasTopP() const { return this->topP_ != nullptr;};
    void deleteTopP() { this->topP_ = nullptr;};
    inline double topP() const { DARABONBA_PTR_GET_DEFAULT(topP_, 0.0) };
    inline GetLibraryListResponseBodyDataRecordsIndexSettingModelConfig& setTopP(double topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


  protected:
    std::shared_ptr<double> temperature_ = nullptr;
    // topP
    std::shared_ptr<double> topP_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
