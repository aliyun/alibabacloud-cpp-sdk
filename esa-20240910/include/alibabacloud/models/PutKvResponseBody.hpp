// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTKVRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUTKVRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class PutKvResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutKvResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, PutKvResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    PutKvResponseBody() = default ;
    PutKvResponseBody(const PutKvResponseBody &) = default ;
    PutKvResponseBody(PutKvResponseBody &&) = default ;
    PutKvResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutKvResponseBody() = default ;
    PutKvResponseBody& operator=(const PutKvResponseBody &) = default ;
    PutKvResponseBody& operator=(PutKvResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->length_ != nullptr
        && this->requestId_ != nullptr && this->value_ != nullptr; };
    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline string length() const { DARABONBA_PTR_GET_DEFAULT(length_, "") };
    inline PutKvResponseBody& setLength(string length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PutKvResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline PutKvResponseBody& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The length of the value in the key-value pair.
    std::shared_ptr<string> length_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The content of the key. If the content has more than 256 characters in length, the system displays the first 100 and the last 100 characters, and omits the middle part.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
