// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRUSTEDORIGINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETRUSTEDORIGINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateTrustedOriginResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrustedOriginResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrustedOriginId, trustedOriginId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrustedOriginResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrustedOriginId, trustedOriginId_);
    };
    CreateTrustedOriginResponseBody() = default ;
    CreateTrustedOriginResponseBody(const CreateTrustedOriginResponseBody &) = default ;
    CreateTrustedOriginResponseBody(CreateTrustedOriginResponseBody &&) = default ;
    CreateTrustedOriginResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrustedOriginResponseBody() = default ;
    CreateTrustedOriginResponseBody& operator=(const CreateTrustedOriginResponseBody &) = default ;
    CreateTrustedOriginResponseBody& operator=(CreateTrustedOriginResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->trustedOriginId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTrustedOriginResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trustedOriginId Field Functions 
    bool hasTrustedOriginId() const { return this->trustedOriginId_ != nullptr;};
    void deleteTrustedOriginId() { this->trustedOriginId_ = nullptr;};
    inline string getTrustedOriginId() const { DARABONBA_PTR_GET_DEFAULT(trustedOriginId_, "") };
    inline CreateTrustedOriginResponseBody& setTrustedOriginId(string trustedOriginId) { DARABONBA_PTR_SET_VALUE(trustedOriginId_, trustedOriginId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The trusted origin ID.
    shared_ptr<string> trustedOriginId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
