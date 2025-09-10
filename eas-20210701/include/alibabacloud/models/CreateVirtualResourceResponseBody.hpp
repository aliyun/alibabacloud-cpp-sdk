// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIRTUALRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIRTUALRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateVirtualResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVirtualResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VirtualResourceId, virtualResourceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVirtualResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VirtualResourceId, virtualResourceId_);
    };
    CreateVirtualResourceResponseBody() = default ;
    CreateVirtualResourceResponseBody(const CreateVirtualResourceResponseBody &) = default ;
    CreateVirtualResourceResponseBody(CreateVirtualResourceResponseBody &&) = default ;
    CreateVirtualResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVirtualResourceResponseBody() = default ;
    CreateVirtualResourceResponseBody& operator=(const CreateVirtualResourceResponseBody &) = default ;
    CreateVirtualResourceResponseBody& operator=(CreateVirtualResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->requestId_ != nullptr && this->virtualResourceId_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateVirtualResourceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVirtualResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // virtualResourceId Field Functions 
    bool hasVirtualResourceId() const { return this->virtualResourceId_ != nullptr;};
    void deleteVirtualResourceId() { this->virtualResourceId_ = nullptr;};
    inline string virtualResourceId() const { DARABONBA_PTR_GET_DEFAULT(virtualResourceId_, "") };
    inline CreateVirtualResourceResponseBody& setVirtualResourceId(string virtualResourceId) { DARABONBA_PTR_SET_VALUE(virtualResourceId_, virtualResourceId) };


  protected:
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the virtual resource group.
    std::shared_ptr<string> virtualResourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
