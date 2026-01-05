// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIMITATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIMITATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeLimitationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLimitationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Limitation, limitation_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLimitationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Limitation, limitation_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeLimitationResponseBody() = default ;
    DescribeLimitationResponseBody(const DescribeLimitationResponseBody &) = default ;
    DescribeLimitationResponseBody(DescribeLimitationResponseBody &&) = default ;
    DescribeLimitationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLimitationResponseBody() = default ;
    DescribeLimitationResponseBody& operator=(const DescribeLimitationResponseBody &) = default ;
    DescribeLimitationResponseBody& operator=(DescribeLimitationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->limitation_ == nullptr
        && this->requestId_ == nullptr && this->value_ == nullptr; };
    // limitation Field Functions 
    bool hasLimitation() const { return this->limitation_ != nullptr;};
    void deleteLimitation() { this->limitation_ = nullptr;};
    inline string getLimitation() const { DARABONBA_PTR_GET_DEFAULT(limitation_, "") };
    inline DescribeLimitationResponseBody& setLimitation(string limitation) { DARABONBA_PTR_SET_VALUE(limitation_, limitation) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLimitationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeLimitationResponseBody& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    shared_ptr<string> limitation_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
