// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACEREGISTRATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FACEREGISTRATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FaceRegistrationResponseBodyNonExistImageIds.hpp>
#include <alibabacloud/models/FaceRegistrationResponseBodyRegisteredPerson.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class FaceRegistrationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceRegistrationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NonExistImageIds, nonExistImageIds_);
      DARABONBA_PTR_TO_JSON(RegisteredPerson, registeredPerson_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, FaceRegistrationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NonExistImageIds, nonExistImageIds_);
      DARABONBA_PTR_FROM_JSON(RegisteredPerson, registeredPerson_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    FaceRegistrationResponseBody() = default ;
    FaceRegistrationResponseBody(const FaceRegistrationResponseBody &) = default ;
    FaceRegistrationResponseBody(FaceRegistrationResponseBody &&) = default ;
    FaceRegistrationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceRegistrationResponseBody() = default ;
    FaceRegistrationResponseBody& operator=(const FaceRegistrationResponseBody &) = default ;
    FaceRegistrationResponseBody& operator=(FaceRegistrationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nonExistImageIds_ != nullptr
        && this->registeredPerson_ != nullptr && this->requestId_ != nullptr; };
    // nonExistImageIds Field Functions 
    bool hasNonExistImageIds() const { return this->nonExistImageIds_ != nullptr;};
    void deleteNonExistImageIds() { this->nonExistImageIds_ = nullptr;};
    inline const FaceRegistrationResponseBodyNonExistImageIds & nonExistImageIds() const { DARABONBA_PTR_GET_CONST(nonExistImageIds_, FaceRegistrationResponseBodyNonExistImageIds) };
    inline FaceRegistrationResponseBodyNonExistImageIds nonExistImageIds() { DARABONBA_PTR_GET(nonExistImageIds_, FaceRegistrationResponseBodyNonExistImageIds) };
    inline FaceRegistrationResponseBody& setNonExistImageIds(const FaceRegistrationResponseBodyNonExistImageIds & nonExistImageIds) { DARABONBA_PTR_SET_VALUE(nonExistImageIds_, nonExistImageIds) };
    inline FaceRegistrationResponseBody& setNonExistImageIds(FaceRegistrationResponseBodyNonExistImageIds && nonExistImageIds) { DARABONBA_PTR_SET_RVALUE(nonExistImageIds_, nonExistImageIds) };


    // registeredPerson Field Functions 
    bool hasRegisteredPerson() const { return this->registeredPerson_ != nullptr;};
    void deleteRegisteredPerson() { this->registeredPerson_ = nullptr;};
    inline const FaceRegistrationResponseBodyRegisteredPerson & registeredPerson() const { DARABONBA_PTR_GET_CONST(registeredPerson_, FaceRegistrationResponseBodyRegisteredPerson) };
    inline FaceRegistrationResponseBodyRegisteredPerson registeredPerson() { DARABONBA_PTR_GET(registeredPerson_, FaceRegistrationResponseBodyRegisteredPerson) };
    inline FaceRegistrationResponseBody& setRegisteredPerson(const FaceRegistrationResponseBodyRegisteredPerson & registeredPerson) { DARABONBA_PTR_SET_VALUE(registeredPerson_, registeredPerson) };
    inline FaceRegistrationResponseBody& setRegisteredPerson(FaceRegistrationResponseBodyRegisteredPerson && registeredPerson) { DARABONBA_PTR_SET_RVALUE(registeredPerson_, registeredPerson) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FaceRegistrationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<FaceRegistrationResponseBodyNonExistImageIds> nonExistImageIds_ = nullptr;
    std::shared_ptr<FaceRegistrationResponseBodyRegisteredPerson> registeredPerson_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
