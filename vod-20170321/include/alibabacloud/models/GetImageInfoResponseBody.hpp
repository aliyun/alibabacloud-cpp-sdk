// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetImageInfoResponseBodyImageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetImageInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageInfo, imageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageInfo, imageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetImageInfoResponseBody() = default ;
    GetImageInfoResponseBody(const GetImageInfoResponseBody &) = default ;
    GetImageInfoResponseBody(GetImageInfoResponseBody &&) = default ;
    GetImageInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageInfoResponseBody() = default ;
    GetImageInfoResponseBody& operator=(const GetImageInfoResponseBody &) = default ;
    GetImageInfoResponseBody& operator=(GetImageInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // imageInfo Field Functions 
    bool hasImageInfo() const { return this->imageInfo_ != nullptr;};
    void deleteImageInfo() { this->imageInfo_ = nullptr;};
    inline const GetImageInfoResponseBodyImageInfo & imageInfo() const { DARABONBA_PTR_GET_CONST(imageInfo_, GetImageInfoResponseBodyImageInfo) };
    inline GetImageInfoResponseBodyImageInfo imageInfo() { DARABONBA_PTR_GET(imageInfo_, GetImageInfoResponseBodyImageInfo) };
    inline GetImageInfoResponseBody& setImageInfo(const GetImageInfoResponseBodyImageInfo & imageInfo) { DARABONBA_PTR_SET_VALUE(imageInfo_, imageInfo) };
    inline GetImageInfoResponseBody& setImageInfo(GetImageInfoResponseBodyImageInfo && imageInfo) { DARABONBA_PTR_SET_RVALUE(imageInfo_, imageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetImageInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the image.
    std::shared_ptr<GetImageInfoResponseBodyImageInfo> imageInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
