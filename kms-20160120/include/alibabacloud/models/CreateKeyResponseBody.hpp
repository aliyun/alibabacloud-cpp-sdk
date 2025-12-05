// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateKeyResponseBodyKeyMetadata.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CreateKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KeyMetadata, keyMetadata_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyMetadata, keyMetadata_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateKeyResponseBody() = default ;
    CreateKeyResponseBody(const CreateKeyResponseBody &) = default ;
    CreateKeyResponseBody(CreateKeyResponseBody &&) = default ;
    CreateKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKeyResponseBody() = default ;
    CreateKeyResponseBody& operator=(const CreateKeyResponseBody &) = default ;
    CreateKeyResponseBody& operator=(CreateKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyMetadata_ == nullptr
        && return this->requestId_ == nullptr; };
    // keyMetadata Field Functions 
    bool hasKeyMetadata() const { return this->keyMetadata_ != nullptr;};
    void deleteKeyMetadata() { this->keyMetadata_ = nullptr;};
    inline const CreateKeyResponseBodyKeyMetadata & keyMetadata() const { DARABONBA_PTR_GET_CONST(keyMetadata_, CreateKeyResponseBodyKeyMetadata) };
    inline CreateKeyResponseBodyKeyMetadata keyMetadata() { DARABONBA_PTR_GET(keyMetadata_, CreateKeyResponseBodyKeyMetadata) };
    inline CreateKeyResponseBody& setKeyMetadata(const CreateKeyResponseBodyKeyMetadata & keyMetadata) { DARABONBA_PTR_SET_VALUE(keyMetadata_, keyMetadata) };
    inline CreateKeyResponseBody& setKeyMetadata(CreateKeyResponseBodyKeyMetadata && keyMetadata) { DARABONBA_PTR_SET_RVALUE(keyMetadata_, keyMetadata) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The metadata of the key.
    std::shared_ptr<CreateKeyResponseBodyKeyMetadata> keyMetadata_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
