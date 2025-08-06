// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDEFAULTWATERMARKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDEFAULTWATERMARKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SetDefaultWatermarkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDefaultWatermarkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WatermarkId, watermarkId_);
    };
    friend void from_json(const Darabonba::Json& j, SetDefaultWatermarkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WatermarkId, watermarkId_);
    };
    SetDefaultWatermarkRequest() = default ;
    SetDefaultWatermarkRequest(const SetDefaultWatermarkRequest &) = default ;
    SetDefaultWatermarkRequest(SetDefaultWatermarkRequest &&) = default ;
    SetDefaultWatermarkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDefaultWatermarkRequest() = default ;
    SetDefaultWatermarkRequest& operator=(const SetDefaultWatermarkRequest &) = default ;
    SetDefaultWatermarkRequest& operator=(SetDefaultWatermarkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->watermarkId_ != nullptr; };
    // watermarkId Field Functions 
    bool hasWatermarkId() const { return this->watermarkId_ != nullptr;};
    void deleteWatermarkId() { this->watermarkId_ = nullptr;};
    inline string watermarkId() const { DARABONBA_PTR_GET_DEFAULT(watermarkId_, "") };
    inline SetDefaultWatermarkRequest& setWatermarkId(string watermarkId) { DARABONBA_PTR_SET_VALUE(watermarkId_, watermarkId) };


  protected:
    // The ID of the watermark template. You can specify only one watermark template ID. You can obtain the ID by using one of the following methods:
    // 
    // *   Obtain the watermark template ID from the response to the [AddWatermark](~~AddWatermark~~) operation that you call to create a watermark template.
    // *   Obtain the watermark template ID from the response to the [ListWatermark](~~ListWatermark~~) operation that you call to query all watermark templates within your account.
    // 
    // This parameter is required.
    std::shared_ptr<string> watermarkId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
