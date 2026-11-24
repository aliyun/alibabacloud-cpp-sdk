// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECRETVALUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESECRETVALUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateSecretValueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecretValueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(secretId, secretId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecretValueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(secretId, secretId_);
    };
    CreateSecretValueResponseBody() = default ;
    CreateSecretValueResponseBody(const CreateSecretValueResponseBody &) = default ;
    CreateSecretValueResponseBody(CreateSecretValueResponseBody &&) = default ;
    CreateSecretValueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecretValueResponseBody() = default ;
    CreateSecretValueResponseBody& operator=(const CreateSecretValueResponseBody &) = default ;
    CreateSecretValueResponseBody& operator=(CreateSecretValueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->secretId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSecretValueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretId Field Functions 
    bool hasSecretId() const { return this->secretId_ != nullptr;};
    void deleteSecretId() { this->secretId_ = nullptr;};
    inline string getSecretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
    inline CreateSecretValueResponseBody& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The ciphertext ID.
    shared_ptr<string> secretId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
