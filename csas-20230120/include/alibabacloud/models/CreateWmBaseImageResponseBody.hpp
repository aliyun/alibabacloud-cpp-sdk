// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWMBASEIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWMBASEIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateWmBaseImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWmBaseImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWmBaseImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateWmBaseImageResponseBody() = default ;
    CreateWmBaseImageResponseBody(const CreateWmBaseImageResponseBody &) = default ;
    CreateWmBaseImageResponseBody(CreateWmBaseImageResponseBody &&) = default ;
    CreateWmBaseImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWmBaseImageResponseBody() = default ;
    CreateWmBaseImageResponseBody& operator=(const CreateWmBaseImageResponseBody &) = default ;
    CreateWmBaseImageResponseBody& operator=(CreateWmBaseImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_TO_JSON(ImageUrlExp, imageUrlExp_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_FROM_JSON(ImageUrlExp, imageUrlExp_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->imageId_ == nullptr
        && this->imageUrl_ == nullptr && this->imageUrlExp_ == nullptr; };
      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Data& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageUrl Field Functions 
      bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
      void deleteImageUrl() { this->imageUrl_ = nullptr;};
      inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
      inline Data& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


      // imageUrlExp Field Functions 
      bool hasImageUrlExp() const { return this->imageUrlExp_ != nullptr;};
      void deleteImageUrlExp() { this->imageUrlExp_ = nullptr;};
      inline int64_t getImageUrlExp() const { DARABONBA_PTR_GET_DEFAULT(imageUrlExp_, 0L) };
      inline Data& setImageUrlExp(int64_t imageUrlExp) { DARABONBA_PTR_SET_VALUE(imageUrlExp_, imageUrlExp) };


    protected:
      shared_ptr<string> imageId_ {};
      shared_ptr<string> imageUrl_ {};
      shared_ptr<int64_t> imageUrlExp_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateWmBaseImageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateWmBaseImageResponseBody::Data) };
    inline CreateWmBaseImageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateWmBaseImageResponseBody::Data) };
    inline CreateWmBaseImageResponseBody& setData(const CreateWmBaseImageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateWmBaseImageResponseBody& setData(CreateWmBaseImageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWmBaseImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreateWmBaseImageResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
