// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIBRARYREQUESTINDEXSETTINGMODELCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIBRARYREQUESTINDEXSETTINGMODELCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class UpdateLibraryRequestIndexSettingModelConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLibraryRequestIndexSettingModelConfig& obj) { 
      DARABONBA_PTR_TO_JSON(temperature, temperature_);
      DARABONBA_PTR_TO_JSON(topP, topP_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLibraryRequestIndexSettingModelConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(temperature, temperature_);
      DARABONBA_PTR_FROM_JSON(topP, topP_);
    };
    UpdateLibraryRequestIndexSettingModelConfig() = default ;
    UpdateLibraryRequestIndexSettingModelConfig(const UpdateLibraryRequestIndexSettingModelConfig &) = default ;
    UpdateLibraryRequestIndexSettingModelConfig(UpdateLibraryRequestIndexSettingModelConfig &&) = default ;
    UpdateLibraryRequestIndexSettingModelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLibraryRequestIndexSettingModelConfig() = default ;
    UpdateLibraryRequestIndexSettingModelConfig& operator=(const UpdateLibraryRequestIndexSettingModelConfig &) = default ;
    UpdateLibraryRequestIndexSettingModelConfig& operator=(UpdateLibraryRequestIndexSettingModelConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->temperature_ != nullptr
        && this->topP_ != nullptr; };
    // temperature Field Functions 
    bool hasTemperature() const { return this->temperature_ != nullptr;};
    void deleteTemperature() { this->temperature_ = nullptr;};
    inline double temperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
    inline UpdateLibraryRequestIndexSettingModelConfig& setTemperature(double temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


    // topP Field Functions 
    bool hasTopP() const { return this->topP_ != nullptr;};
    void deleteTopP() { this->topP_ = nullptr;};
    inline double topP() const { DARABONBA_PTR_GET_DEFAULT(topP_, 0.0) };
    inline UpdateLibraryRequestIndexSettingModelConfig& setTopP(double topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


  protected:
    std::shared_ptr<double> temperature_ = nullptr;
    // topP
    std::shared_ptr<double> topP_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
