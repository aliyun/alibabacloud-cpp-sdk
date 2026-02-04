// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTDCDNKVRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUTDCDNKVRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class PutDcdnKvResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutDcdnKvResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, PutDcdnKvResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    PutDcdnKvResponseBody() = default ;
    PutDcdnKvResponseBody(const PutDcdnKvResponseBody &) = default ;
    PutDcdnKvResponseBody(PutDcdnKvResponseBody &&) = default ;
    PutDcdnKvResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutDcdnKvResponseBody() = default ;
    PutDcdnKvResponseBody& operator=(const PutDcdnKvResponseBody &) = default ;
    PutDcdnKvResponseBody& operator=(PutDcdnKvResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->length_ == nullptr
        && this->requestId_ == nullptr && this->value_ == nullptr; };
    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int32_t getLength() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
    inline PutDcdnKvResponseBody& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PutDcdnKvResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline PutDcdnKvResponseBody& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The length of the key.
    shared_ptr<int32_t> length_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The value of the key. If the value exceeds 256 characters in length, the first 100 characters and the last 100 characters are retained and other characters are not displayed.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
