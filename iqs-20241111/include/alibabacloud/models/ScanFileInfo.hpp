// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANFILEINFO_HPP_
#define ALIBABACLOUD_MODELS_SCANFILEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class ScanFileInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanFileInfo& obj) { 
      DARABONBA_PTR_TO_JSON(angle, angle_);
      DARABONBA_PTR_TO_JSON(height, height_);
      DARABONBA_TO_JSON(imageBase64, imageBase64_);
      DARABONBA_PTR_TO_JSON(width, width_);
    };
    friend void from_json(const Darabonba::Json& j, ScanFileInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(angle, angle_);
      DARABONBA_PTR_FROM_JSON(height, height_);
      DARABONBA_FROM_JSON(imageBase64, imageBase64_);
      DARABONBA_PTR_FROM_JSON(width, width_);
    };
    ScanFileInfo() = default ;
    ScanFileInfo(const ScanFileInfo &) = default ;
    ScanFileInfo(ScanFileInfo &&) = default ;
    ScanFileInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanFileInfo() = default ;
    ScanFileInfo& operator=(const ScanFileInfo &) = default ;
    ScanFileInfo& operator=(ScanFileInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->angle_ == nullptr
        && this->height_ == nullptr && this->imageBase64_.empty() && this->width_ == nullptr; };
    // angle Field Functions 
    bool hasAngle() const { return this->angle_ != nullptr;};
    void deleteAngle() { this->angle_ = nullptr;};
    inline int32_t getAngle() const { DARABONBA_PTR_GET_DEFAULT(angle_, 0) };
    inline ScanFileInfo& setAngle(int32_t angle) { DARABONBA_PTR_SET_VALUE(angle_, angle) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline ScanFileInfo& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // imageBase64 Field Functions 
    bool hasImageBase64() const { return !this->imageBase64_.empty();};
    void deleteImageBase64() { this->imageBase64_.clear();};
    inline Darabonba::Bytes getImageBase64() const { DARABONBA_GET(imageBase64_) };
    inline ScanFileInfo& setImageBase64(Darabonba::Bytes imageBase64) { DARABONBA_SET_VALUE(imageBase64_, imageBase64) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline ScanFileInfo& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    shared_ptr<int32_t> angle_ {};
    shared_ptr<int32_t> height_ {};
    Darabonba::Bytes imageBase64_ {};
    shared_ptr<int32_t> width_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
