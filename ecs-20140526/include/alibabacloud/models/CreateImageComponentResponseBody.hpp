// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGECOMPONENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGECOMPONENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateImageComponentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageComponentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageComponentId, imageComponentId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageComponentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageComponentId, imageComponentId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateImageComponentResponseBody() = default ;
    CreateImageComponentResponseBody(const CreateImageComponentResponseBody &) = default ;
    CreateImageComponentResponseBody(CreateImageComponentResponseBody &&) = default ;
    CreateImageComponentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageComponentResponseBody() = default ;
    CreateImageComponentResponseBody& operator=(const CreateImageComponentResponseBody &) = default ;
    CreateImageComponentResponseBody& operator=(CreateImageComponentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageComponentId_ == nullptr
        && return this->requestId_ == nullptr; };
    // imageComponentId Field Functions 
    bool hasImageComponentId() const { return this->imageComponentId_ != nullptr;};
    void deleteImageComponentId() { this->imageComponentId_ = nullptr;};
    inline string imageComponentId() const { DARABONBA_PTR_GET_DEFAULT(imageComponentId_, "") };
    inline CreateImageComponentResponseBody& setImageComponentId(string imageComponentId) { DARABONBA_PTR_SET_VALUE(imageComponentId_, imageComponentId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateImageComponentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the image component.
    std::shared_ptr<string> imageComponentId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
