// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWATERMARKCONSOLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWATERMARKCONSOLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateWatermarkConsoleResponseBodyWatermark.hpp>
#include <alibabacloud/models/UpdateWatermarkConsoleResponseBodyWatermarkInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateWatermarkConsoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWatermarkConsoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Watermark, watermark_);
      DARABONBA_PTR_TO_JSON(WatermarkInfo, watermarkInfo_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWatermarkConsoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Watermark, watermark_);
      DARABONBA_PTR_FROM_JSON(WatermarkInfo, watermarkInfo_);
    };
    UpdateWatermarkConsoleResponseBody() = default ;
    UpdateWatermarkConsoleResponseBody(const UpdateWatermarkConsoleResponseBody &) = default ;
    UpdateWatermarkConsoleResponseBody(UpdateWatermarkConsoleResponseBody &&) = default ;
    UpdateWatermarkConsoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWatermarkConsoleResponseBody() = default ;
    UpdateWatermarkConsoleResponseBody& operator=(const UpdateWatermarkConsoleResponseBody &) = default ;
    UpdateWatermarkConsoleResponseBody& operator=(UpdateWatermarkConsoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->watermark_ != nullptr && this->watermarkInfo_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateWatermarkConsoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline const UpdateWatermarkConsoleResponseBodyWatermark & watermark() const { DARABONBA_PTR_GET_CONST(watermark_, UpdateWatermarkConsoleResponseBodyWatermark) };
    inline UpdateWatermarkConsoleResponseBodyWatermark watermark() { DARABONBA_PTR_GET(watermark_, UpdateWatermarkConsoleResponseBodyWatermark) };
    inline UpdateWatermarkConsoleResponseBody& setWatermark(const UpdateWatermarkConsoleResponseBodyWatermark & watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };
    inline UpdateWatermarkConsoleResponseBody& setWatermark(UpdateWatermarkConsoleResponseBodyWatermark && watermark) { DARABONBA_PTR_SET_RVALUE(watermark_, watermark) };


    // watermarkInfo Field Functions 
    bool hasWatermarkInfo() const { return this->watermarkInfo_ != nullptr;};
    void deleteWatermarkInfo() { this->watermarkInfo_ = nullptr;};
    inline const UpdateWatermarkConsoleResponseBodyWatermarkInfo & watermarkInfo() const { DARABONBA_PTR_GET_CONST(watermarkInfo_, UpdateWatermarkConsoleResponseBodyWatermarkInfo) };
    inline UpdateWatermarkConsoleResponseBodyWatermarkInfo watermarkInfo() { DARABONBA_PTR_GET(watermarkInfo_, UpdateWatermarkConsoleResponseBodyWatermarkInfo) };
    inline UpdateWatermarkConsoleResponseBody& setWatermarkInfo(const UpdateWatermarkConsoleResponseBodyWatermarkInfo & watermarkInfo) { DARABONBA_PTR_SET_VALUE(watermarkInfo_, watermarkInfo) };
    inline UpdateWatermarkConsoleResponseBody& setWatermarkInfo(UpdateWatermarkConsoleResponseBodyWatermarkInfo && watermarkInfo) { DARABONBA_PTR_SET_RVALUE(watermarkInfo_, watermarkInfo) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<UpdateWatermarkConsoleResponseBodyWatermark> watermark_ = nullptr;
    std::shared_ptr<UpdateWatermarkConsoleResponseBodyWatermarkInfo> watermarkInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
