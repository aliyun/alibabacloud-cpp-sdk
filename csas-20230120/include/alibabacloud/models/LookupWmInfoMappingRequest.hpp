// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPWMINFOMAPPINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPWMINFOMAPPINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class LookupWmInfoMappingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupWmInfoMappingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WmInfoSize, wmInfoSize_);
      DARABONBA_PTR_TO_JSON(WmInfoUint, wmInfoUint_);
      DARABONBA_PTR_TO_JSON(WmType, wmType_);
    };
    friend void from_json(const Darabonba::Json& j, LookupWmInfoMappingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WmInfoSize, wmInfoSize_);
      DARABONBA_PTR_FROM_JSON(WmInfoUint, wmInfoUint_);
      DARABONBA_PTR_FROM_JSON(WmType, wmType_);
    };
    LookupWmInfoMappingRequest() = default ;
    LookupWmInfoMappingRequest(const LookupWmInfoMappingRequest &) = default ;
    LookupWmInfoMappingRequest(LookupWmInfoMappingRequest &&) = default ;
    LookupWmInfoMappingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupWmInfoMappingRequest() = default ;
    LookupWmInfoMappingRequest& operator=(const LookupWmInfoMappingRequest &) = default ;
    LookupWmInfoMappingRequest& operator=(LookupWmInfoMappingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->wmInfoSize_ == nullptr
        && this->wmInfoUint_ == nullptr && this->wmType_ == nullptr; };
    // wmInfoSize Field Functions 
    bool hasWmInfoSize() const { return this->wmInfoSize_ != nullptr;};
    void deleteWmInfoSize() { this->wmInfoSize_ = nullptr;};
    inline int64_t getWmInfoSize() const { DARABONBA_PTR_GET_DEFAULT(wmInfoSize_, 0L) };
    inline LookupWmInfoMappingRequest& setWmInfoSize(int64_t wmInfoSize) { DARABONBA_PTR_SET_VALUE(wmInfoSize_, wmInfoSize) };


    // wmInfoUint Field Functions 
    bool hasWmInfoUint() const { return this->wmInfoUint_ != nullptr;};
    void deleteWmInfoUint() { this->wmInfoUint_ = nullptr;};
    inline string getWmInfoUint() const { DARABONBA_PTR_GET_DEFAULT(wmInfoUint_, "") };
    inline LookupWmInfoMappingRequest& setWmInfoUint(string wmInfoUint) { DARABONBA_PTR_SET_VALUE(wmInfoUint_, wmInfoUint) };


    // wmType Field Functions 
    bool hasWmType() const { return this->wmType_ != nullptr;};
    void deleteWmType() { this->wmType_ = nullptr;};
    inline string getWmType() const { DARABONBA_PTR_GET_DEFAULT(wmType_, "") };
    inline LookupWmInfoMappingRequest& setWmType(string wmType) { DARABONBA_PTR_SET_VALUE(wmType_, wmType) };


  protected:
    // Bit width of the watermark information. Default value: 32. This parameter must match the bit width used when embedding or generating a transparent image. Valid values: 32 to 64. Use the same value as when you created the mapping. Otherwise, the mapping cannot be found.
    shared_ptr<int64_t> wmInfoSize_ {};
    // Numeric-formatted watermark information. Value source:
    // 
    // - [CreateWmInfoMapping](~~CreateWmInfoMapping~~): The **WmInfoUint** return value from the CreateWmInfoMapping API.
    // 
    // This parameter is required.
    shared_ptr<string> wmInfoUint_ {};
    // Watermark type. Valid values:
    // 
    // - **PureWebappInvisible**: Webpage watermark.
    // 
    // - **PureAppInvisible**: App watermark.
    // 
    // - **PureScreenInvisible**: Screen watermark.
    // 
    // - **PureDocument**: Document watermark.
    // 
    // - **PureImage**: Image watermark.
    // 
    // - **PureAudio**: Audio watermark.
    // 
    // - **PureVideo**: Video watermark.
    // 
    // - **AigcWebappInvisible**: AIGC webpage watermark.
    // 
    // - **AigcAppInvisible**: AIGC app watermark.
    // 
    // - **AigcScreenInvisible**: AIGC screen watermark.
    // 
    // - **AigcDocument**: AIGC document watermark.
    // 
    // - **AigcImage**: AIGC image watermark.
    // 
    // - **AigcAudio**: AIGC audio watermark.
    // 
    // - **AigcVideo**: AIGC video watermark.
    // 
    // This parameter is required.
    shared_ptr<string> wmType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
