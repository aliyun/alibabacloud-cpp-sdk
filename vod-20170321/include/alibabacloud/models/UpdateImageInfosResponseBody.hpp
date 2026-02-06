// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIMAGEINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIMAGEINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateImageInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateImageInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NonExistImageIds, nonExistImageIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateImageInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NonExistImageIds, nonExistImageIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateImageInfosResponseBody() = default ;
    UpdateImageInfosResponseBody(const UpdateImageInfosResponseBody &) = default ;
    UpdateImageInfosResponseBody(UpdateImageInfosResponseBody &&) = default ;
    UpdateImageInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateImageInfosResponseBody() = default ;
    UpdateImageInfosResponseBody& operator=(const UpdateImageInfosResponseBody &) = default ;
    UpdateImageInfosResponseBody& operator=(UpdateImageInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NonExistImageIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NonExistImageIds& obj) { 
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      };
      friend void from_json(const Darabonba::Json& j, NonExistImageIds& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      };
      NonExistImageIds() = default ;
      NonExistImageIds(const NonExistImageIds &) = default ;
      NonExistImageIds(NonExistImageIds &&) = default ;
      NonExistImageIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NonExistImageIds() = default ;
      NonExistImageIds& operator=(const NonExistImageIds &) = default ;
      NonExistImageIds& operator=(NonExistImageIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->imageId_ == nullptr; };
      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline const vector<string> & getImageId() const { DARABONBA_PTR_GET_CONST(imageId_, vector<string>) };
      inline vector<string> getImageId() { DARABONBA_PTR_GET(imageId_, vector<string>) };
      inline NonExistImageIds& setImageId(const vector<string> & imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };
      inline NonExistImageIds& setImageId(vector<string> && imageId) { DARABONBA_PTR_SET_RVALUE(imageId_, imageId) };


    protected:
      shared_ptr<vector<string>> imageId_ {};
    };

    virtual bool empty() const override { return this->nonExistImageIds_ == nullptr
        && this->requestId_ == nullptr; };
    // nonExistImageIds Field Functions 
    bool hasNonExistImageIds() const { return this->nonExistImageIds_ != nullptr;};
    void deleteNonExistImageIds() { this->nonExistImageIds_ = nullptr;};
    inline const UpdateImageInfosResponseBody::NonExistImageIds & getNonExistImageIds() const { DARABONBA_PTR_GET_CONST(nonExistImageIds_, UpdateImageInfosResponseBody::NonExistImageIds) };
    inline UpdateImageInfosResponseBody::NonExistImageIds getNonExistImageIds() { DARABONBA_PTR_GET(nonExistImageIds_, UpdateImageInfosResponseBody::NonExistImageIds) };
    inline UpdateImageInfosResponseBody& setNonExistImageIds(const UpdateImageInfosResponseBody::NonExistImageIds & nonExistImageIds) { DARABONBA_PTR_SET_VALUE(nonExistImageIds_, nonExistImageIds) };
    inline UpdateImageInfosResponseBody& setNonExistImageIds(UpdateImageInfosResponseBody::NonExistImageIds && nonExistImageIds) { DARABONBA_PTR_SET_RVALUE(nonExistImageIds_, nonExistImageIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateImageInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the images that do not exist.
    shared_ptr<UpdateImageInfosResponseBody::NonExistImageIds> nonExistImageIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
