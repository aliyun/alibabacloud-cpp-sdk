// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMPORTIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ImportImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ImportImageResponseBody() = default ;
    ImportImageResponseBody(const ImportImageResponseBody &) = default ;
    ImportImageResponseBody(ImportImageResponseBody &&) = default ;
    ImportImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportImageResponseBody() = default ;
    ImportImageResponseBody& operator=(const ImportImageResponseBody &) = default ;
    ImportImageResponseBody& operator=(ImportImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageId_ != nullptr
        && this->requestId_ != nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ImportImageResponseBody& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImportImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> imageId_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
