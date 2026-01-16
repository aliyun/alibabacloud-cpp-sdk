// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERSUPPRESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERSUPPRESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class CreateUserSuppressionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserSuppressionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuppressionId, suppressionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserSuppressionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuppressionId, suppressionId_);
    };
    CreateUserSuppressionResponseBody() = default ;
    CreateUserSuppressionResponseBody(const CreateUserSuppressionResponseBody &) = default ;
    CreateUserSuppressionResponseBody(CreateUserSuppressionResponseBody &&) = default ;
    CreateUserSuppressionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserSuppressionResponseBody() = default ;
    CreateUserSuppressionResponseBody& operator=(const CreateUserSuppressionResponseBody &) = default ;
    CreateUserSuppressionResponseBody& operator=(CreateUserSuppressionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->suppressionId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateUserSuppressionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // suppressionId Field Functions 
    bool hasSuppressionId() const { return this->suppressionId_ != nullptr;};
    void deleteSuppressionId() { this->suppressionId_ = nullptr;};
    inline string getSuppressionId() const { DARABONBA_PTR_GET_DEFAULT(suppressionId_, "") };
    inline CreateUserSuppressionResponseBody& setSuppressionId(string suppressionId) { DARABONBA_PTR_SET_VALUE(suppressionId_, suppressionId) };


  protected:
    // Request ID
    shared_ptr<string> requestId_ {};
    // Invalid address number
    shared_ptr<string> suppressionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
