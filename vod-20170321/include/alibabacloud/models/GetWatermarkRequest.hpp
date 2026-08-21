// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWATERMARKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWATERMARKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetWatermarkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWatermarkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WatermarkId, watermarkId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWatermarkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WatermarkId, watermarkId_);
    };
    GetWatermarkRequest() = default ;
    GetWatermarkRequest(const GetWatermarkRequest &) = default ;
    GetWatermarkRequest(GetWatermarkRequest &&) = default ;
    GetWatermarkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWatermarkRequest() = default ;
    GetWatermarkRequest& operator=(const GetWatermarkRequest &) = default ;
    GetWatermarkRequest& operator=(GetWatermarkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->watermarkId_ == nullptr; };
    // watermarkId Field Functions 
    bool hasWatermarkId() const { return this->watermarkId_ != nullptr;};
    void deleteWatermarkId() { this->watermarkId_ = nullptr;};
    inline string getWatermarkId() const { DARABONBA_PTR_GET_DEFAULT(watermarkId_, "") };
    inline GetWatermarkRequest& setWatermarkId(string watermarkId) { DARABONBA_PTR_SET_VALUE(watermarkId_, watermarkId) };


  protected:
    // The ID of the watermark template to query. Only a single watermark template ID is supported. You can obtain the ID by using one of the following methods:
    // - Call the [AddWatermark](~~AddWatermark~~) operation to add a watermark template. The ID is returned.
    // - Call the [ListWatermark](~~ListWatermark~~) operation to query the list of watermark templates. The ID is returned.
    // 
    // This parameter is required.
    shared_ptr<string> watermarkId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
