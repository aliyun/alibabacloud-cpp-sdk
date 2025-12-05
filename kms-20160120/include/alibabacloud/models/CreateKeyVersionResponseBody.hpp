// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKEYVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEKEYVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateKeyVersionResponseBodyKeyVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CreateKeyVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKeyVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KeyVersion, keyVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKeyVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyVersion, keyVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateKeyVersionResponseBody() = default ;
    CreateKeyVersionResponseBody(const CreateKeyVersionResponseBody &) = default ;
    CreateKeyVersionResponseBody(CreateKeyVersionResponseBody &&) = default ;
    CreateKeyVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKeyVersionResponseBody() = default ;
    CreateKeyVersionResponseBody& operator=(const CreateKeyVersionResponseBody &) = default ;
    CreateKeyVersionResponseBody& operator=(CreateKeyVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyVersion_ == nullptr
        && return this->requestId_ == nullptr; };
    // keyVersion Field Functions 
    bool hasKeyVersion() const { return this->keyVersion_ != nullptr;};
    void deleteKeyVersion() { this->keyVersion_ = nullptr;};
    inline const CreateKeyVersionResponseBodyKeyVersion & keyVersion() const { DARABONBA_PTR_GET_CONST(keyVersion_, CreateKeyVersionResponseBodyKeyVersion) };
    inline CreateKeyVersionResponseBodyKeyVersion keyVersion() { DARABONBA_PTR_GET(keyVersion_, CreateKeyVersionResponseBodyKeyVersion) };
    inline CreateKeyVersionResponseBody& setKeyVersion(const CreateKeyVersionResponseBodyKeyVersion & keyVersion) { DARABONBA_PTR_SET_VALUE(keyVersion_, keyVersion) };
    inline CreateKeyVersionResponseBody& setKeyVersion(CreateKeyVersionResponseBodyKeyVersion && keyVersion) { DARABONBA_PTR_SET_RVALUE(keyVersion_, keyVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateKeyVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The metadata of the version.
    std::shared_ptr<CreateKeyVersionResponseBodyKeyVersion> keyVersion_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
