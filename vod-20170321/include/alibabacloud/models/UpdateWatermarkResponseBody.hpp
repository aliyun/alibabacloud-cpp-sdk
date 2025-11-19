// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWATERMARKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWATERMARKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateWatermarkResponseBodyWatermarkInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateWatermarkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWatermarkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WatermarkInfo, watermarkInfo_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWatermarkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WatermarkInfo, watermarkInfo_);
    };
    UpdateWatermarkResponseBody() = default ;
    UpdateWatermarkResponseBody(const UpdateWatermarkResponseBody &) = default ;
    UpdateWatermarkResponseBody(UpdateWatermarkResponseBody &&) = default ;
    UpdateWatermarkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWatermarkResponseBody() = default ;
    UpdateWatermarkResponseBody& operator=(const UpdateWatermarkResponseBody &) = default ;
    UpdateWatermarkResponseBody& operator=(UpdateWatermarkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->watermarkInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateWatermarkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // watermarkInfo Field Functions 
    bool hasWatermarkInfo() const { return this->watermarkInfo_ != nullptr;};
    void deleteWatermarkInfo() { this->watermarkInfo_ = nullptr;};
    inline const UpdateWatermarkResponseBodyWatermarkInfo & watermarkInfo() const { DARABONBA_PTR_GET_CONST(watermarkInfo_, UpdateWatermarkResponseBodyWatermarkInfo) };
    inline UpdateWatermarkResponseBodyWatermarkInfo watermarkInfo() { DARABONBA_PTR_GET(watermarkInfo_, UpdateWatermarkResponseBodyWatermarkInfo) };
    inline UpdateWatermarkResponseBody& setWatermarkInfo(const UpdateWatermarkResponseBodyWatermarkInfo & watermarkInfo) { DARABONBA_PTR_SET_VALUE(watermarkInfo_, watermarkInfo) };
    inline UpdateWatermarkResponseBody& setWatermarkInfo(UpdateWatermarkResponseBodyWatermarkInfo && watermarkInfo) { DARABONBA_PTR_SET_RVALUE(watermarkInfo_, watermarkInfo) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the watermark template.
    std::shared_ptr<UpdateWatermarkResponseBodyWatermarkInfo> watermarkInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
