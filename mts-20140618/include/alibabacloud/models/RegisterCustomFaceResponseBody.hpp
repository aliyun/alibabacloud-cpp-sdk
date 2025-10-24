// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERCUSTOMFACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REGISTERCUSTOMFACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class RegisterCustomFaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterCustomFaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FaceId, faceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterCustomFaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceId, faceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RegisterCustomFaceResponseBody() = default ;
    RegisterCustomFaceResponseBody(const RegisterCustomFaceResponseBody &) = default ;
    RegisterCustomFaceResponseBody(RegisterCustomFaceResponseBody &&) = default ;
    RegisterCustomFaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterCustomFaceResponseBody() = default ;
    RegisterCustomFaceResponseBody& operator=(const RegisterCustomFaceResponseBody &) = default ;
    RegisterCustomFaceResponseBody& operator=(RegisterCustomFaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceId_ == nullptr
        && return this->requestId_ == nullptr; };
    // faceId Field Functions 
    bool hasFaceId() const { return this->faceId_ != nullptr;};
    void deleteFaceId() { this->faceId_ = nullptr;};
    inline string faceId() const { DARABONBA_PTR_GET_DEFAULT(faceId_, "") };
    inline RegisterCustomFaceResponseBody& setFaceId(string faceId) { DARABONBA_PTR_SET_VALUE(faceId_, faceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RegisterCustomFaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the face.
    std::shared_ptr<string> faceId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
