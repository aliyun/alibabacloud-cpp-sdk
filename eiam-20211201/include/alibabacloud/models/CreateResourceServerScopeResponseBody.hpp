// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCESERVERSCOPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCESERVERSCOPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateResourceServerScopeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceServerScopeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceServerScopeId, resourceServerScopeId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceServerScopeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceServerScopeId, resourceServerScopeId_);
    };
    CreateResourceServerScopeResponseBody() = default ;
    CreateResourceServerScopeResponseBody(const CreateResourceServerScopeResponseBody &) = default ;
    CreateResourceServerScopeResponseBody(CreateResourceServerScopeResponseBody &&) = default ;
    CreateResourceServerScopeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceServerScopeResponseBody() = default ;
    CreateResourceServerScopeResponseBody& operator=(const CreateResourceServerScopeResponseBody &) = default ;
    CreateResourceServerScopeResponseBody& operator=(CreateResourceServerScopeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceServerScopeId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateResourceServerScopeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceServerScopeId Field Functions 
    bool hasResourceServerScopeId() const { return this->resourceServerScopeId_ != nullptr;};
    void deleteResourceServerScopeId() { this->resourceServerScopeId_ = nullptr;};
    inline string getResourceServerScopeId() const { DARABONBA_PTR_GET_DEFAULT(resourceServerScopeId_, "") };
    inline CreateResourceServerScopeResponseBody& setResourceServerScopeId(string resourceServerScopeId) { DARABONBA_PTR_SET_VALUE(resourceServerScopeId_, resourceServerScopeId) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resourceServerScopeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
