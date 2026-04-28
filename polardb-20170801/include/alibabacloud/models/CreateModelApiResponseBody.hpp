// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELAPIRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELAPIRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateModelApiResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelApiResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InvokeEndpoint, invokeEndpoint_);
      DARABONBA_PTR_TO_JSON(ModelApiId, modelApiId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelApiResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InvokeEndpoint, invokeEndpoint_);
      DARABONBA_PTR_FROM_JSON(ModelApiId, modelApiId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateModelApiResponseBody() = default ;
    CreateModelApiResponseBody(const CreateModelApiResponseBody &) = default ;
    CreateModelApiResponseBody(CreateModelApiResponseBody &&) = default ;
    CreateModelApiResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelApiResponseBody() = default ;
    CreateModelApiResponseBody& operator=(const CreateModelApiResponseBody &) = default ;
    CreateModelApiResponseBody& operator=(CreateModelApiResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->invokeEndpoint_ == nullptr
        && this->modelApiId_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // invokeEndpoint Field Functions 
    bool hasInvokeEndpoint() const { return this->invokeEndpoint_ != nullptr;};
    void deleteInvokeEndpoint() { this->invokeEndpoint_ = nullptr;};
    inline string getInvokeEndpoint() const { DARABONBA_PTR_GET_DEFAULT(invokeEndpoint_, "") };
    inline CreateModelApiResponseBody& setInvokeEndpoint(string invokeEndpoint) { DARABONBA_PTR_SET_VALUE(invokeEndpoint_, invokeEndpoint) };


    // modelApiId Field Functions 
    bool hasModelApiId() const { return this->modelApiId_ != nullptr;};
    void deleteModelApiId() { this->modelApiId_ = nullptr;};
    inline string getModelApiId() const { DARABONBA_PTR_GET_DEFAULT(modelApiId_, "") };
    inline CreateModelApiResponseBody& setModelApiId(string modelApiId) { DARABONBA_PTR_SET_VALUE(modelApiId_, modelApiId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateModelApiResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateModelApiResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> invokeEndpoint_ {};
    shared_ptr<string> modelApiId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
