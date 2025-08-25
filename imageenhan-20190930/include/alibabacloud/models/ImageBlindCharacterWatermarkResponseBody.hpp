// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEBLINDCHARACTERWATERMARKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMAGEBLINDCHARACTERWATERMARKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImageBlindCharacterWatermarkResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class ImageBlindCharacterWatermarkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageBlindCharacterWatermarkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ImageBlindCharacterWatermarkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ImageBlindCharacterWatermarkResponseBody() = default ;
    ImageBlindCharacterWatermarkResponseBody(const ImageBlindCharacterWatermarkResponseBody &) = default ;
    ImageBlindCharacterWatermarkResponseBody(ImageBlindCharacterWatermarkResponseBody &&) = default ;
    ImageBlindCharacterWatermarkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageBlindCharacterWatermarkResponseBody() = default ;
    ImageBlindCharacterWatermarkResponseBody& operator=(const ImageBlindCharacterWatermarkResponseBody &) = default ;
    ImageBlindCharacterWatermarkResponseBody& operator=(ImageBlindCharacterWatermarkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ImageBlindCharacterWatermarkResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ImageBlindCharacterWatermarkResponseBodyData) };
    inline ImageBlindCharacterWatermarkResponseBodyData data() { DARABONBA_PTR_GET(data_, ImageBlindCharacterWatermarkResponseBodyData) };
    inline ImageBlindCharacterWatermarkResponseBody& setData(const ImageBlindCharacterWatermarkResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ImageBlindCharacterWatermarkResponseBody& setData(ImageBlindCharacterWatermarkResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImageBlindCharacterWatermarkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ImageBlindCharacterWatermarkResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
