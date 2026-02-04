// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDCDNKVRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDCDNKVRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class GetDcdnKvResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDcdnKvResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetDcdnKvResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetDcdnKvResponseBody() = default ;
    GetDcdnKvResponseBody(const GetDcdnKvResponseBody &) = default ;
    GetDcdnKvResponseBody(GetDcdnKvResponseBody &&) = default ;
    GetDcdnKvResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDcdnKvResponseBody() = default ;
    GetDcdnKvResponseBody& operator=(const GetDcdnKvResponseBody &) = default ;
    GetDcdnKvResponseBody& operator=(GetDcdnKvResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->value_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDcdnKvResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetDcdnKvResponseBody& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The value of the key.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
