// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEYOUHUIFORORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEYOUHUIFORORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateYouhuiForOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateYouhuiForOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(YouhuiId, youhuiId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateYouhuiForOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(YouhuiId, youhuiId_);
    };
    CreateYouhuiForOrderResponseBody() = default ;
    CreateYouhuiForOrderResponseBody(const CreateYouhuiForOrderResponseBody &) = default ;
    CreateYouhuiForOrderResponseBody(CreateYouhuiForOrderResponseBody &&) = default ;
    CreateYouhuiForOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateYouhuiForOrderResponseBody() = default ;
    CreateYouhuiForOrderResponseBody& operator=(const CreateYouhuiForOrderResponseBody &) = default ;
    CreateYouhuiForOrderResponseBody& operator=(CreateYouhuiForOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && this->requestId_ == nullptr && this->youhuiId_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateYouhuiForOrderResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateYouhuiForOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // youhuiId Field Functions 
    bool hasYouhuiId() const { return this->youhuiId_ != nullptr;};
    void deleteYouhuiId() { this->youhuiId_ = nullptr;};
    inline string getYouhuiId() const { DARABONBA_PTR_GET_DEFAULT(youhuiId_, "") };
    inline CreateYouhuiForOrderResponseBody& setYouhuiId(string youhuiId) { DARABONBA_PTR_SET_VALUE(youhuiId_, youhuiId) };


  protected:
    // The response parameters.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The coupon ID.
    shared_ptr<string> youhuiId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
