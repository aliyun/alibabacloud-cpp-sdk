// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEOBSERVABILITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEOBSERVABILITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateServiceObservabilityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceObservabilityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceObservabilityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateServiceObservabilityResponseBody() = default ;
    CreateServiceObservabilityResponseBody(const CreateServiceObservabilityResponseBody &) = default ;
    CreateServiceObservabilityResponseBody(CreateServiceObservabilityResponseBody &&) = default ;
    CreateServiceObservabilityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceObservabilityResponseBody() = default ;
    CreateServiceObservabilityResponseBody& operator=(const CreateServiceObservabilityResponseBody &) = default ;
    CreateServiceObservabilityResponseBody& operator=(CreateServiceObservabilityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateServiceObservabilityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
