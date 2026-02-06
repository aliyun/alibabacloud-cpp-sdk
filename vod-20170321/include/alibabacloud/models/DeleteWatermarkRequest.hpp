// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWATERMARKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWATERMARKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DeleteWatermarkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWatermarkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WatermarkId, watermarkId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWatermarkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WatermarkId, watermarkId_);
    };
    DeleteWatermarkRequest() = default ;
    DeleteWatermarkRequest(const DeleteWatermarkRequest &) = default ;
    DeleteWatermarkRequest(DeleteWatermarkRequest &&) = default ;
    DeleteWatermarkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWatermarkRequest() = default ;
    DeleteWatermarkRequest& operator=(const DeleteWatermarkRequest &) = default ;
    DeleteWatermarkRequest& operator=(DeleteWatermarkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->watermarkId_ == nullptr; };
    // watermarkId Field Functions 
    bool hasWatermarkId() const { return this->watermarkId_ != nullptr;};
    void deleteWatermarkId() { this->watermarkId_ = nullptr;};
    inline string getWatermarkId() const { DARABONBA_PTR_GET_DEFAULT(watermarkId_, "") };
    inline DeleteWatermarkRequest& setWatermarkId(string watermarkId) { DARABONBA_PTR_SET_VALUE(watermarkId_, watermarkId) };


  protected:
    // The ID of watermark template that you want to delete. You can specify only one watermark template ID. You can obtain the ID by using one of the following methods:
    // 
    // *   Obtain the watermark template ID from the response to the [AddWatermark](~~AddWatermark~~) operation that you call to create a watermark template.
    // *   Obtain the watermark template ID from the response to the [ListWatermark](~~ListWatermark~~) operation that you call to query all watermark templates within your account.
    // 
    // This parameter is required.
    shared_ptr<string> watermarkId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
