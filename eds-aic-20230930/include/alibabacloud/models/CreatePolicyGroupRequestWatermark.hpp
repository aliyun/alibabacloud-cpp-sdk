// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYGROUPREQUESTWATERMARK_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYGROUPREQUESTWATERMARK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreatePolicyGroupRequestWatermark : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyGroupRequestWatermark& obj) { 
      DARABONBA_PTR_TO_JSON(WatermarkColor, watermarkColor_);
      DARABONBA_PTR_TO_JSON(WatermarkCustomText, watermarkCustomText_);
      DARABONBA_PTR_TO_JSON(WatermarkFontSize, watermarkFontSize_);
      DARABONBA_PTR_TO_JSON(WatermarkSwitch, watermarkSwitch_);
      DARABONBA_PTR_TO_JSON(WatermarkTransparencyValue, watermarkTransparencyValue_);
      DARABONBA_PTR_TO_JSON(WatermarkTypes, watermarkTypes_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyGroupRequestWatermark& obj) { 
      DARABONBA_PTR_FROM_JSON(WatermarkColor, watermarkColor_);
      DARABONBA_PTR_FROM_JSON(WatermarkCustomText, watermarkCustomText_);
      DARABONBA_PTR_FROM_JSON(WatermarkFontSize, watermarkFontSize_);
      DARABONBA_PTR_FROM_JSON(WatermarkSwitch, watermarkSwitch_);
      DARABONBA_PTR_FROM_JSON(WatermarkTransparencyValue, watermarkTransparencyValue_);
      DARABONBA_PTR_FROM_JSON(WatermarkTypes, watermarkTypes_);
    };
    CreatePolicyGroupRequestWatermark() = default ;
    CreatePolicyGroupRequestWatermark(const CreatePolicyGroupRequestWatermark &) = default ;
    CreatePolicyGroupRequestWatermark(CreatePolicyGroupRequestWatermark &&) = default ;
    CreatePolicyGroupRequestWatermark(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyGroupRequestWatermark() = default ;
    CreatePolicyGroupRequestWatermark& operator=(const CreatePolicyGroupRequestWatermark &) = default ;
    CreatePolicyGroupRequestWatermark& operator=(CreatePolicyGroupRequestWatermark &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->watermarkColor_ != nullptr
        && this->watermarkCustomText_ != nullptr && this->watermarkFontSize_ != nullptr && this->watermarkSwitch_ != nullptr && this->watermarkTransparencyValue_ != nullptr && this->watermarkTypes_ != nullptr; };
    // watermarkColor Field Functions 
    bool hasWatermarkColor() const { return this->watermarkColor_ != nullptr;};
    void deleteWatermarkColor() { this->watermarkColor_ = nullptr;};
    inline int32_t watermarkColor() const { DARABONBA_PTR_GET_DEFAULT(watermarkColor_, 0) };
    inline CreatePolicyGroupRequestWatermark& setWatermarkColor(int32_t watermarkColor) { DARABONBA_PTR_SET_VALUE(watermarkColor_, watermarkColor) };


    // watermarkCustomText Field Functions 
    bool hasWatermarkCustomText() const { return this->watermarkCustomText_ != nullptr;};
    void deleteWatermarkCustomText() { this->watermarkCustomText_ = nullptr;};
    inline string watermarkCustomText() const { DARABONBA_PTR_GET_DEFAULT(watermarkCustomText_, "") };
    inline CreatePolicyGroupRequestWatermark& setWatermarkCustomText(string watermarkCustomText) { DARABONBA_PTR_SET_VALUE(watermarkCustomText_, watermarkCustomText) };


    // watermarkFontSize Field Functions 
    bool hasWatermarkFontSize() const { return this->watermarkFontSize_ != nullptr;};
    void deleteWatermarkFontSize() { this->watermarkFontSize_ = nullptr;};
    inline int32_t watermarkFontSize() const { DARABONBA_PTR_GET_DEFAULT(watermarkFontSize_, 0) };
    inline CreatePolicyGroupRequestWatermark& setWatermarkFontSize(int32_t watermarkFontSize) { DARABONBA_PTR_SET_VALUE(watermarkFontSize_, watermarkFontSize) };


    // watermarkSwitch Field Functions 
    bool hasWatermarkSwitch() const { return this->watermarkSwitch_ != nullptr;};
    void deleteWatermarkSwitch() { this->watermarkSwitch_ = nullptr;};
    inline string watermarkSwitch() const { DARABONBA_PTR_GET_DEFAULT(watermarkSwitch_, "") };
    inline CreatePolicyGroupRequestWatermark& setWatermarkSwitch(string watermarkSwitch) { DARABONBA_PTR_SET_VALUE(watermarkSwitch_, watermarkSwitch) };


    // watermarkTransparencyValue Field Functions 
    bool hasWatermarkTransparencyValue() const { return this->watermarkTransparencyValue_ != nullptr;};
    void deleteWatermarkTransparencyValue() { this->watermarkTransparencyValue_ = nullptr;};
    inline int32_t watermarkTransparencyValue() const { DARABONBA_PTR_GET_DEFAULT(watermarkTransparencyValue_, 0) };
    inline CreatePolicyGroupRequestWatermark& setWatermarkTransparencyValue(int32_t watermarkTransparencyValue) { DARABONBA_PTR_SET_VALUE(watermarkTransparencyValue_, watermarkTransparencyValue) };


    // watermarkTypes Field Functions 
    bool hasWatermarkTypes() const { return this->watermarkTypes_ != nullptr;};
    void deleteWatermarkTypes() { this->watermarkTypes_ = nullptr;};
    inline const vector<string> & watermarkTypes() const { DARABONBA_PTR_GET_CONST(watermarkTypes_, vector<string>) };
    inline vector<string> watermarkTypes() { DARABONBA_PTR_GET(watermarkTypes_, vector<string>) };
    inline CreatePolicyGroupRequestWatermark& setWatermarkTypes(const vector<string> & watermarkTypes) { DARABONBA_PTR_SET_VALUE(watermarkTypes_, watermarkTypes) };
    inline CreatePolicyGroupRequestWatermark& setWatermarkTypes(vector<string> && watermarkTypes) { DARABONBA_PTR_SET_RVALUE(watermarkTypes_, watermarkTypes) };


  protected:
    std::shared_ptr<int32_t> watermarkColor_ = nullptr;
    std::shared_ptr<string> watermarkCustomText_ = nullptr;
    std::shared_ptr<int32_t> watermarkFontSize_ = nullptr;
    std::shared_ptr<string> watermarkSwitch_ = nullptr;
    std::shared_ptr<int32_t> watermarkTransparencyValue_ = nullptr;
    std::shared_ptr<vector<string>> watermarkTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
