// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGETRANSLATETASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGETRANSLATETASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class GetImageTranslateTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageTranslateTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ImageData, imageData_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageTranslateTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageData, imageData_);
    };
    GetImageTranslateTaskResponseBodyData() = default ;
    GetImageTranslateTaskResponseBodyData(const GetImageTranslateTaskResponseBodyData &) = default ;
    GetImageTranslateTaskResponseBodyData(GetImageTranslateTaskResponseBodyData &&) = default ;
    GetImageTranslateTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageTranslateTaskResponseBodyData() = default ;
    GetImageTranslateTaskResponseBodyData& operator=(const GetImageTranslateTaskResponseBodyData &) = default ;
    GetImageTranslateTaskResponseBodyData& operator=(GetImageTranslateTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageData_ == nullptr; };
    // imageData Field Functions 
    bool hasImageData() const { return this->imageData_ != nullptr;};
    void deleteImageData() { this->imageData_ = nullptr;};
    inline string imageData() const { DARABONBA_PTR_GET_DEFAULT(imageData_, "") };
    inline GetImageTranslateTaskResponseBodyData& setImageData(string imageData) { DARABONBA_PTR_SET_VALUE(imageData_, imageData) };


  protected:
    std::shared_ptr<string> imageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
