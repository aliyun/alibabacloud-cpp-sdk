// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetImageInfosResponseBodyImageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetImageInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageInfo, imageInfo_);
      DARABONBA_PTR_TO_JSON(NonExistImageIds, nonExistImageIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageInfo, imageInfo_);
      DARABONBA_PTR_FROM_JSON(NonExistImageIds, nonExistImageIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetImageInfosResponseBody() = default ;
    GetImageInfosResponseBody(const GetImageInfosResponseBody &) = default ;
    GetImageInfosResponseBody(GetImageInfosResponseBody &&) = default ;
    GetImageInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageInfosResponseBody() = default ;
    GetImageInfosResponseBody& operator=(const GetImageInfosResponseBody &) = default ;
    GetImageInfosResponseBody& operator=(GetImageInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageInfo_ != nullptr
        && this->nonExistImageIds_ != nullptr && this->requestId_ != nullptr; };
    // imageInfo Field Functions 
    bool hasImageInfo() const { return this->imageInfo_ != nullptr;};
    void deleteImageInfo() { this->imageInfo_ = nullptr;};
    inline const vector<GetImageInfosResponseBodyImageInfo> & imageInfo() const { DARABONBA_PTR_GET_CONST(imageInfo_, vector<GetImageInfosResponseBodyImageInfo>) };
    inline vector<GetImageInfosResponseBodyImageInfo> imageInfo() { DARABONBA_PTR_GET(imageInfo_, vector<GetImageInfosResponseBodyImageInfo>) };
    inline GetImageInfosResponseBody& setImageInfo(const vector<GetImageInfosResponseBodyImageInfo> & imageInfo) { DARABONBA_PTR_SET_VALUE(imageInfo_, imageInfo) };
    inline GetImageInfosResponseBody& setImageInfo(vector<GetImageInfosResponseBodyImageInfo> && imageInfo) { DARABONBA_PTR_SET_RVALUE(imageInfo_, imageInfo) };


    // nonExistImageIds Field Functions 
    bool hasNonExistImageIds() const { return this->nonExistImageIds_ != nullptr;};
    void deleteNonExistImageIds() { this->nonExistImageIds_ = nullptr;};
    inline const vector<string> & nonExistImageIds() const { DARABONBA_PTR_GET_CONST(nonExistImageIds_, vector<string>) };
    inline vector<string> nonExistImageIds() { DARABONBA_PTR_GET(nonExistImageIds_, vector<string>) };
    inline GetImageInfosResponseBody& setNonExistImageIds(const vector<string> & nonExistImageIds) { DARABONBA_PTR_SET_VALUE(nonExistImageIds_, nonExistImageIds) };
    inline GetImageInfosResponseBody& setNonExistImageIds(vector<string> && nonExistImageIds) { DARABONBA_PTR_SET_RVALUE(nonExistImageIds_, nonExistImageIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetImageInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The image information.
    std::shared_ptr<vector<GetImageInfosResponseBodyImageInfo>> imageInfo_ = nullptr;
    // The IDs of the images that do not exist.
    std::shared_ptr<vector<string>> nonExistImageIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
