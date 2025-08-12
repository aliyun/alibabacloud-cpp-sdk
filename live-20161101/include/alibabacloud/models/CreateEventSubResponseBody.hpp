// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSUBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSUBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateEventSubResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventSubResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubscribeId, subscribeId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventSubResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubscribeId, subscribeId_);
    };
    CreateEventSubResponseBody() = default ;
    CreateEventSubResponseBody(const CreateEventSubResponseBody &) = default ;
    CreateEventSubResponseBody(CreateEventSubResponseBody &&) = default ;
    CreateEventSubResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventSubResponseBody() = default ;
    CreateEventSubResponseBody& operator=(const CreateEventSubResponseBody &) = default ;
    CreateEventSubResponseBody& operator=(CreateEventSubResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->subscribeId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateEventSubResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subscribeId Field Functions 
    bool hasSubscribeId() const { return this->subscribeId_ != nullptr;};
    void deleteSubscribeId() { this->subscribeId_ = nullptr;};
    inline string subscribeId() const { DARABONBA_PTR_GET_DEFAULT(subscribeId_, "") };
    inline CreateEventSubResponseBody& setSubscribeId(string subscribeId) { DARABONBA_PTR_SET_VALUE(subscribeId_, subscribeId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The subscription ID.
    std::shared_ptr<string> subscribeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
