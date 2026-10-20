// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESLIDERCAPTCHAPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESLIDERCAPTCHAPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateSliderCaptchaPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSliderCaptchaPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSliderCaptchaPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateSliderCaptchaPageResponseBody() = default ;
    CreateSliderCaptchaPageResponseBody(const CreateSliderCaptchaPageResponseBody &) = default ;
    CreateSliderCaptchaPageResponseBody(CreateSliderCaptchaPageResponseBody &&) = default ;
    CreateSliderCaptchaPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSliderCaptchaPageResponseBody() = default ;
    CreateSliderCaptchaPageResponseBody& operator=(const CreateSliderCaptchaPageResponseBody &) = default ;
    CreateSliderCaptchaPageResponseBody& operator=(CreateSliderCaptchaPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->requestId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateSliderCaptchaPageResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSliderCaptchaPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the slider CAPTCHA page.
    shared_ptr<int64_t> id_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
