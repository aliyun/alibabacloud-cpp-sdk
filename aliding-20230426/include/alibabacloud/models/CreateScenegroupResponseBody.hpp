// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCENEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESCENEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateScenegroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScenegroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(openConversationId, openConversationId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScenegroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(openConversationId, openConversationId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateScenegroupResponseBody() = default ;
    CreateScenegroupResponseBody(const CreateScenegroupResponseBody &) = default ;
    CreateScenegroupResponseBody(CreateScenegroupResponseBody &&) = default ;
    CreateScenegroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScenegroupResponseBody() = default ;
    CreateScenegroupResponseBody& operator=(const CreateScenegroupResponseBody &) = default ;
    CreateScenegroupResponseBody& operator=(CreateScenegroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->openConversationId_ != nullptr
        && this->requestId_ != nullptr; };
    // openConversationId Field Functions 
    bool hasOpenConversationId() const { return this->openConversationId_ != nullptr;};
    void deleteOpenConversationId() { this->openConversationId_ = nullptr;};
    inline string openConversationId() const { DARABONBA_PTR_GET_DEFAULT(openConversationId_, "") };
    inline CreateScenegroupResponseBody& setOpenConversationId(string openConversationId) { DARABONBA_PTR_SET_VALUE(openConversationId_, openConversationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateScenegroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> openConversationId_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
