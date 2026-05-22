// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTKVWITHHIGHCAPACITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUTKVWITHHIGHCAPACITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class PutKvWithHighCapacityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutKvWithHighCapacityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, PutKvWithHighCapacityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    PutKvWithHighCapacityResponseBody() = default ;
    PutKvWithHighCapacityResponseBody(const PutKvWithHighCapacityResponseBody &) = default ;
    PutKvWithHighCapacityResponseBody(PutKvWithHighCapacityResponseBody &&) = default ;
    PutKvWithHighCapacityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutKvWithHighCapacityResponseBody() = default ;
    PutKvWithHighCapacityResponseBody& operator=(const PutKvWithHighCapacityResponseBody &) = default ;
    PutKvWithHighCapacityResponseBody& operator=(PutKvWithHighCapacityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->length_ == nullptr
        && this->requestId_ == nullptr && this->value_ == nullptr; };
    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline string getLength() const { DARABONBA_PTR_GET_DEFAULT(length_, "") };
    inline PutKvWithHighCapacityResponseBody& setLength(string length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PutKvWithHighCapacityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline PutKvWithHighCapacityResponseBody& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The length of the value in the key-value pair.
    shared_ptr<string> length_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The content of the key. If the content has more than 256 characters in length, the system displays the first 100 and the last 100 characters, and omits the middle part.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
