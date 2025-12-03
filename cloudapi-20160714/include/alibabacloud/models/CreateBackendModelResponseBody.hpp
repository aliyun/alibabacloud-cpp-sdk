// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKENDMODELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKENDMODELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateBackendModelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBackendModelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackendModelId, backendModelId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBackendModelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendModelId, backendModelId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateBackendModelResponseBody() = default ;
    CreateBackendModelResponseBody(const CreateBackendModelResponseBody &) = default ;
    CreateBackendModelResponseBody(CreateBackendModelResponseBody &&) = default ;
    CreateBackendModelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBackendModelResponseBody() = default ;
    CreateBackendModelResponseBody& operator=(const CreateBackendModelResponseBody &) = default ;
    CreateBackendModelResponseBody& operator=(CreateBackendModelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendModelId_ == nullptr
        && return this->requestId_ == nullptr; };
    // backendModelId Field Functions 
    bool hasBackendModelId() const { return this->backendModelId_ != nullptr;};
    void deleteBackendModelId() { this->backendModelId_ = nullptr;};
    inline string backendModelId() const { DARABONBA_PTR_GET_DEFAULT(backendModelId_, "") };
    inline CreateBackendModelResponseBody& setBackendModelId(string backendModelId) { DARABONBA_PTR_SET_VALUE(backendModelId_, backendModelId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateBackendModelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> backendModelId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
