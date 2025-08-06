// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBTAINAPPLICATIONCLIENTSECRETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OBTAINAPPLICATIONCLIENTSECRETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ObtainApplicationClientSecretResponseBodyApplicationClientSecret.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ObtainApplicationClientSecretResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObtainApplicationClientSecretResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationClientSecret, applicationClientSecret_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ObtainApplicationClientSecretResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationClientSecret, applicationClientSecret_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ObtainApplicationClientSecretResponseBody() = default ;
    ObtainApplicationClientSecretResponseBody(const ObtainApplicationClientSecretResponseBody &) = default ;
    ObtainApplicationClientSecretResponseBody(ObtainApplicationClientSecretResponseBody &&) = default ;
    ObtainApplicationClientSecretResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObtainApplicationClientSecretResponseBody() = default ;
    ObtainApplicationClientSecretResponseBody& operator=(const ObtainApplicationClientSecretResponseBody &) = default ;
    ObtainApplicationClientSecretResponseBody& operator=(ObtainApplicationClientSecretResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationClientSecret_ != nullptr
        && this->requestId_ != nullptr; };
    // applicationClientSecret Field Functions 
    bool hasApplicationClientSecret() const { return this->applicationClientSecret_ != nullptr;};
    void deleteApplicationClientSecret() { this->applicationClientSecret_ = nullptr;};
    inline const ObtainApplicationClientSecretResponseBodyApplicationClientSecret & applicationClientSecret() const { DARABONBA_PTR_GET_CONST(applicationClientSecret_, ObtainApplicationClientSecretResponseBodyApplicationClientSecret) };
    inline ObtainApplicationClientSecretResponseBodyApplicationClientSecret applicationClientSecret() { DARABONBA_PTR_GET(applicationClientSecret_, ObtainApplicationClientSecretResponseBodyApplicationClientSecret) };
    inline ObtainApplicationClientSecretResponseBody& setApplicationClientSecret(const ObtainApplicationClientSecretResponseBodyApplicationClientSecret & applicationClientSecret) { DARABONBA_PTR_SET_VALUE(applicationClientSecret_, applicationClientSecret) };
    inline ObtainApplicationClientSecretResponseBody& setApplicationClientSecret(ObtainApplicationClientSecretResponseBodyApplicationClientSecret && applicationClientSecret) { DARABONBA_PTR_SET_RVALUE(applicationClientSecret_, applicationClientSecret) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ObtainApplicationClientSecretResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the client key.
    std::shared_ptr<ObtainApplicationClientSecretResponseBodyApplicationClientSecret> applicationClientSecret_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
