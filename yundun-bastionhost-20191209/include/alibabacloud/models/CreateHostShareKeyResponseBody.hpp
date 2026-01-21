// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHOSTSHAREKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEHOSTSHAREKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class CreateHostShareKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHostShareKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HostShareKeyId, hostShareKeyId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHostShareKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HostShareKeyId, hostShareKeyId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateHostShareKeyResponseBody() = default ;
    CreateHostShareKeyResponseBody(const CreateHostShareKeyResponseBody &) = default ;
    CreateHostShareKeyResponseBody(CreateHostShareKeyResponseBody &&) = default ;
    CreateHostShareKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHostShareKeyResponseBody() = default ;
    CreateHostShareKeyResponseBody& operator=(const CreateHostShareKeyResponseBody &) = default ;
    CreateHostShareKeyResponseBody& operator=(CreateHostShareKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostShareKeyId_ == nullptr
        && this->requestId_ == nullptr; };
    // hostShareKeyId Field Functions 
    bool hasHostShareKeyId() const { return this->hostShareKeyId_ != nullptr;};
    void deleteHostShareKeyId() { this->hostShareKeyId_ = nullptr;};
    inline int64_t getHostShareKeyId() const { DARABONBA_PTR_GET_DEFAULT(hostShareKeyId_, 0L) };
    inline CreateHostShareKeyResponseBody& setHostShareKeyId(int64_t hostShareKeyId) { DARABONBA_PTR_SET_VALUE(hostShareKeyId_, hostShareKeyId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateHostShareKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the shared key.
    shared_ptr<int64_t> hostShareKeyId_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
