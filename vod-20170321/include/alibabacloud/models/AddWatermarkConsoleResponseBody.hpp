// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDWATERMARKCONSOLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDWATERMARKCONSOLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddWatermarkConsoleResponseBodyWatermark.hpp>
#include <alibabacloud/models/AddWatermarkConsoleResponseBodyWatermarkInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddWatermarkConsoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddWatermarkConsoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Watermark, watermark_);
      DARABONBA_PTR_TO_JSON(WatermarkInfo, watermarkInfo_);
    };
    friend void from_json(const Darabonba::Json& j, AddWatermarkConsoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Watermark, watermark_);
      DARABONBA_PTR_FROM_JSON(WatermarkInfo, watermarkInfo_);
    };
    AddWatermarkConsoleResponseBody() = default ;
    AddWatermarkConsoleResponseBody(const AddWatermarkConsoleResponseBody &) = default ;
    AddWatermarkConsoleResponseBody(AddWatermarkConsoleResponseBody &&) = default ;
    AddWatermarkConsoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddWatermarkConsoleResponseBody() = default ;
    AddWatermarkConsoleResponseBody& operator=(const AddWatermarkConsoleResponseBody &) = default ;
    AddWatermarkConsoleResponseBody& operator=(AddWatermarkConsoleResponseBody &&) = default ;
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
    inline AddWatermarkConsoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline const AddWatermarkConsoleResponseBodyWatermark & watermark() const { DARABONBA_PTR_GET_CONST(watermark_, AddWatermarkConsoleResponseBodyWatermark) };
    inline AddWatermarkConsoleResponseBodyWatermark watermark() { DARABONBA_PTR_GET(watermark_, AddWatermarkConsoleResponseBodyWatermark) };
    inline AddWatermarkConsoleResponseBody& setWatermark(const AddWatermarkConsoleResponseBodyWatermark & watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };
    inline AddWatermarkConsoleResponseBody& setWatermark(AddWatermarkConsoleResponseBodyWatermark && watermark) { DARABONBA_PTR_SET_RVALUE(watermark_, watermark) };


    // watermarkInfo Field Functions 
    bool hasWatermarkInfo() const { return this->watermarkInfo_ != nullptr;};
    void deleteWatermarkInfo() { this->watermarkInfo_ = nullptr;};
    inline const AddWatermarkConsoleResponseBodyWatermarkInfo & watermarkInfo() const { DARABONBA_PTR_GET_CONST(watermarkInfo_, AddWatermarkConsoleResponseBodyWatermarkInfo) };
    inline AddWatermarkConsoleResponseBodyWatermarkInfo watermarkInfo() { DARABONBA_PTR_GET(watermarkInfo_, AddWatermarkConsoleResponseBodyWatermarkInfo) };
    inline AddWatermarkConsoleResponseBody& setWatermarkInfo(const AddWatermarkConsoleResponseBodyWatermarkInfo & watermarkInfo) { DARABONBA_PTR_SET_VALUE(watermarkInfo_, watermarkInfo) };
    inline AddWatermarkConsoleResponseBody& setWatermarkInfo(AddWatermarkConsoleResponseBodyWatermarkInfo && watermarkInfo) { DARABONBA_PTR_SET_RVALUE(watermarkInfo_, watermarkInfo) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<AddWatermarkConsoleResponseBodyWatermark> watermark_ = nullptr;
    std::shared_ptr<AddWatermarkConsoleResponseBodyWatermarkInfo> watermarkInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
