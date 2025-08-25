// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGECACHERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGECACHERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Acc20240402
{
namespace Models
{
  class CreateImageCacheResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageCacheResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageCacheId, imageCacheId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageCacheResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageCacheId, imageCacheId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateImageCacheResponseBody() = default ;
    CreateImageCacheResponseBody(const CreateImageCacheResponseBody &) = default ;
    CreateImageCacheResponseBody(CreateImageCacheResponseBody &&) = default ;
    CreateImageCacheResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageCacheResponseBody() = default ;
    CreateImageCacheResponseBody& operator=(const CreateImageCacheResponseBody &) = default ;
    CreateImageCacheResponseBody& operator=(CreateImageCacheResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageCacheId_ != nullptr
        && this->requestId_ != nullptr; };
    // imageCacheId Field Functions 
    bool hasImageCacheId() const { return this->imageCacheId_ != nullptr;};
    void deleteImageCacheId() { this->imageCacheId_ = nullptr;};
    inline string imageCacheId() const { DARABONBA_PTR_GET_DEFAULT(imageCacheId_, "") };
    inline CreateImageCacheResponseBody& setImageCacheId(string imageCacheId) { DARABONBA_PTR_SET_VALUE(imageCacheId_, imageCacheId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateImageCacheResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> imageCacheId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Acc20240402
#endif
