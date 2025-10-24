// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYIMAGERESULTSRESULTRESULTSQRCODELOCATIONS_HPP_
#define ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYIMAGERESULTSRESULTRESULTSQRCODELOCATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ImAuditResponseBodyImageResultsResultResultsQrcodeLocations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImAuditResponseBodyImageResultsResultResultsQrcodeLocations& obj) { 
      DARABONBA_PTR_TO_JSON(h, h_);
      DARABONBA_PTR_TO_JSON(qrcode, qrcode_);
      DARABONBA_PTR_TO_JSON(w, w_);
      DARABONBA_PTR_TO_JSON(x, x_);
      DARABONBA_PTR_TO_JSON(y, y_);
    };
    friend void from_json(const Darabonba::Json& j, ImAuditResponseBodyImageResultsResultResultsQrcodeLocations& obj) { 
      DARABONBA_PTR_FROM_JSON(h, h_);
      DARABONBA_PTR_FROM_JSON(qrcode, qrcode_);
      DARABONBA_PTR_FROM_JSON(w, w_);
      DARABONBA_PTR_FROM_JSON(x, x_);
      DARABONBA_PTR_FROM_JSON(y, y_);
    };
    ImAuditResponseBodyImageResultsResultResultsQrcodeLocations() = default ;
    ImAuditResponseBodyImageResultsResultResultsQrcodeLocations(const ImAuditResponseBodyImageResultsResultResultsQrcodeLocations &) = default ;
    ImAuditResponseBodyImageResultsResultResultsQrcodeLocations(ImAuditResponseBodyImageResultsResultResultsQrcodeLocations &&) = default ;
    ImAuditResponseBodyImageResultsResultResultsQrcodeLocations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImAuditResponseBodyImageResultsResultResultsQrcodeLocations() = default ;
    ImAuditResponseBodyImageResultsResultResultsQrcodeLocations& operator=(const ImAuditResponseBodyImageResultsResultResultsQrcodeLocations &) = default ;
    ImAuditResponseBodyImageResultsResultResultsQrcodeLocations& operator=(ImAuditResponseBodyImageResultsResultResultsQrcodeLocations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->h_ == nullptr
        && return this->qrcode_ == nullptr && return this->w_ == nullptr && return this->x_ == nullptr && return this->y_ == nullptr; };
    // h Field Functions 
    bool hasH() const { return this->h_ != nullptr;};
    void deleteH() { this->h_ = nullptr;};
    inline float h() const { DARABONBA_PTR_GET_DEFAULT(h_, 0.0) };
    inline ImAuditResponseBodyImageResultsResultResultsQrcodeLocations& setH(float h) { DARABONBA_PTR_SET_VALUE(h_, h) };


    // qrcode Field Functions 
    bool hasQrcode() const { return this->qrcode_ != nullptr;};
    void deleteQrcode() { this->qrcode_ = nullptr;};
    inline string qrcode() const { DARABONBA_PTR_GET_DEFAULT(qrcode_, "") };
    inline ImAuditResponseBodyImageResultsResultResultsQrcodeLocations& setQrcode(string qrcode) { DARABONBA_PTR_SET_VALUE(qrcode_, qrcode) };


    // w Field Functions 
    bool hasW() const { return this->w_ != nullptr;};
    void deleteW() { this->w_ = nullptr;};
    inline float w() const { DARABONBA_PTR_GET_DEFAULT(w_, 0.0) };
    inline ImAuditResponseBodyImageResultsResultResultsQrcodeLocations& setW(float w) { DARABONBA_PTR_SET_VALUE(w_, w) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline float x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline ImAuditResponseBodyImageResultsResultResultsQrcodeLocations& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline float y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline ImAuditResponseBodyImageResultsResultResultsQrcodeLocations& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    // The height of the QR code area. Unit: pixel.
    std::shared_ptr<float> h_ = nullptr;
    // The URL that the detected QR code points to.
    std::shared_ptr<string> qrcode_ = nullptr;
    // The width of the QR code area. Unit: pixel.
    std::shared_ptr<float> w_ = nullptr;
    // The distance between the upper-left corner of the QR code area and the y-axis, with the upper-left corner of the image being the coordinate origin. Unit: pixel.
    std::shared_ptr<float> x_ = nullptr;
    // The distance between the upper-left corner of the QR code area and the x-axis, with the upper-left corner of the image being the coordinate origin. Unit: pixel.
    std::shared_ptr<float> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
