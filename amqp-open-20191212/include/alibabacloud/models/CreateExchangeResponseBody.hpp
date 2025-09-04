// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXCHANGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXCHANGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class CreateExchangeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExchangeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExchangeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateExchangeResponseBody() = default ;
    CreateExchangeResponseBody(const CreateExchangeResponseBody &) = default ;
    CreateExchangeResponseBody(CreateExchangeResponseBody &&) = default ;
    CreateExchangeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExchangeResponseBody() = default ;
    CreateExchangeResponseBody& operator=(const CreateExchangeResponseBody &) = default ;
    CreateExchangeResponseBody& operator=(CreateExchangeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateExchangeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
