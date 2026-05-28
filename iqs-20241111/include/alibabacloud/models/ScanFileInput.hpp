// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANFILEINPUT_HPP_
#define ALIBABACLOUD_MODELS_SCANFILEINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ScanFileInputConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class ScanFileInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanFileInput& obj) { 
      DARABONBA_PTR_TO_JSON(imageBase64, imageBase64_);
      DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(scanFileInputConfig, scanFileInputConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ScanFileInput& obj) { 
      DARABONBA_PTR_FROM_JSON(imageBase64, imageBase64_);
      DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(scanFileInputConfig, scanFileInputConfig_);
    };
    ScanFileInput() = default ;
    ScanFileInput(const ScanFileInput &) = default ;
    ScanFileInput(ScanFileInput &&) = default ;
    ScanFileInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanFileInput() = default ;
    ScanFileInput& operator=(const ScanFileInput &) = default ;
    ScanFileInput& operator=(ScanFileInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageBase64_ == nullptr
        && this->imageUrl_ == nullptr && this->scanFileInputConfig_ == nullptr; };
    // imageBase64 Field Functions 
    bool hasImageBase64() const { return this->imageBase64_ != nullptr;};
    void deleteImageBase64() { this->imageBase64_ = nullptr;};
    inline string getImageBase64() const { DARABONBA_PTR_GET_DEFAULT(imageBase64_, "") };
    inline ScanFileInput& setImageBase64(string imageBase64) { DARABONBA_PTR_SET_VALUE(imageBase64_, imageBase64) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ScanFileInput& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // scanFileInputConfig Field Functions 
    bool hasScanFileInputConfig() const { return this->scanFileInputConfig_ != nullptr;};
    void deleteScanFileInputConfig() { this->scanFileInputConfig_ = nullptr;};
    inline const ScanFileInputConfig & getScanFileInputConfig() const { DARABONBA_PTR_GET_CONST(scanFileInputConfig_, ScanFileInputConfig) };
    inline ScanFileInputConfig getScanFileInputConfig() { DARABONBA_PTR_GET(scanFileInputConfig_, ScanFileInputConfig) };
    inline ScanFileInput& setScanFileInputConfig(const ScanFileInputConfig & scanFileInputConfig) { DARABONBA_PTR_SET_VALUE(scanFileInputConfig_, scanFileInputConfig) };
    inline ScanFileInput& setScanFileInputConfig(ScanFileInputConfig && scanFileInputConfig) { DARABONBA_PTR_SET_RVALUE(scanFileInputConfig_, scanFileInputConfig) };


  protected:
    shared_ptr<string> imageBase64_ {};
    shared_ptr<string> imageUrl_ {};
    shared_ptr<ScanFileInputConfig> scanFileInputConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
