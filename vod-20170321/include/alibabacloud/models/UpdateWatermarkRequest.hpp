// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWATERMARKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWATERMARKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateWatermarkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWatermarkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(WatermarkConfig, watermarkConfig_);
      DARABONBA_PTR_TO_JSON(WatermarkId, watermarkId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWatermarkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(WatermarkConfig, watermarkConfig_);
      DARABONBA_PTR_FROM_JSON(WatermarkId, watermarkId_);
    };
    UpdateWatermarkRequest() = default ;
    UpdateWatermarkRequest(const UpdateWatermarkRequest &) = default ;
    UpdateWatermarkRequest(UpdateWatermarkRequest &&) = default ;
    UpdateWatermarkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWatermarkRequest() = default ;
    UpdateWatermarkRequest& operator=(const UpdateWatermarkRequest &) = default ;
    UpdateWatermarkRequest& operator=(UpdateWatermarkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->watermarkConfig_ == nullptr && this->watermarkId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateWatermarkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // watermarkConfig Field Functions 
    bool hasWatermarkConfig() const { return this->watermarkConfig_ != nullptr;};
    void deleteWatermarkConfig() { this->watermarkConfig_ = nullptr;};
    inline string getWatermarkConfig() const { DARABONBA_PTR_GET_DEFAULT(watermarkConfig_, "") };
    inline UpdateWatermarkRequest& setWatermarkConfig(string watermarkConfig) { DARABONBA_PTR_SET_VALUE(watermarkConfig_, watermarkConfig) };


    // watermarkId Field Functions 
    bool hasWatermarkId() const { return this->watermarkId_ != nullptr;};
    void deleteWatermarkId() { this->watermarkId_ = nullptr;};
    inline string getWatermarkId() const { DARABONBA_PTR_GET_DEFAULT(watermarkId_, "") };
    inline UpdateWatermarkRequest& setWatermarkId(string watermarkId) { DARABONBA_PTR_SET_VALUE(watermarkId_, watermarkId) };


  protected:
    // The new name of the watermark template.
    // - Only Chinese characters, letters, and digits are supported.
    // - The name can be up to 128 bytes in length.
    // - UTF-8 encoding.
    shared_ptr<string> name_ {};
    // The configuration information of the image and text watermark (JSON character string), including the watermark display position and watermark effect. The configuration parameters for image watermarks and text watermarks are different. For details about the parameter structure, see [WatermarkConfig](~~98618#section-h01-44s-2lr~~).
    // >Modifying across templatetypes is not supported. You can invoke the [GetWatermark](~~GetWatermark~~) operation to query the type of the watermark template before modifying the configuration.
    // 
    // This parameter is required.
    shared_ptr<string> watermarkConfig_ {};
    // The ID of the image and text watermark template to modify. Only a single watermark template ID is supported. You can obtain the ID by using one of the following methods:
    // - The ID is returned after you call the [AddWatermark](~~AddWatermark~~) operation to add an image and text watermark template.
    // - The ID is returned after you call the [ListWatermark](~~ListWatermark~~) operation to query the list of image and text watermark templates.
    // 
    // This parameter is required.
    shared_ptr<string> watermarkId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
