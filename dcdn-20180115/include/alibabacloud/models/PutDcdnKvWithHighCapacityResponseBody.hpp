// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTDCDNKVWITHHIGHCAPACITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUTDCDNKVWITHHIGHCAPACITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class PutDcdnKvWithHighCapacityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutDcdnKvWithHighCapacityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, PutDcdnKvWithHighCapacityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    PutDcdnKvWithHighCapacityResponseBody() = default ;
    PutDcdnKvWithHighCapacityResponseBody(const PutDcdnKvWithHighCapacityResponseBody &) = default ;
    PutDcdnKvWithHighCapacityResponseBody(PutDcdnKvWithHighCapacityResponseBody &&) = default ;
    PutDcdnKvWithHighCapacityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutDcdnKvWithHighCapacityResponseBody() = default ;
    PutDcdnKvWithHighCapacityResponseBody& operator=(const PutDcdnKvWithHighCapacityResponseBody &) = default ;
    PutDcdnKvWithHighCapacityResponseBody& operator=(PutDcdnKvWithHighCapacityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->length_ != nullptr
        && this->requestId_ != nullptr && this->value_ != nullptr; };
    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int32_t length() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
    inline PutDcdnKvWithHighCapacityResponseBody& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PutDcdnKvWithHighCapacityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline PutDcdnKvWithHighCapacityResponseBody& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<int32_t> length_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
