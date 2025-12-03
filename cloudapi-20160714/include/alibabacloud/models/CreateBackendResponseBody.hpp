// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateBackendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBackendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackendId, backendId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBackendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendId, backendId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateBackendResponseBody() = default ;
    CreateBackendResponseBody(const CreateBackendResponseBody &) = default ;
    CreateBackendResponseBody(CreateBackendResponseBody &&) = default ;
    CreateBackendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBackendResponseBody() = default ;
    CreateBackendResponseBody& operator=(const CreateBackendResponseBody &) = default ;
    CreateBackendResponseBody& operator=(CreateBackendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendId_ == nullptr
        && return this->requestId_ == nullptr; };
    // backendId Field Functions 
    bool hasBackendId() const { return this->backendId_ != nullptr;};
    void deleteBackendId() { this->backendId_ = nullptr;};
    inline string backendId() const { DARABONBA_PTR_GET_DEFAULT(backendId_, "") };
    inline CreateBackendResponseBody& setBackendId(string backendId) { DARABONBA_PTR_SET_VALUE(backendId_, backendId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateBackendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the backend service.
    std::shared_ptr<string> backendId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
