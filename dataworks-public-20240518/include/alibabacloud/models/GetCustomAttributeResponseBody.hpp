// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CustomAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetCustomAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomAttribute, customAttribute_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomAttribute, customAttribute_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCustomAttributeResponseBody() = default ;
    GetCustomAttributeResponseBody(const GetCustomAttributeResponseBody &) = default ;
    GetCustomAttributeResponseBody(GetCustomAttributeResponseBody &&) = default ;
    GetCustomAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomAttributeResponseBody() = default ;
    GetCustomAttributeResponseBody& operator=(const GetCustomAttributeResponseBody &) = default ;
    GetCustomAttributeResponseBody& operator=(GetCustomAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customAttribute_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // customAttribute Field Functions 
    bool hasCustomAttribute() const { return this->customAttribute_ != nullptr;};
    void deleteCustomAttribute() { this->customAttribute_ = nullptr;};
    inline const CustomAttribute & getCustomAttribute() const { DARABONBA_PTR_GET_CONST(customAttribute_, CustomAttribute) };
    inline CustomAttribute getCustomAttribute() { DARABONBA_PTR_GET(customAttribute_, CustomAttribute) };
    inline GetCustomAttributeResponseBody& setCustomAttribute(const CustomAttribute & customAttribute) { DARABONBA_PTR_SET_VALUE(customAttribute_, customAttribute) };
    inline GetCustomAttributeResponseBody& setCustomAttribute(CustomAttribute && customAttribute) { DARABONBA_PTR_SET_RVALUE(customAttribute_, customAttribute) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCustomAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCustomAttributeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<CustomAttribute> customAttribute_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
