// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWATERMARKCONSOLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWATERMARKCONSOLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWatermarkConsoleResponseBodyWatermark.hpp>
#include <alibabacloud/models/GetWatermarkConsoleResponseBodyWatermarkInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetWatermarkConsoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWatermarkConsoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Watermark, watermark_);
      DARABONBA_PTR_TO_JSON(WatermarkInfo, watermarkInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetWatermarkConsoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Watermark, watermark_);
      DARABONBA_PTR_FROM_JSON(WatermarkInfo, watermarkInfo_);
    };
    GetWatermarkConsoleResponseBody() = default ;
    GetWatermarkConsoleResponseBody(const GetWatermarkConsoleResponseBody &) = default ;
    GetWatermarkConsoleResponseBody(GetWatermarkConsoleResponseBody &&) = default ;
    GetWatermarkConsoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWatermarkConsoleResponseBody() = default ;
    GetWatermarkConsoleResponseBody& operator=(const GetWatermarkConsoleResponseBody &) = default ;
    GetWatermarkConsoleResponseBody& operator=(GetWatermarkConsoleResponseBody &&) = default ;
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
    inline GetWatermarkConsoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline const GetWatermarkConsoleResponseBodyWatermark & watermark() const { DARABONBA_PTR_GET_CONST(watermark_, GetWatermarkConsoleResponseBodyWatermark) };
    inline GetWatermarkConsoleResponseBodyWatermark watermark() { DARABONBA_PTR_GET(watermark_, GetWatermarkConsoleResponseBodyWatermark) };
    inline GetWatermarkConsoleResponseBody& setWatermark(const GetWatermarkConsoleResponseBodyWatermark & watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };
    inline GetWatermarkConsoleResponseBody& setWatermark(GetWatermarkConsoleResponseBodyWatermark && watermark) { DARABONBA_PTR_SET_RVALUE(watermark_, watermark) };


    // watermarkInfo Field Functions 
    bool hasWatermarkInfo() const { return this->watermarkInfo_ != nullptr;};
    void deleteWatermarkInfo() { this->watermarkInfo_ = nullptr;};
    inline const GetWatermarkConsoleResponseBodyWatermarkInfo & watermarkInfo() const { DARABONBA_PTR_GET_CONST(watermarkInfo_, GetWatermarkConsoleResponseBodyWatermarkInfo) };
    inline GetWatermarkConsoleResponseBodyWatermarkInfo watermarkInfo() { DARABONBA_PTR_GET(watermarkInfo_, GetWatermarkConsoleResponseBodyWatermarkInfo) };
    inline GetWatermarkConsoleResponseBody& setWatermarkInfo(const GetWatermarkConsoleResponseBodyWatermarkInfo & watermarkInfo) { DARABONBA_PTR_SET_VALUE(watermarkInfo_, watermarkInfo) };
    inline GetWatermarkConsoleResponseBody& setWatermarkInfo(GetWatermarkConsoleResponseBodyWatermarkInfo && watermarkInfo) { DARABONBA_PTR_SET_RVALUE(watermarkInfo_, watermarkInfo) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetWatermarkConsoleResponseBodyWatermark> watermark_ = nullptr;
    std::shared_ptr<GetWatermarkConsoleResponseBodyWatermarkInfo> watermarkInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
