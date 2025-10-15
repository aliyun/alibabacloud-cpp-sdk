// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONCLIENTSECRETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONCLIENTSECRETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateApplicationClientSecretResponseBodyApplicationClientSecret.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateApplicationClientSecretResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationClientSecretResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationClientSecret, applicationClientSecret_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationClientSecretResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationClientSecret, applicationClientSecret_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateApplicationClientSecretResponseBody() = default ;
    CreateApplicationClientSecretResponseBody(const CreateApplicationClientSecretResponseBody &) = default ;
    CreateApplicationClientSecretResponseBody(CreateApplicationClientSecretResponseBody &&) = default ;
    CreateApplicationClientSecretResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationClientSecretResponseBody() = default ;
    CreateApplicationClientSecretResponseBody& operator=(const CreateApplicationClientSecretResponseBody &) = default ;
    CreateApplicationClientSecretResponseBody& operator=(CreateApplicationClientSecretResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationClientSecret_ == nullptr
        && return this->requestId_ == nullptr; };
    // applicationClientSecret Field Functions 
    bool hasApplicationClientSecret() const { return this->applicationClientSecret_ != nullptr;};
    void deleteApplicationClientSecret() { this->applicationClientSecret_ = nullptr;};
    inline const CreateApplicationClientSecretResponseBodyApplicationClientSecret & applicationClientSecret() const { DARABONBA_PTR_GET_CONST(applicationClientSecret_, CreateApplicationClientSecretResponseBodyApplicationClientSecret) };
    inline CreateApplicationClientSecretResponseBodyApplicationClientSecret applicationClientSecret() { DARABONBA_PTR_GET(applicationClientSecret_, CreateApplicationClientSecretResponseBodyApplicationClientSecret) };
    inline CreateApplicationClientSecretResponseBody& setApplicationClientSecret(const CreateApplicationClientSecretResponseBodyApplicationClientSecret & applicationClientSecret) { DARABONBA_PTR_SET_VALUE(applicationClientSecret_, applicationClientSecret) };
    inline CreateApplicationClientSecretResponseBody& setApplicationClientSecret(CreateApplicationClientSecretResponseBodyApplicationClientSecret && applicationClientSecret) { DARABONBA_PTR_SET_RVALUE(applicationClientSecret_, applicationClientSecret) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateApplicationClientSecretResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the client key.
    std::shared_ptr<CreateApplicationClientSecretResponseBodyApplicationClientSecret> applicationClientSecret_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
