// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCESSKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCESSKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAccessKeyResponseBodyAccessKey.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class CreateAccessKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccessKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccessKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAccessKeyResponseBody() = default ;
    CreateAccessKeyResponseBody(const CreateAccessKeyResponseBody &) = default ;
    CreateAccessKeyResponseBody(CreateAccessKeyResponseBody &&) = default ;
    CreateAccessKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccessKeyResponseBody() = default ;
    CreateAccessKeyResponseBody& operator=(const CreateAccessKeyResponseBody &) = default ;
    CreateAccessKeyResponseBody& operator=(CreateAccessKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKey_ != nullptr
        && this->requestId_ != nullptr; };
    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline const CreateAccessKeyResponseBodyAccessKey & accessKey() const { DARABONBA_PTR_GET_CONST(accessKey_, CreateAccessKeyResponseBodyAccessKey) };
    inline CreateAccessKeyResponseBodyAccessKey accessKey() { DARABONBA_PTR_GET(accessKey_, CreateAccessKeyResponseBodyAccessKey) };
    inline CreateAccessKeyResponseBody& setAccessKey(const CreateAccessKeyResponseBodyAccessKey & accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };
    inline CreateAccessKeyResponseBody& setAccessKey(CreateAccessKeyResponseBodyAccessKey && accessKey) { DARABONBA_PTR_SET_RVALUE(accessKey_, accessKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAccessKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the AccessKey pair.
    std::shared_ptr<CreateAccessKeyResponseBodyAccessKey> accessKey_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
